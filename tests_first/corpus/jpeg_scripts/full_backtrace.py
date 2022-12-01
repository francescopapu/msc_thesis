 #!/usr/bin/env python3

import linecache
import re
import sys
import os

def is_source(mystring):
    if ("pre.c" in mystring):
        return True
    else:
        return False

# This function returns the contents and the line number of the FIRST line that matches the string to search
def search_line(file_name, string_to_search):
    line_number = 0
    counter = 0
    with open(file_name, 'r') as f:
        for line in f:
            counter += 1
            if string_to_search in line:
                line_number = counter
                line_content = line.rstrip()
    return line_content, line_number


def get_all_prepro_info(file_name):
    string_regex = "Program received signal SIGSEGV, Segmentation fault."
    pattern = re.compile(string_regex)

    #prepro_lines = []
    #prepro_line_found = ''

    found_segfault = False

    with open(file_name, 'r') as f:
        for num, line in enumerate(f):
            if re.search(pattern,line):
                found_segfault = True

    if found_segfault == True:

        f = open(file_name, 'r')
        my_line = f.readline()
        i = 0

        #finito = False

        all_line_function = []

        while my_line and i<3:
            backup_regex = "#" + str(i) + " "

            line_found_source = ''
            function_found = ''

            if my_line.startswith(backup_regex):
                line_found = re.sub(r'^.*?\) at ', '', my_line)
                line_found = line_found.rstrip()

                if is_source(line_found):

                    line_found_source = line_found

                    if (r" in " in my_line):
                        start = my_line.find(r" in ") + len(" in ")
                        end = my_line.find(" (")
                        function_found = my_line[start:end]

                    else:
                        start = my_line.find(r"  ") + len("  ")
                        end = my_line.find(" (")
                        function_found = my_line[start:end]

                    line_function_temp = [str(line_found_source), str(function_found)]
                    all_line_function.append(line_function_temp)

                    i+=1

                else:
                    i+=1
            my_line = f.readline()

        f.close()

    return (all_line_function)


backtrace_folder = "backtrace"
full_backtrace_info = "full_backtrace.txt"

## Now we get the list of all BUG_IDs
with open('all_bugs.txt') as f:
    all_bugs = f.read().splitlines()


with open(full_backtrace_info, "w") as outfile:
    for value in all_bugs:
        temp_path = str(os.path.join(backtrace_folder, str(value))) + ".txt"

        all_line_function = get_all_prepro_info(temp_path)


        outfile.write("[ID = " + str(value) + "]\n")
        for element in all_line_function:
            outfile.write(str(element[0]) + " - " + str(element[1]) + "\n")
        outfile.write("\n")






