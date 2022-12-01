all: file
top_srcdir = ..
HDR = $(top_srcdir)/src/magic.h.in

CFLAGS += -m32 -g -DHAVE_CONFIG_H -I. -I.. -gdwarf-2

LIBOBJ = \
    apprentice-pre.o \
    apptype-pre.o \
    ascmagic-pre.o \
    asctime_r-pre.o \
    asprintf-pre.o \
    buffer-pre.o \
    cdf-pre.o \
    cdf_time-pre.o \
    compress-pre.o \
    ctime_r-pre.o \
    der-pre.c \
    dprintf-pre.c \
    encoding-pre.o \
    file-pre.o \
    fmtcheck-pre.o \
    fsmagic-pre.o \
    funcs-pre.o \
    getline-pre.o \
    getopt_long-pre.o \
    gmtime_r-pre.c \
    is_json-pre.c \
    is_tar-pre.o \
    localtime_r-pre.c \
    magic-pre.o \
    pread-pre.o \
    print-pre.o \
    readcdf-pre.o \
    readelf-pre.o \
    seccomp-pre.c \
    softmagic-pre.o \
    strcasestr-pre.o \
    strlcat-pre.o \
    strlcpy-pre.o \
    teststrchr-pre.c \
    vasprintf-pre.o


.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -D'__attribute__(x)=' -include stdio.h -DHAVE_CONFIG_H -I. -I.. -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c $<  -fPIC -DPIC -o $@

magic.h : ${HDR}
	sed -e "s/X.YY/$$(echo 5.35 | tr -d .)/" < ${HDR} > $@

file : magic.h $(LIBOBJ)
	 $(CC) -g $(CFLAGS) -o $@ $^ -lz

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f *.o \
	rm -f *.so \
	rm -f *.Tpo \
	rm -f file
