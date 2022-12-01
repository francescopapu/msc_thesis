

all : memdjpeg

OBJ1 = \
	jaricom-pre.o jcapimin-pre.o jcapistd-pre.o jcarith-pre.o jccoefct-pre.o \
	jccolor-pre.o jcdctmgr-pre.o jchuff-pre.o jcinit-pre.o jcmainct-pre.o \
	jcmarker-pre.o jcmaster-pre.o jcomapi-pre.o jcparam-pre.o jcprepct-pre.o \
	jcsample-pre.o 	jctrans-pre.o jdapimin-pre.o jdapistd-pre.o jdarith-pre.o \
	jdatadst-pre.o 	jdatasrc-pre.o jdcoefct-pre.o jdcolor-pre.o jddctmgr-pre.o \
	jdhuff-pre.o jdinput-pre.o 	jdmainct-pre.o jdmarker-pre.o jdmaster-pre.o \
	jdmerge-pre.o jdpostct-pre.o jdsample-pre.o jdtrans-pre.o jerror-pre.o \
	jfdctflt-pre.o jfdctfst-pre.o jfdctint-pre.o jidctflt-pre.o jidctfst-pre.o \
	jidctint-pre.o jquant1-pre.o jquant2-pre.o jutils-pre.o jmemmgr-pre.o \
	jmemnobs-pre.o 


%.o : %.c
	$(CC) $(CFLAGS) -DHAVE_CONFIG_H -I. -fPIC -DPIC -g -O0 -c -o $@ $<


memdjpeg: $(OBJ1) memdjpeg-pre.o
	$(CC) $(CFLAGS) -o memdjpeg memdjpeg-pre.o jaricom-pre.o jcapimin-pre.o jcapistd-pre.o jcarith-pre.o jccoefct-pre.o jccolor-pre.o jcdctmgr-pre.o jchuff-pre.o jcinit-pre.o jcmainct-pre.o jcmarker-pre.o jcmaster-pre.o jcomapi-pre.o jcparam-pre.o jcprepct-pre.o jcsample-pre.o jctrans-pre.o jdapimin-pre.o jdapistd-pre.o jdarith-pre.o jdatadst-pre.o jdatasrc-pre.o jdcoefct-pre.o jdcolor-pre.o jddctmgr-pre.o jdhuff-pre.o jdinput-pre.o jdmainct-pre.o jdmarker-pre.o jdmaster-pre.o jdmerge-pre.o jdpostct-pre.o jdsample-pre.o jdtrans-pre.o jerror-pre.o jfdctflt-pre.o jfdctfst-pre.o jfdctint-pre.o jidctflt-pre.o jidctfst-pre.o jidctint-pre.o jquant1-pre.o jquant2-pre.o jutils-pre.o jmemmgr-pre.o jmemnobs-pre.o 


clean:
	rm -f *.o \
	rm -f memdjpeg
