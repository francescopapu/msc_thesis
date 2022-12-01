all: pcre2grep

CFLAGS += -m32 -O0 -g -gdwarf-2

OBJ = \
	auto_possess-pre.o compile-pre.o context-pre.o dfa_match-pre.o extuni-pre.o \
	jit_compile-pre.o match_data-pre.o newline-pre.o pattern_info-pre.o \
	script_run-pre.o string_utils-pre.o substitute-pre.o tables-pre.o \
	valid_utf-pre.o chartables-pre.o config-pre.o convert-pre.o error-pre.o \
	find_bracket-pre.o maketables-pre.o match-pre.o ord2utf-pre.o pcre2posix-pre.o \
	serialize-pre.o study-pre.o substring-pre.o ucd-pre.o xclass-pre.o 

%.o : %.c
	$(CC) $(CFLAGS) -c -fPIC -DPIC -o $@ $<

#$(CC) -fvisibility=hidden -O0 -c -g -fPIC -DPIC -o $@ $<

pcre2grep: $(OBJ) pcre2grep-pre.o
	$(CC) $(CFLAGS) -o pcre2grep $^




clean:
	rm -f *.o \
	rm -f pcre2grep
	rm -f pcre2test
