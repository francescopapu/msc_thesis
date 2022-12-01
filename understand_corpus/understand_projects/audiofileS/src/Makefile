all: audiofile

CFLAGS += -O0 -DHAVE_CONFIG_H -I. -Imodules -g -gdwarf-2 -w

LIBOBJ = \
	aes-pre.o \
	af_vfs-pre.o \
	aiff-pre.o \
	aiffwrite-pre.o \
	aupv-pre.o \
	avr-pre.o \
	avrwrite-pre.o \
	byteorder-pre.o \
	compression-pre.o \
	data-pre.o \
	debug-pre.o \
	error-pre.o \
	extended-pre.o \
	format-pre.o \
	g711-pre.o \
	iff-pre.o \
	iffwrite-pre.o \
	instrument-pre.o \
	ircam-pre.o \
	ircamwrite-pre.o \
	loop-pre.o \
	marker-pre.o \
	misc-pre.o \
	modules-pre.o \
	next-pre.o \
	nextwrite-pre.o \
	nist-pre.o \
	nistwrite-pre.o \
	openclose-pre.o \
	pcm-pre.o \
	query-pre.o \
	raw-pre.o \
	setup-pre.o \
	track-pre.o \
	units-pre.o \
	util-pre.o \
	wave-pre.o \
	wavewrite-pre.o \
	modules_adpcm-pre.o \
	modules_g711-pre.o \
	modules_ima-pre.o \
	modules_msadpcm-pre.o \
	modules_pcm-pre.o \
	modules_rebuffer-pre.o \
	printinfo-pre.o \
	sfconvert-pre.o

.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -D'__attribute__(x)=' -include stdio.h -DHAVE_CONFIG_H -I. -I.. -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -fPIC -DPIC -o $@

audiofile: $(LIBOBJ)
	$(CC) $(CFLAGS) -o $@ $(LIBOBJ) -lm

preclean :
	rm -f *-pre.c
	rm -f *-pre.h

clean :
	rm -f audiofile \
	rm -f *.o
