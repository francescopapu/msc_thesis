











typedef unsigned int size_t;



typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
struct _IO_FILE;



typedef struct _IO_FILE FILE;





typedef struct _IO_FILE __FILE;




typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;





extern char *tmpnam_r (char *__s) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) ;





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) ;





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     ;

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     ;

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     ;








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) ;
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf")

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     ;
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")



     ;









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;

extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);



extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;




extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;









typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
typedef __pid_t pid_t;





typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;






static __inline unsigned int
__bswap_32 (int *data_flow, unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (int *data_flow, __uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;







struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     ;






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
 short __elision;



      } __elision_data;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;

    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;




enum
{
 AU_PVTYPE_LONG = 1,
 AU_PVTYPE_DOUBLE = 2,
 AU_PVTYPE_PTR = 3
};

typedef struct _AUpvlist *AUpvlist;



AUpvlist AUpvnew (int *data_flow, int maxItems);
int AUpvgetmaxitems (int *data_flow, AUpvlist);
int AUpvfree (int *data_flow, AUpvlist);
int AUpvsetparam (int *data_flow, AUpvlist, int item, int param);
int AUpvsetvaltype (int *data_flow, AUpvlist, int item, int type);
int AUpvsetval (int *data_flow, AUpvlist, int item, void *val);
int AUpvgetparam (int *data_flow, AUpvlist, int item, int *param);
int AUpvgetvaltype (int *data_flow, AUpvlist, int item, int *type);
int AUpvgetval (int *data_flow, AUpvlist, int item, void *val);
typedef struct _AFvirtualfile AFvirtualfile;

typedef struct _AFfilesetup *AFfilesetup;
typedef struct _AFfilehandle *AFfilehandle;
typedef void (*AFerrfunc)(int *data_flow, long, const char *);

typedef off_t AFframecount;
typedef off_t AFfileoffset;






enum
{
 AF_DEFAULT_TRACK = 1001
};

enum
{
 AF_DEFAULT_INST = 2001
};

enum
{
 AF_NUM_UNLIMITED = 99999
};

enum
{
 AF_BYTEORDER_BIGENDIAN = 501,
 AF_BYTEORDER_LITTLEENDIAN = 502
};

enum
{
 AF_FILE_UNKNOWN = -1,
 AF_FILE_RAWDATA = 0,
 AF_FILE_AIFFC = 1,
 AF_FILE_AIFF = 2,
 AF_FILE_NEXTSND = 3,
 AF_FILE_WAVE = 4,
 AF_FILE_BICSF = 5,
 AF_FILE_IRCAM = AF_FILE_BICSF,
 AF_FILE_MPEG1BITSTREAM = 6,
 AF_FILE_SOUNDDESIGNER1 = 7,
 AF_FILE_SOUNDDESIGNER2 = 8,
 AF_FILE_AVR = 9,
 AF_FILE_IFF_8SVX = 10,
 AF_FILE_SAMPLEVISION = 11,
 AF_FILE_VOC = 12,
 AF_FILE_NIST_SPHERE = 13,
 AF_FILE_SOUNDFONT2 = 14
};

enum
{
 AF_LOOP_MODE_NOLOOP = 0,
 AF_LOOP_MODE_FORW = 1,
 AF_LOOP_MODE_FORWBAKW = 2
};

enum
{
 AF_SAMPFMT_TWOSCOMP = 401,
 AF_SAMPFMT_UNSIGNED = 402,
 AF_SAMPFMT_FLOAT = 403,
 AF_SAMPFMT_DOUBLE = 404
};

enum
{
 AF_INST_LOOP_OFF = 0,
 AF_INST_LOOP_CONTINUOUS = 1,
 AF_INST_LOOP_SUSTAIN = 3
};

enum
{
 AF_INST_MIDI_BASENOTE = 301,
 AF_INST_NUMCENTS_DETUNE = 302,
 AF_INST_MIDI_LONOTE = 303,
 AF_INST_MIDI_HINOTE = 304,
 AF_INST_MIDI_LOVELOCITY = 305,
 AF_INST_MIDI_HIVELOCITY = 306,
 AF_INST_NUMDBS_GAIN = 307,
 AF_INST_SUSLOOPID = 308,
 AF_INST_RELLOOPID = 309,
 AF_INST_SAMP_STARTFRAME = 310,
 AF_INST_SAMP_ENDFRAME = 311,
 AF_INST_SAMP_MODE = 312,
 AF_INST_TRACKID = 313,
 AF_INST_NAME = 314,
 AF_INST_SAMP_RATE = 315,
 AF_INST_PRESETID = 316,
 AF_INST_PRESET_NAME = 317
};

enum
{
 AF_MISC_UNRECOGNIZED = 0,
 AF_MISC_COPY = 201,
 AF_MISC_AUTH = 202,
 AF_MISC_NAME = 203,
 AF_MISC_ANNO = 204,
 AF_MISC_APPL = 205,
 AF_MISC_MIDI = 206,
 AF_MISC_PCMMAP = 207,
 AF_MISC_NeXT = 208,
 AF_MISC_IRCAM_PEAKAMP = 209,
 AF_MISC_IRCAM_COMMENT = 210,
 AF_MISC_COMMENT = 210,

 AF_MISC_ICMT = AF_MISC_COMMENT,
 AF_MISC_ICRD = 211,
 AF_MISC_ISFT = 212
};

enum
{

 AF_COMPRESSION_UNKNOWN = -1,
 AF_COMPRESSION_NONE = 0,
 AF_COMPRESSION_G722 = 501,
 AF_COMPRESSION_G711_ULAW = 502,
 AF_COMPRESSION_G711_ALAW = 503,


 AF_COMPRESSION_APPLE_ACE2 = 504,
 AF_COMPRESSION_APPLE_ACE8 = 505,
 AF_COMPRESSION_APPLE_MAC3 = 506,
 AF_COMPRESSION_APPLE_MAC6 = 507,

 AF_COMPRESSION_G726 = 517,
 AF_COMPRESSION_G728 = 518,
 AF_COMPRESSION_DVI_AUDIO = 519,
 AF_COMPRESSION_IMA = AF_COMPRESSION_DVI_AUDIO,
 AF_COMPRESSION_GSM = 520,
 AF_COMPRESSION_FS1016 = 521,
 AF_COMPRESSION_DV = 522,
 AF_COMPRESSION_MS_ADPCM = 523
};



enum
{
 AF_QUERYTYPE_INSTPARAM = 500,
 AF_QUERYTYPE_FILEFMT = 501,
 AF_QUERYTYPE_COMPRESSION = 502,
 AF_QUERYTYPE_COMPRESSIONPARAM = 503,
 AF_QUERYTYPE_MISC = 504,
 AF_QUERYTYPE_INST = 505,
 AF_QUERYTYPE_MARK = 506,
 AF_QUERYTYPE_LOOP = 507
};


enum
{
 AF_QUERY_NAME = 600,
 AF_QUERY_DESC = 601,
 AF_QUERY_LABEL = 602,
 AF_QUERY_TYPE = 603,
 AF_QUERY_DEFAULT = 604,
 AF_QUERY_ID_COUNT = 605,
 AF_QUERY_IDS = 606,
 AF_QUERY_IMPLEMENTED = 613,
 AF_QUERY_TYPE_COUNT = 607,
 AF_QUERY_TYPES = 608,
 AF_QUERY_NATIVE_SAMPFMT = 609,
 AF_QUERY_NATIVE_SAMPWIDTH = 610,
 AF_QUERY_SQUISHFAC = 611,
 AF_QUERY_MAX_NUMBER = 612,
 AF_QUERY_SUPPORTED = 613
};


enum
{
 AF_QUERY_TRACKS = 620,
 AF_QUERY_CHANNELS = 621,
 AF_QUERY_SAMPLE_SIZES = 622,
 AF_QUERY_SAMPLE_FORMATS = 623,
 AF_QUERY_COMPRESSION_TYPES = 624
};


enum
{
 AF_QUERY_VALUE_COUNT = 650,
 AF_QUERY_VALUES = 651
};
enum
{
 AF_BAD_NOT_IMPLEMENTED = 0,
 AF_BAD_FILEHANDLE = 1,
 AF_BAD_OPEN = 3,
 AF_BAD_CLOSE = 4,
 AF_BAD_READ = 5,
 AF_BAD_WRITE = 6,
 AF_BAD_LSEEK = 7,
 AF_BAD_NO_FILEHANDLE = 8,
 AF_BAD_ACCMODE = 10,
 AF_BAD_NOWRITEACC = 11,
 AF_BAD_NOREADACC = 12,
 AF_BAD_FILEFMT = 13,
 AF_BAD_RATE = 14,
 AF_BAD_CHANNELS = 15,
 AF_BAD_SAMPCNT = 16,
 AF_BAD_WIDTH = 17,
 AF_BAD_SEEKMODE = 18,
 AF_BAD_NO_LOOPDATA = 19,
 AF_BAD_MALLOC = 20,
 AF_BAD_LOOPID = 21,
 AF_BAD_SAMPFMT = 22,
 AF_BAD_FILESETUP = 23,
 AF_BAD_TRACKID = 24,
 AF_BAD_NUMTRACKS = 25,
 AF_BAD_NO_FILESETUP = 26,
 AF_BAD_LOOPMODE = 27,
 AF_BAD_INSTID = 28,
 AF_BAD_NUMLOOPS = 29,
 AF_BAD_NUMMARKS = 30,
 AF_BAD_MARKID = 31,
 AF_BAD_MARKPOS = 32,
 AF_BAD_NUMINSTS = 33,
 AF_BAD_NOAESDATA = 34,
 AF_BAD_MISCID = 35,
 AF_BAD_NUMMISC = 36,
 AF_BAD_MISCSIZE = 37,
 AF_BAD_MISCTYPE = 38,
 AF_BAD_MISCSEEK = 39,
 AF_BAD_STRLEN = 40,
 AF_BAD_RATECONV = 45,
 AF_BAD_SYNCFILE = 46,
 AF_BAD_CODEC_CONFIG = 47,
 AF_BAD_CODEC_STATE = 48,
 AF_BAD_CODEC_LICENSE = 49,
 AF_BAD_CODEC_TYPE = 50,
 AF_BAD_COMPRESSION = AF_BAD_CODEC_CONFIG,
 AF_BAD_COMPTYPE = AF_BAD_CODEC_TYPE,

 AF_BAD_INSTPTYPE = 51,
 AF_BAD_INSTPID = 52,
 AF_BAD_BYTEORDER = 53,
 AF_BAD_FILEFMT_PARAM = 54,
 AF_BAD_COMP_PARAM = 55,
 AF_BAD_DATAOFFSET = 56,
 AF_BAD_FRAMECNT = 57,
 AF_BAD_QUERYTYPE = 58,
 AF_BAD_QUERY = 59,
 AF_WARNING_CODEC_RATE = 60,
 AF_WARNING_RATECVT = 61,

 AF_BAD_HEADER = 62,
 AF_BAD_FRAME = 63,
 AF_BAD_LOOPCOUNT = 64,
 AF_BAD_DMEDIA_CALL = 65,


 AF_BAD_AIFF_HEADER = 108,
 AF_BAD_AIFF_FORM = 109,
 AF_BAD_AIFF_SSND = 110,
 AF_BAD_AIFF_CHUNKID = 111,
 AF_BAD_AIFF_COMM = 112,
 AF_BAD_AIFF_INST = 113,
 AF_BAD_AIFF_MARK = 114,
 AF_BAD_AIFF_SKIP = 115,
 AF_BAD_AIFF_LOOPMODE = 116
};





enum
{
 AF_ERR_NOT_IMPLEMENTED = 0+3000,
 AF_ERR_BAD_FILEHANDLE = 1+3000,
 AF_ERR_BAD_READ = 5+3000,
 AF_ERR_BAD_WRITE = 6+3000,
 AF_ERR_BAD_LSEEK = 7+3000,
 AF_ERR_BAD_ACCMODE = 10+3000,
 AF_ERR_NO_WRITEACC = 11+3000,
 AF_ERR_NO_READACC = 12+3000,
 AF_ERR_BAD_FILEFMT = 13+3000,
 AF_ERR_BAD_RATE = 14+3000,
 AF_ERR_BAD_CHANNELS = 15+3000,
 AF_ERR_BAD_SAMPCNT = 16+3000,
 AF_ERR_BAD_WIDTH = 17+3000,
 AF_ERR_BAD_SEEKMODE = 18+3000,
 AF_ERR_BAD_LOOPID = 21+3000,
 AF_ERR_BAD_SAMPFMT = 22+3000,
 AF_ERR_BAD_FILESETUP = 23+3000,
 AF_ERR_BAD_TRACKID = 24+3000,
 AF_ERR_BAD_NUMTRACKS = 25+3000,
 AF_ERR_BAD_LOOPMODE = 27+3000,
 AF_ERR_BAD_INSTID = 28+3000,
 AF_ERR_BAD_NUMLOOPS = 29+3000,
 AF_ERR_BAD_NUMMARKS = 30+3000,
 AF_ERR_BAD_MARKID = 31+3000,
 AF_ERR_BAD_MARKPOS = 32+3000,
 AF_ERR_BAD_NUMINSTS = 33+3000,
 AF_ERR_BAD_NOAESDATA = 34+3000,
 AF_ERR_BAD_MISCID = 35+3000,
 AF_ERR_BAD_NUMMISC = 36+3000,
 AF_ERR_BAD_MISCSIZE = 37+3000,
 AF_ERR_BAD_MISCTYPE = 38+3000,
 AF_ERR_BAD_MISCSEEK = 39+3000,
 AF_ERR_BAD_STRLEN = 40+3000,
 AF_ERR_BAD_RATECONV = 45+3000,
 AF_ERR_BAD_SYNCFILE = 46+3000,
 AF_ERR_BAD_CODEC_CONFIG = 47+3000,
 AF_ERR_BAD_CODEC_TYPE = 50+3000,
 AF_ERR_BAD_INSTPTYPE = 51+3000,
 AF_ERR_BAD_INSTPID = 52+3000,

 AF_ERR_BAD_BYTEORDER = 53+3000,
 AF_ERR_BAD_FILEFMT_PARAM = 54+3000,
 AF_ERR_BAD_COMP_PARAM = 55+3000,
 AF_ERR_BAD_DATAOFFSET = 56+3000,
 AF_ERR_BAD_FRAMECNT = 57+3000,

 AF_ERR_BAD_QUERYTYPE = 58+3000,
 AF_ERR_BAD_QUERY = 59+3000,
 AF_ERR_BAD_HEADER = 62+3000,
 AF_ERR_BAD_FRAME = 63+3000,
 AF_ERR_BAD_LOOPCOUNT = 64+3000,



 AF_ERR_BAD_AIFF_HEADER = 66+3000,
 AF_ERR_BAD_AIFF_FORM = 67+3000,
 AF_ERR_BAD_AIFF_SSND = 68+3000,
 AF_ERR_BAD_AIFF_CHUNKID = 69+3000,
 AF_ERR_BAD_AIFF_COMM = 70+3000,
 AF_ERR_BAD_AIFF_INST = 71+3000,
 AF_ERR_BAD_AIFF_MARK = 72+3000,
 AF_ERR_BAD_AIFF_SKIP = 73+3000,
 AF_ERR_BAD_AIFF_LOOPMODE = 74+3000
};



AFerrfunc afSetErrorHandler (int *data_flow, AFerrfunc efunc);


AUpvlist afQuery (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);
long afQueryLong (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);
double afQueryDouble (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);
void *afQueryPointer (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);


AFfilesetup afNewFileSetup (int *data_flow);
void afFreeFileSetup (int *data_flow, AFfilesetup);
int afIdentifyFD (int *data_flow, int);
int afIdentifyNamedFD (int *data_flow, int, const char *filename, int *implemented);

AFfilehandle afOpenFile (int *data_flow, const char *filename, const char *mode,
 AFfilesetup setup);
AFfilehandle afOpenVirtualFile (int *data_flow, AFvirtualfile *vfile, const char *mode,
 AFfilesetup setup);
AFfilehandle afOpenFD (int *data_flow, int fd, const char *mode, AFfilesetup setup);
AFfilehandle afOpenNamedFD (int *data_flow, int fd, const char *mode, AFfilesetup setup,
 const char *filename);

void afSaveFilePosition (AFfilehandle file);
void afRestoreFilePosition (AFfilehandle file);
int afSyncFile (int *data_flow, AFfilehandle file);
int afCloseFile (int *data_flow, AFfilehandle file);

void afInitFileFormat (int *data_flow, AFfilesetup, int format);
int afGetFileFormat (int *data_flow, AFfilehandle, int *version);


void afInitTrackIDs (int *data_flow, AFfilesetup, int *trackids, int trackCount);
int afGetTrackIDs (int *data_flow, AFfilehandle, int *trackids);


int afReadFrames (int *data_flow, AFfilehandle, int track, void *buffer, int frameCount);
int afWriteFrames (int *data_flow, AFfilehandle, int track, const void *buffer, int frameCount);
AFframecount afSeekFrame (int *data_flow, AFfilehandle, int track, AFframecount frameoffset);
AFframecount afTellFrame (int *data_flow, AFfilehandle, int track);
AFfileoffset afGetTrackBytes (int *data_flow, AFfilehandle, int track);
float afGetFrameSize (int *data_flow, AFfilehandle, int track, int expand3to4);
float afGetVirtualFrameSize (int *data_flow, AFfilehandle, int track, int expand3to4);



void afInitAESChannelData (int *data_flow, AFfilesetup, int track);
void afInitAESChannelDataTo (int *data_flow, AFfilesetup, int track, int willBeData);
int afGetAESChannelData (int *data_flow, AFfilehandle, int track, unsigned char buf[24]);
void afSetAESChannelData (int *data_flow, AFfilehandle, int track, unsigned char buf[24]);
void afInitByteOrder (int *data_flow, AFfilesetup, int track, int byteOrder);
int afGetByteOrder (int *data_flow, AFfilehandle, int track);
int afSetVirtualByteOrder (int *data_flow, AFfilehandle, int track, int byteOrder);
int afGetVirtualByteOrder (int *data_flow, AFfilehandle, int track);


void afInitChannels (int *data_flow, AFfilesetup, int track, int nchannels);
int afGetChannels (int *data_flow, AFfilehandle, int track);
int afSetVirtualChannels (int *data_flow, AFfilehandle, int track, int channelCount);
int afGetVirtualChannels (int *data_flow, AFfilehandle, int track);
void afSetChannelMatrix (int *data_flow, AFfilehandle, int track, double *matrix);


void afInitSampleFormat (int *data_flow, AFfilesetup, int track, int sampleFormat,
 int sampleWidth);
void afGetSampleFormat (int *data_flow, AFfilehandle file, int track, int *sampfmt,
 int *sampwidth);
void afGetVirtualSampleFormat (int *data_flow, AFfilehandle file, int track, int *sampfmt,
 int *sampwidth);
int afSetVirtualSampleFormat (int *data_flow, AFfilehandle, int track,
 int sampleFormat, int sampleWidth);
void afGetVirtualSampleFormat (int *data_flow, AFfilehandle, int track,
 int *sampleFormat, int *sampleWidth);


void afInitRate (int *data_flow, AFfilesetup, int track, double rate);
double afGetRate (int *data_flow, AFfilehandle, int track);







void afInitCompression (int *data_flow, AFfilesetup, int track, int compression);





int afGetCompression (int *data_flow, AFfilehandle, int track);
void afInitPCMMapping (int *data_flow, AFfilesetup filesetup, int track,
 double slope, double intercept, double minClip, double maxClip);
void afGetPCMMapping (int *data_flow, AFfilehandle file, int track,
 double *slope, double *intercept, double *minClip, double *maxClip);


int afSetTrackPCMMapping (int *data_flow, AFfilehandle file, int track,
 double slope, double intercept, double minClip, double maxClip);


int afSetVirtualPCMMapping (int *data_flow, AFfilehandle file, int track,
 double slope, double intercept, double minClip, double maxClip);
void afGetVirtualPCMMapping (int *data_flow, AFfilehandle file, int track,
 double *slope, double *intercept, double *minClip, double *maxClip);



void afInitDataOffset(int *data_flow, AFfilesetup, int track, AFfileoffset offset);
AFfileoffset afGetDataOffset (int *data_flow, AFfilehandle, int track);


void afInitFrameCount (int *data_flow, AFfilesetup, int track, AFframecount frameCount);
AFframecount afGetFrameCount (int *data_flow, AFfilehandle file, int track);


void afInitLoopIDs (int *data_flow, AFfilesetup, int instid, int ids[], int nids);
int afGetLoopIDs (int *data_flow, AFfilehandle, int instid, int loopids[]);
void afSetLoopMode (int *data_flow, AFfilehandle, int instid, int loop, int mode);
int afGetLoopMode (int *data_flow, AFfilehandle, int instid, int loopid);
int afSetLoopCount (int *data_flow, AFfilehandle, int instid, int loop, int count);
int afGetLoopCount (int *data_flow, AFfilehandle, int instid, int loopid);
void afSetLoopStart (int *data_flow, AFfilehandle, int instid, int loopid, int markerid);
int afGetLoopStart (int *data_flow, AFfilehandle, int instid, int loopid);
void afSetLoopEnd (int *data_flow, AFfilehandle, int instid, int loopid, int markerid);
int afGetLoopEnd (int *data_flow, AFfilehandle, int instid, int loopid);

int afSetLoopStartFrame (int *data_flow, AFfilehandle, int instid, int loop,
 AFframecount startFrame);
AFframecount afGetLoopStartFrame (int *data_flow, AFfilehandle, int instid, int loop);
int afSetLoopEndFrame (int *data_flow, AFfilehandle, int instid, int loop,
 AFframecount startFrame);
AFframecount afGetLoopEndFrame (int *data_flow, AFfilehandle, int instid, int loop);

void afSetLoopTrack (int *data_flow, AFfilehandle, int instid, int loopid, int trackid);
int afGetLoopTrack (int *data_flow, AFfilehandle, int instid, int loopid);


void afInitMarkIDs (int *data_flow, AFfilesetup, int trackid, int *ids, int nids);
int afGetMarkIDs (int *data_flow, AFfilehandle file, int trackid, int markids[]);
void afSetMarkPosition (int *data_flow, AFfilehandle file, int trackid, int markid,
 AFframecount markpos);
AFframecount afGetMarkPosition (int *data_flow, AFfilehandle file, int trackid, int markid);
void afInitMarkName (int *data_flow, AFfilesetup, int trackid, int marker, const char *name);
void afInitMarkComment (int *data_flow, AFfilesetup, int trackid, int marker,
 const char *comment);
char *afGetMarkName (int *data_flow, AFfilehandle file, int trackid, int markid);
char *afGetMarkComment (int *data_flow, AFfilehandle file, int trackid, int markid);


void afInitInstIDs (int *data_flow, AFfilesetup, int *ids, int nids);
int afGetInstIDs (int *data_flow, AFfilehandle file, int *instids);
void afGetInstParams (int *data_flow, AFfilehandle file, int instid, AUpvlist pvlist,
 int nparams);
void afSetInstParams (int *data_flow, AFfilehandle file, int instid, AUpvlist pvlist,
 int nparams);
long afGetInstParamLong (int *data_flow, AFfilehandle file, int instid, int param);
void afSetInstParamLong (int *data_flow, AFfilehandle file, int instid, int param, long value);


void afInitMiscIDs (int *data_flow, AFfilesetup, int *ids, int nids);
int afGetMiscIDs (int *data_flow, AFfilehandle, int *ids);
void afInitMiscType (int *data_flow, AFfilesetup, int miscellaneousid, int type);
int afGetMiscType (int *data_flow, AFfilehandle, int miscellaneousid);
void afInitMiscSize (int *data_flow, AFfilesetup, int miscellaneousid, int size);
int afGetMiscSize (int *data_flow, AFfilehandle, int miscellaneousid);
int afWriteMisc (int *data_flow, AFfilehandle, int miscellaneousid, void *buf, int bytes);
int afReadMisc (int *data_flow, AFfilehandle, int miscellaneousid, void *buf, int bytes);
int afSeekMisc (int *data_flow, AFfilehandle, int miscellaneousid, int offset);




struct _AFvirtualfile
{
  ssize_t (*read) (int *data_flow, AFvirtualfile *vfile, void *data, size_t nbytes);
  long (*length) (int *data_flow, AFvirtualfile *vfile);
  ssize_t (*write) (int *data_flow, AFvirtualfile *vfile, const void *data, size_t nbytes);
  void (*destroy)(int *data_flow, AFvirtualfile *vfile);
  long (*seek) (int *data_flow, AFvirtualfile *vfile, long offset, int is_relative);
  long (*tell) (int *data_flow, AFvirtualfile *vfile);

  void *closure;
};

AFvirtualfile *af_virtual_file_new (int *data_flow);
AFvirtualfile *af_virtual_file_new_for_file (int *data_flow, FILE *fh);
void af_virtual_file_destroy (int *data_flow, AFvirtualfile *vfile);

size_t af_fread (int *data_flow, void *data, size_t size, size_t nmemb, AFvirtualfile *vfile);
size_t af_fwrite (int *data_flow, const void *data, size_t size, size_t nmemb, AFvirtualfile *vfile);
int af_fclose (int *data_flow, AFvirtualfile *vfile);
long af_flength (int *data_flow, AFvirtualfile *vfile);
int af_fseek (int *data_flow, AFvirtualfile *vfile, long offset, int whence);
long af_ftell (int *data_flow, AFvirtualfile *vfile);
void _af_error (int *data_flow, int errorCode, const char *fmt, ...);

typedef int status;



typedef union AFPVu
{
 long l;
 double d;
 void *v;
} AFPVu;

typedef struct _SuppMiscInfo
{
 int type;
 int count;
} _SuppMiscInfo;

typedef struct _InstParamInfo
{
 int id;
 int type;
 char *name;
 AFPVu defaultValue;
} _InstParamInfo;

typedef struct _MarkerSetup
{
 int id;
 char *name, *comment;
} _MarkerSetup;

typedef struct _Marker
{
 short id;
 unsigned long position;
 char *name, *comment;
} _Marker;

typedef struct _Loop
{
 int id;
 int mode;
 int count;
 int beginMarker, endMarker;
 int trackid;
} _Loop;

typedef struct _PCMInfo
{
 double slope, intercept, minClip, maxClip;
} _PCMInfo;

typedef struct _AudioFormat
{
 double sampleRate;
 int sampleFormat;
 int sampleWidth;
 int byteOrder;

 _PCMInfo pcm;

 int channelCount;

 int compressionType;
 void *compressionParams;
} _AudioFormat;


struct _AFmoduleinst;
struct _AFchunk;

typedef void (*_AFfnpmod) (int *data_flow, struct _AFmoduleinst *i);
typedef void (*_AFfnpsimplemod) (int *data_flow, struct _AFchunk *inc,
 struct _AFchunk *outc, void *modspec);

typedef struct _AFmodule
{
 char *name;
 _AFfnpmod describe;
 _AFfnpmod max_pull;
 _AFfnpmod max_push;
 _AFfnpmod run_pull;
 _AFfnpmod reset1;
 _AFfnpmod reset2;
 _AFfnpmod run_push;
 _AFfnpmod sync1;
 _AFfnpmod sync2;
 _AFfnpsimplemod run;
 _AFfnpmod free;
} _AFmodule;

typedef struct _AFchunk
{
 void *buf;
 AFframecount nframes;
 _AudioFormat f;
} _AFchunk;

typedef struct _AFmoduleinst
{
 _AFchunk *inc, *outc;
 void *modspec;
 union
 {
  struct { struct _AFmoduleinst *source; } pull;
  struct { struct _AFmoduleinst *sink; } push;
 } u;
 const _AFmodule *mod;
 
_Bool 
     free_on_close;
 
_Bool 
     valid;




} _AFmoduleinst;


typedef struct _AFmodulestate
{
 
_Bool 
     modulesdirty;
 int nmodules;


 
_Bool 
     mustuseatomicnvframes;


 double old_f_rate, old_v_rate;

 _AFchunk *chunk;
 _AFmoduleinst *module;


 void **buffer;




 _AFmoduleinst filemodinst;


 _AFmoduleinst filemod_rebufferinst;


 _AFmoduleinst rateconvertinst;


 double rateconvert_inrate, rateconvert_outrate;


 _AFmoduleinst rateconvert_rebufferinst;
} _AFmodulestate;

typedef struct _Track
{
 int id;

 _AudioFormat f, v;

 double *channelMatrix;

 int markerCount;
 _Marker *markers;

 
_Bool 
      hasAESData;
 unsigned char aesData[24];

 AFframecount totalfframes;
 AFframecount nextfframe;
 AFframecount frames2ignore;
 AFfileoffset fpos_first_frame;
 AFfileoffset fpos_next_frame;
 AFfileoffset fpos_after_data;
 AFframecount totalvframes;
 AFframecount nextvframe;
 AFfileoffset data_size;

 _AFmodulestate ms;

 double taper, dynamic_range;
 
_Bool 
     ratecvt_filter_params_set;

 
_Bool 
     filemodhappy;
} _Track;

typedef struct _TrackSetup
{
 int id;

 _AudioFormat f;

 
_Bool 
     rateSet, sampleFormatSet, sampleWidthSet, byteOrderSet,
  channelCountSet, compressionSet, aesDataSet, markersSet,
  dataOffsetSet, frameCountSet;

 int markerCount;
 _MarkerSetup *markers;

 AFfileoffset dataOffset;
 AFframecount frameCount;
} _TrackSetup;

typedef struct _LoopSetup
{
 int id;
} _LoopSetup;

typedef struct _InstrumentSetup
{
 int id;

 int loopCount;
 _LoopSetup *loops;
 
_Bool 
      loopSet;
} _InstrumentSetup;

typedef struct _Instrument
{
 int id;

 int loopCount;
 _Loop *loops;

 AFPVu *values;
} _Instrument;

typedef struct _Miscellaneous
{
 int id;
 int type;
 int size;

 void *buffer;

 AFfileoffset position;
} _Miscellaneous;

typedef struct _MiscellaneousSetup
{
 int id;
 int type;
 int size;
} _MiscellaneousSetup;

typedef struct _AFfilesetup
{
 int valid;

 int fileFormat;

 
_Bool 
     trackSet, instrumentSet, miscellaneousSet;

 int trackCount;
 _TrackSetup *tracks;

 int instrumentCount;
 _InstrumentSetup *instruments;

 int miscellaneousCount;
 _MiscellaneousSetup *miscellaneous;
} _AFfilesetup;

typedef struct _AFfilehandle
{
 int valid;
 int access;

 
_Bool 
     seekok;

 AFvirtualfile *fh;

 char *fileName;

 int fileFormat;

 int trackCount;
 _Track *tracks;

 int instrumentCount;
 _Instrument *instruments;

 int miscellaneousCount;
 _Miscellaneous *miscellaneous;

 void *formatSpecific;
} _AFfilehandle;

enum
{
 _AF_VALID_FILEHANDLE = 38212,
 _AF_VALID_FILESETUP = 38213
};

enum
{
 _AF_READ_ACCESS = 1,
 _AF_WRITE_ACCESS = 2
};


enum
{
 _AF_FRAMES_PER_BLOCK = 700,
 _AF_BLOCK_SIZE = 701,
 _AF_MS_ADPCM_NUM_COEFFICIENTS = 800,
 _AF_MS_ADPCM_COEFFICIENTS = 801
};





typedef struct _Unit
{
 int fileFormat;
 char *name;
 char *description;
 char *label;
 
_Bool 
     implemented;

 int (*getversion) (int *data_flow, AFfilehandle handle);
 AFfilesetup (*completesetup) (int *data_flow, AFfilesetup setup);

 struct
 {
  
 _Bool 
      (*recognize) (int *data_flow, AFvirtualfile *fh);
  status (*init) (int *data_flow, AFfilesetup, AFfilehandle);
 } read;

 struct
 {
  status (*init) (int *data_flow, AFfilesetup, AFfilehandle);
  
 _Bool 
      (*instparamvalid) (int *data_flow, AFfilehandle, AUpvlist, int);
  status (*update) (int *data_flow, AFfilehandle);
 } write;

 int defaultSampleFormat;
 int defaultSampleWidth;

 int compressionTypeCount;
 int *compressionTypes;

 int markerCount;

 int instrumentCount;
 int loopPerInstrumentCount;

 int instrumentParameterCount;
 _InstParamInfo *instrumentParameters;
} _Unit;

typedef struct _CompressionUnit
{
 int compressionID;
 
_Bool 
     implemented;
 char *label;
 char *shortname;
 char *name;
 double squishFactor;
 int nativeSampleFormat;
 int nativeSampleWidth;
 
_Bool 
     needsRebuffer;
 
_Bool 
     multiple_of;
 
_Bool 
     (*fmtok) (int *data_flow, _AudioFormat *format);

 _AFmoduleinst (*initcompress) (int *data_flow, _Track *track, AFvirtualfile *fh,
  
 _Bool 
      seekok, 
              _Bool 
                   headerless, AFframecount *chunkframes);
 _AFmoduleinst (*initdecompress) (int *data_flow, _Track *track, AFvirtualfile *fh,
  
 _Bool 
      seekok, 
              _Bool 
                   headerless, AFframecount *chunkframes);
} _CompressionUnit;


_Bool 
    _af_raw_recognize (int *data_flow, AFvirtualfile *fh);
status _af_raw_read_init (int *data_flow, AFfilesetup filesetup, AFfilehandle filehandle);
status _af_raw_write_init (int *data_flow, AFfilesetup filesetup, AFfilehandle filehandle);
status _af_raw_update (int *data_flow, AFfilehandle filehandle);
AFfilesetup _af_raw_complete_setup (int *data_flow, AFfilesetup);



typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef int intptr_t;


typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;







struct _INST
{
 uint8_t baseNote;
 int8_t detune;
 uint8_t lowNote, highNote;
 uint8_t lowVelocity, highVelocity;
 int16_t gain;

 uint16_t sustainLoopPlayMode;
 uint16_t sustainLoopBegin;
 uint16_t sustainLoopEnd;

 uint16_t releaseLoopPlayMode;
 uint16_t releaseLoopBegin;
 uint16_t releaseLoopEnd;
};


_Bool 
    _af_aiff_recognize (int *data_flow, AFvirtualfile *fh);

_Bool 
    _af_aifc_recognize (int *data_flow, AFvirtualfile *fh);

status _af_aiff_read_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_aiff_write_init (int *data_flow, AFfilesetup, AFfilehandle);

_Bool 
    _af_aiff_instparam_valid (int *data_flow, AFfilehandle, AUpvlist, int);

AFfilesetup _af_aiff_complete_setup (int *data_flow, AFfilesetup);

status _af_aiff_update (int *data_flow, AFfilehandle);

int _af_aifc_get_version (int *data_flow, AFfilehandle);



typedef struct _AIFFInfo
{
 AFfileoffset miscellaneousPosition;
 AFfileoffset FVER_offset;
 AFfileoffset COMM_offset;
 AFfileoffset MARK_offset;
 AFfileoffset INST_offset;
 AFfileoffset AESD_offset;
 AFfileoffset SSND_offset;
} _AIFFInfo;
enum
{
 _AU_FORMAT_UNSPECIFIED = 0,
 _AU_FORMAT_MULAW_8 = 1,
 _AU_FORMAT_LINEAR_8 = 2,
 _AU_FORMAT_LINEAR_16 = 3,
 _AU_FORMAT_LINEAR_24 = 4,
 _AU_FORMAT_LINEAR_32 = 5,
 _AU_FORMAT_FLOAT = 6,
 _AU_FORMAT_DOUBLE = 7,
 _AU_FORMAT_INDIRECT = 8,
 _AU_FORMAT_NESTED = 9,
 _AU_FORMAT_DSP_CORE = 10,
 _AU_FORMAT_DSP_DATA_8 = 11,
 _AU_FORMAT_DSP_DATA_16 = 12,
 _AU_FORMAT_DSP_DATA_24 = 13,
 _AU_FORMAT_DSP_DATA_32 = 14,
 _AU_FORMAT_DISPLAY = 16,
 _AU_FORMAT_MULAW_SQUELCH = 17,
 _AU_FORMAT_EMPHASIZED = 18,
 _AU_FORMAT_COMPRESSED = 19,
 _AU_FORMAT_COMPRESSED_EMPHASIZED = 20,
 _AU_FORMAT_DSP_COMMANDS = 21,
 _AU_FORMAT_DSP_COMMANDS_SAMPLES = 22,
 _AU_FORMAT_ADPCM_G721 = 23,
 _AU_FORMAT_ADPCM_G722 = 24,
 _AU_FORMAT_ADPCM_G723_3 = 25,
 _AU_FORMAT_ADPCM_G723_5 = 26,
 _AU_FORMAT_ALAW_8 = 27,
 _AU_FORMAT_AES = 28,
 _AU_FORMAT_DELTA_MULAW_8 = 29
};




_Bool 
    _af_next_recognize (int *data_flow, AFvirtualfile *fh);
status _af_next_read_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_next_write_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_next_update (int *data_flow, AFfilehandle);
AFfilesetup _af_next_complete_setup (int *data_flow, AFfilesetup);
enum
{
 WAVE_FORMAT_UNKNOWN = 0x0000,
 WAVE_FORMAT_PCM = 0x0001,
 WAVE_FORMAT_ADPCM = 0x0002,
 WAVE_FORMAT_IEEE_FLOAT = 0x0003,
 WAVE_FORMAT_VSELP = 0x0004,
 WAVE_FORMAT_IBM_CVSD = 0x0005,
 WAVE_FORMAT_ALAW = 0x0006,
 WAVE_FORMAT_MULAW = 0x0007,
 WAVE_FORMAT_OKI_ADPCM = 0x0010,
 WAVE_FORMAT_DVI_ADPCM = 0x0011,
 WAVE_FORMAT_MEDIASPACE_ADPCM = 0x0012,
 WAVE_FORMAT_SIERRA_ADPCM = 0x0013,
 WAVE_FORMAT_G723_ADPCM = 0x0014,
 WAVE_FORMAT_DIGISTD = 0x0015,
 WAVE_FORMAT_DIGIFIX = 0x0016,
 WAVE_FORMAT_DIALOGIC_OKI_ADPCM = 0x0017,
 WAVE_FORMAT_MEDIAVISION_ADPCM = 0x0018,
 WAVE_FORMAT_CU_CODEC = 0x0019,
 WAVE_FORMAT_YAMAHA_ADPCM = 0x0020,
 WAVE_FORMAT_SONARC = 0x0021,
 WAVE_FORMAT_DSP_TRUESPEECH = 0x0022,
 WAVE_FORMAT_ECHOSC1 = 0x0023,
 WAVE_FORMAT_AUDIOFILE_AF36 = 0x0024,
 WAVE_FORMAT_APTX = 0x0025,
 WAVE_FORMAT_DOLBY_AC2 = 0x0030,
 WAVE_FORMAT_GSM610 = 0x0031,
 WAVE_FORMAT_MSNAUDIO = 0x0032,
 WAVE_FORMAT_ANTEX_ADPCME = 0x0033,

 WAVE_FORMAT_MPEG = 0x0050,
 WAVE_FORMAT_MPEGLAYER3 = 0x0055,
 WAVE_FORMAT_LUCENT_G723 = 0x0059,
 WAVE_FORMAT_G726_ADPCM = 0x0064,
 WAVE_FORMAT_G722_ADPCM = 0x0065,

 IBM_FORMAT_MULAW = 0x0101,
 IBM_FORMAT_ALAW = 0x0102,
 IBM_FORMAT_ADPCM = 0x0103,

 WAVE_FORMAT_CREATIVE_ADPCM = 0x0200
};





_Bool 
    _af_wave_recognize (int *data_flow, AFvirtualfile *fh);
status _af_wave_read_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_wave_write_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_wave_update (int *data_flow, AFfilehandle);
AFfilesetup _af_wave_complete_setup (int *data_flow, AFfilesetup);

_Bool 
    _af_wave_instparam_valid (int *data_flow, AFfilehandle, AUpvlist, int);

typedef struct _WAVEInfo
{
 AFfileoffset factOffset;
 AFfileoffset miscellaneousStartOffset;
 AFfileoffset totalMiscellaneousSize;
 AFfileoffset markOffset;
 AFfileoffset dataSizeOffset;





 uint32_t blockAlign, samplesPerBlock;






 int16_t msadpcmCoefficients[256][2];
} _WAVEInfo;

_Bool 
    _af_ircam_recognize (int *data_flow, AFvirtualfile *fh);

status _af_ircam_read_init (int *data_flow, AFfilesetup, AFfilehandle);

status _af_ircam_write_init (int *data_flow, AFfilesetup, AFfilehandle);

AFfilesetup _af_ircam_complete_setup (int *data_flow, AFfilesetup);

status _af_ircam_update (int *data_flow, AFfilehandle);
enum
{
 SF_END,
 SF_MAXAMP,
 SF_COMMENT,
 SF_LINKCODE
};

_Bool 
    _af_avr_recognize (int *data_flow, AFvirtualfile *fh);
status _af_avr_read_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_avr_write_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_avr_update (int *data_flow, AFfilehandle);
AFfilesetup _af_avr_complete_setup (int *data_flow, AFfilesetup);





_Bool 
    _af_iff_recognize (int *data_flow, AFvirtualfile *fh);
status _af_iff_read_init (int *data_flow, AFfilesetup, AFfilehandle);
AFfilesetup _af_iff_complete_setup (int *data_flow, AFfilesetup);
status _af_iff_write_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_iff_update (int *data_flow, AFfilehandle);

typedef struct
{
 AFfileoffset miscellaneousPosition;
 AFfileoffset VHDR_offset;
 AFfileoffset BODY_offset;
} _IFFinfo;

_Bool 
    _af_nist_recognize (int *data_flow, AFvirtualfile *fh);
AFfilesetup _af_nist_complete_setup (int *data_flow, AFfilesetup setup);
status _af_nist_read_init (int *data_flow, AFfilesetup setup, AFfilehandle handle);
status _af_nist_write_init (int *data_flow, AFfilesetup setup, AFfilehandle handle);
status _af_nist_update (int *data_flow, AFfilehandle file);

int _af_compression_index_from_id (int *data_flow, int compressionid);






typedef uint8_t uchar1;
typedef uint16_t uchar2;
typedef uint32_t uchar3;
typedef uint32_t uchar4;

typedef int8_t schar1;
typedef int16_t schar2;
typedef int32_t schar3;
typedef int32_t schar4;

typedef struct real_char3 { uchar1 c0; uchar1 c1; uchar1 c2; } real_char3;
typedef union char3u
{
 struct { schar4 i; } schar4;
 struct { uchar4 i; } uchar4;
 struct { schar3 i; } schar3;
 struct { uchar3 i; } uchar3;
 struct { real_char3 c3; schar1 pad; } real_char3_high;
 struct { schar1 pad; real_char3 c3; } real_char3_low;
 struct { uchar2 s0; uchar2 s1; } uchar2;
 struct { schar2 s0; schar2 s1; } schar2;
 struct { uchar1 c0; uchar1 c1; uchar1 c2; uchar1 c3; } uchar1;
 struct { schar1 c0; schar1 c1; schar1 c2; schar1 c3; } schar1;
} char3u;

typedef struct real_char8
{
 uchar1 c0, c1, c2, c3, c4, c5, c6, c7;
} real_char8;

typedef union char8u
{
 struct { schar4 i0, i1; } schar4;
 struct { uchar4 i0, i1; } uchar4;
 struct { schar2 s0, s1, s2, s3; } schar2;
 struct { uchar2 s0, s1, s2, s3; } uchar2;
 struct { schar1 c0, c1, c2, c3, c4, c5, c6, c7; } schar1;
 struct { uchar1 c0, c1, c2, c3, c4, c5, c6, c7; } uchar1;
} char8u;
AFframecount _AFpull (int *data_flow, _AFmoduleinst *i, AFframecount nframes2pull);
void _AFpush (int *data_flow, _AFmoduleinst *i, AFframecount nframes2push);
void _AFpushat (int *data_flow, _AFmoduleinst *i, AFframecount startframe, 
                                                          _Bool 
                                                               stretchint,
 AFframecount nframes2push);
void _AFsimplemodrun_pull (int *data_flow, _AFmoduleinst *i);
void _AFsimplemodrun_push (int *data_flow, _AFmoduleinst *i);
void _AFfreemodspec (int *data_flow, _AFmoduleinst *i);


_AFmoduleinst _AFnewmodinst (int *data_flow, const _AFmodule *mod);

status _AFinitmodules (int *data_flow, AFfilehandle h, _Track *trk);
status _AFsetupmodules (int *data_flow, AFfilehandle h, _Track *trk);
status _AFsyncmodules (int *data_flow, AFfilehandle h, _Track *trk);
void _AFfreemodules (int *data_flow, _Track *trk);


_Bool 
    _af_pcm_format_ok (int *data_flow, _AudioFormat *f);

_AFmoduleinst _AFpcminitcompress (int *data_flow, _Track *trk, AFvirtualfile *fh, 
                                                                 _Bool 
                                                                      seekok,
 
_Bool 
     headerless, AFframecount *chunkframes);

_AFmoduleinst _AFpcminitdecompress (int *data_flow, _Track *trk, AFvirtualfile *fh, 
                                                                   _Bool 
                                                                        seekok,
 
_Bool 
     headerless, AFframecount *chunkframes);

_Bool 
    _af_g711_format_ok (int *data_flow, _AudioFormat *f);

_AFmoduleinst _AFg711initcompress (int *data_flow, _Track *trk, AFvirtualfile *fh, 
                                                                  _Bool 
                                                                       seekok,
 
_Bool 
     headerless, AFframecount *chunkframes);

_AFmoduleinst _AFg711initdecompress (int *data_flow, _Track *trk, AFvirtualfile *fh,
 
_Bool 
     seekok, 
             _Bool 
                  headerless, AFframecount *chunkframes);

_Bool 
    _af_ima_adpcm_format_ok (int *data_flow, _AudioFormat *f);

_AFmoduleinst _af_ima_adpcm_init_decompress (int *data_flow, _Track *track, AFvirtualfile *fh,
 
_Bool 
     seekok, 
             _Bool 
                  headerless, AFframecount *chunkframes);

_Bool 
    _af_ms_adpcm_format_ok (int *data_flow, _AudioFormat *f);

_AFmoduleinst _af_ms_adpcm_init_decompress (int *data_flow, _Track *track, AFvirtualfile *fh,
 
_Bool 
     seekok, 
             _Bool 
                  headerless, AFframecount *chunkframes);

extern _InstParamInfo _af_aiff_inst_params[];
extern _InstParamInfo _af_wave_inst_params[];

extern int _af_raw_compression_types[];
extern int _af_aiffc_compression_types[];
extern int _af_next_compression_types[];
extern int _af_wave_compression_types[];

const _Unit _af_units[15] =
{
 {
  AF_FILE_RAWDATA,
  "Raw Data", "Raw Sound Data", "raw",
  
 1
     , 
       ((void *)0)
           , _af_raw_complete_setup,
  {_af_raw_recognize, _af_raw_read_init},
  {_af_raw_write_init, 
                      ((void *)0)
                          , 
                            ((void *)0)
                                },
  AF_SAMPFMT_TWOSCOMP, 16,
  2,
  _af_raw_compression_types,
  0,
  0,
  0,
  0, 
    ((void *)0)
        ,
 },
 {
  AF_FILE_AIFFC,
  "AIFF-C", "AIFF-C File Format", "aifc",
  
 1
     , _af_aifc_get_version, _af_aiff_complete_setup,
  {_af_aifc_recognize, _af_aiff_read_init},
  {_af_aiff_write_init, _af_aiff_instparam_valid, _af_aiff_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  2,
  _af_aiffc_compression_types,
  65535,
  1,
  2,
  9,
  _af_aiff_inst_params
 },
 {
  AF_FILE_AIFF,
  "AIFF", "Audio Interchange File Format", "aiff",
  
 1
     , 
       ((void *)0)
           , _af_aiff_complete_setup,
  {_af_aiff_recognize, _af_aiff_read_init},
  {_af_aiff_write_init, _af_aiff_instparam_valid, _af_aiff_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  0,
  
 ((void *)0)
     ,
  65535,
  1,
  2,
  9,
  _af_aiff_inst_params
 },
 {
  AF_FILE_NEXTSND,
  "NeXT .snd/Sun .au", "NeXT .snd/Sun .au Format", "next",
  
 1
     , 
       ((void *)0)
           , _af_next_complete_setup,
  {_af_next_recognize, _af_next_read_init},
  {_af_next_write_init, 
                       ((void *)0)
                           , _af_next_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  2,
  _af_next_compression_types,
  0,
  0,
  0,
  0, 
    ((void *)0)
 
},
 {
  AF_FILE_WAVE,
  "MS RIFF WAVE", "Microsoft RIFF WAVE Format", "wave",
  
 1
     , 
       ((void *)0)
           , _af_wave_complete_setup,
  {_af_wave_recognize, _af_wave_read_init},
  {_af_wave_write_init, _af_wave_instparam_valid, _af_wave_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  2,
  _af_wave_compression_types,
  AF_NUM_UNLIMITED,
  1,
  AF_NUM_UNLIMITED,
  7,
  _af_wave_inst_params
 },
 {
  AF_FILE_IRCAM,
  "BICSF", "Berkeley/IRCAM/CARL Sound Format", "bicsf",
  
 1
     , 
       ((void *)0)
           , _af_ircam_complete_setup,
  {_af_ircam_recognize, _af_ircam_read_init},
  {_af_ircam_write_init, 
                        ((void *)0)
                            , _af_ircam_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  0,
  
 ((void *)0)
     ,
  0,
  0,
  0,
  0,
  
 ((void *)0)
 
},
 {
  AF_FILE_MPEG1BITSTREAM,
  "MPEG", "MPEG Audio Bitstream", "mpeg",
  
 0
 
},
 {
  AF_FILE_SOUNDDESIGNER1,
  "Sound Designer 1", "Sound Designer 1 File Format", "sd1",
  
 0
 
},
 {
  AF_FILE_SOUNDDESIGNER2,
  "Sound Designer 2", "Sound Designer 2 File Format", "sd2",
  
 0
 
},
 {
  AF_FILE_AVR,
  "AVR", "Audio Visual Research File Format", "avr",
  
 1
     , 
       ((void *)0)
           , _af_avr_complete_setup,
  {_af_avr_recognize, _af_avr_read_init},
  {_af_avr_write_init, 
                      ((void *)0)
                          , _af_avr_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  0,
  
 ((void *)0)
     ,
  0,
  0,
  0,
  0,
 },
 {
  AF_FILE_IFF_8SVX,
  "IFF/8SVX", "Amiga IFF/8SVX Sound File Format", "iff",
  
 1
     , 
       ((void *)0)
           , _af_iff_complete_setup,
  {_af_iff_recognize, _af_iff_read_init},
  {_af_iff_write_init, 
                      ((void *)0)
                          , _af_iff_update},
  AF_SAMPFMT_TWOSCOMP, 8,
  0,
  
 ((void *)0)
     ,
  0,
  0,
  0,
  0,
 },
 {
  AF_FILE_SAMPLEVISION,
  "Sample Vision", "Sample Vision File Format", "smp",
  
 0
 
},
 {
  AF_FILE_VOC,
  "VOC", "Creative Voice File Format", "voc",
  
 0
 
},
 {
  AF_FILE_NIST_SPHERE,
  "NIST SPHERE", "NIST SPHERE File Format", "nist",
  
 1
     , 
       ((void *)0)
           , _af_nist_complete_setup,
  {_af_nist_recognize, _af_nist_read_init},
  {_af_nist_write_init, 
                       ((void *)0)
                           , _af_nist_update},
  AF_SAMPFMT_TWOSCOMP, 16,
  0,
  
 ((void *)0)
     ,
  0,
  0,
  0,
  0,
  
 ((void *)0)
 
},
 {
  AF_FILE_SOUNDFONT2,
  "SoundFont 2", "SoundFont 2 File Format", "sf2",
  
 0
 
}
};

const _CompressionUnit _af_compression[5] =
{
 {
  AF_COMPRESSION_NONE,
  
 1
     ,
  "none",
  "none",
  "not compressed",
  1.0,
  AF_SAMPFMT_TWOSCOMP, 16,
  
 0
      ,
  
 0
      ,
  _af_pcm_format_ok,
  _AFpcminitcompress, _AFpcminitdecompress
 },
 {
  AF_COMPRESSION_G711_ULAW,
  
 1
     ,
  "ulaw",
  "CCITT G.711 u-law",
  "CCITT G.711 u-law",
  2.0,
  AF_SAMPFMT_TWOSCOMP, 16,
  
 0
      ,
  
 0
      ,
  _af_g711_format_ok,
  _AFg711initcompress, _AFg711initdecompress
 },
 {
  AF_COMPRESSION_G711_ALAW,
  
 1
     ,
  "alaw",
  "CCITT G.711 A-law",
  "CCITT G.711 A-law",
  2.0,
  AF_SAMPFMT_TWOSCOMP, 16,
  
 0
      ,
  
 0
      ,
  _af_g711_format_ok,
  _AFg711initcompress, _AFg711initdecompress
 },
 {
  AF_COMPRESSION_IMA,
  
 1
     ,
  "ima4",
  "IMA ADPCM",
  "IMA DVI ADPCM",
  4.0,
  AF_SAMPFMT_TWOSCOMP, 16,
  
 1
     ,
  
 0
      ,
  _af_ima_adpcm_format_ok,
  
 ((void *)0)
     , _af_ima_adpcm_init_decompress
 },
 {
  AF_COMPRESSION_MS_ADPCM,
  
 1
     ,
  "msadpcm",
  "MS ADPCM",
  "Microsoft ADPCM",
  4.0,
  AF_SAMPFMT_TWOSCOMP, 16,
  
 1
     ,
  
 0
      ,
  _af_ms_adpcm_format_ok,
  
 ((void *)0)
     , _af_ms_adpcm_init_decompress
 }
};
