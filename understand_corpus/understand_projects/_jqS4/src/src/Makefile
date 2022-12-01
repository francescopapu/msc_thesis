all: jq

CFLAGS += -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_DLFCN_H=1 -DHAVE_MEMMEM=1 -DHAVE_MKSTEMP=1 -DHAVE_ALLOCA_H=1 -DHAVE_ALLOCA=1 -DHAVE_ISATTY=1 -DHAVE_STRPTIME=1 -DHAVE_STRFTIME=1 -DHAVE_TIMEGM=1 -DHAVE_GMTIME_R=1 -DHAVE_GMTIME=1 -DHAVE_LOCALTIME_R=1 -DHAVE_LOCALTIME=1 -DHAVE_GETTIMEOFDAY=1  -DHAVE_TM_TM_GMT_OFF=1 -DHAVE_ACOS=1 -DHAVE_ACOSH=1 -DHAVE_ASIN=1 -DHAVE_ASINH=1 -DHAVE_ATAN2=1 -DHAVE_ATAN=1 -DHAVE_ATANH=1 -DHAVE_CBRT=1 -DHAVE_CEIL=1 -DHAVE_COPYSIGN=1 -DHAVE_COS=1 -DHAVE_COSH=1 -DHAVE_DREM=1 -DHAVE_ERF=1 -DHAVE_ERFC=1 -DHAVE_EXP10=1 -DHAVE_EXP2=1 -DHAVE_EXP=1 -DHAVE_EXPM1=1 -DHAVE_FABS=1 -DHAVE_FDIM=1 -DHAVE_FLOOR=1 -DHAVE_FMA=1 -DHAVE_FMAX=1 -DHAVE_FMIN=1 -DHAVE_FMOD=1 -DHAVE_FREXP=1 -DHAVE_GAMMA=1 -DHAVE_HYPOT=1 -DHAVE_J0=1 -DHAVE_J1=1 -DHAVE_JN=1 -DHAVE_LDEXP=1 -DHAVE_LGAMMA=1 -DHAVE_LOG10=1 -DHAVE_LOG1P=1 -DHAVE_LOG2=1 -DHAVE_LOG=1 -DHAVE_LOGB=1 -DHAVE_MODF=1 -DHAVE_LGAMMA_R=1 -DHAVE_NEARBYINT=1 -DHAVE_NEXTAFTER=1 -DHAVE_NEXTTOWARD=1 -DHAVE_POW10=1 -DHAVE_POW=1 -DHAVE_REMAINDER=1 -DHAVE_RINT=1 -DHAVE_ROUND=1 -DHAVE_SCALB=1 -DHAVE_SCALBLN=1 -DHAVE_SIGNIFICAND=1 -DHAVE_SIN=1 -DHAVE_SINH=1 -DHAVE_SQRT=1 -DHAVE_TAN=1 -DHAVE_TANH=1 -DHAVE_TGAMMA=1 -DHAVE_TRUNC=1 -DHAVE_Y0=1 -DHAVE_Y1=1 -DHAVE_YN=1 -DHAVE___THREAD=1 -DIEEE_8087=1 -Wno-missing-field-initializers -Wno-unused-parameter -Wno-unused-function

# PANDA analysis VM has outdated glibc
CFLAGS += -static
CFLAGS += -I. -I.. -g -O0 -m32 -gdwarf-2

LIBOBJ = \
    builtin-pre.o \
    bytecode-pre.o \
    compile-pre.o \
    execute-pre.o \
    jq_test-pre.o \
    jv-pre.o \
    jv_alloc-pre.o \
    jv_aux-pre.o \
    jv_dtoa-pre.o \
    jv_file-pre.o \
    jv_parse-pre.o \
    jv_print-pre.o \
    jv_unicode-pre.o \
    linker-pre.o \
    locfile-pre.o \
    util-pre.o \
    lexer-pre.o \
    parser-pre.o \
    main-pre.o

.SECONDARY:
%-pre.c :
	gcc -include stdio.h $(CFLAGS) -E -o  $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

jq : $(LIBOBJ)
	$(CC) $(CFLAGS) -o jq $^ -lm

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f jq \
	rm -f *.o \
	rm -f *.so \
	rm -f *.Tpo 
