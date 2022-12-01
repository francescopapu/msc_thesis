extern void lava_set(unsigned int bn, unsigned int val);
extern unsigned int lava_get(unsigned int);












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

typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




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










extern int *__errno_location (void) ;








struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


typedef __mode_t mode_t;
typedef __pid_t pid_t;






struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };


struct stat
  {
    __dev_t st_dev;

    unsigned short int __pad1;


    __ino_t st_ino;




    __mode_t st_mode;
    __nlink_t st_nlink;




    __uid_t st_uid;
    __gid_t st_gid;



    __dev_t st_rdev;

    unsigned short int __pad2;


    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __glibc_reserved4;
    unsigned long int __glibc_reserved5;




  };
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
extern int creat (const char *__file, mode_t __mode) ;
extern int lockf (int __fd, int __cmd, off_t __len);
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);


typedef long int __gwchar_t;

typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      ;


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) ;


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) ;


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     ;


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     ;








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
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
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
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;






static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;








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



typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
extern reg_syntax_t re_syntax_options;
typedef enum
{

  REG_ENOSYS = -1,


  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;
struct re_pattern_buffer
{



  unsigned char *__buffer;


  unsigned long int __allocated;


  unsigned long int __used;


  reg_syntax_t __syntax;




  char *__fastmap;





  unsigned char * __translate;


  size_t re_nsub;





  unsigned __can_be_null : 1;
  unsigned __regs_allocated : 2;



  unsigned __fastmap_accurate : 1;



  unsigned __no_sub : 1;



  unsigned __not_bol : 1;


  unsigned __not_eol : 1;


  unsigned __newline_anchor : 1;
};

typedef struct re_pattern_buffer regex_t;


typedef int regoff_t;
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;
extern int regcomp (regex_t *__restrict __preg,
      const char *__restrict __pattern,
      int __cflags);

extern int regexec (const regex_t *__restrict __preg,
      const char *__restrict __string, size_t __nmatch,
      regmatch_t __pmatch[__restrict],
      int __eflags);

extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
   char *__restrict __errbuf, size_t __errbuf_size);

extern void regfree (regex_t *__preg);













struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;



extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0)
     ;


extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) ;

typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) ;



extern struct tm *gmtime (const time_t *__timer) ;



extern struct tm *localtime (const time_t *__timer) ;





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) ;



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) ;





extern char *asctime (const struct tm *__tp) ;


extern char *ctime (const time_t *__timer) ;







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) ;


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) ;
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year) ;
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;





extern int timespec_get (struct timespec *__ts, int __base)
     ;

















extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);







typedef __sig_atomic_t sig_atomic_t;








typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     ;

extern int kill (__pid_t __pid, int __sig) ;






extern int killpg (__pid_t __pgrp, int __sig) ;




extern int raise (int __sig) ;




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     ;
extern int gsignal (int __sig) ;




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigblock (int __mask) ;


extern int sigsetmask (int __mask) ;


extern int siggetmask (void) ;
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) ;


extern int sigfillset (sigset_t *__set) ;


extern int sigaddset (sigset_t *__set, int __signo) ;


extern int sigdelset (sigset_t *__set, int __signo) ;


extern int sigismember (const sigset_t *__set, int __signo)
     ;
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) ;






extern int sigsuspend (const sigset_t *__set) ;


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) ;


extern int sigpending (sigset_t *__set) ;






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     ;






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) ;






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     ;



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     ;
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};





struct _fpstate
{

  __uint32_t cw;
  __uint32_t sw;
  __uint32_t tag;
  __uint32_t ipoff;
  __uint32_t cssel;
  __uint32_t dataoff;
  __uint32_t datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;


  __uint32_t _fxsr_env[6];
  __uint32_t mxcsr;
  __uint32_t reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  __uint32_t padding[56];
};
struct sigcontext
{
  unsigned short gs, __gsh;
  unsigned short fs, __fsh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs, __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss, __ssh;
  struct _fpstate * fpstate;
  unsigned long oldmask;
  unsigned long cr2;
};
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};


extern int sigreturn (struct sigcontext *__scp) ;










extern int siginterrupt (int __sig, int __interrupt) ;

struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;


typedef int greg_t;





typedef greg_t gregset_t[19];
struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     ;



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) ;
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask);


extern int pthread_kill (pthread_t __threadid, int __signo) ;






extern int __libc_current_sigrtmin (void) ;

extern int __libc_current_sigrtmax (void) ;













extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) ;



extern int fstat (int __fd, struct stat *__buf) ;
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     ;
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) ;
extern int chmod (const char *__file, __mode_t __mode)
     ;





extern int lchmod (const char *__file, __mode_t __mode)
     ;




extern int fchmod (int __fd, __mode_t __mode) ;





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     ;






extern __mode_t umask (__mode_t __mask) ;
extern int mkdir (const char *__path, __mode_t __mode)
     ;





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     ;






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     ;





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) ;





extern int mkfifo (const char *__path, __mode_t __mode)
     ;





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     ;





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     ;




extern int futimens (int __fd, const struct timespec __times[2]) ;
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     ;
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) ;
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) ;
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     ;
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) ;

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     ;


struct buffer {
 int fd;
 struct stat st;
 const void *fbuf;
 size_t flen;
 off_t eoff;
 void *ebuf;
 size_t elen;
};

union VALUETYPE {
 uint8_t b;
 uint16_t h;
 uint32_t l;
 uint64_t q;
 uint8_t hs[2];
 uint8_t hl[4];
 uint8_t hq[8];
 char s[96];
 unsigned char us[96];
 float f;
 double d;
};

struct magic {

 uint16_t cont_level;
 uint8_t flag;
 uint8_t factor;


 uint8_t reln;
 uint8_t vallen;
 uint8_t type;
 uint8_t in_type;
 uint8_t in_op;
 uint8_t mask_op;

 uint8_t cond;



 uint8_t factor_op;
 int32_t offset;

 int32_t in_offset;

 uint32_t lineno;

 union {
  uint64_t _mask;
  struct {
   uint32_t _count;
   uint32_t _flags;
  } _s;
 } _u;




 union VALUETYPE value;

 char desc[64];

 char mimetype[80];

 char apple[8];

 char ext[64];
};
struct mlist {
 struct magic *magic;
 uint32_t nmagic;
 void *map;
 struct mlist *next, *prev;
};
struct level_info {
 int32_t off;
 int got_match;

 int last_match;
 int last_cond;

};



struct magic_set {
 struct mlist *mlist[2];
 struct cont {
  size_t len;
  struct level_info *li;
 } c;
 struct out {
  char *buf;
  char *pbuf;
 } o;
 uint32_t offset;

 uint32_t eoffset;
 int error;
 int flags;
 int event_flags;

 const char *file;
 size_t line;
 mode_t mode;


 struct {
  const char *s;
  size_t s_len;
  size_t offset;
  size_t rm_len;
 } search;



 union VALUETYPE ms_value;
 uint16_t indir_max;
 uint16_t name_max;
 uint16_t elf_shnum_max;
 uint16_t elf_phnum_max;
 uint16_t elf_notes_max;
 uint16_t regex_max;
 size_t bytes_max;






};


typedef unsigned long unichar;

struct stat;


 const char *file_fmttime(uint64_t, int, char *);
 struct magic_set *file_ms_alloc(int);
 void file_ms_free(struct magic_set *);
 int file_default(struct magic_set *, size_t);
 int file_buffer(struct magic_set *, int, const char *, const void *,
    size_t);
 int file_fsmagic(struct magic_set *, const char *, struct stat *);
 int file_pipe2file(struct magic_set *, int, const void *, size_t);
 int file_vprintf(struct magic_set *, const char *, va_list)
    ;
 size_t file_printedlen(const struct magic_set *);
 int file_replace(struct magic_set *, const char *, const char *);
 int file_printf(struct magic_set *, const char *, ...)
    ;
 int file_reset(struct magic_set *, int);
 int file_tryelf(struct magic_set *, const struct buffer *);
 int file_trycdf(struct magic_set *, const struct buffer *);

 int file_zmagic(struct magic_set *, const struct buffer *,
    const char *);

 int file_ascmagic(struct magic_set *, const struct buffer *,
    int);
 int file_ascmagic_with_encoding(struct magic_set *,
    const struct buffer *, unichar *, size_t, const char *, const char *, int);
 int file_encoding(struct magic_set *, const struct buffer *,
    unichar **, size_t *, const char **, const char **, const char **);
 int file_is_json(struct magic_set *, const struct buffer *);
 int file_is_tar(struct magic_set *, const struct buffer *);
 int file_softmagic(struct magic_set *, const struct buffer *,
    uint16_t *, uint16_t *, int, int);
 int file_apprentice(struct magic_set *, const char *, int);
 int buffer_apprentice(struct magic_set *, struct magic **,
    size_t *, size_t);
 int file_magicfind(struct magic_set *, const char *, struct mlist *);
 uint64_t file_signextend(struct magic_set *, struct magic *,
    uint64_t);
 void file_badread(struct magic_set *);
 void file_badseek(struct magic_set *);
 void file_oomem(struct magic_set *, size_t);
 void file_error(struct magic_set *, int, const char *, ...)
    ;
 void file_magerror(struct magic_set *, const char *, ...)
    ;
 void file_magwarn(struct magic_set *, const char *, ...)
    ;
 void file_mdump(struct magic *);
 void file_showstr(FILE *, const char *, size_t);
 size_t file_mbswidth(const char *);
 const char *file_getbuffer(struct magic_set *);
 ssize_t sread(int, void *, size_t, int);
 int file_check_mem(struct magic_set *, unsigned int);
 int file_looks_utf8(const unsigned char *, size_t, unichar *,
    size_t *);
 size_t file_pstring_length_size(const struct magic *);
 size_t file_pstring_get_length(const struct magic *, const char *);
 char * file_printable(char *, size_t, const char *);





 void buffer_init(struct buffer *, int, const void *, size_t);
 void buffer_fini(struct buffer *);
 int buffer_fill(const struct buffer *);







struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, const char *__locale) ;


extern struct lconv *localeconv (void) ;


extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) ;
extern __locale_t duplocale (__locale_t __dataset) ;



extern void freelocale (__locale_t __dataset) ;






extern __locale_t uselocale (__locale_t __dataset) ;













typedef struct {
 const char *pat;


 locale_t old_lc_ctype;
 locale_t c_lc_ctype;



 int rc;
 regex_t rx;
} file_regex_t;

 int file_regcomp(file_regex_t *, const char *, int);
 int file_regexec(file_regex_t *, const char *, size_t, regmatch_t *,
    int);
 void file_regfree(file_regex_t *);
 void file_regerror(file_regex_t *, int, struct magic_set *);

typedef struct {
 char *buf;
 uint32_t offset;
} file_pushbuf_t;

 file_pushbuf_t *file_push_buffer(struct magic_set *);
 char *file_pop_buffer(struct magic_set *, file_pushbuf_t *);


extern const char *file_names[];
extern const size_t file_nnames;
size_t strlcpy(char *, const char *, size_t);


size_t strlcat(char *, const char *, size_t);
const char *fmtcheck(const char *, const char *)
     ;
 const char *file_getprogname(void);
 void file_setprogname(const char *);
 void file_err(int, const char *, ...)
    ;
 void file_errx(int, const char *, ...)
    ;
 void file_warn(const char *, ...)
    ;
 void file_warnx(const char *, ...)
    ;


static const char rcsid[] = "@(#)$File: cdf.c,v 1.113 2018/10/15 16:29:16 christos Exp $";






extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     ;






typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) ;




extern double atof (const char *__nptr)
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;





__extension__ extern long long int atoll (const char *__nptr)
     ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     ;





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     ;





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;

extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;
extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;










extern void *realloc (void *__ptr, size_t __size)
     ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;










extern void *alloca (size_t __size) ;











extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     ;




extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;







extern int at_quick_exit (void (*__func) (void)) ;







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) ;





extern void quick_exit (int __status) ;







extern void _Exit (int __status) ;






extern char *getenv (const char *__name) ;

extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
extern char *mktemp (char *__template) ;
extern int mkstemp (char *__template) ;
extern int mkstemps (char *__template, int __suffixlen) ;
extern char *mkdtemp (char *__template) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x) ;
extern long int labs (long int __x) ;



__extension__ extern long long int llabs (long long int __x)
     ;







extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;






extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     ;








extern int rpmatch (const char *__response) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     ;
extern int getloadavg (double __loadavg[], int __nelem)
     ;





typedef __useconds_t useconds_t;
typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) ;
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) ;
extern unsigned int alarm (unsigned int __seconds) ;
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     ;



extern int chdir (const char *__path) ;



extern int fchdir (int __fd) ;
extern char *getcwd (char *__buf, size_t __size) ;
extern char *getwd (char *__buf)
     ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2) ;
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     ;




extern int execv (const char *__path, char *const __argv[])
     ;



extern int execle (const char *__path, const char *__arg, ...)
     ;



extern int execl (const char *__path, const char *__arg, ...)
     ;



extern int execvp (const char *__file, char *const __argv[])
     ;




extern int execlp (const char *__file, const char *__arg, ...)
     ;
extern int nice (int __inc) ;




extern void _exit (int __status) ;





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (const char *__path, int __name)
     ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;



extern size_t confstr (int __name, char *__buf, size_t __len) ;




extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
extern int setpgrp (void) ;






extern __pid_t setsid (void) ;



extern __pid_t getsid (__pid_t __pid) ;



extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[]) ;
extern int setuid (__uid_t __uid) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) ;




extern int seteuid (__uid_t __uid) ;






extern int setgid (__gid_t __gid) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) ;




extern int setegid (__gid_t __gid) ;
extern __pid_t fork (void) ;







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
     ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     ;




extern int symlink (const char *__from, const char *__to)
     ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     ;



extern int unlink (const char *__name) ;



extern int unlinkat (int __fd, const char *__name, int __flag)
     ;



extern int rmdir (const char *__path) ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) ;




extern int setlogin (const char *__name) ;
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       ;







extern int gethostname (char *__name, size_t __len) ;






extern int sethostname (const char *__name, size_t __len)
     ;



extern int sethostid (long int __id) ;





extern int getdomainname (char *__name, size_t __len)
     ;
extern int setdomainname (const char *__name, size_t __len)
     ;





extern int vhangup (void) ;


extern int revoke (const char *__file) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose) ;






extern int chroot (const char *__path) ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void) ;




extern int getdtablesize (void) ;
extern int truncate (const char *__file, __off_t __length)
     ;
extern int ftruncate (int __fd, __off_t __length) ;
extern int brk (void *__addr) ;





extern void *sbrk (intptr_t __delta) ;
extern long int syscall (long int __sysno, ...) ;
extern int fdatasync (int __fildes);















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     ;





extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern void *memchr (const void *__s, int __c, size_t __n)
      ;




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     ;

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     ;


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     ;

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) ;


extern int strcmp (const char *__s1, const char *__s2)
     ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;


extern int strcoll (const char *__s1, const char *__s2)
     ;

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     ;

extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     ;

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) ;




extern char *strdup (const char *__s)
     ;






extern char *strndup (const char *__string, size_t __n)
     ;

extern char *strchr (const char *__s, int __c)
     ;
extern char *strrchr (const char *__s, int __c)
     ;





extern size_t strcspn (const char *__s, const char *__reject)
     ;


extern size_t strspn (const char *__s, const char *__accept)
     ;
extern char *strpbrk (const char *__s, const char *__accept)
     ;
extern char *strstr (const char *__haystack, const char *__needle)
     ;




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     ;




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     ;

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     ;


extern size_t strlen (const char *__s)
     ;





extern size_t strnlen (const char *__string, size_t __maxlen)
     ;





extern char *strerror (int __errnum) ;

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r")

                                       ;
extern char *strerror_l (int __errnum, __locale_t __l) ;





extern void __bzero (void *__s, size_t __n) ;



extern void bcopy (const void *__src, void *__dest, size_t __n)
     ;


extern void bzero (void *__s, size_t __n) ;


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern char *index (const char *__s, int __c)
     ;
extern char *rindex (const char *__s, int __c)
     ;




extern int ffs (int __i) ;
extern int strcasecmp (const char *__s1, const char *__s2)
     ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     ;




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     ;
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     ;



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     ;
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     ;



enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc (void)
     ;
extern const __int32_t **__ctype_tolower_loc (void)
     ;
extern const __int32_t **__ctype_toupper_loc (void)
     ;






extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;



extern int tolower (int __c) ;


extern int toupper (int __c) ;








extern int isblank (int) ;


extern int isascii (int __c) ;



extern int toascii (int __c) ;



extern int _toupper (int) ;
extern int _tolower (int) ;
extern int isalnum_l (int, __locale_t) ;
extern int isalpha_l (int, __locale_t) ;
extern int iscntrl_l (int, __locale_t) ;
extern int isdigit_l (int, __locale_t) ;
extern int islower_l (int, __locale_t) ;
extern int isgraph_l (int, __locale_t) ;
extern int isprint_l (int, __locale_t) ;
extern int ispunct_l (int, __locale_t) ;
extern int isspace_l (int, __locale_t) ;
extern int isupper_l (int, __locale_t) ;
extern int isxdigit_l (int, __locale_t) ;

extern int isblank_l (int, __locale_t) ;



extern int __tolower_l (int __c, __locale_t __l) ;
extern int tolower_l (int __c, __locale_t __l) ;


extern int __toupper_l (int __c, __locale_t __l) ;
extern int toupper_l (int __c, __locale_t __l) ;







typedef int32_t cdf_secid_t;
typedef struct {
 uint64_t h_magic;

 uint64_t h_uuid[2];
 uint16_t h_revision;
 uint16_t h_version;
 uint16_t h_byte_order;
 uint16_t h_sec_size_p2;
 uint16_t h_short_sec_size_p2;
 uint8_t h_unused0[10];
 uint32_t h_num_sectors_in_sat;
 uint32_t h_secid_first_directory;
 uint8_t h_unused1[4];
 uint32_t h_min_size_standard_stream;
 cdf_secid_t h_secid_first_sector_in_short_sat;
 uint32_t h_num_sectors_in_short_sat;
 cdf_secid_t h_secid_first_sector_in_master_sat;
 uint32_t h_num_sectors_in_master_sat;
 cdf_secid_t h_master_sat[436/4];
} cdf_header_t;






typedef int32_t cdf_dirid_t;


typedef int64_t cdf_timestamp_t;



typedef struct {
 uint16_t d_name[32];
 uint16_t d_namelen;
 uint8_t d_type;






 uint8_t d_color;


 cdf_dirid_t d_left_child;
 cdf_dirid_t d_right_child;
 cdf_dirid_t d_storage;
 uint64_t d_storage_uuid[2];
 uint32_t d_flags;
 cdf_timestamp_t d_created;
 cdf_timestamp_t d_modified;
 cdf_secid_t d_stream_first_sector;
 uint32_t d_size;
 uint32_t d_unused0;
} cdf_directory_t;



typedef struct {
 cdf_secid_t *sat_tab;
 size_t sat_len;
} cdf_sat_t;

typedef struct {
 cdf_directory_t *dir_tab;
 size_t dir_len;
} cdf_dir_t;

typedef struct {
 void *sst_tab;
 size_t sst_len;
 size_t sst_dirlen;
 size_t sst_ss;
} cdf_stream_t;

typedef struct {
 uint32_t cl_dword;
 uint16_t cl_word[2];
 uint8_t cl_two[2];
 uint8_t cl_six[6];
} cdf_classid_t;

typedef struct {
 uint16_t si_byte_order;
 uint16_t si_zero;
 uint16_t si_os_version;
 uint16_t si_os;
 cdf_classid_t si_class;
 uint32_t si_count;
} cdf_summary_info_header_t;



typedef struct {
 cdf_classid_t sd_class;
 uint32_t sd_offset;
} cdf_section_declaration_t;

typedef struct {
 uint32_t sh_len;
 uint32_t sh_properties;
} cdf_section_header_t;

typedef struct {
 uint32_t pi_id;
 uint32_t pi_type;
 union {
  uint16_t _pi_u16;
  int16_t _pi_s16;
  uint32_t _pi_u32;
  int32_t _pi_s32;
  uint64_t _pi_u64;
  int64_t _pi_s64;
  cdf_timestamp_t _pi_tp;
  float _pi_f;
  double _pi_d;
  struct {
   uint32_t s_len;
   const char *s_buf;
  } _pi_str;
 } pi_val;
} cdf_property_info_t;
typedef struct {
 int i_fd;
 const unsigned char *i_buf;
 size_t i_len;
} cdf_info_t;


typedef struct {
 uint16_t ce_namlen;
 uint32_t ce_num;
 uint64_t ce_timestamp;
 uint16_t ce_name[256];
} cdf_catalog_entry_t;

typedef struct {
 size_t cat_num;
 cdf_catalog_entry_t cat_e[1];
} cdf_catalog_t;

struct timespec;
int cdf_timestamp_to_timespec(struct timespec *, cdf_timestamp_t);
int cdf_timespec_to_timestamp(cdf_timestamp_t *, const struct timespec *);
int cdf_read_header(const cdf_info_t *, cdf_header_t *);
void cdf_swap_header(cdf_header_t *);
void cdf_unpack_header(cdf_header_t *, char *);
void cdf_swap_dir(cdf_directory_t *);
void cdf_unpack_dir(cdf_directory_t *, char *);
void cdf_swap_class(cdf_classid_t *);
ssize_t cdf_read_sector(const cdf_info_t *, void *, size_t, size_t,
    const cdf_header_t *, cdf_secid_t);
ssize_t cdf_read_short_sector(const cdf_stream_t *, void *, size_t, size_t,
    const cdf_header_t *, cdf_secid_t);
int cdf_read_sat(const cdf_info_t *, cdf_header_t *, cdf_sat_t *);
size_t cdf_count_chain(const cdf_sat_t *, cdf_secid_t, size_t);
int cdf_read_long_sector_chain(const cdf_info_t *, const cdf_header_t *,
    const cdf_sat_t *, cdf_secid_t, size_t, cdf_stream_t *);
int cdf_read_short_sector_chain(const cdf_header_t *, const cdf_sat_t *,
    const cdf_stream_t *, cdf_secid_t, size_t, cdf_stream_t *);
int cdf_read_sector_chain(const cdf_info_t *, const cdf_header_t *,
    const cdf_sat_t *, const cdf_sat_t *, const cdf_stream_t *, cdf_secid_t,
    size_t, cdf_stream_t *);
int cdf_read_dir(const cdf_info_t *, const cdf_header_t *, const cdf_sat_t *,
    cdf_dir_t *);
int cdf_read_ssat(const cdf_info_t *, const cdf_header_t *, const cdf_sat_t *,
    cdf_sat_t *);
int cdf_read_short_stream(const cdf_info_t *, const cdf_header_t *,
    const cdf_sat_t *, const cdf_dir_t *, cdf_stream_t *,
    const cdf_directory_t **);
int cdf_read_property_info(const cdf_stream_t *, const cdf_header_t *, uint32_t,
    cdf_property_info_t **, size_t *, size_t *);
int cdf_read_user_stream(const cdf_info_t *, const cdf_header_t *,
    const cdf_sat_t *, const cdf_sat_t *, const cdf_stream_t *,
    const cdf_dir_t *, const char *, cdf_stream_t *);
int cdf_find_stream(const cdf_dir_t *, const char *, int);
int cdf_zero_stream(cdf_stream_t *);
int cdf_read_doc_summary_info(const cdf_info_t *, const cdf_header_t *,
    const cdf_sat_t *, const cdf_sat_t *, const cdf_stream_t *,
    const cdf_dir_t *, cdf_stream_t *);
int cdf_read_summary_info(const cdf_info_t *, const cdf_header_t *,
    const cdf_sat_t *, const cdf_sat_t *, const cdf_stream_t *,
    const cdf_dir_t *, cdf_stream_t *);
int cdf_unpack_summary_info(const cdf_stream_t *, const cdf_header_t *,
    cdf_summary_info_header_t *, cdf_property_info_t **, size_t *);
int cdf_unpack_catalog(const cdf_header_t *, const cdf_stream_t *,
    cdf_catalog_t **);
int cdf_print_classid(char *, size_t, const cdf_classid_t *);
int cdf_print_property_name(char *, size_t, uint32_t);
int cdf_print_elapsed_time(char *, size_t, cdf_timestamp_t);
uint16_t cdf_tole2(uint16_t);
uint32_t cdf_tole4(uint32_t);
uint64_t cdf_tole8(uint64_t);
char *cdf_ctime(const time_t *, char *);
char *cdf_u16tos8(char *, size_t, const uint16_t *);







static union {
 char s[4];
 uint32_t u;
} cdf_bo;
static void *
cdf_malloc(const char *file ,
    size_t line , size_t n)
{

                              ;
 return malloc(n);
}


static void *
cdf_realloc(const char *file ,
    size_t line , void *p, size_t n)
{

                              ;
 return realloc(p, n);
}


static void *
cdf_calloc(const char *file ,
    size_t line , size_t n, size_t u)
{

                                                      ;
 return calloc(n, u);
}




static uint16_t
_cdf_tole2(uint16_t sv)
{
 uint16_t rv={0};
 uint8_t *s = (uint8_t *)(void *)&sv;
 uint8_t *d = (uint8_t *)(void *)&rv;
 d[0] = s[1];
 d[1] = s[0];
 return rv;
}




static uint32_t
_cdf_tole4(uint32_t sv)
{
 uint32_t rv={0};
 uint8_t *s = (uint8_t *)(void *)&sv;
 uint8_t *d = (uint8_t *)(void *)&rv;
 d[0] = s[3];
 d[1] = s[2];
 d[2] = s[1];
 d[3] = s[0];
 return rv;
}




static uint64_t
_cdf_tole8(uint64_t sv)
{
 uint64_t rv={0};
 uint8_t *s = (uint8_t *)(void *)&sv;
 uint8_t *d = (uint8_t *)(void *)&rv;
 d[0] = s[7];
 d[1] = s[6];
 d[2] = s[5];
 d[3] = s[4];
 d[4] = s[3];
 d[5] = s[2];
 d[6] = s[1];
 d[7] = s[0];
 return rv;
}





static uint32_t
cdf_getuint32(const uint8_t *p, size_t offs)
{
 uint32_t rv={0};
 (void)memcpy(&rv, p + offs * sizeof(uint32_t), sizeof(rv));
 return ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(rv) : (uint32_t)(rv)));
}






uint16_t
cdf_tole2(uint16_t sv)
{
 return ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(sv) : (uint16_t)(sv)));
}

uint32_t
cdf_tole4(uint32_t sv)
{
 return ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(sv) : (uint32_t)(sv)));
}

uint64_t
cdf_tole8(uint64_t sv)
{
 return ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(sv) : (uint64_t)(sv)));
}

void
cdf_swap_header(cdf_header_t *h)
{
 if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(89, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && &((*h).h_unused1)) {
lava_set(28, *(const unsigned int *)&((*h).h_unused1));
}
if ( (h) && &((*h).h_master_sat)) {
lava_set(134, *(const unsigned int *)&((*h).h_master_sat));
}
size_t i={0};

 if ( (h) && &((*h).h_revision)) {
lava_set(40, *(const unsigned int *)&((*h).h_revision));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(64, *(const unsigned int *)((*h).h_unused0));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(131, *((const unsigned int *)((*h).h_unused0) + 1));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(144, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
h->h_magic = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(h->h_magic) : (uint64_t)(h->h_magic)));
 if (h) {
lava_set(79, *(const unsigned int *)h);
}
if ( (h) && &((*h).h_sec_size_p2)) {
lava_set(83, *(const unsigned int *)&((*h).h_sec_size_p2));
}
if ( (h) && &((*h).h_num_sectors_in_sat)) {
lava_set(160, *(const unsigned int *)&((*h).h_num_sectors_in_sat));
}
if ( (h) && &((*h).h_unused1)) {
lava_set(110, *(const unsigned int *)&((*h).h_unused1));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(70, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
h->h_uuid[0] = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(h->h_uuid[0]) : (uint64_t)(h->h_uuid[0])));
 if ( (h) && &((*h).h_version)) {
lava_set(80, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(118, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && ((*h).h_master_sat)) {
lava_set(163, *(const unsigned int *)((*h).h_master_sat));
}
h->h_uuid[1 + ((((lava_get(10) + lava_get(11)) * lava_get(12)) == 0x8c87a7e4) * lava_get(11))] = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(h->h_uuid[1]) : (uint64_t)(h->h_uuid[1])));
 if ( (h) && &((*h).h_byte_order)) {
lava_set(107, *(const unsigned int *)&((*h).h_byte_order));
}
if ( (h) && ((*h).h_unused1)) {
lava_set(122, *(const unsigned int *)((*h).h_unused1));
}
h->h_revision = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(h->h_revision) : (uint16_t)(h->h_revision)));
 if ( (h) && &((*h).h_revision)) {
lava_set(62, *(const unsigned int *)&((*h).h_revision));
}
if ( (h) && &((*h).h_version)) {
lava_set(66, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_sec_size_p2)) {
lava_set(97, *(const unsigned int *)&((*h).h_sec_size_p2));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(149, *(const unsigned int *)((*h).h_unused0));
}
if ( (h) && &((*h).h_num_sectors_in_short_sat)) {
lava_set(13, *(const unsigned int *)&((*h).h_num_sectors_in_short_sat));
}
h->h_version = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(h->h_version) : (uint16_t)(h->h_version)));
 if ( (h) && ((*h).h_uuid)) {
lava_set(132, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && ((*h).h_uuid)) {
lava_set(116, *((const unsigned int *)((*h).h_uuid) + 1));
}
if ( (h) && &((*h).h_master_sat)) {
lava_set(148, *(const unsigned int *)&((*h).h_master_sat));
}
h->h_byte_order = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(h->h_byte_order) : (uint16_t)(h->h_byte_order)));
 if ( (h) && &((*h).h_version)) {
lava_set(93, *(const unsigned int *)&((*h).h_version));
}
h->h_sec_size_p2 = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(h->h_sec_size_p2) : (uint16_t)(h->h_sec_size_p2)));
 if ( (h) && &((*h).h_uuid)) {
lava_set(19, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_revision)) {
lava_set(36, *(const unsigned int *)&((*h).h_revision));
}
if ( (h) && &((*h).h_secid_first_sector_in_master_sat)) {
lava_set(45, *(const unsigned int *)&((*h).h_secid_first_sector_in_master_sat));
}
if ( (h) && &((*h).h_master_sat)) {
lava_set(119, *(const unsigned int *)&((*h).h_master_sat));
}
h->h_short_sec_size_p2 = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(h->h_short_sec_size_p2) : (uint16_t)(h->h_short_sec_size_p2)));
 if (h) {
lava_set(16, *(const unsigned int *)h);
}
if ( (h) && &((*h).h_magic)) {
lava_set(117, *(const unsigned int *)&((*h).h_magic));
}
if ( (h) && &((*h).h_num_sectors_in_sat)) {
lava_set(171, *(const unsigned int *)&((*h).h_num_sectors_in_sat));
}
if ( (h) && ((*h).h_unused1)) {
lava_set(85, *(const unsigned int *)((*h).h_unused1));
}
h->h_num_sectors_in_sat = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(h->h_num_sectors_in_sat) : (uint32_t)(h->h_num_sectors_in_sat)));
 if ( (h) && ((*h).h_uuid)) {
lava_set(72, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(113, *(const unsigned int *)((*h).h_unused0));
}
h->h_secid_first_directory = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(h->h_secid_first_directory) : (uint32_t)(h->h_secid_first_directory)));
 if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(154, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && ((*h).h_unused1)) {
lava_set(109, *(const unsigned int *)((*h).h_unused1));
}
h->h_min_size_standard_stream =
     ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(h->h_min_size_standard_stream) : (uint32_t)(h->h_min_size_standard_stream)));
 if ( (h) && ((*h).h_unused0)) {
lava_set(129, *(const unsigned int *)((*h).h_unused0));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(153, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
h->h_secid_first_sector_in_short_sat =
     ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)h->h_secid_first_sector_in_short_sat) : (uint32_t)((uint32_t)h->h_secid_first_sector_in_short_sat)));
 if ( (h) && &((*h).h_version)) {
lava_set(29, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_short_sec_size_p2)) {
lava_set(147, *(const unsigned int *)&((*h).h_short_sec_size_p2));
}
h->h_num_sectors_in_short_sat =
     ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(h->h_num_sectors_in_short_sat) : (uint32_t)(h->h_num_sectors_in_short_sat)));
 if ( (h) && &((*h).h_sec_size_p2)) {
lava_set(104, *(const unsigned int *)&((*h).h_sec_size_p2));
}
if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(114, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && ((*h).h_unused1)) {
lava_set(106, *(const unsigned int *)((*h).h_unused1));
}
if ( (h) && &((*h).h_secid_first_sector_in_master_sat)) {
lava_set(152, *(const unsigned int *)&((*h).h_secid_first_sector_in_master_sat));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(143, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
h->h_secid_first_sector_in_master_sat =
     ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)h->h_secid_first_sector_in_master_sat) : (uint32_t)((uint32_t)h->h_secid_first_sector_in_master_sat)));
 if ( (h) && &((*h).h_uuid)) {
lava_set(52, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_master_sat)) {
lava_set(158, *(const unsigned int *)&((*h).h_master_sat));
}
h->h_num_sectors_in_master_sat =
     ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(h->h_num_sectors_in_master_sat) : (uint32_t)(h->h_num_sectors_in_master_sat)));
 if (h) {
lava_set(98, *((const unsigned int *)h + 1));
}
if ( (h) && &((*h).h_byte_order)) {
lava_set(65, *(const unsigned int *)&((*h).h_byte_order));
}
if ( (h) && &((*h).h_unused1)) {
lava_set(157, *(const unsigned int *)&((*h).h_unused1));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(161, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
for (i = 0; i < (sizeof(h->h_master_sat) / sizeof(h->h_master_sat[0])); i++)
  h->h_master_sat[i + ((((lava_get(13) * lava_get(14)) - lava_get(15)) == 0x5456152f) * lava_get(14))] = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)h->h_master_sat[i]) : (uint32_t)((uint32_t)h->h_master_sat[i])));
}

void
cdf_unpack_header(cdf_header_t *h, char *buf)
{
 if (buf) {
lava_set(102, *((const unsigned int *)buf + 1));
}
size_t i={0};
 size_t len = 0;

 (void)memcpy(&(h->h_magic), &buf[len + (lava_get(5) * (0x6e62504d == lava_get(5)))], sizeof(h->h_magic)), len += sizeof(h->h_magic);
 if (h) {
lava_set(88, *((const unsigned int *)h + 1));
}
if ( (h) && &((*h).h_magic)) {
lava_set(6, *(const unsigned int *)&((*h).h_magic));
}
(void)memcpy((h->h_uuid), &buf[len], sizeof(h->h_uuid)), len += sizeof(h->h_uuid);
 if (h) {
lava_set(111, *(const unsigned int *)h);
}
if ( (h) && &((*h).h_magic)) {
lava_set(12, *((const unsigned int *)&((*h).h_magic) + 1));
}
(void)memcpy(&(h->h_revision), &buf[len], sizeof(h->h_revision)), len += sizeof(h->h_revision);
 (void)memcpy(&(h->h_version), &buf[len], sizeof(h->h_version)), len += sizeof(h->h_version);
 if (h) {
lava_set(156, *(const unsigned int *)h);
}
if (h) {
lava_set(103, *((const unsigned int *)h + 2));
}
if ( (h) && &((*h).h_revision)) {
lava_set(139, *(const unsigned int *)&((*h).h_revision));
}
(void)memcpy(&(h->h_byte_order), &buf[len], sizeof(h->h_byte_order)), len += sizeof(h->h_byte_order);
 if ( (h) && &((*h).h_uuid)) {
lava_set(150, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_revision)) {
lava_set(121, *(const unsigned int *)&((*h).h_revision));
}
if ( (h) && &((*h).h_version)) {
lava_set(10, *(const unsigned int *)&((*h).h_version));
}
if (buf) {
lava_set(74, *(const unsigned int *)buf);
}
(void)memcpy(&(h->h_sec_size_p2), &buf[len], sizeof(h->h_sec_size_p2)), len += sizeof(h->h_sec_size_p2);
 if ( (h) && &((*h).h_uuid)) {
lava_set(136, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_revision)) {
lava_set(23, *(const unsigned int *)&((*h).h_revision));
}
if (buf) {
lava_set(82, *(const unsigned int *)buf);
}
(void)memcpy(&(h->h_short_sec_size_p2), &buf[len], sizeof(h->h_short_sec_size_p2)), len += sizeof(h->h_short_sec_size_p2);
 if (h) {
lava_set(101, *(const unsigned int *)h);
}
if ( (h) && ((*h).h_uuid)) {
lava_set(31, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && &((*h).h_byte_order)) {
lava_set(30, *(const unsigned int *)&((*h).h_byte_order));
}
(void)memcpy((h->h_unused0), &buf[len], sizeof(h->h_unused0)), len += sizeof(h->h_unused0);
 if ( (h) && &((*h).h_uuid)) {
lava_set(95, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_sec_size_p2)) {
lava_set(48, *(const unsigned int *)&((*h).h_sec_size_p2));
}
if ( (h) && &((*h).h_short_sec_size_p2)) {
lava_set(108, *(const unsigned int *)&((*h).h_short_sec_size_p2));
}
if (buf) {
lava_set(8, *(const unsigned int *)buf);
}
(void)memcpy(&(h->h_num_sectors_in_sat), &buf[len] + (lava_get(6) * (0x6557644e == lava_get(6))), sizeof(h->h_num_sectors_in_sat)), len += sizeof(h->h_num_sectors_in_sat);
 if ( (h) && &((*h).h_magic)) {
lava_set(67, *(const unsigned int *)&((*h).h_magic));
}
if ( (h) && &((*h).h_revision)) {
lava_set(92, *(const unsigned int *)&((*h).h_revision));
}
if ( (h) && &((*h).h_version)) {
lava_set(145, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(124, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(126, *(const unsigned int *)((*h).h_unused0));
}
(void)memcpy(&(h->h_secid_first_directory), &buf[len], sizeof(h->h_secid_first_directory)), len += sizeof(h->h_secid_first_directory);
 if ( (h) && &((*h).h_magic)) {
lava_set(140, *((const unsigned int *)&((*h).h_magic) + 1));
}
if ( (h) && ((*h).h_uuid)) {
lava_set(51, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && &((*h).h_version)) {
lava_set(76, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_sec_size_p2)) {
lava_set(7, *(const unsigned int *)&((*h).h_sec_size_p2));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(34, *(const unsigned int *)&((*h).h_unused0));
}
(void)memcpy((h->h_unused1), &buf[len], sizeof(h->h_unused1)), len += sizeof(h->h_unused1);
 if (h) {
lava_set(41, *(const unsigned int *)h);
}
if ( (h) && &((*h).h_short_sec_size_p2)) {
lava_set(91, *(const unsigned int *)&((*h).h_short_sec_size_p2));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(61, *(const unsigned int *)((*h).h_unused0));
}
if ( (h) && ((*h).h_unused1)) {
lava_set(130, *(const unsigned int *)((*h).h_unused1));
}
(void)memcpy(&(h->h_min_size_standard_stream), &buf[len], sizeof(h->h_min_size_standard_stream) + (lava_get(7) * (0x75637177 == lava_get(7)))), len += sizeof(h->h_min_size_standard_stream);
 if (h) {
lava_set(137, *(const unsigned int *)h);
}
if ( (h) && &((*h).h_uuid)) {
lava_set(14, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_version)) {
lava_set(86, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_short_sec_size_p2)) {
lava_set(24, *(const unsigned int *)&((*h).h_short_sec_size_p2));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(174, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && &((*h).h_num_sectors_in_sat)) {
lava_set(38, *(const unsigned int *)&((*h).h_num_sectors_in_sat));
}
if (buf) {
lava_set(138, *(const unsigned int *)buf);
}
(void)memcpy(&(h->h_secid_first_sector_in_short_sat), &buf[len], sizeof(h->h_secid_first_sector_in_short_sat)), len += sizeof(h->h_secid_first_sector_in_short_sat);
 if ( (h) && &((*h).h_uuid)) {
lava_set(146, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && &((*h).h_version)) {
lava_set(127, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_byte_order)) {
lava_set(39, *(const unsigned int *)&((*h).h_byte_order));
}
if ( (h) && &((*h).h_sec_size_p2)) {
lava_set(135, *(const unsigned int *)&((*h).h_sec_size_p2));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(123, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(49, *(const unsigned int *)((*h).h_unused0));
}
if ( (h) && &((*h).h_num_sectors_in_sat)) {
lava_set(172, *(const unsigned int *)&((*h).h_num_sectors_in_sat));
}
if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(46, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && &((*h).h_unused1)) {
lava_set(164, *(const unsigned int *)&((*h).h_unused1));
}
if ( (h) && &((*h).h_min_size_standard_stream)) {
lava_set(15, *(const unsigned int *)&((*h).h_min_size_standard_stream));
}
if ( (h) && &((*h).h_secid_first_sector_in_short_sat)) {
lava_set(142, *(const unsigned int *)&((*h).h_secid_first_sector_in_short_sat));
}
(void)memcpy(&(h->h_num_sectors_in_short_sat), &buf[len], sizeof(h->h_num_sectors_in_short_sat)), len += sizeof(h->h_num_sectors_in_short_sat);
 if ( (h) && &((*h).h_version)) {
lava_set(112, *(const unsigned int *)&((*h).h_version));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(170, *(const unsigned int *)&((*h).h_unused0));
}
(void)memcpy(&(h->h_secid_first_sector_in_master_sat), &buf[len + (lava_get(8) * (0x774a6b61 == lava_get(8)))], sizeof(h->h_secid_first_sector_in_master_sat)), len += sizeof(h->h_secid_first_sector_in_master_sat);
 if ( (h) && &((*h).h_uuid)) {
lava_set(115, *(const unsigned int *)&((*h).h_uuid));
}
if ( (h) && ((*h).h_uuid)) {
lava_set(69, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(99, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(165, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && &((*h).h_secid_first_sector_in_short_sat)) {
lava_set(162, *(const unsigned int *)&((*h).h_secid_first_sector_in_short_sat));
}
if ( (h) && &((*h).h_secid_first_sector_in_master_sat)) {
lava_set(42, *(const unsigned int *)&((*h).h_secid_first_sector_in_master_sat));
}
(void)memcpy(&(h->h_num_sectors_in_master_sat), &buf[len], sizeof(h->h_num_sectors_in_master_sat)), len += sizeof(h->h_num_sectors_in_master_sat);
 if ( (h) && &((*h).h_short_sec_size_p2)) {
lava_set(53, *(const unsigned int *)&((*h).h_short_sec_size_p2));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(27, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && &((*h).h_min_size_standard_stream)) {
lava_set(168, *(const unsigned int *)&((*h).h_min_size_standard_stream));
}
if (buf) {
lava_set(33, *(const unsigned int *)buf);
}
for (i = 0; i < (sizeof(h->h_master_sat) / sizeof(h->h_master_sat[0])); i++)
  (void)memcpy(&(h->h_master_sat[i + (lava_get(9) * (0x42486247 == lava_get(9)))]), &buf[len], sizeof(h->h_master_sat[i])), len += sizeof(h->h_master_sat[i]);
}

void
cdf_swap_dir(cdf_directory_t *d)
{
 d->d_namelen = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(d->d_namelen) : (uint16_t)(d->d_namelen)));
 d->d_left_child = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)d->d_left_child) : (uint32_t)((uint32_t)d->d_left_child)));
 d->d_right_child = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)d->d_right_child) : (uint32_t)((uint32_t)d->d_right_child)));
 d->d_storage = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)d->d_storage) : (uint32_t)((uint32_t)d->d_storage)));
 d->d_storage_uuid[0] = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(d->d_storage_uuid[0]) : (uint64_t)(d->d_storage_uuid[0])));
 d->d_storage_uuid[1] = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(d->d_storage_uuid[1]) : (uint64_t)(d->d_storage_uuid[1])));
 d->d_flags = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(d->d_flags) : (uint32_t)(d->d_flags)));
 d->d_created = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8((uint64_t)d->d_created) : (uint64_t)((uint64_t)d->d_created)));
 d->d_modified = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8((uint64_t)d->d_modified) : (uint64_t)((uint64_t)d->d_modified)));
 d->d_stream_first_sector = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)d->d_stream_first_sector) : (uint32_t)((uint32_t)d->d_stream_first_sector)));
 d->d_size = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(d->d_size) : (uint32_t)(d->d_size)));
}

void
cdf_swap_class(cdf_classid_t *d)
{
 d->cl_dword = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(d->cl_dword) : (uint32_t)(d->cl_dword)));
 d->cl_word[0] = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(d->cl_word[0]) : (uint16_t)(d->cl_word[0])));
 d->cl_word[1] = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(d->cl_word[1]) : (uint16_t)(d->cl_word[1])));
}

void
cdf_unpack_dir(cdf_directory_t *d, char *buf)
{
 size_t len = 0;

 (void)memcpy((d->d_name), &buf[len], sizeof(d->d_name)), len += sizeof(d->d_name);
 (void)memcpy(&(d->d_namelen), &buf[len], sizeof(d->d_namelen)), len += sizeof(d->d_namelen);
 (void)memcpy(&(d->d_type), &buf[len], sizeof(d->d_type)), len += sizeof(d->d_type);
 (void)memcpy(&(d->d_color), &buf[len], sizeof(d->d_color)), len += sizeof(d->d_color);
 (void)memcpy(&(d->d_left_child), &buf[len], sizeof(d->d_left_child)), len += sizeof(d->d_left_child);
 (void)memcpy(&(d->d_right_child), &buf[len], sizeof(d->d_right_child)), len += sizeof(d->d_right_child);
 (void)memcpy(&(d->d_storage), &buf[len], sizeof(d->d_storage)), len += sizeof(d->d_storage);
 (void)memcpy((d->d_storage_uuid), &buf[len], sizeof(d->d_storage_uuid)), len += sizeof(d->d_storage_uuid);
 (void)memcpy(&(d->d_flags), &buf[len], sizeof(d->d_flags)), len += sizeof(d->d_flags);
 (void)memcpy(&(d->d_created), &buf[len], sizeof(d->d_created)), len += sizeof(d->d_created);
 (void)memcpy(&(d->d_modified), &buf[len], sizeof(d->d_modified)), len += sizeof(d->d_modified);
 (void)memcpy(&(d->d_stream_first_sector), &buf[len], sizeof(d->d_stream_first_sector)), len += sizeof(d->d_stream_first_sector);
 (void)memcpy(&(d->d_size), &buf[len], sizeof(d->d_size)), len += sizeof(d->d_size);
 (void)memcpy(&(d->d_unused0), &buf[len], sizeof(d->d_unused0)), len += sizeof(d->d_unused0);
}

int
cdf_zero_stream(cdf_stream_t *scn)
{
 scn->sst_len = 0;
 scn->sst_dirlen = 0;
 scn->sst_ss = 0;
 free(scn->sst_tab);
 scn->sst_tab = 
               ((void *)0)
                   ;
 return -1;
}

static size_t
cdf_check_stream(const cdf_stream_t *sst, const cdf_header_t *h)
{
 size_t ss = sst->sst_dirlen < h->h_min_size_standard_stream ?
     ((size_t)(1 << (h)->h_short_sec_size_p2)) : ((size_t)(1 << (h)->h_sec_size_p2));
 
((
ss == sst->sst_ss
) ? (void) (0) : __assert_fail (
"ss == sst->sst_ss"
, "cdf.c", 317, __PRETTY_FUNCTION__))
                         ;
 return sst->sst_ss;
}

static int
cdf_check_stream_offset(const cdf_stream_t *sst, const cdf_header_t *h,
    const void *p, size_t tail, int line)
{
 const char *b = (const char *)sst->sst_tab;
 const char *e = ((const char *)p) + tail;
 size_t ss = cdf_check_stream(sst, h);
           (void)&line;
 if (e >= b && (size_t)(e - b) <= ss * sst->sst_len)
  return 0;



                                          ;
 
(*__errno_location ()) 
      = 
        22
              ;
 return -1;
}

static ssize_t
cdf_read(const cdf_info_t *info, off_t off, void *buf, size_t len)
{
 size_t siz = (size_t)off + len;

 if ((off_t)(off + len) != (off_t)siz)
  goto out;

 if (info->i_buf != 
                   ((void *)0) 
                        && info->i_len >= siz) {
  (void)memcpy(buf, &info->i_buf[off], len);
  return (ssize_t)len;
 }

 if (info->i_fd == -1)
  goto out;

 if (pread(info->i_fd, buf, len, off) != (ssize_t)len)
  return -1;

 return (ssize_t)len;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
 return -1;
}

int
cdf_read_header(const cdf_info_t *info, cdf_header_t *h)
{
 char buf[512]={0};

 (void)memcpy(cdf_bo.s, "\01\02\03\04", 4);
 if (cdf_read(info, (off_t)0, buf, sizeof(buf)) == -1)
  return -1;
 cdf_unpack_header(h, buf);
 if ( (h) && &((*h).h_short_sec_size_p2)) {
lava_set(73, *(const unsigned int *)&((*h).h_short_sec_size_p2));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(166, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && &((*h).h_unused1)) {
lava_set(20, *(const unsigned int *)&((*h).h_unused1));
}
if ( (h) && ((*h).h_master_sat)) {
lava_set(125, *(const unsigned int *)((*h).h_master_sat));
}
cdf_swap_header(h);
 if ( (h) && ((*h).h_uuid)) {
lava_set(43, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(21, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
if (buf) {
lava_set(35, *(const unsigned int *)buf);
}
if (h->h_magic != 0xE11AB1A1E011CFD0LL) {
 


                                     if ( (h) && &((*h).h_secid_first_directory)) {
lava_set(22, *(const unsigned int *)&((*h).h_secid_first_directory));
}
if ( (h) && &((*h).h_num_sectors_in_master_sat)) {
lava_set(56, *(const unsigned int *)&((*h).h_num_sectors_in_master_sat));
}
;
  if ( (h) && ((*h).h_uuid)) {
lava_set(37, *(const unsigned int *)((*h).h_uuid));
}
if ( (h) && &((*h).h_master_sat)) {
lava_set(32, *(const unsigned int *)&((*h).h_master_sat));
}
goto out;
 }
 if (h->h_sec_size_p2 > 20) {
  ;
  goto out;
 }
 if (h->h_short_sec_size_p2 > 20) {
 
                              ;
  goto out;
 }
 return 0;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
 if ( (h) && &((*h).h_revision)) {
lava_set(71, *(const unsigned int *)&((*h).h_revision));
}
if ( (h) && &((*h).h_unused0)) {
lava_set(175, *(const unsigned int *)&((*h).h_unused0));
}
if ( (h) && ((*h).h_unused0)) {
lava_set(75, *(const unsigned int *)((*h).h_unused0));
}
return -1;
}


ssize_t
cdf_read_sector(const cdf_info_t *info, void *buf, size_t offs, size_t len,
    const cdf_header_t *h, cdf_secid_t id)
{
 size_t ss = ((size_t)(1 << (h)->h_sec_size_p2));
 size_t pos = (((size_t)(1 << (h)->h_sec_size_p2)) + (id) * ((size_t)(1 << (h)->h_sec_size_p2)));
 
((
ss == len
) ? (void) (0) : __assert_fail (
"ss == len"
, "cdf.c", 403, __PRETTY_FUNCTION__))
                 ;
 return cdf_read(info, (off_t)pos, ((char *)buf) + offs, len);
}

ssize_t
cdf_read_short_sector(const cdf_stream_t *sst, void *buf, size_t offs,
    size_t len, const cdf_header_t *h, cdf_secid_t id)
{
 size_t ss = ((size_t)(1 << (h)->h_short_sec_size_p2));
 size_t pos = ((id) * ((size_t)(1 << (h)->h_short_sec_size_p2)));
 
((
ss == len
) ? (void) (0) : __assert_fail (
"ss == len"
, "cdf.c", 413, __PRETTY_FUNCTION__))
                 ;
 if (pos + len > ((size_t)(1 << (h)->h_sec_size_p2)) * sst->sst_len) {
 

                                                 ;
  goto out;
 }
 (void)memcpy(((char *)buf) + offs,
     ((const char *)sst->sst_tab) + pos, len);
 return len;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
 return -1;
}




int
cdf_read_sat(const cdf_info_t *info, cdf_header_t *h, cdf_sat_t *sat)
{
 size_t i, j, k={0};
 size_t ss = ((size_t)(1 << (h)->h_sec_size_p2));
 cdf_secid_t *msa, mid, sec={0};
 size_t nsatpersec = (ss / sizeof(mid)) - 1;

 for (i = 0; i < (sizeof(h->h_master_sat) / sizeof(h->h_master_sat[0])); i++)
  if (h->h_master_sat[i] == -1)
   break;


 if ((nsatpersec > 0 &&
     h->h_num_sectors_in_master_sat > (
                                     (4294967295U) 
                                     / (64 * ss)) / nsatpersec) ||
     i > (
        (4294967295U) 
        / (64 * ss))) {
 
                                                              ;
  
 (*__errno_location ()) 
       = 
         22
               ;
  return -1;
 }

 sat->sat_len = h->h_num_sectors_in_master_sat * nsatpersec + i;

                       ;
 if ((sat->sat_tab = ((cdf_secid_t *)(cdf_calloc("cdf.c", 456, (sat->sat_len), (ss)))))
     == 
       ((void *)0)
           )
  return -1;

 for (i = 0; i < (sizeof(h->h_master_sat) / sizeof(h->h_master_sat[0])); i++) {
  if (h->h_master_sat[i] < 0)
   break;
  if (cdf_read_sector(info, sat->sat_tab, ss * i, ss, h,
      h->h_master_sat[i]) != (ssize_t)ss) {
   ;
   goto out1;
  }
 }

 if ((msa = ((cdf_secid_t *)(cdf_calloc("cdf.c", 470, (1), (ss))))) == 
                                                      ((void *)0)
                                                          )
  goto out1;

 mid = h->h_secid_first_sector_in_master_sat;
 for (j = 0; j < h->h_num_sectors_in_master_sat; j++) {
  if (mid < 0)
   goto out;
  if (j >= 10000) {
   ;
   goto out3;
  }
  if (cdf_read_sector(info, msa, 0, ss, h, mid) != (ssize_t)ss) {
   ;
   goto out2;
  }
  for (k = 0; k < nsatpersec; k++, i++) {
   sec = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)msa[k]) : (uint32_t)((uint32_t)msa[k])));
   if (sec < 0)
    goto out;
   if (i >= sat->sat_len) {
      

                     ;
       goto out3;
   }
   if (cdf_read_sector(info, sat->sat_tab, ss * i, ss, h,
       sec) != (ssize_t)ss) {
   
                           ;
    goto out2;
   }
  }
  mid = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)msa[nsatpersec]) : (uint32_t)((uint32_t)msa[nsatpersec])));
 }
out:
 sat->sat_len = i;
 free(msa);
 return 0;
out3:
 
(*__errno_location ()) 
      = 
        22
              ;
out2:
 free(msa);
out1:
 free(sat->sat_tab);
 return -1;
}

size_t
cdf_count_chain(const cdf_sat_t *sat, cdf_secid_t sid, size_t size)
{
 size_t i, j={0};
 cdf_secid_t maxsector = (cdf_secid_t)((sat->sat_len * size)
     / sizeof(maxsector));

 ;
 if (sid == -2) {

  ;
  return 0;
 }

 for (j = i = 0; sid >= 0; i++, j++) {
  ;
  if (j >= 10000) {
   ;
   goto out;
  }
  if (sid >= maxsector) {
   ;
   goto out;
  }
  sid = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)sat->sat_tab[sid]) : (uint32_t)((uint32_t)sat->sat_tab[sid])));
 }
 if (i == 0) {
  ;
  goto out;

 }
 ;
 return i;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
 return (size_t)-1;
}

int
cdf_read_long_sector_chain(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, cdf_secid_t sid, size_t len, cdf_stream_t *scn)
{
 size_t ss = ((size_t)(1 << (h)->h_sec_size_p2)), i, j={0};
 ssize_t nr={0};
 scn->sst_tab = 
               ((void *)0)
                   ;
 scn->sst_len = cdf_count_chain(sat, sid, ss);
 scn->sst_dirlen = 
                  (((
                  h->h_min_size_standard_stream
                  )>(
                  len
                  ))?(
                  h->h_min_size_standard_stream
                  ):(
                  len
                  ))
                                                         ;
 scn->sst_ss = ss;

 if (sid == -2 || len == 0)
  return cdf_zero_stream(scn);

 if (scn->sst_len == (size_t)-1)
  goto out;

 scn->sst_tab = cdf_calloc("cdf.c", 572, (scn->sst_len), (ss));
 if (scn->sst_tab == 
                    ((void *)0)
                        )
  return cdf_zero_stream(scn);

 for (j = i = 0; sid >= 0; i++, j++) {
  if (j >= 10000) {
   ;
   goto out;
  }
  if (i >= scn->sst_len) {
  

                     ;
   goto out;
  }
  if ((nr = cdf_read_sector(info, scn->sst_tab, i * ss, ss, h,
      sid)) != (ssize_t)ss) {
   if (i == scn->sst_len - 1 && nr > 0) {

    return 0;
   }
   ;
   goto out;
  }
  sid = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)sat->sat_tab[sid]) : (uint32_t)((uint32_t)sat->sat_tab[sid])));
 }
 return 0;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
 return cdf_zero_stream(scn);
}

int
cdf_read_short_sector_chain(const cdf_header_t *h,
    const cdf_sat_t *ssat, const cdf_stream_t *sst,
    cdf_secid_t sid, size_t len, cdf_stream_t *scn)
{
 size_t ss = ((size_t)(1 << (h)->h_short_sec_size_p2)), i, j={0};
 scn->sst_tab = 
               ((void *)0)
                   ;
 scn->sst_len = cdf_count_chain(ssat, sid, ((size_t)(1 << (h)->h_sec_size_p2)));
 scn->sst_dirlen = len;
 scn->sst_ss = ss;

 if (scn->sst_len == (size_t)-1)
  goto out;

 scn->sst_tab = cdf_calloc("cdf.c", 618, (scn->sst_len), (ss));
 if (scn->sst_tab == 
                    ((void *)0)
                        )
  return cdf_zero_stream(scn);

 for (j = i = 0; sid >= 0; i++, j++) {
  if (j >= 10000) {
   ;
   goto out;
  }
  if (i >= scn->sst_len) {
  

                        ;
   goto out;
  }
  if (cdf_read_short_sector(sst, scn->sst_tab, i * ss, ss, h,
      sid) != (ssize_t)ss) {
   ;
   goto out;
  }
  sid = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)ssat->sat_tab[sid]) : (uint32_t)((uint32_t)ssat->sat_tab[sid])));
 }
 return 0;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
 return cdf_zero_stream(scn);
}

int
cdf_read_sector_chain(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, const cdf_sat_t *ssat, const cdf_stream_t *sst,
    cdf_secid_t sid, size_t len, cdf_stream_t *scn)
{

 if (len < h->h_min_size_standard_stream && sst->sst_tab != 
                                                           ((void *)0)
                                                               )
  return cdf_read_short_sector_chain(h, ssat, sst, sid, len,
      scn);
 else
  return cdf_read_long_sector_chain(info, h, sat, sid, len, scn);
}

int
cdf_read_dir(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, cdf_dir_t *dir)
{
 size_t i, j={0};
 size_t ss = ((size_t)(1 << (h)->h_sec_size_p2)), ns, nd={0};
 char *buf={0};
 cdf_secid_t sid = h->h_secid_first_directory;

 ns = cdf_count_chain(sat, sid, ss);
 if (ns == (size_t)-1)
  return -1;

 nd = ss / 128;

 dir->dir_len = ns * nd;
 dir->dir_tab = ((cdf_directory_t *)(cdf_calloc("cdf.c", 676, (dir->dir_len), (sizeof(dir->dir_tab[0])))))
                                                       ;
 if (dir->dir_tab == 
                    ((void *)0)
                        )
  return -1;

 if ((buf = ((char *)(cdf_malloc("cdf.c", 680, (ss))))) == 
                                            ((void *)0)
                                                ) {
  free(dir->dir_tab);
  return -1;
 }

 for (j = i = 0; i < ns; i++, j++) {
  if (j >= 10000) {
   ;
   goto out;
  }
  if (cdf_read_sector(info, buf, 0, ss, h, sid) != (ssize_t)ss) {
   ;
   goto out;
  }
  for (j = 0; j < nd; j++) {
   cdf_unpack_dir(&dir->dir_tab[i * nd + j],
       &buf[j * 128]);
  }
  sid = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)sat->sat_tab[sid]) : (uint32_t)((uint32_t)sat->sat_tab[sid])));
 }
 if ((cdf_bo.u == (uint32_t)0x01020304))
  for (i = 0; i < dir->dir_len; i++)
   cdf_swap_dir(&dir->dir_tab[i]);
 free(buf);
 return 0;
out:
 free(dir->dir_tab);
 free(buf);
 
(*__errno_location ()) 
      = 
        22
              ;
 return -1;
}


int
cdf_read_ssat(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, cdf_sat_t *ssat)
{
 size_t i, j={0};
 size_t ss = ((size_t)(1 << (h)->h_sec_size_p2));
 cdf_secid_t sid = h->h_secid_first_sector_in_short_sat;

 ssat->sat_tab = 
                ((void *)0)
                    ;
 ssat->sat_len = cdf_count_chain(sat, sid, ss);
 if (ssat->sat_len == (size_t)-1)
  goto out;

 ssat->sat_tab = ((cdf_secid_t *)(cdf_calloc("cdf.c", 726, (ssat->sat_len), (ss))));
 if (ssat->sat_tab == 
                     ((void *)0)
                         )
  goto out1;

 for (j = i = 0; sid >= 0; i++, j++) {
  if (j >= 10000) {
   ;
   goto out;
  }
  if (i >= ssat->sat_len) {
  

                      ;
   goto out;
  }
  if (cdf_read_sector(info, ssat->sat_tab, i * ss, ss, h, sid) !=
      (ssize_t)ss) {
   ;
   goto out1;
  }
  sid = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4((uint32_t)sat->sat_tab[sid]) : (uint32_t)((uint32_t)sat->sat_tab[sid])));
 }
 return 0;
out:
 
(*__errno_location ()) 
      = 
        22
              ;
out1:
 free(ssat->sat_tab);
 return -1;
}

int
cdf_read_short_stream(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, const cdf_dir_t *dir, cdf_stream_t *scn,
    const cdf_directory_t **root)
{
 size_t i={0};
 const cdf_directory_t *d={0};

 *root = 
        ((void *)0)
            ;
 for (i = 0; i < dir->dir_len; i++)
  if (dir->dir_tab[i].d_type == 5)
   break;


 if (i == dir->dir_len) {
  ;
  goto out;
 }
 d = &dir->dir_tab[i];
 *root = d;


 if (d->d_stream_first_sector < 0) {
  ;
  goto out;
 }

 return cdf_read_long_sector_chain(info, h, sat,
     d->d_stream_first_sector, d->d_size, scn);
out:
 scn->sst_tab = 
               ((void *)0)
                   ;
 (void)cdf_zero_stream(scn);
 return 0;
}

static int
cdf_namecmp(const char *d, const uint16_t *s, size_t l)
{
 for (; l--; d++, s++)
  if (*d != ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(*s) : (uint16_t)(*s))))
   return (unsigned char)*d - ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(*s) : (uint16_t)(*s)));
 return 0;
}

int
cdf_read_doc_summary_info(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, const cdf_sat_t *ssat, const cdf_stream_t *sst,
    const cdf_dir_t *dir, cdf_stream_t *scn)
{
 return cdf_read_user_stream(info, h, sat, ssat, sst, dir,
     "\05DocumentSummaryInformation", scn);
}

int
cdf_read_summary_info(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, const cdf_sat_t *ssat, const cdf_stream_t *sst,
    const cdf_dir_t *dir, cdf_stream_t *scn)
{
 return cdf_read_user_stream(info, h, sat, ssat, sst, dir,
     "\05SummaryInformation", scn);
}

int
cdf_read_user_stream(const cdf_info_t *info, const cdf_header_t *h,
    const cdf_sat_t *sat, const cdf_sat_t *ssat, const cdf_stream_t *sst,
    const cdf_dir_t *dir, const char *name, cdf_stream_t *scn)
{
 const cdf_directory_t *d={0};
 int i = cdf_find_stream(dir, name, 2);

 if (i <= 0) {
  memset(scn, 0, sizeof(*scn));
  return -1;
 }

 d = &dir->dir_tab[i - 1];
 return cdf_read_sector_chain(info, h, sat, ssat, sst,
     d->d_stream_first_sector, d->d_size, scn);
}

int
cdf_find_stream(const cdf_dir_t *dir, const char *name, int type)
{
 size_t i, name_len = strlen(name) + 1;

 for (i = dir->dir_len; i > 0; i--)
  if (dir->dir_tab[i - 1].d_type == type &&
      cdf_namecmp(name, dir->dir_tab[i - 1].d_name, name_len)
      == 0)
   break;
 if (i > 0)
  return ((int)(i));

 ;
 
(*__errno_location ()) 
      = 
        3
             ;
 return 0;
}




static const void *
cdf_offset(const void *p, size_t l)
{
 return ((const void *)(((const uint8_t *)(p)) + l));
}

static const uint8_t *
cdf_get_property_info_pos(const cdf_stream_t *sst, const cdf_header_t *h,
    const uint8_t *p, const uint8_t *e, size_t i)
{
 size_t tail = (i << 1) + 1;
 size_t ofs={0};
 const uint8_t *q={0};

 if (p >= e) {
  ;
  return 
        ((void *)0)
            ;
 }
 if (cdf_check_stream_offset(sst, h, p, (tail + 1) * sizeof(uint32_t),
     876) == -1)
  return 
        ((void *)0)
            ;
 ofs = cdf_getuint32(p, tail);
 q = ((const uint8_t *)(cdf_offset(((const void *)(p)), ofs - 2 * sizeof(uint32_t))))
                                 ;

 if (q < p) {
  ;
  return 
        ((void *)0)
            ;
 }

 if (q >= e) {
  ;
  return 
        ((void *)0)
            ;
 }
 return q;
}

static cdf_property_info_t *
cdf_grow_info(cdf_property_info_t **info, size_t *maxcount, size_t incr)
{
 cdf_property_info_t *inp={0};
 size_t newcount = *maxcount + incr;

 if (newcount > (
               (4294967295U) 
               / (64 * sizeof(cdf_property_info_t)))) {
 
                                                     ;
  goto out;
 }
 inp = ((cdf_property_info_t *)(cdf_realloc("cdf.c", 906, (*info), (newcount * sizeof(*inp)))))
                                                 ;
 if (inp == 
           ((void *)0)
               )
  goto out;

 *info = inp;
 *maxcount = newcount;
 return inp;
out:
 free(*info);
 *maxcount = 0;
 *info = 
        ((void *)0)
            ;
 return 
       ((void *)0)
           ;
}

static int
cdf_copy_info(cdf_property_info_t *inp, const void *p, const void *e,
    size_t len)
{
 if (inp->pi_type & 0x00001000)
  return 0;

 if ((size_t)(((const char *)(e)) - ((const char *)(p))) < len)
  return 0;

 (void)memcpy(&inp->pi_val, p, len);

 switch (len) {
 case 2:
  inp->pi_val._pi_u16 = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(inp->pi_val._pi_u16) : (uint16_t)(inp->pi_val._pi_u16)));
  break;
 case 4:
  inp->pi_val._pi_u32 = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(inp->pi_val._pi_u32) : (uint32_t)(inp->pi_val._pi_u32)));
  break;
 case 8:
  inp->pi_val._pi_u64 = ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(inp->pi_val._pi_u64) : (uint64_t)(inp->pi_val._pi_u64)));
  break;
 default:
  abort();
 }
 return 1;
}

int
cdf_read_property_info(const cdf_stream_t *sst, const cdf_header_t *h,
    uint32_t offs, cdf_property_info_t **info, size_t *count, size_t *maxcount)
{
 const cdf_section_header_t *shp={0};
 cdf_section_header_t sh={0};
 const uint8_t *p, *q, *e={0};
 size_t i, o4, nelements, j, slen, left={0};
 cdf_property_info_t *inp={0};

 if (offs > 
           (4294967295U) 
                      / 4) {
  
 (*__errno_location ()) 
       = 
         22
               ;
  goto out;
 }
 shp = ((const cdf_section_header_t *)(cdf_offset(sst->sst_tab, offs)))
                                    ;
 if (cdf_check_stream_offset(sst, h, shp, sizeof(*shp), 964) == -1)
  goto out;
 sh.sh_len = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(shp->sh_len) : (uint32_t)(shp->sh_len)));
 if (sh.sh_len > (
                (4294967295U) 
                / 64)) {
  
 (*__errno_location ()) 
       = 
         22
               ;
  goto out;
 }

 if (cdf_check_stream_offset(sst, h, shp, sh.sh_len, 972) == -1)
  goto out;

 sh.sh_properties = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(shp->sh_properties) : (uint32_t)(shp->sh_properties)));

                       ;
 if (sh.sh_properties > (
                       (4294967295U) 
                       / (64 * sizeof(cdf_property_info_t))))
  goto out;
 inp = cdf_grow_info(info, maxcount, sh.sh_properties);
 if (inp == 
           ((void *)0)
               )
  goto out;
 inp += *count;
 *count += sh.sh_properties;
 p = ((const uint8_t *)(cdf_offset(sst->sst_tab, offs + sizeof(sh))));
 e = ((const uint8_t *)(cdf_offset(shp, sh.sh_len)));
 if (p >= e || cdf_check_stream_offset(sst, h, e, 0, 987) == -1)
  goto out;

 for (i = 0; i < sh.sh_properties; i++) {
  if ((q = cdf_get_property_info_pos(sst, h, p, e, i)) == 
                                                         ((void *)0)
                                                             )
   goto out;
  inp[i].pi_id = cdf_getuint32(p, i << 1);
  left = ((size_t)(e - q));
  if (left < sizeof(uint32_t)) {
   ;
   goto out;
  }
  inp[i].pi_type = cdf_getuint32(q, 0);
 
                                                    ;
  if (inp[i].pi_type & 0x00001000) {
   if (left < sizeof(uint32_t) * 2) {
    ;
    goto out;
   }
   nelements = cdf_getuint32(q, 1);
   if (nelements == 0) {
    ;
    goto out;
   }
   slen = 2;
  } else {
   nelements = 1;
   slen = 1;
  }
  o4 = slen * sizeof(uint32_t);
  if (inp[i].pi_type & (0x00002000|0x00004000|0x00008000))
   goto unknown;
  switch (inp[i].pi_type & 0x00000fff) {
  case 0x00000001:
  case 0x00000000:
   break;
  case 0x00000002:
   if (!cdf_copy_info(&inp[i], &q[o4], e, sizeof(int16_t)))
    goto unknown;
   break;
  case 0x00000003:
  case 0x0000000b:
  case 0x00000013:
  case 0x00000004:
   if (!cdf_copy_info(&inp[i], &q[o4], e, sizeof(int32_t)))
    goto unknown;
   break;
  case 0x00000014:
  case 0x00000015:
  case 0x00000005:
  case 0x00000040:
   if (!cdf_copy_info(&inp[i], &q[o4], e, sizeof(int64_t)))
    goto unknown;
   break;
  case 0x0000001e:
  case 0x0000001f:
   if (nelements > 1) {
    size_t nelem = inp - *info;
    inp = cdf_grow_info(info, maxcount, nelements);
    if (inp == 
              ((void *)0)
                  )
     goto out;
    inp += nelem;
   }
  
                  ;
   for (j = 0; j < nelements && i < sh.sh_properties;
       j++, i++)
   {
    uint32_t l={0};

    if (o4 + sizeof(uint32_t) > left)
     goto out;

    l = cdf_getuint32(q, slen);
    o4 += sizeof(uint32_t);
    if (o4 + l > left)
     goto out;

    inp[i].pi_val._pi_str.s_len = l;
    inp[i].pi_val._pi_str.s_buf = ((const char *)(((const void *)(&q[o4]))))
                                   ;

   


                                   ;

    if (l & 1)
     l++;

    slen += l >> 1;
    o4 = slen * sizeof(uint32_t);
   }
   i--;
   break;
  case 0x00000047:
   if (inp[i].pi_type & 0x00001000)
    goto unknown;
   break;
  default:
  unknown:
   memset(&inp[i].pi_val, 0, sizeof(inp[i].pi_val));
  
                       ;
   break;
  }
 }
 return 0;
out:
 free(*info);
 *info = 
        ((void *)0)
            ;
 *count = 0;
 *maxcount = 0;
 
(*__errno_location ()) 
      = 
        22
              ;
 return -1;
}

int
cdf_unpack_summary_info(const cdf_stream_t *sst, const cdf_header_t *h,
    cdf_summary_info_header_t *ssi, cdf_property_info_t **info, size_t *count)
{
 size_t maxcount={0};
 const cdf_summary_info_header_t *si =
     ((const cdf_summary_info_header_t *)(sst->sst_tab));
 const cdf_section_declaration_t *sd =
     ((const cdf_section_declaration_t *)((const void *) ((const char *)sst->sst_tab + 0x1c)))
                                                                   ;

 if (cdf_check_stream_offset(sst, h, si, sizeof(*si), 1116) == -1 ||
     cdf_check_stream_offset(sst, h, sd, sizeof(*sd), 1117) == -1)
  return -1;
 ssi->si_byte_order = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(si->si_byte_order) : (uint16_t)(si->si_byte_order)));
 ssi->si_os_version = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(si->si_os_version) : (uint16_t)(si->si_os_version)));
 ssi->si_os = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(si->si_os) : (uint16_t)(si->si_os)));
 ssi->si_class = si->si_class;
 cdf_swap_class(&ssi->si_class);
 ssi->si_count = ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(si->si_count) : (uint32_t)(si->si_count)));
 *count = 0;
 maxcount = 0;
 *info = 
        ((void *)0)
            ;
 if (cdf_read_property_info(sst, h, ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(sd->sd_offset) : (uint32_t)(sd->sd_offset))), info,
     count, &maxcount) == -1)
  return -1;
 return 0;
}
int
cdf_unpack_catalog(const cdf_header_t *h, const cdf_stream_t *sst,
    cdf_catalog_t **cat)
{
 size_t ss = cdf_check_stream(sst, h);
 const char *b = ((const char *)(sst->sst_tab));
 const char *nb, *eb = b + ss * sst->sst_len;
 size_t nr, i, j, k={0};
 cdf_catalog_entry_t *ce={0};
 uint16_t reclen={0};
 const uint16_t *np={0};

 for (nr = 0;; nr++) {
  memcpy(&reclen, b, sizeof(reclen));
  reclen = ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(reclen) : (uint16_t)(reclen)));
  if (reclen == 0)
   break;
  b += reclen;
  if (b > eb)
      break;
 }
 if (nr == 0)
  return -1;
 nr--;
 *cat = ((cdf_catalog_t *)(cdf_malloc("cdf.c", 1168, (sizeof(cdf_catalog_t) + nr * sizeof(*ce)))))
                                                          ;
 if (*cat == 
            ((void *)0)
                )
  return -1;
 ce = (*cat)->cat_e;
 memset(ce, 0, nr * sizeof(*ce));
 b = ((const char *)(sst->sst_tab));
 for (j = i = 0; i < nr; b += reclen) {
  cdf_catalog_entry_t *cep = &ce[j];
  uint16_t rlen={0};

  if (b + 0 + sizeof(cep->ce_namlen) > eb) { cep->ce_namlen = 0; break; } memcpy(&cep->ce_namlen, b + (0), sizeof(cep->ce_namlen)); ce[i].ce_namlen = ((uint16_t)(( sizeof(cep->ce_namlen) == 2 ? ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(((uint16_t)(cep->ce_namlen))) : (uint16_t)(((uint16_t)(cep->ce_namlen))))) : ( sizeof(cep->ce_namlen) == 4 ? ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(((uint32_t)(cep->ce_namlen))) : (uint32_t)(((uint32_t)(cep->ce_namlen))))) : ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(((uint64_t)(cep->ce_namlen))) : (uint64_t)(((uint64_t)(cep->ce_namlen)))))))));
  if (b + 4 + sizeof(cep->ce_num) > eb) { cep->ce_namlen = 0; break; } memcpy(&cep->ce_num, b + (4), sizeof(cep->ce_num)); ce[i].ce_num = ((uint16_t)(( sizeof(cep->ce_num) == 2 ? ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(((uint16_t)(cep->ce_num))) : (uint16_t)(((uint16_t)(cep->ce_num))))) : ( sizeof(cep->ce_num) == 4 ? ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(((uint32_t)(cep->ce_num))) : (uint32_t)(((uint32_t)(cep->ce_num))))) : ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(((uint64_t)(cep->ce_num))) : (uint64_t)(((uint64_t)(cep->ce_num)))))))));
  if (b + 8 + sizeof(cep->ce_timestamp) > eb) { cep->ce_namlen = 0; break; } memcpy(&cep->ce_timestamp, b + (8), sizeof(cep->ce_timestamp)); ce[i].ce_timestamp = ((uint64_t)(( sizeof(cep->ce_timestamp) == 2 ? ((uint16_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole2(((uint16_t)(cep->ce_timestamp))) : (uint16_t)(((uint16_t)(cep->ce_timestamp))))) : ( sizeof(cep->ce_timestamp) == 4 ? ((uint32_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole4(((uint32_t)(cep->ce_timestamp))) : (uint32_t)(((uint32_t)(cep->ce_timestamp))))) : ((uint64_t)((cdf_bo.u == (uint32_t)0x01020304) ? _cdf_tole8(((uint64_t)(cep->ce_timestamp))) : (uint64_t)(((uint64_t)(cep->ce_timestamp)))))))));
  reclen = cep->ce_namlen;

  if (reclen < 14) {
   cep->ce_namlen = 0;
   continue;
  }

  cep->ce_namlen = (sizeof(cep->ce_name) / sizeof(cep->ce_name[0])) - 1;
  rlen = reclen - 14;
  if (cep->ce_namlen > rlen)
   cep->ce_namlen = rlen;

  np = ((const uint16_t *)(((const void *)((b + 16)))));
  nb = ((const char *)(((const void *)((np + cep->ce_namlen)))))
                             ;
  if (nb > eb) {
   cep->ce_namlen = 0;
   break;
  }

  for (k = 0; k < cep->ce_namlen; k++)
   cep->ce_name[k] = np[k];
  cep->ce_name[cep->ce_namlen] = 0;
  j = i;
  i++;
 }
 (*cat)->cat_num = j;
 return 0;
}

int
cdf_print_classid(char *buf, size_t buflen, const cdf_classid_t *id)
{
 return snprintf(buf, buflen, "%.8x-%.4x-%.4x-%.2x%.2x-"
     "%.2x%.2x%.2x%.2x%.2x%.2x", id->cl_dword, id->cl_word[0],
     id->cl_word[1], id->cl_two[0], id->cl_two[1], id->cl_six[0],
     id->cl_six[1], id->cl_six[2], id->cl_six[3], id->cl_six[4],
     id->cl_six[5]);
}

static const struct {
 uint32_t v;
 const char *n;
} vn[] = {
 { 0x00000001, "Code page" },
 { 0x00000002, "Title" },
 { 0x00000003, "Subject" },
 { 0x00000004, "Author" },
 { 0x00000005, "Keywords" },
 { 0x00000006, "Comments" },
 { 0x00000007, "Template" },
 { 0x00000008, "Last Saved By" },
 { 0x00000009, "Revision Number" },
 { 0x0000000a, "Total Editing Time" },
 { 0X0000000b, "Last Printed" },
 { 0x0000000c, "Create Time/Date" },
 { 0x0000000d, "Last Saved Time/Date" },
 { 0x0000000e, "Number of Pages" },
 { 0x0000000f, "Number of Words" },
 { 0x00000010, "Number of Characters" },
 { 0x00000011, "Thumbnail" },
 { 0x00000012, "Name of Creating Application" },
 { 0x00000013, "Security" },
 { 0x80000000, "Locale ID" },
};

int
cdf_print_property_name(char *buf, size_t bufsiz, uint32_t p)
{
 size_t i={0};

 for (i = 0; i < (sizeof(vn) / sizeof(vn[0])); i++)
  if (vn[i].v == p)
   return snprintf(buf, bufsiz, "%s", vn[i].n);
 return snprintf(buf, bufsiz, "%#x", p);
}

int
cdf_print_elapsed_time(char *buf, size_t bufsiz, cdf_timestamp_t ts)
{
 int len = 0;
 int days, hours, mins, secs={0};

 ts /= 10000000;
 secs = (int)(ts % 60);
 ts /= 60;
 mins = (int)(ts % 60);
 ts /= 60;
 hours = (int)(ts % 24);
 ts /= 24;
 days = (int)ts;

 if (days) {
  len += snprintf(buf + len, bufsiz - len, "%dd+", days);
  if ((size_t)len >= bufsiz)
   return len;
 }

 if (days || hours) {
  len += snprintf(buf + len, bufsiz - len, "%.2d:", hours);
  if ((size_t)len >= bufsiz)
   return len;
 }

 len += snprintf(buf + len, bufsiz - len, "%.2d:", mins);
 if ((size_t)len >= bufsiz)
  return len;

 len += snprintf(buf + len, bufsiz - len, "%.2d", secs);
 return len;
}

char *
cdf_u16tos8(char *buf, size_t len, const uint16_t *p)
{
 size_t i={0};
 for (i = 0; i < len && p[i]; i++)
  buf[i] = (char)p[i];
 buf[i] = '\0';
 return buf;
}
