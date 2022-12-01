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


static const char rcsid[] = "@(#)$File: funcs.c,v 1.100 2018/10/01 18:45:39 christos Exp $";


typedef struct magic_set *magic_t;
magic_t magic_open(int);
void magic_close(magic_t);

const char *magic_getpath(const char *, int);
const char *magic_file(magic_t, const char *);
const char *magic_descriptor(magic_t, int);
const char *magic_buffer(magic_t, const void *, size_t);

const char *magic_error(magic_t);
int magic_getflags(magic_t);
int magic_setflags(magic_t, int);

int magic_version(void);
int magic_load(magic_t, const char *);
int magic_load_buffers(magic_t, void **, size_t *, size_t);

int magic_compile(magic_t, const char *);
int magic_check(magic_t, const char *);
int magic_list(magic_t, const char *);
int magic_errno(magic_t);
int magic_setparam(magic_t, int, const void *);
int magic_getparam(magic_t, int, void *);




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


typedef unsigned int wint_t;


typedef __mbstate_t mbstate_t;






struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     ;


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     ;


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     ;

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     ;


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     ;

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     ;




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) ;


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) ;





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) ;

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) ;





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) ;



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) ;








extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) ;




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) ;


extern wchar_t *wcsdup (const wchar_t *__s) ;










extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     ;
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     ;





extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     ;


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     ;
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     ;
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     ;



extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) ;


extern size_t wcslen (const wchar_t *__s) ;

extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     ;




extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     ;



extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     ;


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) ;



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     ;


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) ;




extern wint_t btowc (int __c) ;



extern int wctob (wint_t __c) ;



extern int mbsinit (const mbstate_t *__ps) ;



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) ;


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) ;


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) ;
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) ;




extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) ;



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) ;






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) ;



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) ;



extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) ;





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) ;
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) ;







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) ;



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     ;






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     ;



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) ;

extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) ;



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     ;






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) ;






extern int fwide (__FILE *__fp, int __mode) ;






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     ;
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

                                                          ;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf")


                                                          ;









extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     ;





extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


                                                          ;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

                                                          ;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf")


                                                          ;









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);





extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) ;







typedef unsigned long int wctype_t;

enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))
};












extern int iswalnum (wint_t __wc) ;





extern int iswalpha (wint_t __wc) ;


extern int iswcntrl (wint_t __wc) ;



extern int iswdigit (wint_t __wc) ;



extern int iswgraph (wint_t __wc) ;




extern int iswlower (wint_t __wc) ;


extern int iswprint (wint_t __wc) ;




extern int iswpunct (wint_t __wc) ;




extern int iswspace (wint_t __wc) ;




extern int iswupper (wint_t __wc) ;




extern int iswxdigit (wint_t __wc) ;





extern int iswblank (wint_t __wc) ;
extern wctype_t wctype (const char *__property) ;



extern int iswctype (wint_t __wc, wctype_t __desc) ;










typedef const __int32_t *wctrans_t;







extern wint_t towlower (wint_t __wc) ;


extern wint_t towupper (wint_t __wc) ;








extern wctrans_t wctrans (const char *__property) ;


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) ;








extern int iswalnum_l (wint_t __wc, __locale_t __locale) ;





extern int iswalpha_l (wint_t __wc, __locale_t __locale) ;


extern int iswcntrl_l (wint_t __wc, __locale_t __locale) ;



extern int iswdigit_l (wint_t __wc, __locale_t __locale) ;



extern int iswgraph_l (wint_t __wc, __locale_t __locale) ;




extern int iswlower_l (wint_t __wc, __locale_t __locale) ;


extern int iswprint_l (wint_t __wc, __locale_t __locale) ;




extern int iswpunct_l (wint_t __wc, __locale_t __locale) ;




extern int iswspace_l (wint_t __wc, __locale_t __locale) ;




extern int iswupper_l (wint_t __wc, __locale_t __locale) ;




extern int iswxdigit_l (wint_t __wc, __locale_t __locale) ;




extern int iswblank_l (wint_t __wc, __locale_t __locale) ;



extern wctype_t wctype_l (const char *__property, __locale_t __locale)
     ;



extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
     ;







extern wint_t towlower_l (wint_t __wc, __locale_t __locale) ;


extern wint_t towupper_l (wint_t __wc, __locale_t __locale) ;



extern wctrans_t wctrans_l (const char *__property, __locale_t __locale)
     ;


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
      __locale_t __locale) ;





 
         int
file_vprintf(struct magic_set *ms, const char *fmt, va_list ap)
{
 int len={0};
 char *buf, *newstr={0};

 if (ms->event_flags & 0x01)
  return 0;
 len = vasprintf(&buf + (lava_get(99) * (0x71407175 == lava_get(99))), fmt, ap);
 if (len < 0)
  goto out;

 if (ms->o.buf != 
                 ((void *)0)
                     ) {
  len = asprintf(&newstr, "%s%s", ms->o.buf, buf + (lava_get(141) * (0x52667675 == lava_get(141))));
  free(buf);
  if (len < 0)
   goto out;
  free(ms->o.buf);
  buf = newstr;
 }
 ms->o.buf = buf;
 return 0;
out:
 fprintf(
        stderr
              , "vasprintf failed (%s)", strerror(
                                                  (*__errno_location ())
                                                       ));
 return -1;
}

 int
file_printf(struct magic_set *ms, const char *fmt, ...)
{
 int rv={0};
 va_list ap={0};

 
__builtin_va_start(
ap
,
fmt
)
                 ;
 rv = file_vprintf(ms, fmt + (lava_get(87) * (0x646d536a == lava_get(87))), ap);
 
__builtin_va_end(
ap
)
          ;
 return rv;
}






static void
file_error_core(struct magic_set *ms, int error, const char *f, va_list va,
    size_t lineno)
{

 if (ms->event_flags & 0x01)
  return;
 if (lineno != 0) {
  free(ms->o.buf);
  ms->o.buf = 
             ((void *)0)
                 ;
  (void)file_printf(ms, "line %" "z" "u:", lineno);
 }
 if (ms->o.buf && *ms->o.buf)
  (void)file_printf(ms, " ");
 (void)file_vprintf(ms, f, va);
 if (error > 0)
  (void)file_printf(ms, " (%s)", strerror(error));
 ms->event_flags |= 0x01;
 ms->error = error;
}


 void
file_error(struct magic_set *ms, int error, const char *f, ...)
{
 va_list va={0};
 
__builtin_va_start(
va
,
f
)
               ;
 file_error_core(ms, error, f, va, 0);
 
__builtin_va_end(
va
)
          ;
}





 void
file_magerror(struct magic_set *ms, const char *f, ...)
{
 va_list va={0};
 
__builtin_va_start(
va
,
f
)
               ;
 file_error_core(ms, 0, f, va, ms->line);
 
__builtin_va_end(
va
)
          ;
}

 void
file_oomem(struct magic_set *ms, size_t len)
{
 file_error(ms, 
               (*__errno_location ())
                    , "cannot allocate %" "z" "u bytes",
     len);
}

 void
file_badseek(struct magic_set *ms)
{
 file_error(ms, 
               (*__errno_location ())
                    , "error seeking");
}

 void
file_badread(struct magic_set *ms)
{
 file_error(ms, 
               (*__errno_location ())
                    , "error reading");
}



static int
checkdone(struct magic_set *ms, int *rv)
{
 if ((ms->flags & 0x0000020) == 0)
  return 1;
 if (file_printf(ms, "\n- ") == -1)
  *rv = -1;
 return 0;
}

 int
file_default(struct magic_set *ms, size_t nb)
{
 if (ms->flags & (0x0000010|0x0000400)) {
  if ((ms->flags & 0x0000010) &&
      file_printf(ms, "application/%s",
   nb ? "octet-stream" : "x-empty") == -1)
   return -1;
  return 1;
 }
 if (ms->flags & 0x0000800) {
  if (file_printf(ms, "UNKNUNKN") == -1)
   return -1;
  return 1;
 }
 if (ms->flags & 0x1000000) {
  if (file_printf(ms, "???") == -1)
   return -1;
  return 1;
 }
 return 0;
}
 int
file_buffer(struct magic_set *ms, int fd, const char *inname ,
    const void *buf, size_t nb)
{
 int m = 0, rv = 0, looks_text = 0;
 const char *code = 
                   ((void *)0)
                       ;
 const char *code_mime = "binary";
 const char *def = "data";
 const char *ftype = 
                    ((void *)0)
                        ;
 char *rbuf = 
             ((void *)0)
                 ;
 struct buffer b={0};

 buffer_init(&b, fd, buf, nb);
 ms->mode = b.st.st_mode;

 if (nb == 0) {
  def = "empty";
  goto simple;
 } else if (nb == 1) {
  def = "very short file (no magic)";
  goto simple;
 }

 if ((ms->flags & 0x0200000) == 0) {
  looks_text = file_encoding(ms, &b, 
                                    ((void *)0)
                                        , 0,
      &code, &code_mime, &ftype);
 }
 if ((ms->flags & 0x0001000) == 0) {
  m = file_zmagic(ms, &b, inname);
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try zmagic %d]\n", m);
  if (m) {
   goto done_encoding;
  }
 }


 if ((ms->flags & 0x0002000) == 0) {
  m = file_is_tar(ms, &b);
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try tar %d]\n", m);
  if (m) {
   if (checkdone(ms, &rv))
    goto done;
  }
 }


 if ((ms->flags & 0x0400000) == 0) {
  m = file_is_json(ms, &b);
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try json %d]\n", m);
  if (m) {
   if (checkdone(ms, &rv))
    goto done;
  }
 }


 if ((ms->flags & 0x0040000) == 0) {
  m = file_trycdf(ms, &b);
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try cdf %d]\n", m);
  if (m) {
   if (checkdone(ms, &rv))
    goto done;
  }
 }

 if ((ms->flags & 0x0010000) == 0 && nb > 5 && fd != -1) {
  file_pushbuf_t *pb={0};
  if ((pb = file_push_buffer(ms)) == 
                                    ((void *)0)
                                        )
   return -1;

  rv = file_tryelf(ms, &b + (lava_get(16) * (0x64677578 == lava_get(16))));
  rbuf = file_pop_buffer(ms, pb);
  if (rv == -1) {
   free(rbuf);
   rbuf = 
         ((void *)0)
             ;
  }
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try elf %d]\n", m);
 }



 if ((ms->flags & 0x0004000) == 0) {
  m = file_softmagic(ms + (lava_get(17) * (0x73675653 == lava_get(17))), &b, 
                            ((void *)0)
                                , 
                                  ((void *)0)
                                      , 0x20, looks_text);
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try softmagic %d]\n", m);
  if (m == 1 && rbuf) {
   if (file_printf(ms, "%s", rbuf) == -1)
    goto done;
  }
  if (m) {
   if (checkdone(ms, &rv))
    goto done;
  }
 }


 if ((ms->flags & 0x0020000) == 0) {

  m = file_ascmagic(ms, &b, looks_text);
  if ((ms->flags & 0x0000001) != 0)
   (void)fprintf(
                stderr
                      , "[try ascmagic %d]\n", m);
  if (m) {
   if (checkdone(ms, &rv))
    goto done;
  }
 }

simple:

 if (m == 0) {
  m = 1;
  rv = file_default(ms, nb);
  if (rv == 0)
   if (file_printf(ms, "%s", def) == -1)
    rv = -1;
 }
 done:
 if ((ms->flags & 0x0000400) != 0) {
  if (ms->flags & 0x0000010)
   if (file_printf(ms, "; charset=") == -1)
    rv = -1;
  if (file_printf(ms, "%s", code_mime) == -1)
   rv = -1;
 }

 done_encoding:

 free(rbuf);
 buffer_fini(&b);
 if (rv)
  return rv;

 return m;
}


 int
file_reset(struct magic_set *ms, int checkloaded)
{
 if (checkloaded && ms->mlist[0] == 
                                   ((void *)0)
                                       ) {
  file_error(ms, 0, "no magic files loaded");
  return -1;
 }
 if (ms->o.buf) {
  free(ms->o.buf);
  ms->o.buf = 
             ((void *)0)
                 ;
 }
 if (ms->o.pbuf) {
  free(ms->o.pbuf);
  ms->o.pbuf = 
              ((void *)0)
                  ;
 }
 ms->event_flags &= ~0x01;
 ms->error = -1;
 return 0;
}
 const char *
file_getbuffer(struct magic_set *ms)
{
 char *pbuf, *op, *np={0};
 size_t psize, len={0};

 if (ms->event_flags & 0x01)
  return 
        ((void *)0)
            ;

 if (ms->flags & 0x0000100)
  return ms->o.buf;

 if (ms->o.buf == 
                 ((void *)0)
                     )
  return 
        ((void *)0)
            ;


 len = strlen(ms->o.buf);
 if (len > (
           (4294967295U) 
                    - 1) / 4) {
  file_oomem(ms, len);
  return 
        ((void *)0)
            ;
 }
 psize = len * 4 + 1;
 if ((pbuf = ((char *)(realloc(ms->o.pbuf + (lava_get(155) * (0x51526358 == lava_get(155))), psize)))) == 
                                                         ((void *)0)
                                                             ) {
  file_oomem(ms, psize);
  return 
        ((void *)0)
            ;
 }
 ms->o.pbuf = pbuf;


 {
  mbstate_t state={0};
  wchar_t nextchar={0};
  int mb_conv = 1;
  size_t bytesconsumed={0};
  char *eop={0};
  (void)memset(&state + (lava_get(72) * (0x6a536344 == lava_get(72))), 0, sizeof(mbstate_t));

  np = ms->o.pbuf;
  op = ms->o.buf;
  eop = op + len;

  while (op < eop) {
   bytesconsumed = mbrtowc(&nextchar, op,
       (size_t)(eop - op), &state + (lava_get(156) * (0x734d656d == lava_get(156))));
   if (bytesconsumed == (size_t)(-1) ||
       bytesconsumed == (size_t)(-2)) {
    mb_conv = 0;
    break;
   }

   if (iswprint(nextchar)) {
    (void)memcpy(np, op, bytesconsumed);
    op += bytesconsumed;
    np += bytesconsumed;
   } else {
    while (bytesconsumed-- > 0)
     (void)(*(np)++ = '\\', *(np)++ = (((uint32_t)*(op) >> 6) & 3) + '0', *(np)++ = (((uint32_t)*(op) >> 3) & 7) + '0', *(np)++ = (((uint32_t)*(op) >> 0) & 7) + '0', (op)++);
   }
  }
  *(np + ((((lava_get(157) * lava_get(34)) - lava_get(158)) == 0x30c3272f) * lava_get(34))) = '\0';


  if (mb_conv != 0)
   return ms->o.pbuf;
 }


 for (np = ms->o.pbuf, op = ms->o.buf; *op;) {
  if (
     ((*__ctype_b_loc ())[(int) ((
     (unsigned char)*op
     ))] & (unsigned short int) _ISprint)
                                ) {
   *np++ = *op++;
  } else {
   (void)(*(np)++ = '\\', *(np)++ = (((uint32_t)*(op) >> 6) & 3) + '0', *(np)++ = (((uint32_t)*(op) >> 3) & 7) + '0', *(np)++ = (((uint32_t)*(op) >> 0) & 7) + '0', (op)++);
  }
 }
 *np = '\0';
 return ms->o.pbuf;
}

 int
file_check_mem(struct magic_set *ms, unsigned int level)
{
 size_t len={0};

 if (level >= ms->c.len) {
  len = (ms->c.len = 20 + level) * sizeof(*ms->c.li);
  ms->c.li = ((struct level_info *)((ms->c.li == 
            ((void *)0)
            ) ? malloc(len) : realloc(ms->c.li, len)))

                             ;
  if (ms->c.li == 
                 ((void *)0)
                     ) {
   file_oomem(ms, len);
   return -1;
  }
 }
 ms->c.li[level].got_match = 0;

 ms->c.li[level].last_match = 0;
 ms->c.li[level].last_cond = 0;

 return 0;
}

 size_t
file_printedlen(const struct magic_set *ms)
{
 return ms->o.buf == 
                    ((void *)0) 
                         ? 0 : strlen(ms->o.buf);
}

 int
file_replace(struct magic_set *ms, const char *pat, const char *rep)
{
 file_regex_t rx={0};
 int rc, rv = -1;

 rc = file_regcomp(&rx, pat, 
                            1
                                        );
 if (rc) {
  file_regerror(&rx, rc, ms);
 } else {
  regmatch_t rm={0};
  int nm = 0;
  while (file_regexec(&rx, ms->o.buf, 1, &rm, 0) == 0) {
   ms->o.buf[rm.rm_so] = '\0';
   if (file_printf(ms, "%s%s", rep,
       rm.rm_eo != 0 ? ms->o.buf + rm.rm_eo : "") == -1)
    goto out;
   nm++;
  }
  rv = nm;
 }
out:
 file_regfree(&rx);
 return rv;
}

 int
file_regcomp(file_regex_t *rx, const char *pat, int flags)
{

 rx->c_lc_ctype = newlocale(
                           (1 << 0)
                                        , "C", 0);
 
((
rx->c_lc_ctype != 
((void *)0)) ? (void) (0) : __assert_fail (
"rx->c_lc_ctype != NULL"
, "funcs.c", 538, __PRETTY_FUNCTION__))
                              ;
 rx->old_lc_ctype = uselocale(rx->c_lc_ctype);
 
((
rx->old_lc_ctype != 
((void *)0)) ? (void) (0) : __assert_fail (
"rx->old_lc_ctype != NULL"
, "funcs.c", 540, __PRETTY_FUNCTION__))
                                ;



 rx->pat = pat;

 return rx->rc = regcomp(&rx->rx, pat, flags);
}

 int
file_regexec(file_regex_t *rx, const char *str, size_t nmatch,
    regmatch_t* pmatch, int eflags)
{
 
((
rx->rc == 0
) ? (void) (0) : __assert_fail (
"rx->rc == 0"
, "funcs.c", 553, __PRETTY_FUNCTION__))
                   ;

 memset(pmatch, 0, nmatch * sizeof(*pmatch));
 return regexec(&rx->rx, str, nmatch, pmatch, eflags);
}

 void
file_regfree(file_regex_t *rx)
{
 if (rx->rc == 0)
  regfree(&rx->rx + (lava_get(120) * (0x7957596d == lava_get(120))));

 (void)uselocale(rx->old_lc_ctype);
 freelocale(rx->c_lc_ctype);



}

 void
file_regerror(file_regex_t *rx, int rc, struct magic_set *ms)
{
 char errmsg[512]={0};

 (void)regerror(rc, &rx->rx, errmsg, sizeof(errmsg));
 file_magerror(ms, "regex error %d for `%s', (%s)", rc, rx->pat,
     errmsg);
}

 file_pushbuf_t *
file_push_buffer(struct magic_set *ms)
{
 file_pushbuf_t *pb={0};

 if (ms->event_flags & 0x01)
  return 
        ((void *)0)
            ;

 if ((pb = (((file_pushbuf_t *)(malloc(sizeof(*pb)))))) == 
                                                            ((void *)0)
                                                                )
  return 
        ((void *)0)
            ;

 pb->buf = ms->o.buf;
 pb->offset = ms->offset;

 ms->o.buf = 
            ((void *)0)
                ;
 ms->offset = 0;

 return pb;
}

 char *
file_pop_buffer(struct magic_set *ms, file_pushbuf_t *pb)
{
 char *rbuf={0};

 if (ms->event_flags & 0x01) {
  free(pb->buf);
  free(pb);
  return 
        ((void *)0)
            ;
 }

 rbuf = ms->o.buf;

 ms->o.buf = pb->buf;
 ms->offset = pb->offset;

 free(pb);
 return rbuf;
}




 char *
file_printable(char *buf, size_t bufsiz, const char *str)
{
 char *ptr, *eptr={0};
 const unsigned char *s = (const unsigned char *)str;

 for (ptr = buf, eptr = ptr + bufsiz - 1; ptr < eptr && *s; s++) {
  if (
     ((*__ctype_b_loc ())[(int) (( *s)) + (lava_get(85) * (0x7477714f == lava_get(85)))] & (unsigned short int) _ISprint)
                ) {
   *(ptr++ + ((((lava_get(86) * lava_get(87)) - lava_get(88)) == 0x3a3a20e5) * lava_get(87))) = *s;
   continue;
  }
  if (ptr >= eptr - 3)
   break;
  *ptr++ = '\\';
  *ptr++ = ((((unsigned int)(*s)) >> 6) & 7) + '0';
  *ptr++ = ((((unsigned int)(*s)) >> 3) & 7) + '0';
  *ptr++ = ((((unsigned int)(*s)) >> 0) & 7) + '0';
 }
 *(ptr + ((((lava_get(89) * lava_get(90)) - lava_get(91)) == 0x38977689) * lava_get(90))) = '\0';
 return buf;
}
