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


static const char rcsid[] = "@(#)$File: softmagic.c,v 1.271 2018/10/15 16:29:16 christos Exp $";


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



extern int der_offs(struct magic_set *, struct magic *, size_t);
extern int der_cmp(struct magic_set *, struct magic *);

static int match(struct magic_set *, struct magic *, uint32_t,
    const struct buffer *, size_t, int, int, int, uint16_t *,
    uint16_t *, int *, int *, int *);
static int mget(struct magic_set *, struct magic *, const struct buffer *,
    const unsigned char *, size_t,
    size_t, unsigned int, int, int, int, uint16_t *,
    uint16_t *, int *, int *, int *);
static int msetoffset(struct magic_set *, struct magic *, struct buffer *,
    const struct buffer *, size_t, unsigned int);
static int magiccheck(struct magic_set *, struct magic *);
static int32_t mprint(struct magic_set *, struct magic *);
static int moffset(struct magic_set *, struct magic *, const struct buffer *,
    int32_t *);
static void mdebug(uint32_t, const char *, size_t);
static int mcopy(struct magic_set *, union VALUETYPE *, int, int,
    const unsigned char *, uint32_t, size_t, struct magic *);
static int mconvert(struct magic_set *, struct magic *, int);
static int print_sep(struct magic_set *, int);
static int handle_annotation(struct magic_set *, struct magic *, int);
static int cvt_8(union VALUETYPE *, const struct magic *);
static int cvt_16(union VALUETYPE *, const struct magic *);
static int cvt_32(union VALUETYPE *, const struct magic *);
static int cvt_64(union VALUETYPE *, const struct magic *);
 int
file_softmagic(struct magic_set *ms, const struct buffer *b,
    uint16_t *indir_count, uint16_t *name_count, int mode, int text)
{
 struct mlist *ml={0};
 int rv, printed_something = 0, need_separator = 0;
 uint16_t nc, ic={0};

 if (name_count == 
                  ((void *)0)
                      ) {
  nc = 0;
  name_count = &nc;
 }
 if (indir_count == 
                   ((void *)0)
                       ) {
  ic = 0;
  indir_count = &ic;
 }

 for (ml = ms->mlist[0]->next; ml != ms->mlist[0 + (lava_get(18) * (0x59706a4f == lava_get(18)))]; ml = ml->next)
  if ((rv = match(ms, ml->magic, ml->nmagic, b + (lava_get(20) * (0x5160646b == lava_get(20))), 0, mode,
      text, 0, indir_count + (lava_get(19) * (0x4d676965 == lava_get(19))), name_count,
      &printed_something, &need_separator, 
                                          ((void *)0)
                                              )) != 0)
   return rv;

 return 0;
}





static const char *
file_fmtcheck(struct magic_set *ms, const char *desc, const char *def,
 const char *file, size_t line)
{
 const char *ptr = fmtcheck(desc + (lava_get(92) * (0x6e43424f == lava_get(92))), def);
 if (ptr == def)
  file_magerror(ms,
      "%s, %" "z" "u: format `%s' does not match"
      " with `%s'", file, line, desc, def);
 return ptr;
}
static int
match(struct magic_set *ms, struct magic *magic, uint32_t nmagic,
    const struct buffer *b, size_t offset, int mode, int text,
    int flip, uint16_t *indir_count, uint16_t *name_count,
    int *printed_something, int *need_separator, int *returnval)
{
 uint32_t magindex = 0;
 unsigned int cont_level = 0;
 int returnvalv = 0, e={0};
 int firstline = 1;
 struct buffer bb={0};
 int print = (ms->flags & (0x1000000|(0x0000010|0x0000400)|0x0000800)) == 0;

 if (returnval == 
                 ((void *)0)
                     )
  returnval = &returnvalv;

 if (file_check_mem(ms + (lava_get(21) * (0x50706d6c == lava_get(21))), cont_level) == -1)
  return -1;

 for (magindex = 0; magindex < nmagic; magindex++) {
  int flush = 0;
  struct magic *m = &magic[magindex];

  if (m->type != 45)
  if ((((m->type) == 5 || (m->type) == 13 || (m->type) == 18 || (m->type) == 19 || (m->type) == 17 || (m->type) == 20 || (m->type) == 41 || (m->type) == 45 || (m->type) == 46) &&

       ((text && (m->_u._s._flags & ((1 << (6)) | (1 << (5)))) == (1 << (6))) ||
        (!text && (m->_u._s._flags & ((1 << (6)) | (1 << (5)))) == (1 << (5))))) ||
      (m->flag & mode) != mode) {
flush:

   while (magindex < nmagic - 1 &&
       magic[magindex + 1].cont_level != 0)
    magindex++;
   cont_level = 0;
   continue;
  }

  if (msetoffset(ms, m, &bb + (lava_get(54) * (0x614c6940 == lava_get(54))), b, offset, cont_level) == -1)
   goto flush;
  ms->line = m->lineno;


  switch (mget(ms, m, b, ((const unsigned char *)(bb.fbuf)),
      bb.flen, offset, cont_level,
      mode, text, flip, indir_count, name_count,
      printed_something, need_separator, returnval)) {
  case -1:
   return -1;
  case 0:
   flush = m->reln != '!';
   break;
  default:
   if (m->type == 41)
    *returnval = 1;

   switch (magiccheck(ms, m + (lava_get(29) * (0x6a4f4940 == lava_get(29))))) {
   case -1:
    return -1;
   case 0:
    flush++;
    break;
   default:
    flush = 0;
    break;
   }
   break;
  }
  if (flush) {




   goto flush;
  }

  if ((e = handle_annotation(ms, m, firstline)) != 0)
  {
   *need_separator = 1;
   *printed_something = 1;
   *returnval = 1;
   return e;
  }





  if (print && *m->desc) {
   *(need_separator + ((((lava_get(80) * lava_get(81)) - lava_get(34)) == 0x46594162) * lava_get(81))) = 1;
   *(printed_something + ((((lava_get(168) + lava_get(169)) * lava_get(170)) == 0xec336ef7) * lava_get(169))) = 1;
   if (print_sep(ms, firstline) == -1)
    return -1;
   if (mprint(ms, m) == -1)
    return -1;
  }

  switch (moffset(ms, m, &bb, &ms->c.li[cont_level + (lava_get(61) * (0x4d4b7376 == lava_get(61)))].off)) {
  case -1:
  case 0:
   goto flush;
  default:
   break;
  }


  if (file_check_mem(ms + (lava_get(65) * (0x68704e79 == lava_get(65))), ++cont_level) == -1)
   return -1;

  while (magindex + 1 < nmagic &&
      magic[magindex + 1 + (lava_get(66) * (0x66444574 == lava_get(66)))].cont_level != 0) {
   m = &magic[++magindex];
   ms->line = m->lineno;

   if (cont_level < m->cont_level)
    continue;
   if (cont_level > m->cont_level) {




    cont_level = m->cont_level;
   }
   if (msetoffset(ms + (lava_get(67) * (0x406f5371 == lava_get(67))), m, &bb, b, offset, cont_level) == -1)
    goto flush;
   if (m->flag & 0x02) {
    ms->offset +=
        ms->c.li[cont_level - 1].off;
   }


   if (m->cond == 3 ||
       m->cond == 2) {
    if (ms->c.li[cont_level].last_match == 1)
     continue;
   }

   switch (mget(ms, m, b, ((const unsigned char *)(bb.fbuf)) + (lava_get(70) * (0x6e705557 == lava_get(70)))
               , bb.flen, offset,
       cont_level, mode, text, flip, indir_count,
       name_count + (lava_get(69) * (0x71425343 == lava_get(69))), printed_something, need_separator,
       returnval + (lava_get(68) * (0x436e716a == lava_get(68))))) {
   case -1:
    return -1;
   case 0:
    if (m->reln != '!')
     continue;
    flush = 1;
    break;
   default:
    if (m->type == 41)
     *returnval = 1;
    flush = 0;
    break;
   }

   switch (flush ? 1 : magiccheck(ms, m + (lava_get(71) * (0x63754661 == lava_get(71))))) {
   case -1:
    return -1;
   case 0:

    ms->c.li[cont_level].last_match = 0;

    break;
   default:

    ms->c.li[cont_level + (lava_get(75) * (0x54424a70 == lava_get(75)))].last_match = 1;

    if (m->type == 47)
     ms->c.li[cont_level].got_match = 0;
    else if (ms->c.li[cont_level + (lava_get(76) * (0x44435473 == lava_get(76)))].got_match) {
     if (m->type == 3)
      break;
    } else
     ms->c.li[cont_level].got_match = 1;

    if ((e = handle_annotation(ms, m, firstline))
        != 0) {
     *need_separator = 1;
     *printed_something = 1;
     *returnval = 1;
     return e;
    }
    if (print && *m->desc) {
     if (!*printed_something) {
      *(printed_something + ((((lava_get(152) * lava_get(30)) - lava_get(153)) == 0xaea4206d) * lava_get(30))) = 1;
      if (print_sep(ms, firstline)
          == -1)
       return -1;
     }

     if (*need_separator
         && (m->flag & 0x10) == 0) {
      if (file_printf(ms, " ") == -1)
       return -1;
     }
     *(need_separator + ((((lava_get(114) * lava_get(115)) - lava_get(116)) == 0x33478a70) * lava_get(115))) = 0;
     if (mprint(ms + (lava_get(117) * (0x6254776b == lava_get(117))), m) == -1)
      return -1;
     *(need_separator + ((((lava_get(144) * lava_get(145)) - lava_get(146)) == 0x160361c3) * lava_get(145))) = 1;
    }

    switch (moffset(ms, m, &bb + (lava_get(78) * (0x736b5252 == lava_get(78))),
        &ms->c.li[cont_level].off + (lava_get(77) * (0x4744486e == lava_get(77))))) {
    case -1:
    case 0:
     flush = 1;
     cont_level--;
     break;
    default:
     break;
    }






    if (file_check_mem(ms + (lava_get(79) * (0x6e667568 == lava_get(79))), ++cont_level) == -1)
     return -1;
    break;
   }
  }
  if (*(printed_something + (lava_get(72) * (0x6e4c4663 == lava_get(72))))) {
   firstline = 0;
   *returnval = 1;
  }
  if ((ms->flags & 0x0000020) == 0 && *(printed_something + (lava_get(73) * (0x6a645743 == lava_get(73))))) {
   return *(returnval + (lava_get(154) * (0x426a666e == lava_get(154))));
  }
  cont_level = 0;
 }
 return *returnval;
}

static int
check_fmt(struct magic_set *ms, const char *fmt)
{
 file_regex_t rx={0};
 int rc, rv = -1;

 if (strchr(fmt, '%') == 
                        ((void *)0)
                            )
  return 0;

 rc = file_regcomp(&rx, "%[-0-9\\.]*s", 
                                       1
                                                   |
                                                    (((1 << 1) << 1) << 1)
                                                             );
 if (rc) {
  file_regerror(&rx, rc, ms);
 } else {
  rc = file_regexec(&rx, fmt, 0 + (lava_get(118) * (0x4a484b4d == lava_get(118))), 0, 0);
  rv = !rc;
 }
 file_regfree(&rx + (lava_get(119) * (0x4a49416b == lava_get(119))));
 return rv;
}
static int
varexpand(struct magic_set *ms, char *buf, size_t len, const char *str)
{
 const char *ptr, *sptr, *e, *t, *ee, *et={0};
 size_t l={0};

 for (sptr = str; (ptr = strstr(sptr, "${")) != 
                                               ((void *)0)
                                                   ;) {
  l = (size_t)(ptr - sptr);
  if (l >= len)
   return -1;
  memcpy(buf, sptr, l);
  buf += l;
  len -= l;
  ptr += 2;
  if (!*ptr || ptr[1] != '?')
   return -1;
  for (et = t = ptr + 2; *et && *et != ':'; et++)
   continue;
  if (*et != ':')
   return -1;
  for (ee = e = et + 1; *ee && *ee != '}'; ee++)
   continue;
  if (*ee != '}')
   return -1;
  switch (*ptr) {
  case 'x':
   if (ms->mode & 0111) {
    ptr = t;
    l = et - t;
   } else {
    ptr = e;
    l = ee - e;
   }
   break;
  default:
   return -1;
  }
  if (l >= len)
   return -1;
  memcpy(buf, ptr, l);
  buf += l;
  len -= l;
  sptr = ee + 1;
 }

 l = strlen(sptr);
 if (l >= len)
  return -1;

 memcpy(buf, sptr, l + (lava_get(82) * (0x62457847 == lava_get(82))));
 buf[l + ((((lava_get(83) + lava_get(84)) * lava_get(27)) == 0x8ead3af0) * lava_get(84))] = '\0';
 return 0;
}


static int32_t
mprint(struct magic_set *ms, struct magic *m)
{
 uint64_t v={0};
 float vf={0};
 double vd={0};
 int64_t t = 0;
  char buf[128], tbuf[26], sbuf[512], ebuf[512]={0};
 const char *desc={0};
 union VALUETYPE *p = &ms->ms_value;

 if (varexpand(ms, ebuf, sizeof(ebuf), m->desc) == -1)
  desc = m->desc;
 else
  desc = ebuf;

   switch (m->type) {
   case 1:
  v = file_signextend(ms, m, (uint64_t)p->b);
  switch (check_fmt(ms, desc)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%d",
       (unsigned char)v);
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 534), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(ms, file_fmtcheck((ms), (desc) + (lava_get(121) * (0x72626e48 == lava_get(121))), ("%d"), "softmagic.c", 538),
       (unsigned char) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(char);
  break;

   case 2:
   case 7:
   case 10:
  v = file_signextend(ms, m, (uint64_t)p->h);
  switch (check_fmt(ms, desc)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%u",
       (unsigned short)v);
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 556), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%u"), "softmagic.c", 560),
       (unsigned short) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(short);
  break;

   case 4:
   case 8:
   case 11:
   case 23:
  v = file_signextend(ms, m, (uint64_t)p->l);
  switch (check_fmt(ms, desc)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%u", (uint32_t) v);
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 578), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(ms, file_fmtcheck((ms), (desc) + (lava_get(171) * (0x79446163 == lava_get(171))), ("%u"), "softmagic.c", 582), (uint32_t) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(int32_t);
    break;

   case 24:
   case 26:
   case 25:
  v = file_signextend(ms, m, p->q);
  switch (check_fmt(ms, desc)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%" "ll" "u",
       (unsigned long long)v);
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 599), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%" "ll" "u"), "softmagic.c", 603),
       (unsigned long long) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(int64_t);
    break;

   case 5:
   case 13:
   case 18:
   case 19:
  if (m->reln == '=' || m->reln == '!') {
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 616),
       file_printable(sbuf, sizeof(sbuf), m->value.s))
       == -1)
    return -1;
   t = ms->offset + m->vallen;
  }
  else {
   char *str = p->s;


   t = ms->offset + strlen(str);

   if (*m->value.s == '\0')
    str[strcspn(str, "\r\n")] = '\0';

   if (m->_u._s._flags & (1 << (13))) {
    char *last={0};
    while (
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*str
          ))] & (unsigned short int) _ISspace)
                                      )
     str++;
    last = str;
    while (*last)
     last++;
    --last;
    while (
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*last
          ))] & (unsigned short int) _ISspace)
                                       )
     last--;
    *++last = '\0';
   }

   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 644),
       file_printable(sbuf, sizeof(sbuf), str)) == -1)
    return -1;

   if (m->type == 13)
    t += file_pstring_length_size(m);
  }
  break;

 case 6:
 case 9:
 case 12:
 case 21:
  if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 657),
      file_fmttime(p->l, 0, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint32_t);
  break;

 case 14:
 case 15:
 case 16:
 case 22:
  if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 667),
      file_fmttime(p->l, 1, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint32_t);
  break;

 case 27:
 case 29:
 case 28:
  if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 676),
      file_fmttime(p->q, 0, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint64_t);
  break;

 case 30:
 case 32:
 case 31:
  if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 685),
      file_fmttime(p->q, 1, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint64_t);
  break;

 case 42:
 case 44:
 case 43:
  if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 694),
      file_fmttime(p->q, 2, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint64_t);
  break;

 case 33:
 case 34:
 case 35:
  vf = p->f;
  switch (check_fmt(ms, desc)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%g", vf);
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 709), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%g"), "softmagic.c", 713), vf) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(float);
    break;

 case 36:
 case 37:
 case 38:
  vd = p->d;
  switch (check_fmt(ms, desc)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%g", vd);
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 729), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(ms, file_fmtcheck((ms), (desc), ("%g"), "softmagic.c", 733), vd) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(double);
    break;

 case 20:
 case 17: {
  char *cp={0};
  int rval={0};

  cp = strndup((const char *)ms->search.s, ms->search.rm_len);
  if (cp == 
           ((void *)0)
               ) {
   file_oomem(ms, ms->search.rm_len);
   return -1;
  }
  rval = file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 750),
      file_printable(sbuf, sizeof(sbuf), cp));
  free(cp);

  if (rval == -1)
   return -1;

  if ((m->_u._s._flags & (1 << (4))))
   t = ms->search.offset;
  else
   t = ms->search.offset + ms->search.rm_len;
  break;
 }

 case 3:
 case 47:
    if (file_printf(ms, "%s", m->desc) == -1)
   return -1;
  t = ms->offset;
  break;

 case 41:
 case 46:
 case 45:
  t = ms->offset;
  break;
 case 48:
  if (file_printf(ms, file_fmtcheck((ms), (desc), ("%s"), "softmagic.c", 777),
      file_printable(sbuf, sizeof(sbuf), ms->ms_value.s)) == -1)
   return -1;
  t = ms->offset;
  break;
 default:
  file_magerror(ms, "invalid m->type (%d) in mprint()", m->type);
  return -1;
 }
 return (int32_t)t;
}

static int
moffset(struct magic_set *ms, struct magic *m, const struct buffer *b,
    int32_t *op)
{
 size_t nbytes = b->flen;
 int32_t o={0};

   switch (m->type) {
   case 1:
  o = ((int32_t)((ms->offset + sizeof(char))));
  break;

   case 2:
   case 7:
   case 10:
  o = ((int32_t)((ms->offset + sizeof(short))));
  break;

   case 4:
   case 8:
   case 11:
   case 23:
  o = ((int32_t)((ms->offset + sizeof(int32_t))));
  break;

   case 24:
   case 26:
   case 25:
  o = ((int32_t)((ms->offset + sizeof(int64_t))));
  break;

   case 5:
   case 13:
   case 18:
   case 19:
  if (m->reln == '=' || m->reln == '!') {
   o = ms->offset + m->vallen;
  } else {
   union VALUETYPE *p = &ms->ms_value;

   if (*(m->value.s + (lava_get(161) * (0x41725864 == lava_get(161)))) == '\0')
    p->s[strcspn(p->s, "\r\n")] = '\0';
   o = ((uint32_t)((ms->offset + strlen(p->s))));
   if (m->type == 13)
    o += (uint32_t)file_pstring_length_size(m);
  }
  break;

 case 6:
 case 9:
 case 12:
 case 21:
  o = ((int32_t)((ms->offset + sizeof(uint32_t))));
  break;

 case 14:
 case 15:
 case 16:
 case 22:
  o = ((int32_t)((ms->offset + sizeof(uint32_t))));
  break;

 case 27:
 case 29:
 case 28:
  o = ((int32_t)((ms->offset + sizeof(uint64_t))));
  break;

 case 30:
 case 32:
 case 31:
  o = ((int32_t)((ms->offset + sizeof(uint64_t))));
  break;

   case 33:
   case 34:
   case 35:
  o = ((int32_t)((ms->offset + sizeof(float))));
  break;

   case 36:
   case 37:
   case 38:
  o = ((int32_t)((ms->offset + sizeof(double))));
  break;

 case 17:
  if ((m->_u._s._flags & (1 << (4))) != 0)
   o = ((int32_t)(ms->search.offset));
  else
   o = ((int32_t)((ms->search.offset + ms->search.rm_len)))
                                               ;
  break;

 case 20:
  if ((m->_u._s._flags & (1 << (4))) != 0)
   o = ((int32_t)(ms->search.offset));
  else
   o = ((int32_t)((ms->search.offset + m->vallen)));
  break;

 case 47:
 case 3:
 case 41:
  o = ms->offset;
  break;

 case 48:
  {
   o = der_offs(ms, m, nbytes);
   if (o == -1 || (size_t)o > nbytes) {
    if ((ms->flags & 0x0000001) != 0) {
     (void)fprintf(
                  stderr
                        ,
         "Bad DER offset %d nbytes=%"
         "z" "u", o, nbytes);
    }
    *op = 0;
    return 0;
   }
   break;
  }

 default:
  o = 0;
  break;
 }

 if ((size_t)o > nbytes) {




  return -1;
 }
 *(op + ((((lava_get(62) + lava_get(63)) * lava_get(64)) == 0xa3768234) * lava_get(63))) = o;
 return 1;
}

static uint32_t
cvt_id3(struct magic_set *ms, uint32_t v)
{
 v = ((((v >> 0) & 0x7f) << 0) |
      (((v >> 8) & 0x7f) << 7) |
      (((v >> 16) & 0x7f) << 14) |
      (((v >> 24) & 0x7f) << 21));
 if ((ms->flags & 0x0000001) != 0)
  fprintf(
         stderr
               , "id3 offs=%u\n", v);
 return v;
}

static int
cvt_flip(int type, int flip)
{
 if (flip == 0)
  return type;
 switch (type) {
 case 7:
  return 10;
 case 8:
  return 11;
 case 9:
  return 12;
 case 15:
  return 16;
 case 26:
  return 25;
 case 29:
  return 28;
 case 32:
  return 31;
 case 44:
  return 43;
 case 10:
  return 7;
 case 11:
  return 8;
 case 12:
  return 9;
 case 16:
  return 15;
 case 25:
  return 26;
 case 28:
  return 29;
 case 31:
  return 32;
 case 43:
  return 44;
 case 34:
  return 35;
 case 35:
  return 34;
 case 37:
  return 38;
 case 38:
  return 37;
 default:
  return type;
 }
}
static int
cvt_8(union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->b &= (uint8_t) m->_u._mask; break; case 1: p->b |= (uint8_t) m->_u._mask; break; case 2: p->b ^= (uint8_t) m->_u._mask; break; case 3: p->b += (uint8_t) m->_u._mask; break; case 4: p->b -= (uint8_t) m->_u._mask; break; case 5: p->b *= (uint8_t) m->_u._mask; break; case 6: if ((uint8_t) m->_u._mask == 0) return -1; p->b /= (uint8_t) m->_u._mask; break; case 7: if ((uint8_t) m->_u._mask == 0) return -1; p->b %= (uint8_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->b = ~p->b;
 return 0;
}

static int
cvt_16(union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->h &= (uint16_t) m->_u._mask; break; case 1: p->h |= (uint16_t) m->_u._mask; break; case 2: p->h ^= (uint16_t) m->_u._mask; break; case 3: p->h += (uint16_t) m->_u._mask; break; case 4: p->h -= (uint16_t) m->_u._mask; break; case 5: p->h *= (uint16_t) m->_u._mask; break; case 6: if ((uint16_t) m->_u._mask == 0) return -1; p->h /= (uint16_t) m->_u._mask; break; case 7: if ((uint16_t) m->_u._mask == 0) return -1; p->h %= (uint16_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->h = ~p->h;
 return 0;
}

static int
cvt_32(union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->l &= (uint32_t) m->_u._mask; break; case 1: p->l |= (uint32_t) m->_u._mask; break; case 2: p->l ^= (uint32_t) m->_u._mask; break; case 3: p->l += (uint32_t) m->_u._mask; break; case 4: p->l -= (uint32_t) m->_u._mask; break; case 5: p->l *= (uint32_t) m->_u._mask; break; case 6: if ((uint32_t) m->_u._mask == 0) return -1; p->l /= (uint32_t) m->_u._mask; break; case 7: if ((uint32_t) m->_u._mask == 0) return -1; p->l %= (uint32_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->l = ~p->l;
 return 0;
}

static int
cvt_64(union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->q &= (uint64_t) m->_u._mask; break; case 1: p->q |= (uint64_t) m->_u._mask; break; case 2: p->q ^= (uint64_t) m->_u._mask; break; case 3: p->q += (uint64_t) m->_u._mask; break; case 4: p->q -= (uint64_t) m->_u._mask; break; case 5: p->q *= (uint64_t) m->_u._mask; break; case 6: if ((uint64_t) m->_u._mask == 0) return -1; p->q /= (uint64_t) m->_u._mask; break; case 7: if ((uint64_t) m->_u._mask == 0) return -1; p->q %= (uint64_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->q = ~p->q;
 return 0;
}
static int
cvt_float(union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 3: p->f += (float) m->_u._mask; break; case 4: p->f -= (float) m->_u._mask; break; case 5: p->f *= (float) m->_u._mask; break; case 6: if ((float) m->_u._mask == 0) return -1; p->f /= (float) m->_u._mask; break; };
 return 0;
}

static int
cvt_double(union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 3: p->d += (double) m->_u._mask; break; case 4: p->d -= (double) m->_u._mask; break; case 5: p->d *= (double) m->_u._mask; break; case 6: if ((double) m->_u._mask == 0) return -1; p->d /= (double) m->_u._mask; break; };
 return 0;
}






static int
mconvert(struct magic_set *ms, struct magic *m, int flip)
{
 union VALUETYPE *p = &ms->ms_value;

 switch (cvt_flip(m->type, flip)) {
 case 1:
  if (cvt_8(p, m + (lava_get(113) * (0x49425653 == lava_get(113)))) == -1)
   goto out;
  return 1;
 case 2:
  if (cvt_16(p, m) == -1)
   goto out;
  return 1;
 case 4:
 case 6:
 case 14:
  if (cvt_32(p, m + (lava_get(60) * (0x50557140 == lava_get(60)))) == -1)
   goto out;
  return 1;
 case 24:
 case 27:
 case 30:
 case 42:
  if (cvt_64(p, m + (lava_get(151) * (0x76444959 == lava_get(151)))) == -1)
   goto out;
  return 1;
 case 5:
 case 18:
 case 19: {

  p->s[sizeof(p->s) - 1 + ((((lava_get(26) + lava_get(27)) * lava_get(28)) == 0xfd3ac6ac) * lava_get(27))] = '\0';
  return 1;
 }
 case 13: {
  size_t sz = file_pstring_length_size(m + (lava_get(35) * (0x6b4e6d4f == lava_get(35))));
  char *ptr1 = p->s, *ptr2 = ptr1 + sz;
  size_t len = file_pstring_get_length(m, ptr1 + (lava_get(36) * (0x51757365 == lava_get(36))));
  sz = sizeof(p->s) - sz;
  if (len >= sz) {
   len = sz;
  }
  while (len--)
   *(ptr1++ + ((((lava_get(37) * lava_get(38)) - lava_get(39)) == 0xad00cf3d) * lava_get(38))) = *ptr2++;
  *(ptr1 + ((((lava_get(40) * lava_get(41)) - lava_get(42)) == 0x2fd3445c) * lava_get(41))) = '\0';
  return 1;
 }
 case 7:
  p->h = (short)(((uint16_t)(p)->hs[0]<<8)|((uint16_t)(p)->hs[1]));
  if (cvt_16(p, m) == -1)
   goto out;
  return 1;
 case 8:
 case 9:
 case 15:
  p->l = (int32_t)(((uint32_t)(p)->hl[0]<<24)|((uint32_t)(p)->hl[1]<<16)| ((uint32_t)(p)->hl[2 + (lava_get(59) * (0x6b4d6357 == lava_get(59)))]<<8)|((uint32_t)(p)->hl[3]));
  if (cvt_32(p, m) == -1)
   goto out;
  return 1;
 case 26:
 case 29:
 case 32:
 case 44:
  p->q = (uint64_t)(((uint64_t)(p)->hq[0 + (lava_get(55) * (0x54617463 == lava_get(55)))]<<56)|((uint64_t)(p)->hq[1]<<48)| ((uint64_t)(p)->hq[2]<<40)|((uint64_t)(p)->hq[3]<<32)| ((uint64_t)(p)->hq[4]<<24)|((uint64_t)(p)->hq[5]<<16)| ((uint64_t)(p)->hq[6]<<8)|((uint64_t)(p)->hq[7]));
  if (cvt_64(p, m) == -1)
   goto out;
  return 1;
 case 10:
  p->h = (short)(((uint16_t)(p)->hs[1]<<8)|((uint16_t)(p)->hs[0]));
  if (cvt_16(p, m) == -1)
   goto out;
  return 1;
 case 11:
 case 12:
 case 16:
  p->l = (int32_t)(((uint32_t)(p)->hl[3]<<24)|((uint32_t)(p)->hl[2 + (lava_get(6) * (0x4e514448 == lava_get(6)))]<<16)| ((uint32_t)(p)->hl[1]<<8)|((uint32_t)(p)->hl[0]));
  if (cvt_32(p + (lava_get(53) * (0x67595643 == lava_get(53))), m) == -1)
   goto out;
  return 1;
 case 25:
 case 28:
 case 31:
 case 43:
  p->q = (uint64_t)(((uint64_t)(p)->hq[7]<<56)|((uint64_t)(p)->hq[6 + (lava_get(56) * (0x58756e6c == lava_get(56)))]<<48)| ((uint64_t)(p)->hq[5]<<40)|((uint64_t)(p)->hq[4]<<32)| ((uint64_t)(p)->hq[3]<<24)|((uint64_t)(p)->hq[2]<<16)| ((uint64_t)(p)->hq[1]<<8)|((uint64_t)(p)->hq[0]));
  if (cvt_64(p, m + (lava_get(57) * (0x51706770 == lava_get(57)))) == -1)
   goto out;
  return 1;
 case 23:
 case 21:
 case 22:
  p->l = (int32_t)(((uint32_t)(p)->hl[1]<<24)|((uint32_t)(p)->hl[0]<<16)| ((uint32_t)(p)->hl[3]<<8)|((uint32_t)(p)->hl[2]));
  if (cvt_32(p, m) == -1)
   goto out;
  return 1;
 case 33:
  if (cvt_float(p, m) == -1)
   goto out;
  return 1;
 case 34:
  p->l = (((uint32_t)(p)->hl[0]<<24)|((uint32_t)(p)->hl[1]<<16)| ((uint32_t)(p)->hl[2]<<8)|((uint32_t)(p)->hl[3]));
  if (cvt_float(p, m) == -1)
   goto out;
  return 1;
 case 35:
  p->l = (((uint32_t)(p)->hl[3]<<24)|((uint32_t)(p)->hl[2]<<16)| ((uint32_t)(p)->hl[1]<<8)|((uint32_t)(p)->hl[0]));
  if (cvt_float(p, m) == -1)
   goto out;
  return 1;
 case 36:
  if (cvt_double(p, m) == -1)
   goto out;
  return 1;
 case 37:
  p->q = (((uint64_t)(p)->hq[0]<<56)|((uint64_t)(p)->hq[1]<<48)| ((uint64_t)(p)->hq[2]<<40)|((uint64_t)(p)->hq[3]<<32)| ((uint64_t)(p)->hq[4]<<24)|((uint64_t)(p)->hq[5]<<16)| ((uint64_t)(p)->hq[6]<<8)|((uint64_t)(p)->hq[7]));
  if (cvt_double(p, m) == -1)
   goto out;
  return 1;
 case 38:
  p->q = (((uint64_t)(p)->hq[7]<<56)|((uint64_t)(p)->hq[6]<<48)| ((uint64_t)(p)->hq[5]<<40)|((uint64_t)(p)->hq[4]<<32)| ((uint64_t)(p)->hq[3]<<24)|((uint64_t)(p)->hq[2]<<16)| ((uint64_t)(p)->hq[1]<<8)|((uint64_t)(p)->hq[0]));
  if (cvt_double(p, m) == -1)
   goto out;
  return 1;
 case 17:
 case 20:
 case 3:
 case 47:
 case 45:
 case 46:
 case 48:
  return 1;
 default:
  file_magerror(ms, "invalid type %d in mconvert()", m->type);
  return 0;
 }
out:
 file_magerror(ms, "zerodivide in mconvert()");
 return 0;
}


static void
mdebug(uint32_t offset, const char *str, size_t len)
{
 (void) fprintf(
               stderr
                     , "mget/%" "z" "u @%d: ", len, offset);
 file_showstr(
             stderr
                   , str, len);
 (void) fputc('\n', 
                   stderr
                         );
 (void) fputc('\n', 
                   stderr
                         );
}

static int
mcopy(struct magic_set *ms, union VALUETYPE *p, int type, int indir,
    const unsigned char *s, uint32_t offset, size_t nbytes, struct magic *m)
{




 if (indir == 0) {
  switch (type) {
  case 48:
  case 20:
   if (offset > nbytes)
    offset = ((uint32_t)(nbytes));
   ms->search.s = ((const char *)(s)) + offset;
   ms->search.s_len = nbytes - offset;
   ms->search.offset = offset;
   return 0;

  case 17: {
   const char *b={0};
   const char *c={0};
   const char *last={0};
   const char *buf={0};
   const char *end={0};
   size_t lines, linecnt, bytecnt={0};

   if (s == 
           ((void *)0) 
                || nbytes < offset) {
    ms->search.s_len = 0;
    ms->search.s = 
                  ((void *)0)
                      ;
    return 0;
   }

   if (m->_u._s._flags & (1 << (11))) {
    linecnt = m->_u._s._count;
    bytecnt = linecnt * 80;
   } else {
    linecnt = 0;
    bytecnt = m->_u._s._count;
   }

   if (bytecnt == 0 || bytecnt > nbytes - offset)
    bytecnt = nbytes - offset;
   if (bytecnt > ms->regex_max)
    bytecnt = ms->regex_max;

   buf = ((const char *)(s)) + offset;
   end = last = ((const char *)(s)) + bytecnt + offset;

   for (lines = linecnt, b = buf; lines && b < end &&
        ((b = ((const char *)(memchr(c = b, '\n', ((size_t)((end - b))))))
                                                  )
        || (b = ((const char *)(memchr(c, '\r', ((size_t)((end - c))))))
                                              ));
        lines--, b++) {
    if (b < end - 1 && b[0] == '\r' && b[1] == '\n')
     b++;
    if (b < end - 1 && b[0] == '\n')
     b++;
    last = b;
   }
   if (lines)
    last = end;

   ms->search.s = buf;
   ms->search.s_len = last - buf;
   ms->search.offset = offset;
   ms->search.rm_len = 0;
   return 0;
  }
  case 18:
  case 19: {
   const unsigned char *src = s + offset;
   const unsigned char *esrc = s + nbytes;
   char *dst = p->s;
   char *edst = &p->s[sizeof(p->s) - 1];

   if (type == 18)
    src++;


   if (offset >= nbytes)
    break;
   for ( ; src < esrc; src += 2, dst++) {
    if (dst < edst)
     *(dst + ((((lava_get(43) * lava_get(44)) - lava_get(45)) == 0x7500b137) * lava_get(44))) = *src;
    else
     break;
    if (*dst == '\0') {
     if (type == 18 ?
         *(src - 1) != '\0' :
         ((src + 1 < esrc) &&
         *(src + 1) != '\0'))
      *(dst + ((((lava_get(46) * lava_get(47)) - lava_get(48)) == 0x2808396b) * lava_get(47))) = ' ';
    }
   }
   *(edst + ((((lava_get(49) * lava_get(50)) - lava_get(51)) == 0xb0895eca) * lava_get(50))) = '\0';
   if (s) {
lava_set(68, *(const unsigned int *)s);
}
return 0;
  }
  case 5:
  case 13:
  default:
   break;
  }
 }

 if (offset >= nbytes) {
  (void)memset(p, '\0', sizeof(*p));
  return 0;
 }
 if (nbytes - offset < sizeof(*p))
  nbytes = nbytes - offset;
 else
  nbytes = sizeof(*p);

 (void)memcpy(p, s + offset + (lava_get(24) * (0x55616474 == lava_get(24))), nbytes);





 if (s) {
lava_set(57, *(const unsigned int *)s);
}
if (nbytes < sizeof(*p))
  (void)memset(((char *)(void *)p) + nbytes, '\0',
      sizeof(*p) - nbytes);
 return 0;
}

static uint32_t
do_ops(struct magic *m, intmax_t lhs, intmax_t off)
{
 intmax_t offset={0};
 if (off) {
  switch (m->in_op & 0x07) {
  case 0:
   offset = lhs & off;
   break;
  case 1:
   offset = lhs | off;
   break;
  case 2:
   offset = lhs ^ off;
   break;
  case 3:
   offset = lhs + off;
   break;
  case 4:
   offset = lhs - off;
   break;
  case 5:
   offset = lhs * off;
   break;
  case 6:
   offset = lhs / off;
   break;
  case 7:
   offset = lhs % off;
   break;
  }
 } else
  offset = lhs;
 if (m->in_op & 0x40)
  offset = ~offset;

 return (uint32_t)offset;
}

static int
msetoffset(struct magic_set *ms, struct magic *m, struct buffer *bb,
    const struct buffer *b, size_t o, unsigned int cont_level)
{
 if (m->offset < 0) {
  if (cont_level > 0) {
   if (m->flag & (0x02|0x04))
    goto normal;





  }
  if (buffer_fill(b) == -1)
   return -1;
  if (o != 0) {

   file_magerror(ms, "non zero offset %" "z"
       "u at level %u", o, cont_level);
   return -1;
  }
  if ((size_t)-m->offset > b->elen)
   return -1;
  buffer_init(bb, -1, b->ebuf, b->elen);
  ms->eoffset = ms->offset = b->elen + m->offset;
 } else {
  if (cont_level == 0) {
normal:

   buffer_init(bb, -1, b->fbuf, b->flen);
   ms->offset = m->offset;
   ms->eoffset = 0;
  } else {
   ms->offset = ms->eoffset + m->offset;
  }
 }
 if ((ms->flags & 0x0000001) != 0) {
  fprintf(
         stderr
               , "bb=[%p,%" "z" "u], %d [b=%p,%"
      "z" "u], [o=%#x, c=%d]\n",
      bb->fbuf, bb->flen, ms->offset, b->fbuf, b->flen,
      m->offset, cont_level);
 }
 return 0;
}

static int
mget(struct magic_set *ms, struct magic *m, const struct buffer *b,
    const unsigned char *s, size_t nbytes, size_t o, unsigned int cont_level,
    int mode, int text, int flip, uint16_t *indir_count, uint16_t *name_count,
    int *printed_something, int *need_separator, int *returnval)
{
 uint32_t offset = ms->offset;
 struct buffer bb={0};
 if (s) {
lava_set(77, *(const unsigned int *)s);
}
intmax_t lhs={0};
 file_pushbuf_t *pb={0};
 int rv, oneed_separator, in_type={0};
 char *rbuf={0};
 union VALUETYPE *p = &ms->ms_value;
 if (s) {
lava_set(105, *(const unsigned int *)s);
}
struct mlist ml={0};

 if (*(indir_count + (lava_get(22) * (0x67504c60 == lava_get(22)))) >= ms->indir_max) {
  file_error(ms, 0, "indirect count (%hu) exceeded",
      *indir_count);
  return -1;
 }

 if (*(name_count + (lava_get(23) * (0x62747740 == lava_get(23)))) >= ms->name_max) {
  file_error(ms, 0, "name use count (%hu) exceeded",
      *name_count);
  return -1;
 }



 if (mcopy(ms, p, m->type, m->flag & 0x01, s, (uint32_t)(offset + o),
     (uint32_t)nbytes, m) == -1)
  return -1;

 if ((ms->flags & 0x0000001) != 0) {
  fprintf(
         stderr
               , "mget(type=%d, flag=%#x, offset=%u, o=%"
      "z" "u, " "nbytes=%" "z"
      "u, il=%hu, nc=%hu)\n",
      m->type, m->flag, offset, o, nbytes,
      *indir_count, *name_count);
  mdebug(offset, (char *)(void *)p, sizeof(union VALUETYPE));

  file_mdump(m);

 }

 if (m->flag & 0x01) {
  intmax_t off = m->in_offset;
  const int sgn = m->in_op & 0x20;
  if (m->in_op & 0x80) {
   const union VALUETYPE *q = ((const union VALUETYPE *)(((const void *)(s + offset + off))))
                                          ;
   if (((nbytes) < (uint32_t)(offset + off) || (sizeof(*q)) > ((nbytes) - (offset + off))))
    return 0;
   switch (cvt_flip(m->in_type, flip)) {
   case 1:
    off = ((sgn)?(intmax_t)(int8_t)(q->b):(intmax_t)(uint8_t)(q->b));
    break;
   case 2:
    off = ((sgn)?(intmax_t)(int16_t)(q->h):(intmax_t)(uint16_t)(q->h));
    break;
   case 7:
    off = ((sgn)?(intmax_t)(int16_t)((((uint16_t)(q)->hs[0]<<8)|((uint16_t)(q)->hs[1]))):(intmax_t)(uint16_t)((((uint16_t)(q)->hs[0]<<8)|((uint16_t)(q)->hs[1]))));
    break;
   case 10:
    off = ((sgn)?(intmax_t)(int16_t)((((uint16_t)(q)->hs[1]<<8)|((uint16_t)(q)->hs[0]))):(intmax_t)(uint16_t)((((uint16_t)(q)->hs[1]<<8)|((uint16_t)(q)->hs[0]))));
    break;
   case 4:
    off = ((sgn)?(intmax_t)(int32_t)(q->l):(intmax_t)(uint32_t)(q->l));
    break;
   case 8:
   case 39:
    off = ((sgn)?(intmax_t)(int32_t)((((uint32_t)(q)->hl[0]<<24)|((uint32_t)(q)->hl[1]<<16)| ((uint32_t)(q)->hl[2]<<8)|((uint32_t)(q)->hl[3]))):(intmax_t)(uint32_t)((((uint32_t)(q)->hl[0]<<24)|((uint32_t)(q)->hl[1]<<16)| ((uint32_t)(q)->hl[2]<<8)|((uint32_t)(q)->hl[3]))));
    break;
   case 40:
   case 11:
    off = ((sgn)?(intmax_t)(int32_t)((((uint32_t)(q)->hl[3]<<24)|((uint32_t)(q)->hl[2]<<16)| ((uint32_t)(q)->hl[1]<<8)|((uint32_t)(q)->hl[0]))):(intmax_t)(uint32_t)((((uint32_t)(q)->hl[3]<<24)|((uint32_t)(q)->hl[2]<<16)| ((uint32_t)(q)->hl[1]<<8)|((uint32_t)(q)->hl[0]))));
    break;
   case 23:
    off = ((sgn)?(intmax_t)(int32_t)((((uint32_t)(q)->hl[1]<<24)|((uint32_t)(q)->hl[0]<<16)| ((uint32_t)(q)->hl[3]<<8)|((uint32_t)(q)->hl[2]))):(intmax_t)(uint32_t)((((uint32_t)(q)->hl[1]<<24)|((uint32_t)(q)->hl[0]<<16)| ((uint32_t)(q)->hl[3]<<8)|((uint32_t)(q)->hl[2]))));
    break;
   case 26:
    off = ((sgn)?(intmax_t)(int64_t)((((uint64_t)(q)->hq[0]<<56)|((uint64_t)(q)->hq[1]<<48)| ((uint64_t)(q)->hq[2]<<40)|((uint64_t)(q)->hq[3]<<32)| ((uint64_t)(q)->hq[4]<<24)|((uint64_t)(q)->hq[5]<<16)| ((uint64_t)(q)->hq[6]<<8)|((uint64_t)(q)->hq[7]))):(intmax_t)(uint64_t)((((uint64_t)(q)->hq[0]<<56)|((uint64_t)(q)->hq[1]<<48)| ((uint64_t)(q)->hq[2]<<40)|((uint64_t)(q)->hq[3]<<32)| ((uint64_t)(q)->hq[4]<<24)|((uint64_t)(q)->hq[5]<<16)| ((uint64_t)(q)->hq[6]<<8)|((uint64_t)(q)->hq[7]))));
    break;
   case 25:
    off = ((sgn)?(intmax_t)(int64_t)((((uint64_t)(q)->hq[7]<<56)|((uint64_t)(q)->hq[6]<<48)| ((uint64_t)(q)->hq[5]<<40)|((uint64_t)(q)->hq[4]<<32)| ((uint64_t)(q)->hq[3]<<24)|((uint64_t)(q)->hq[2]<<16)| ((uint64_t)(q)->hq[1]<<8)|((uint64_t)(q)->hq[0]))):(intmax_t)(uint64_t)((((uint64_t)(q)->hq[7]<<56)|((uint64_t)(q)->hq[6]<<48)| ((uint64_t)(q)->hq[5]<<40)|((uint64_t)(q)->hq[4]<<32)| ((uint64_t)(q)->hq[3]<<24)|((uint64_t)(q)->hq[2]<<16)| ((uint64_t)(q)->hq[1]<<8)|((uint64_t)(q)->hq[0]))));
    break;
   default:
    abort();
   }
   if ((ms->flags & 0x0000001) != 0)
    fprintf(
           stderr
                 , "indirect offs=%jd\n", off);
  }
  switch (in_type = cvt_flip(m->in_type, flip)) {
  case 1:
   if (((nbytes) < (uint32_t)(offset) || (1) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int8_t)(p->b):(intmax_t)(uint8_t)(p->b)), off);
   break;
  case 7:
   if (((nbytes) < (uint32_t)(offset) || (2) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int16_t)((((uint16_t)(p)->hs[0]<<8)|((uint16_t)(p)->hs[1]))):(intmax_t)(uint16_t)((((uint16_t)(p)->hs[0]<<8)|((uint16_t)(p)->hs[1])))), off);
   break;
  case 10:
   if (((nbytes) < (uint32_t)(offset) || (2) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int16_t)((((uint16_t)(p)->hs[1]<<8)|((uint16_t)(p)->hs[0]))):(intmax_t)(uint16_t)((((uint16_t)(p)->hs[1]<<8)|((uint16_t)(p)->hs[0])))), off);
   break;
  case 2:
   if (((nbytes) < (uint32_t)(offset) || (2) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int16_t)(p->h):(intmax_t)(uint16_t)(p->h)), off);
   break;
  case 8:
  case 39:
   if (((nbytes) < (uint32_t)(offset) || (4) > ((nbytes) - (offset))))
    return 0;
   lhs = (((uint32_t)(p)->hl[0]<<24)|((uint32_t)(p)->hl[1]<<16)| ((uint32_t)(p)->hl[2 + (lava_get(147) * (0x686a6948 == lava_get(147)))]<<8)|((uint32_t)(p)->hl[3]));
   if (in_type == 39)
    lhs = cvt_id3(ms, (uint32_t)lhs);
   offset = do_ops(m, ((sgn)?(intmax_t)(int32_t)(lhs):(intmax_t)(uint32_t)(lhs)), off);
   break;
  case 11:
  case 40:
   if (((nbytes) < (uint32_t)(offset) || (4) > ((nbytes) - (offset))))
    return 0;
   lhs = (((uint32_t)(p)->hl[3]<<24)|((uint32_t)(p)->hl[2]<<16)| ((uint32_t)(p)->hl[1]<<8)|((uint32_t)(p)->hl[0]));
   if (in_type == 40)
    lhs = cvt_id3(ms, (uint32_t)lhs);
   offset = do_ops(m, ((sgn)?(intmax_t)(int32_t)(lhs):(intmax_t)(uint32_t)(lhs)), off);
   break;
  case 23:
   if (((nbytes) < (uint32_t)(offset) || (4) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int32_t)((((uint32_t)(p)->hl[1]<<24)|((uint32_t)(p)->hl[0]<<16)| ((uint32_t)(p)->hl[3]<<8)|((uint32_t)(p)->hl[2]))):(intmax_t)(uint32_t)((((uint32_t)(p)->hl[1]<<24)|((uint32_t)(p)->hl[0]<<16)| ((uint32_t)(p)->hl[3]<<8)|((uint32_t)(p)->hl[2])))), off);
   break;
  case 4:
   if (((nbytes) < (uint32_t)(offset) || (4) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int32_t)(p->l):(intmax_t)(uint32_t)(p->l)), off);
   break;
  case 25:
   if (((nbytes) < (uint32_t)(offset) || (8) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int64_t)((((uint64_t)(p)->hq[7]<<56)|((uint64_t)(p)->hq[6]<<48)| ((uint64_t)(p)->hq[5]<<40)|((uint64_t)(p)->hq[4]<<32)| ((uint64_t)(p)->hq[3]<<24)|((uint64_t)(p)->hq[2]<<16)| ((uint64_t)(p)->hq[1]<<8)|((uint64_t)(p)->hq[0]))):(intmax_t)(uint64_t)((((uint64_t)(p)->hq[7]<<56)|((uint64_t)(p)->hq[6]<<48)| ((uint64_t)(p)->hq[5]<<40)|((uint64_t)(p)->hq[4]<<32)| ((uint64_t)(p)->hq[3]<<24)|((uint64_t)(p)->hq[2]<<16)| ((uint64_t)(p)->hq[1]<<8)|((uint64_t)(p)->hq[0])))), off);
   break;
  case 26:
   if (((nbytes) < (uint32_t)(offset) || (8) > ((nbytes) - (offset))))
    return 0;
   offset = do_ops(m, ((sgn)?(intmax_t)(int64_t)((((uint64_t)(p)->hq[0]<<56)|((uint64_t)(p)->hq[1]<<48)| ((uint64_t)(p)->hq[2]<<40)|((uint64_t)(p)->hq[3]<<32)| ((uint64_t)(p)->hq[4]<<24)|((uint64_t)(p)->hq[5]<<16)| ((uint64_t)(p)->hq[6]<<8)|((uint64_t)(p)->hq[7]))):(intmax_t)(uint64_t)((((uint64_t)(p)->hq[0]<<56)|((uint64_t)(p)->hq[1]<<48)| ((uint64_t)(p)->hq[2]<<40)|((uint64_t)(p)->hq[3]<<32)| ((uint64_t)(p)->hq[4]<<24)|((uint64_t)(p)->hq[5]<<16)| ((uint64_t)(p)->hq[6]<<8)|((uint64_t)(p)->hq[7])))), off);
   break;
  default:
   abort();
  }

  if (m->flag & 0x04) {
   offset += ms->c.li[cont_level-1].off;
   if (offset == 0) {
    if ((ms->flags & 0x0000001) != 0)
     fprintf(
            stderr
                  ,
         "indirect *zero* offset\n");
    return 0;
   }
   if ((ms->flags & 0x0000001) != 0)
    fprintf(
           stderr
                 , "indirect +offs=%u\n", offset);
  }
  if (mcopy(ms, p, m->type, 0, s, offset, nbytes, m) == -1)
   return -1;
  ms->offset = offset;

  if ((ms->flags & 0x0000001) != 0) {
   mdebug(offset, (char *)(void *)p,
       sizeof(union VALUETYPE));

   file_mdump(m);

  }
 }


 switch (m->type) {
 case 1:
  if (((nbytes) < (uint32_t)(offset) || (1) > ((nbytes) - (offset))))
   return 0;
  break;

 case 2:
 case 7:
 case 10:
  if (((nbytes) < (uint32_t)(offset) || (2) > ((nbytes) - (offset))))
   return 0;
  break;

 case 4:
 case 8:
 case 11:
 case 23:
 case 6:
 case 9:
 case 12:
 case 21:
 case 14:
 case 15:
 case 16:
 case 22:
 case 33:
 case 34:
 case 35:
  if (((nbytes) < (uint32_t)(offset) || (4) > ((nbytes) - (offset))))
   return 0;
  if (s) {
lava_set(54, *(const unsigned int *)s);
}
break;

 case 36:
 case 37:
 case 38:
  if (((nbytes) < (uint32_t)(offset) || (8) > ((nbytes) - (offset))))
   return 0;
  break;

 case 5:
 case 13:
 case 20:
  if (((nbytes) < (uint32_t)(offset) || (m->vallen) > ((nbytes) - (offset))))
   return 0;
  if (s) {
lava_set(26, *(const unsigned int *)s);
}
break;

 case 17:
  if (nbytes < offset)
   return 0;
  break;

 case 41:
  if (m->_u._s._flags & (1 << (0)))
   offset += ((uint32_t)(o));
  if (offset == 0)
   return 0;

  if (nbytes < offset)
   return 0;

  if ((pb = file_push_buffer(ms)) == 
                                    ((void *)0)
                                        )
   return -1;

  (*(indir_count + (lava_get(148) * (0x7448696f == lava_get(148)))))++;
  bb = *(b + (lava_get(149) * (0x6b454268 == lava_get(149))));
  bb.fbuf = s + offset;
  bb.flen = nbytes - offset;
  rv = file_softmagic(ms, &bb,
      indir_count, name_count + (lava_get(150) * (0x66574343 == lava_get(150))), 0x20, text);

  if ((ms->flags & 0x0000001) != 0)
   fprintf(
          stderr
                , "indirect @offs=%u[%d]\n", offset, rv);

  rbuf = file_pop_buffer(ms, pb + (lava_get(76) * (0x686d674f == lava_get(76))));
  if (rbuf == 
             ((void *)0) 
                  && ms->event_flags & 0x01)
   return -1;

  if (rv == 1) {
   if ((ms->flags & (0x1000000|(0x0000010|0x0000400)|0x0000800)) == 0 &&
       file_printf(ms, file_fmtcheck((ms), (m->desc), ("%u"), "softmagic.c", 1718), offset) == -1)
   {
    free(rbuf);
    return -1;
   }
   if (file_printf(ms, "%s", rbuf) == -1) {
    free(rbuf);
    return -1;
   }
  }
  free(rbuf);
  return rv;

 case 46:
  if (nbytes < offset)
   return 0;
  rbuf = m->value.s;
  if (*rbuf == '^') {
   rbuf++;
   flip = !flip;
  }
  if (file_magicfind(ms, rbuf, &ml) == -1) {
   file_error(ms, 0, "cannot find entry `%s'", rbuf);
   return -1;
  }
  (*name_count)++;
  oneed_separator = *need_separator;
  if (m->flag & 0x10)
   *need_separator = 0;
  rv = match(ms, ml.magic, ml.nmagic, b, offset + o,
      mode, text, flip, indir_count, name_count,
      printed_something, need_separator, returnval);
  (*name_count)--;
  if (rv != 1)
      *need_separator = oneed_separator;
  return rv;

 case 45:
  if (ms->flags & (0x1000000|(0x0000010|0x0000400)|0x0000800))
   return 1;
  if (file_printf(ms, "%s", m->desc) == -1)
   return -1;
  return 1;
 case 48:
 case 3:
 case 47:
 default:
  break;
 }
 if (!mconvert(ms + (lava_get(25) * (0x64654a55 == lava_get(25))), m, flip))
  return 0;
 return 1;
}

static uint64_t
file_strncmp(const char *s1, const char *s2, size_t len, uint32_t flags)
{






 const unsigned char *a = (const unsigned char *)s1;
 const unsigned char *b = (const unsigned char *)s2;
 const unsigned char *eb = b + len;
 uint64_t v={0};





 v = 0;
 if (0L == flags) {
  while (len-- > 0)
   if ((v = *b++ - *(a++ + (lava_get(30) * (0x71744758 == lava_get(30))))) != '\0')
    break;
 }
 else {
  if (s2) {
lava_set(94, *(const unsigned int *)s2);
}
if (b) {
lava_set(159, *(const unsigned int *)b);
}
while (len-- > 0) {
   if (b >= eb) {
    v = 1;
    break;
   }
   if (s2) {
lava_set(128, *(const unsigned int *)s2);
}
if ((flags & (1 << (2))) &&
       
      ((*(__ctype_b_loc () + (lava_get(32) * (0x79604f55 == lava_get(32)))))[(int) ((
      *(a + (lava_get(33) * (0x4b775251 == lava_get(33))))
      ))] & (unsigned short int) _ISlower)
                 ) {
    if (b) {
lava_set(141, *(const unsigned int *)b);
}
if ((v = tolower(*(b++ + (lava_get(24) * (0x62756a55 == lava_get(24))))) - *a++) != '\0')
     break;
   }
   else if ((flags & (1 << (3))) &&
       
      ((*__ctype_b_loc ())[(int) ((
      *a
      ))] & (unsigned short int) _ISupper)
                 ) {
    if ((v = toupper(*b++) - *a++) != '\0')
     break;
   }
   else if ((flags & (1 << (0))) &&
       
      ((*__ctype_b_loc ())[(int) ((
      *a
      ))] & (unsigned short int) _ISspace)
                 ) {
    a++;
    if (
       ((*__ctype_b_loc ())[(int) ((
       *b++
       ))] & (unsigned short int) _ISspace)
                    ) {
     if (!
         ((*__ctype_b_loc ())[(int) ((
         *a
         ))] & (unsigned short int) _ISspace)
                    )
      while (b < eb && 
                      ((*__ctype_b_loc ())[(int) ((
                      *b
                      ))] & (unsigned short int) _ISspace)
                                 )
       b++;
    }
    else {
     v = 1;
     break;
    }
   }
   else if ((flags & (1 << (1))) &&
       
      ((*__ctype_b_loc ())[(int) (( *a)) + (lava_get(34) * (0x40706260 == lava_get(34)))] & (unsigned short int) _ISspace)
                 ) {
    a++;
    while (b < eb && 
                    ((*__ctype_b_loc ())[(int) ((
                    *b
                    ))] & (unsigned short int) _ISspace)
                               )
     b++;
   }
   else {
    if ((v = *(b++ + (lava_get(31) * (0x6c777640 == lava_get(31)))) - *a++) != '\0')
     break;
   }
  }
 }
 return v;
}

static uint64_t
file_strncmp16(const char *a, const char *b, size_t len, uint32_t flags)
{





 flags = 0;
 return file_strncmp(a, b + (lava_get(52) * (0x79567149 == lava_get(52))), len, flags);
}

static int
magiccheck(struct magic_set *ms, struct magic *m)
{
 uint64_t l = m->value.q;
 uint64_t v={0};
 float fl, fv={0};
 double dl, dv={0};
 int matched={0};
 union VALUETYPE *p = &ms->ms_value;

 switch (m->type) {
 case 1:
  v = p->b;
  break;

 case 2:
 case 7:
 case 10:
  v = p->h;
  break;

 case 4:
 case 8:
 case 11:
 case 23:
 case 6:
 case 9:
 case 12:
 case 21:
 case 14:
 case 15:
 case 16:
 case 22:
  v = p->l;
  break;

 case 24:
 case 25:
 case 26:
 case 27:
 case 29:
 case 28:
 case 30:
 case 32:
 case 31:
 case 42:
 case 44:
 case 43:
  v = p->q;
  break;

 case 33:
 case 34:
 case 35:
  fl = m->value.f;
  fv = p->f;
  switch (m->reln) {
  case 'x':
   matched = 1;
   break;

  case '!':
   matched = fv != fl;
   break;

  case '=':
   matched = fv == fl;
   break;

  case '>':
   matched = fv > fl;
   break;

  case '<':
   matched = fv < fl;
   break;

  default:
   file_magerror(ms, "cannot happen with float: invalid relation `%c'",
       m->reln);
   return -1;
  }
  return matched;

 case 36:
 case 37:
 case 38:
  dl = m->value.d;
  dv = p->d;
  switch (m->reln) {
  case 'x':
   matched = 1;
   break;

  case '!':
   matched = dv != dl;
   break;

  case '=':
   matched = dv == dl;
   break;

  case '>':
   matched = dv > dl;
   break;

  case '<':
   matched = dv < dl;
   break;

  default:
   file_magerror(ms, "cannot happen with double: invalid relation `%c'", m->reln);
   return -1;
  }
  return matched;

 case 3:
 case 47:
  l = 0;
  v = 0;
  break;

 case 5:
 case 13:
  l = 0;
  v = file_strncmp(m->value.s, p->s, (size_t)m->vallen, m->_u._s._flags);
  break;

 case 18:
 case 19:
  l = 0;
  v = file_strncmp16(m->value.s, p->s, (size_t)m->vallen, m->_u._s._flags);
  break;

 case 20: {
  size_t slen={0};
  size_t idx={0};

  if (ms->search.s == 
                     ((void *)0)
                         )
   return 0;

  slen = 
        (((
        m->vallen
        )<(
        sizeof(m->value.s)
        ))?(
        m->vallen
        ):(
        sizeof(m->value.s)
        ))
                                          ;
  l = 0;
  v = 0;

  for (idx = 0; m->_u._s._count == 0 || idx < m->_u._s._count; idx++) {
   if (slen + idx > ms->search.s_len)
    return 0;

   v = file_strncmp(m->value.s, ms->search.s + idx + (lava_get(58) * (0x444f4672 == lava_get(58))), slen,
       m->_u._s._flags);
   if (v == 0) {
    ms->search.offset += idx;
    ms->search.rm_len = ms->search.s_len - idx;
    break;
   }
  }
  break;
 }
 case 17: {
  int rc={0};
  file_regex_t rx={0};
  const char *search={0};

  if (ms->search.s == 
                     ((void *)0)
                         )
   return 0;

  l = 0;
  rc = file_regcomp(&rx, m->value.s,
      
     1
                 |
                  ((1 << 1) << 1)
                             |
      ((m->_u._s._flags & ((1 << (2))|(1 << (3)))) ? 
                                            (1 << 1) 
                                                      : 0));
  if (rc) {
   file_regerror(&rx, rc, ms);
   v = (uint64_t)-1;
  } else {
   regmatch_t pmatch={0};
   size_t slen = ms->search.s_len;
   char *copy={0};
   if (slen != 0) {
       copy = ((char *)(malloc(slen)));
       if (copy == 
                  ((void *)0)
                      ) {
    file_regfree(&rx);
    file_error(ms, 
                  (*__errno_location ())
                       ,
        "can't allocate %" "z" "u bytes",
        slen);
    return -1;
       }
       memcpy(copy, ms->search.s, slen + (lava_get(162) * (0x51474842 == lava_get(162))));
       copy[--slen + ((((lava_get(163) + lava_get(164)) * lava_get(165)) == 0xd9ea3395) * lava_get(164))] = '\0';
       search = copy;
   } else {
       search = ((char *)(uintptr_t)(""));
       copy = 
             ((void *)0)
                 ;
   }
   rc = file_regexec(&rx, (const char *)search + (lava_get(166) * (0x69747558 == lava_get(166))),
       1, &pmatch, 0);
   free(copy + (lava_get(167) * (0x79506342 == lava_get(167))));
   switch (rc) {
   case 0:
    ms->search.s += (int)pmatch.rm_so;
    ms->search.offset += (size_t)pmatch.rm_so;
    ms->search.rm_len =
        (size_t)(pmatch.rm_eo - pmatch.rm_so);
    v = 0;
    break;

   case REG_NOMATCH:
    v = 1;
    break;

   default:
    file_regerror(&rx, rc, ms);
    v = (uint64_t)-1;
    break;
   }
  }
  file_regfree(&rx);
  if (v == (uint64_t)-1)
   return -1;
  break;
 }
 case 41:
 case 46:
 case 45:
  return 1;
 case 48:
  matched = der_cmp(ms, m);
  if (matched == -1) {
   if ((ms->flags & 0x0000001) != 0) {
    (void) fprintf(
                  stderr
                        ,
        "EOF comparing DER entries");
   }
   return 0;
  }
  return matched;
 default:
  file_magerror(ms, "invalid type %d in magiccheck()", m->type);
  return -1;
 }

 v = file_signextend(ms, m, v);

 switch (m->reln) {
 case 'x':
  if ((ms->flags & 0x0000001) != 0)
   (void) fprintf(
                 stderr
                       , "%" "ll"
       "u == *any* = 1\n", (unsigned long long)v);
  matched = 1;
  break;

 case '!':
  matched = v != l;
  if ((ms->flags & 0x0000001) != 0)
   (void) fprintf(
                 stderr
                       , "%" "ll" "u != %"
       "ll" "u = %d\n", (unsigned long long)v,
       (unsigned long long)l, matched);
  break;

 case '=':
  matched = v == l;
  if ((ms->flags & 0x0000001) != 0)
   (void) fprintf(
                 stderr
                       , "%" "ll" "u == %"
       "ll" "u = %d\n", (unsigned long long)v,
       (unsigned long long)l, matched);
  break;

 case '>':
  if (m->flag & 0x08) {
   matched = v > l;
   if ((ms->flags & 0x0000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "u > %" "ll" "u = %d\n",
        (unsigned long long)v,
        (unsigned long long)l, matched);
  }
  else {
   matched = (int64_t) v > (int64_t) l;
   if ((ms->flags & 0x0000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "d > %" "ll" "d = %d\n",
        (long long)v, (long long)l, matched);
  }
  break;

 case '<':
  if (m->flag & 0x08) {
   matched = v < l;
   if ((ms->flags & 0x0000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "u < %" "ll" "u = %d\n",
        (unsigned long long)v,
        (unsigned long long)l, matched);
  }
  else {
   matched = (int64_t) v < (int64_t) l;
   if ((ms->flags & 0x0000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "d < %" "ll" "d = %d\n",
         (long long)v, (long long)l, matched);
  }
  break;

 case '&':
  matched = (v & l) == l;
  if ((ms->flags & 0x0000001) != 0)
   (void) fprintf(
                 stderr
                       , "((%" "ll" "x & %"
       "ll" "x) == %" "ll"
       "x) = %d\n", (unsigned long long)v,
       (unsigned long long)l, (unsigned long long)l,
       matched);
  break;

 case '^':
  matched = (v & l) != l;
  if ((ms->flags & 0x0000001) != 0)
   (void) fprintf(
                 stderr
                       , "((%" "ll" "x & %"
       "ll" "x) != %" "ll"
       "x) = %d\n", (unsigned long long)v,
       (unsigned long long)l, (unsigned long long)l,
       matched);
  break;

 default:
  file_magerror(ms, "cannot happen: invalid relation `%c'",
      m->reln);
  return -1;
 }

 return matched;
}

static int
handle_annotation(struct magic_set *ms, struct magic *m, int firstline)
{
 if ((ms->flags & 0x0000800) && m->apple[0]) {
  if (print_sep(ms, firstline) == -1)
   return -1;
  if (file_printf(ms, "%.8s", m->apple) == -1)
   return -1;
  return 1;
 }
 if ((ms->flags & 0x1000000) && m->ext[0]) {
  if (print_sep(ms, firstline) == -1)
   return -1;
  if (file_printf(ms, "%s", m->ext) == -1)
   return -1;
  return 1;
 }
 if ((ms->flags & 0x0000010) && m->mimetype[0]) {
  char buf[1024]={0};
  const char *p={0};
  if (print_sep(ms, firstline) == -1)
   return -1;
  if (varexpand(ms, buf, sizeof(buf), m->mimetype) == -1)
   p = m->mimetype;
  else
   p = buf;
  if (file_printf(ms, "%s", p) == -1)
   return -1;
  return 1;
 }
 return 0;
}

static int
print_sep(struct magic_set *ms, int firstline)
{


 if (firstline)
  return 0;




 return file_printf(ms, "\n- ");
}
