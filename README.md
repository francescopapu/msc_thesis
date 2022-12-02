This repository contains the scripts created for my Master's thesis. Most of the scripts were slightly modified and reused for the various fuzzing campaigns run.
Files relative to each corpus, fuzzing campaign run, gcov analysis and understand analysis were too big to be included inside this repo so they are hosted on a separate website, which can be found [here](https://figshare.com/collections/msc_thesis/6325145).
For the first test, the zips whose name starts with "first" should be downloaded. For the second and third test, there is a single file which contains everything for that specific test. The understand folder then contains the analysis done for two of the previous corpora.

Each corpus folder contains scripts used to compile a specific corpus and validate the corresponding original solutions. Compilation was mostly done in an Ubuntu 20.04 based Linux distribution, but for some specific cases (i.e. uniq and jqS3) it was necessary to use a Virtual Machine due to specific dependencies, and in general dependency problems were mostly resolved when trying to compile each corpus.
For each test there is a "fuzzing_results" folder, which can be obtained at the previously specified link. It contains the scripts that are descripted below in the appropriately named section.

##  CORPUS SCRIPTS
- "validate" scripts will compile and validate the corpus for a specific fuzzer (compiler). This means there is a script for GCC, AFL-CLANG and AFL-CLANG-FAST compilers, for the general use, the AFL and AFLGO workflows. This creates the backtrace folders using the original solutions, to validate them after compilation.
- "get_targets_rode0day.py" will get us the list of targets from the backtrace folder. Backtrace folder is the one corresponding to GCC.

##  FUZZING RESULTS SCRIPTS
- "solutions_validate.sh" will validate the original solutions for the specific program, creating the "backtrace folder" for the original solutions.
- "results_validate.sh" does the same as the previous script, but for fuzzing results (i.e. fuzzer-found crashing inputs).
- "top_backtrace_rode0.py" python script to get all the info relative to the "most on top source file" present in each backtrace text file of the backtrace folder. Must be modified each time to specify folder.
- "all_full_backtrace_rode0.py" does the same thing but will output information for all the "source files" present in each backtrace text file of the backtrace folder. This is much more complete and will be used to actually find matches in backtrace to highlight a bug found.

##  GCOV ANALYSIS SCRIPTS
- Each "_gcov.sh" script serves the purpose of compiling for coverage for the specific program.
- Each "cov_script.sh" is personalized for the specific program and is the first to be run after compilation. It will generate the coverage data with gcovr for the inputs provided (in the sync_dir folder, there are all the fuzzing inputs generated) and dump it in a csv file. It takes as arguments "fuzzer", "step" and "covfile", which in turn indicate the fuzzer we are taking account of (e.g. AFL or AFLGO), the number of times we should skip running gcovr (e.g. run gcovr every 5 test cases), and the filename of the output csv.
- "convert_csv.sh" converts the result of the previous script into another format. This must be run on each csv to later use the python script for plotting.
- "merge.sh" will merge 2 csv files given as input into one output without repeating the header.
- "plot_coverage.py" will plot the coverage and should be modified accordingly to needs. It only digests "converted" csv(s).
