all: bzip2
CFLAGS += -O0 -m32 -g -gdwarf-2 
CFLAGS +=  -Winline -D_FILE_OFFSET_BITS=64

OBJS= blocksort-pre.o  \
      huffman-pre.o    \
      crctable-pre.o   \
      randtable-pre.o  \
      compress-pre.o   \
      decompress-pre.o \
      bzlib-pre.o      \
	  bzip2-pre.o

.SECONDARY:
%-pre.c :
	gcc -include stdio.h $(CFLAGS) -E -o  $@  $(shell echo "$@" | sed -e "s/-pre//") $(LDFLAGS)
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< $(LDFLAGS)

bzip2: $(OBJS)
	$(CC) $(CFLAGS) -o bzip2 $^ $(LDFLAGS)

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean: 
	rm -f *.o libbz2.a bzip2
