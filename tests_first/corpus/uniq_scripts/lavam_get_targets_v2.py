 #!/usr/bin/env python3

import linecache
import re
import sys
import os

def is_source(mystring):
    if (("src/" in mystring) or ("lib/" in mystring)) and ".c" in mystring:
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
    

    bug_lines = []

    with open(file_name, 'r') as f:
        for num, line in enumerate(f):
            if re.search(pattern,line):
                bug_line = linecache.getline(file_name,(num+2))
                bug_line = re.sub(r'^.*? at ', '', bug_line)
                bug_line = bug_line.rstrip()

                if is_source(bug_line):
                    bug_line = "coreutils-8.24-lava-safe/" + bug_line
                    bug_lines.append(bug_line)
    
    
    if not is_source(bug_line):
        with open(file_name, 'r') as f: 
            
            not_found = True
            my_line = f.readline()
            i = 1
            
            while my_line and not_found:
                backup_regex = "#" + str(i) + " "
                #print(my_line)
                
                if my_line.startswith(backup_regex):
                    line_found = re.sub(r'^.*? at ', '', my_line)
                    line_found = line_found.rstrip()
                    if is_source(line_found):
                        line_found = "coreutils-8.24-lava-safe/" + line_found
                        bug_lines.append(line_found)
                        not_found = False
                    else:
                        i+=1
                else:
                    my_line = f.readline()
                
    return bug_lines


backtrace_folder = "backtraces"
targets_file = "targets.txt"
all_info_file = "all_info.txt"

# Now we get the list of all BUG_IDs in the backtrace backtrace_folder
# Then convert this list into a sorted list of integers
backtrace_bugs_id = (os.listdir(backtrace_folder))

integer_map = map(int, backtrace_bugs_id)
bugs_id_int = sorted(list(integer_map))
#str_map = map(str, backtrace_bugs_id)
#bugs_id_str = sorted(list(str_map))

# Get paths of all the backtrace files
# os.path.join needs a string

list_bug_info = []

with open(all_info_file, "w") as outfile:
    for value in bugs_id_int:
        temp_path = os.path.join(backtrace_folder, str(value))
        #paths.append((os.path.abspath(temp)))
        
        temp_info = get_bug_info(temp_path)
        
        list_bug_info.extend(temp_info)
        outfile.write("ID: " + str(value) + " - " + str(temp_info))
        outfile.write("\n")
    
with open(targets_file, "w") as outfile_targets:
    outfile_targets.write("\n".join(list_bug_info))

#print(paths)

#questa era la problematica
#print(paths[9])
#with open(paths[9], encoding="mac-roman") as f:
    #print(f.read())

#
#for path in paths:
    #list_bug_info.extend(get_bug_info(path))

#print(list_bug_info)

#print(paths[8])
#print(get_bug_info(paths[8]))



