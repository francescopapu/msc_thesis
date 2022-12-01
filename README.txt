--  CORPUS FOLDERs
-   "validate" scripts will compile and validate the corpus for a specific fuzzer (compiler). This means there is a script for GCC, AFL-CLANG and AFL-CLANG-FAST compilers, for the general use, the AFL and AFLGO workflows. This creates the backtrace folders using the original solutions, to validate them after compilation.
-   "get_targets_rode0day.py" will get us the list of targets from the backtrace folder. Backtrace folder is the one corresponding to GCC.

--  FUZZING FOLDERs
-   "solutions_validate.sh" will validate the original solutions for the specific program, creating the "backtrace folder" for the original solutions.
-   "results_validate.sh" does the same as the previous script, but for fuzzing results (i.e. fuzzer-found crashing inputs).
-   "top_backtrace_rode0.py" python script to get all the info relative to the "most on top source file" present in each backtrace text file of the backtrace folder. Must be modified each time to specify folder.
-   "all_full_backtrace_rode0.py" does the same thing but will output information for all the "source files" present in each backtrace text file of the backtrace folder. This is much more complete and will be used to actually find matches in backtrace to highlight a bug found.

--  GCOV FOLDERs
-   Each "_gcov.sh" script serves the purpose of compiling for coverage for the specific program.
-   Each "cov_script.sh" is personalized for the specific program and is the first to be run after compilation.
    It will generate the coverage data with gcovr for the inputs provided (in the sync_dir folder, there are all the fuzzing inputs generated) and dump it in a csv file.
    It takes as arguments "fuzzer", "step" and "covfile", which in turn indicate the fuzzer we are taking account of (e.g. AFL or AFLGO), the number of times we should skip running gcovr (e.g. run gcovr every 5 test cases), and the filename of the output csv.
-   "convert_csv.sh" converts the result of the previous script into another format. This must be run on each csv to later use the python script for plotting.

-   "merge.sh" will merge 2 csv files given as input into one output without repeating the header.
-   "plot_coverage.py" will plot the coverage and should be modified accordingly to needs. It only digests "converted" csv(s).
