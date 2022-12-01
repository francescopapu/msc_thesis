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

# This function looks for the line where bug information starts
# The line looks like "BUG [number] id=[ID]"
# It does so using a regular expression
# Then it gets the lines which hold the bug information, modifies them and returns
# bug information as a single string. Syntax is according to AFLGo's "BBtargets.txt"

def get_bug_info(file_name):
    string_regex = "Program received signal SIGSEGV, Segmentation fault."
    pattern = re.compile(string_regex)
    
    bug_line = ''
    bug_line_final = ''

    with open(file_name, 'r') as f:
        for num, line in enumerate(f):
            if re.search(pattern,line):
                bug_line = linecache.getline(file_name,(num+2))
                bug_line = re.sub(r"^.*?\) at ",'', bug_line)
                bug_line = bug_line.rstrip()
                    
                    
    if not is_source(bug_line):
        with open(file_name, 'r') as f: 
            
            not_found = True
            my_line = f.readline()
            i = 1
            
            while my_line and not_found:
                backup_regex = "#" + str(i) + " "
                #print(my_line)
                
                if my_line.startswith(backup_regex):
                    line_found = re.sub(r'^.*?\) at ', '', my_line)
                    line_found = line_found.rstrip()
                    if is_source(line_found):
                        bug_line_final = line_found
                        not_found = False
                    else:
                        i+=1
                else:
                    my_line = f.readline()
    else:
        bug_line_final = bug_line
        
    if bug_line_final == '':
        print(file_name + " could not find preprocessed source file backtrace info.")
                
    return bug_line_final


backtrace_folder = "backtrace"
targets_file = "targets.txt"
#id_targets_file = "id_targets.txt"
all_info_file = "all_info.txt"

# Now we get the list of all BUG_IDs
# opening the file in read mode
with open('all_bugs.txt') as f:
    all_bugs = f.read().splitlines()

#integer_map = map(int, all_bugs)
#bugs_id_int = sorted(list(integer_map))
#str_map = map(str, all_bugs)
#bugs_id_str = sorted(list(str_map))

# Get paths of all the backtrace files
# os.path.join needs a string
list_bug_info = []

with open(all_info_file, "w") as outfile:
    for value in all_bugs:
        temp_path = str(os.path.join(backtrace_folder, str(value))) + ".txt"
        #paths.append((os.path.abspath(temp)))
        bug_line = get_bug_info(temp_path)
        if bug_line!='':
            list_bug_info.append(bug_line)

        outfile.write("ID: " + str(value) + " - " + str(bug_line))
        outfile.write("\n")


with open(targets_file, "w") as outfile:
    outfile.write("\n".join(list_bug_info))


