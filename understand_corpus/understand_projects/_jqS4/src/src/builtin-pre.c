











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
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));









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



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



typedef __time_t time_t;




struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };



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









struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));

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


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;










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



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));






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







__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






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









extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
























typedef long double float_t;

typedef long double double_t;


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
extern int signgam;
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);


















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));














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



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));











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



typedef enum {
  JV_KIND_INVALID,
  JV_KIND_NULL,
  JV_KIND_FALSE,
  JV_KIND_TRUE,
  JV_KIND_NUMBER,
  JV_KIND_STRING,
  JV_KIND_ARRAY,
  JV_KIND_OBJECT
} jv_kind;

struct jv_refcnt;



typedef struct {
  unsigned char kind_flags;
  unsigned char pad_;
  unsigned short offset;
  int size;
  union {
    struct jv_refcnt* ptr;
    double number;
  } u;
} jv;






jv_kind jv_get_kind(jv);
const char* jv_kind_name(jv_kind);
static int jv_is_valid(jv x) { return jv_get_kind(x) != JV_KIND_INVALID; }

jv jv_copy(jv);
void jv_free(jv);

int jv_get_refcnt(jv);

int jv_equal(jv, jv);
int jv_identical(jv, jv);
int jv_contains(jv, jv);

jv jv_invalid(void);
jv jv_invalid_with_msg(jv);
jv jv_invalid_get_msg(jv);
int jv_invalid_has_msg(jv);


jv jv_null(void);
jv jv_true(void);
jv jv_false(void);
jv jv_bool(int);

jv jv_number(double);
double jv_number_value(jv);
int jv_is_integer(jv);

jv jv_array(void);
jv jv_array_sized(int);
int jv_array_length(jv);
jv jv_array_get(jv, int);
jv jv_array_set(jv, int, jv);
jv jv_array_append(jv, jv);
jv jv_array_concat(jv, jv);
jv jv_array_slice(jv, int, int);
jv jv_array_indexes(jv, jv);
jv jv_string(const char*);
jv jv_string_sized(const char*, int);
jv jv_string_empty(int len);
int jv_string_length_bytes(jv);
int jv_string_length_codepoints(jv);
unsigned long jv_string_hash(jv);
const char* jv_string_value(jv);
jv jv_string_indexes(jv j, jv k);
jv jv_string_slice(jv j, int start, int end);
jv jv_string_concat(jv, jv);
jv jv_string_vfmt(const char*, va_list) __attribute__ ((__format__( __printf__, 1, 0)));
jv jv_string_fmt(const char*, ...) __attribute__ ((__format__( __printf__, 1, 2)));
jv jv_string_append_codepoint(jv a, uint32_t c);
jv jv_string_append_buf(jv a, const char* buf, int len);
jv jv_string_append_str(jv a, const char* str);
jv jv_string_split(jv j, jv sep);
jv jv_string_explode(jv j);
jv jv_string_implode(jv j);

jv jv_object(void);
jv jv_object_get(jv object, jv key);
int jv_object_has(jv object, jv key);
jv jv_object_set(jv object, jv key, jv value);
jv jv_object_delete(jv object, jv key);
int jv_object_length(jv object);
jv jv_object_merge(jv, jv);
jv jv_object_merge_recursive(jv, jv);

int jv_object_iter(jv);
int jv_object_iter_next(jv, int);
int jv_object_iter_valid(jv, int);
jv jv_object_iter_key(jv, int);
jv jv_object_iter_value(jv, int);
int jv_get_refcnt(jv);

enum jv_print_flags {
  JV_PRINT_PRETTY = 1,
  JV_PRINT_ASCII = 2,
  JV_PRINT_COLOR = 4, JV_PRINT_COLOUR = 4,
  JV_PRINT_SORTED = 8,
  JV_PRINT_INVALID = 16,
  JV_PRINT_REFCOUNT = 32,
  JV_PRINT_TAB = 64,
  JV_PRINT_ISATTY = 128,
  JV_PRINT_SPACE0 = 256,
  JV_PRINT_SPACE1 = 512,
  JV_PRINT_SPACE2 = 1024,
};


void jv_dumpf(jv, FILE *f, int flags);
void jv_dump(jv, int flags);
void jv_show(jv, int flags);
jv jv_dump_string(jv, int flags);
char *jv_dump_string_trunc(jv x, char *outbuf, size_t bufsize);

enum {
  JV_PARSE_SEQ = 1,
  JV_PARSE_STREAMING = 2,
  JV_PARSE_STREAM_ERRORS = 4,
};

jv jv_parse(const char* string);
jv jv_parse_sized(const char* string, int length);

typedef void (*jv_nomem_handler_f)(void *);
void jv_nomem_handler(jv_nomem_handler_f, void *);

jv jv_load_file(const char *, int);

typedef struct jv_parser jv_parser;
jv_parser* jv_parser_new(int);
void jv_parser_set_buf(jv_parser*, const char*, int, int);
int jv_parser_remaining(jv_parser*);
jv jv_parser_next(jv_parser*);
void jv_parser_free(jv_parser*);

jv jv_get(jv, jv);
jv jv_set(jv, jv, jv);
jv jv_has(jv, jv);
jv jv_setpath(jv, jv, jv);
jv jv_getpath(jv, jv);
jv jv_delpaths(jv, jv);
jv jv_keys(jv );
jv jv_keys_unsorted(jv );
int jv_cmp(jv, jv);
jv jv_group(jv, jv);
jv jv_sort(jv, jv);

enum {
  JQ_DEBUG_TRACE = 1,
  JQ_DEBUG_TRACE_DETAIL = 2,
  JQ_DEBUG_TRACE_ALL = JQ_DEBUG_TRACE | JQ_DEBUG_TRACE_DETAIL,
};

typedef struct jq_state jq_state;
typedef void (*jq_msg_cb)(void *, jv);

jq_state *jq_init(void);
void jq_set_error_cb(jq_state *, jq_msg_cb, void *);
void jq_get_error_cb(jq_state *, jq_msg_cb *, void **);
void jq_set_nomem_handler(jq_state *, void (*)(void *), void *);
jv jq_format_error(jv msg);
void jq_report_error(jq_state *, jv);
int jq_compile(jq_state *, const char*);
int jq_compile_args(jq_state *, const char*, jv);
void jq_dump_disassembly(jq_state *, int);
void jq_start(jq_state *, jv value, int);
jv jq_next(jq_state *);
void jq_teardown(jq_state **);

void jq_halt(jq_state *, jv, jv);
int jq_halted(jq_state *);
jv jq_get_exit_code(jq_state *);
jv jq_get_error_message(jq_state *);

typedef jv (*jq_input_cb)(jq_state *, void *);
void jq_set_input_cb(jq_state *, jq_input_cb, void *);
void jq_get_input_cb(jq_state *, jq_input_cb *, void **);

void jq_set_debug_cb(jq_state *, jq_msg_cb, void *);
void jq_get_debug_cb(jq_state *, jq_msg_cb *, void **);

void jq_set_attrs(jq_state *, jv);
jv jq_get_attrs(jq_state *);
jv jq_get_jq_origin(jq_state *);
jv jq_get_prog_origin(jq_state *);
jv jq_get_lib_dirs(jq_state *);
void jq_set_attr(jq_state *, jv, jv);
jv jq_get_attr(jq_state *, jv);







typedef struct jq_util_input_state jq_util_input_state;
typedef void (*jq_util_msg_cb)(void *, const char *);

jq_util_input_state *jq_util_input_init(jq_util_msg_cb, void *);
void jq_util_input_set_parser(jq_util_input_state *, jv_parser *, int);
void jq_util_input_free(jq_util_input_state **);
void jq_util_input_add_input(jq_util_input_state *, const char *);
int jq_util_input_errors(jq_util_input_state *);
jv jq_util_input_next_input(jq_util_input_state *);
jv jq_util_input_next_input_cb(jq_state *, void *);
jv jq_util_input_get_position(jq_state*);
jv jq_util_input_get_current_filename(jq_state*);
jv jq_util_input_get_current_line(jq_state*);

int jq_set_colors(const char *);






typedef enum {

LOADK,
DUP,
DUPN,
DUP2,
PUSHK_UNDER,
POP,
LOADV,
LOADVN,
STOREV,
STORE_GLOBAL,
INDEX,
INDEX_OPT,
EACH,
EACH_OPT,
FORK,
FORK_OPT,
JUMP,
JUMP_F,
BACKTRACK,
APPEND,
INSERT,
RANGE,

SUBEXP_BEGIN,
SUBEXP_END,

PATH_BEGIN,
PATH_END,

CALL_BUILTIN,

CALL_JQ,
RET,
TAIL_CALL_JQ,

CLOSURE_PARAM,
CLOSURE_REF,
CLOSURE_CREATE,
CLOSURE_CREATE_C,

TOP,
CLOSURE_PARAM_REGULAR,
DEPS,
MODULEMETA,
GENLABEL,

DESTRUCTURE_ALT,
STOREVN,

} opcode;

enum {
  NUM_OPCODES =

+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1
+1

+1
+1

+1
+1

+1

+1
+1
+1

+1
+1
+1
+1

+1
+1
+1
+1
+1

+1
+1

};

enum {
  OP_HAS_CONSTANT = 2,
  OP_HAS_VARIABLE = 4,
  OP_HAS_BRANCH = 8,
  OP_HAS_CFUNC = 32,
  OP_HAS_UFUNC = 64,
  OP_IS_CALL_PSEUDO = 128,
  OP_HAS_BINDING = 1024,


  OP_BIND_WILDCARD = 2048,
};
struct opcode_description {
  opcode op;
  const char* name;

  int flags;


  int length;

  int stack_in, stack_out;
};

const struct opcode_description* opcode_describe(opcode op);



typedef void (*cfunction_ptr)();
struct cfunction {
  cfunction_ptr fptr;
  const char* name;
  int nargs;
};

struct symbol_table {
  struct cfunction* cfunctions;
  int ncfunctions;
  jv cfunc_names;
};
struct bytecode {
  uint16_t* code;
  int codelen;

  int nlocals;
  int nclosures;

  jv constants;
  struct symbol_table* globals;

  struct bytecode** subfunctions;
  int nsubfunctions;

  struct bytecode* parent;

  jv debuginfo;
};

void dump_disassembly(int, struct bytecode* code);
void dump_operation(struct bytecode* bc, uint16_t* op);

int bytecode_operation_length(uint16_t* codeptr);
void bytecode_free(struct bytecode* bc);










typedef struct {
  int start, end;
} location;

static const location UNKNOWN_LOCATION = {-1, -1};

struct locfile {
  jv fname;
  const char* data;
  int length;
  int* linemap;
  int nlines;
  char *error;
  jq_state *jq;
  int refct;
};

struct locfile* locfile_init(jq_state *, const char *, const char *, int);
struct locfile* locfile_retain(struct locfile *);
int locfile_get_line(struct locfile *, int);
void locfile_free(struct locfile *);
void locfile_locate(struct locfile *, location, const char *, ...);

struct inst;
typedef struct inst inst;


typedef struct block {
  inst* first;
  inst* last;
} block;

block gen_location(location, struct locfile*, block);

block gen_noop();
int block_is_noop(block b);
block gen_op_simple(opcode op);
block gen_const(jv constant);
block gen_const_global(jv constant, const char *name);
int block_is_const(block b);
int block_is_const_inf(block b);
jv_kind block_const_kind(block b);
jv block_const(block b);
block gen_op_target(opcode op, block target);
block gen_op_unbound(opcode op, const char* name);
block gen_op_bound(opcode op, block binder);
block gen_op_var_fresh(opcode op, const char* name);
block gen_op_pushk_under(jv constant);

block gen_module(block metadata);
jv block_module_meta(block b);
block gen_import(const char* name, const char *as, int is_data);
block gen_import_meta(block import, block metadata);
block gen_function(const char* name, block formals, block body);
block gen_param_regular(const char* name);
block gen_param(const char* name);
block gen_lambda(block body);
block gen_call(const char* name, block body);
block gen_subexp(block a);
block gen_both(block a, block b);
block gen_const_object(block expr);
block gen_collect(block expr);
block gen_reduce(block source, block matcher, block init, block body);
block gen_foreach(block source, block matcher, block init, block update, block extract);
block gen_definedor(block a, block b);
block gen_condbranch(block iftrue, block iffalse);
block gen_and(block a, block b);
block gen_or(block a, block b);
block gen_dictpair(block k, block v);

block gen_var_binding(block var, const char* name, block body);
block gen_array_matcher(block left, block curr);
block gen_object_matcher(block name, block curr);
block gen_destructure(block var, block matcher, block body);
block gen_destructure_alt(block matcher);

block gen_cond(block cond, block iftrue, block iffalse);
block gen_try_handler(block handler);
block gen_try(block exp, block handler);
block gen_label(const char *label, block exp);

block gen_cbinding(const struct cfunction* functions, int nfunctions, block b);

void block_append(block* b, block b2);
block block_join(block a, block b);
int block_has_only_binders_and_imports(block, int bindflags);
int block_has_only_binders(block, int bindflags);
int block_has_main(block);
int block_is_funcdef(block b);
int block_is_single(block b);
block block_bind(block binder, block body, int bindflags);
block block_bind_library(block binder, block body, int bindflags, const char* libname);
block block_bind_referenced(block binder, block body, int bindflags);
block block_drop_unreferenced(block body);

jv block_take_imports(block* body);
jv block_list_funcs(block body, int omit_underscores);

int block_compile(block, struct bytecode**, struct locfile*, jv);

void block_free(block);

int builtins_bind(jq_state *, block*);






int jq_parse(struct locfile* source, block* answer);
int jq_parse_library(struct locfile* locations, block* answer);




int load_program(jq_state *jq, struct locfile* src, block *out_block);
jv load_module_meta(jq_state *jq, jv modname);




const char* jvp_utf8_backtrack(const char* start, const char* min, int *missing_bytes);
const char* jvp_utf8_next(const char* in, const char* end, int* codepoint);
int jvp_utf8_is_valid(const char* in, const char* end);

int jvp_utf8_decode_length(char startchar);

int jvp_utf8_encode_length(int codepoint);
int jvp_utf8_encode(int codepoint, char* out);






extern volatile char jv_mem_uninitialised;


static void jv_mem_invalidate(void* mem, size_t n) {

  char* m = mem;
  while (n--) *m++ ^= jv_mem_uninitialised ^ jv_mem_uninitialised;

}

void* jv_mem_alloc(size_t);
void* jv_mem_alloc_unguarded(size_t);
void* jv_mem_calloc(size_t, size_t);
void* jv_mem_calloc_unguarded(size_t, size_t);
char* jv_mem_strdup(const char *);
char* jv_mem_strdup_unguarded(const char *);
void jv_mem_free(void*);
__attribute__((warn_unused_result)) void* jv_mem_realloc(void*, size_t);


static jv type_error(jv bad, const char* msg) {
  char errbuf[15]={0};
  jv err = jv_invalid_with_msg(jv_string_fmt("%s (%s) %s",
                                             jv_kind_name(jv_get_kind(bad)),
                                             jv_dump_string_trunc(jv_copy(bad), errbuf, sizeof(errbuf)),
                                             msg));
  jv_free(bad);
  return err;
}

static jv type_error2(jv bad1, jv bad2, const char* msg) {
  char errbuf1[15],errbuf2[15]={0};
  jv err = jv_invalid_with_msg(jv_string_fmt("%s (%s) and %s (%s) %s",
                                             jv_kind_name(jv_get_kind(bad1)),
                                             jv_dump_string_trunc(jv_copy(bad1), errbuf1, sizeof(errbuf1)),
                                             jv_kind_name(jv_get_kind(bad2)),
                                             jv_dump_string_trunc(jv_copy(bad2), errbuf2, sizeof(errbuf2)),
                                             msg));
  jv_free(bad1);
  jv_free(bad2);
  return err;
}

static inline jv ret_error(jv bad, jv msg) {
  jv_free(bad);
  return jv_invalid_with_msg(msg);
}

static inline jv ret_error2(jv bad1, jv bad2, jv msg) {
  jv_free(bad1);
  jv_free(bad2);
  return jv_invalid_with_msg(msg);
}

static jv f_plus(jq_state *jq, jv input, jv a, jv b) {
  jv_free(input);
  if (jv_get_kind(a) == JV_KIND_NULL) {
    jv_free(a);
    return b;
  } else if (jv_get_kind(b) == JV_KIND_NULL) {
    jv_free(b);
    return a;
  } else if (jv_get_kind(a) == JV_KIND_NUMBER && jv_get_kind(b) == JV_KIND_NUMBER) {
    return jv_number(jv_number_value(a) +
                     jv_number_value(b));
  } else if (jv_get_kind(a) == JV_KIND_STRING && jv_get_kind(b) == JV_KIND_STRING) {
    return jv_string_concat(a, b);
  } else if (jv_get_kind(a) == JV_KIND_ARRAY && jv_get_kind(b) == JV_KIND_ARRAY) {
    return jv_array_concat(a, b);
  } else if (jv_get_kind(a) == JV_KIND_OBJECT && jv_get_kind(b) == JV_KIND_OBJECT) {
    return jv_object_merge(a, b);
  } else {
    return type_error2(a, b, "cannot be added");
  }
}

static jv f_acos(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(acos(jv_number_value(input))); jv_free(input); return ret; }




static jv f_acosh(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(acosh(jv_number_value(input))); jv_free(input); return ret; }




static jv f_asin(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(asin(jv_number_value(input))); jv_free(input); return ret; }




static jv f_asinh(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(asinh(jv_number_value(input))); jv_free(input); return ret; }




static jv f_atan(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(atan(jv_number_value(input))); jv_free(input); return ret; }




static jv f_atan2(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(atan2(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_atanh(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(atanh(jv_number_value(input))); jv_free(input); return ret; }




static jv f_cbrt(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(cbrt(jv_number_value(input))); jv_free(input); return ret; }




static jv f_cos(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(cos(jv_number_value(input))); jv_free(input); return ret; }




static jv f_cosh(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(cosh(jv_number_value(input))); jv_free(input); return ret; }




static jv f_exp(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(exp(jv_number_value(input))); jv_free(input); return ret; }




static jv f_exp2(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(exp2(jv_number_value(input))); jv_free(input); return ret; }




static jv f_floor(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(floor(jv_number_value(input))); jv_free(input); return ret; }




static jv f_hypot(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(hypot(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_j0(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(j0(jv_number_value(input))); jv_free(input); return ret; }




static jv f_j1(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(j1(jv_number_value(input))); jv_free(input); return ret; }




static jv f_log(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(log(jv_number_value(input))); jv_free(input); return ret; }




static jv f_log10(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(log10(jv_number_value(input))); jv_free(input); return ret; }




static jv f_log2(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(log2(jv_number_value(input))); jv_free(input); return ret; }




static jv f_pow(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(pow(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_remainder(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(remainder(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_sin(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(sin(jv_number_value(input))); jv_free(input); return ret; }




static jv f_sinh(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(sinh(jv_number_value(input))); jv_free(input); return ret; }




static jv f_sqrt(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(sqrt(jv_number_value(input))); jv_free(input); return ret; }




static jv f_tan(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(tan(jv_number_value(input))); jv_free(input); return ret; }




static jv f_tanh(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(tanh(jv_number_value(input))); jv_free(input); return ret; }




static jv f_tgamma(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(tgamma(jv_number_value(input))); jv_free(input); return ret; }




static jv f_y0(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(y0(jv_number_value(input))); jv_free(input); return ret; }




static jv f_y1(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(y1(jv_number_value(input))); jv_free(input); return ret; }




static jv f_jn(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(jn(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }


static jv f_yn(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(yn(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }


static jv f_ceil(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(ceil(jv_number_value(input))); jv_free(input); return ret; }




static jv f_copysign(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(copysign(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_drem(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(drem(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_erf(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(erf(jv_number_value(input))); jv_free(input); return ret; }




static jv f_erfc(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(erfc(jv_number_value(input))); jv_free(input); return ret; }




static jv f_exp10(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(exp10(jv_number_value(input))); jv_free(input); return ret; }




static jv f_expm1(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(expm1(jv_number_value(input))); jv_free(input); return ret; }




static jv f_fabs(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(fabs(jv_number_value(input))); jv_free(input); return ret; }




static jv f_fdim(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(fdim(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_fma(jq_state *jq, jv input, jv a, jv b, jv c) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); jv_free(c); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); jv_free(c); return type_error(b, "number required"); } if (jv_get_kind(c) != JV_KIND_NUMBER) { jv_free(a); jv_free(b); return type_error(c, "number required"); } jv ret = jv_number(fma(jv_number_value(a), jv_number_value(b), jv_number_value(c))); jv_free(a); jv_free(b); jv_free(c); return ret; }




static jv f_fmax(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(fmax(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_fmin(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(fmin(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_fmod(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(fmod(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_gamma(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(gamma(jv_number_value(input))); jv_free(input); return ret; }




static jv f_lgamma(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(lgamma(jv_number_value(input))); jv_free(input); return ret; }




static jv f_log1p(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(log1p(jv_number_value(input))); jv_free(input); return ret; }




static jv f_logb(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(logb(jv_number_value(input))); jv_free(input); return ret; }




static jv f_nearbyint(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(nearbyint(jv_number_value(input))); jv_free(input); return ret; }




static jv f_nextafter(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(nextafter(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_nexttoward(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(nexttoward(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_pow10(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(pow10(jv_number_value(input))); jv_free(input); return ret; }




static jv f_rint(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(rint(jv_number_value(input))); jv_free(input); return ret; }




static jv f_round(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(round(jv_number_value(input))); jv_free(input); return ret; }




static jv f_scalb(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(scalb(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_scalbln(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(scalbln(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }




static jv f_significand(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(significand(jv_number_value(input))); jv_free(input); return ret; }




static jv f_trunc(jq_state *jq, jv input) { if (jv_get_kind(input) != JV_KIND_NUMBER) { return type_error(input, "number required"); } jv ret = jv_number(trunc(jv_number_value(input))); jv_free(input); return ret; }




static jv f_ldexp(jq_state *jq, jv input, jv a, jv b) { jv_free(input); if (jv_get_kind(a) != JV_KIND_NUMBER) { jv_free(b); return type_error(a, "number required"); } if (jv_get_kind(b) != JV_KIND_NUMBER) { jv_free(a); return type_error(b, "number required"); } jv ret = jv_number(ldexp(jv_number_value(a), jv_number_value(b))); jv_free(a); jv_free(b); return ret; }
static jv f_frexp(jq_state *jq, jv input) {
  if (jv_get_kind(input) != JV_KIND_NUMBER) {
    return type_error(input, "number required");
  }
  int exp={0};
  double d = frexp(jv_number_value(input), &exp);
  jv ret = (jv_array_append((jv_array_append(jv_array(),jv_number(d))),jv_number(exp)));
  jv_free(input);
  return ret;
}


static jv f_modf(jq_state *jq, jv input) {
  if (jv_get_kind(input) != JV_KIND_NUMBER) {
    return type_error(input, "number required");
  }
  double i={0};
  jv ret = (jv_array_append(jv_array(),jv_number(modf(jv_number_value(input), &i))));
  jv_free(input);
  return jv_array_append(ret, jv_number(i));
}


static jv f_lgamma_r(jq_state *jq, jv input) {
  if (jv_get_kind(input) != JV_KIND_NUMBER) {
    return type_error(input, "number required");
  }
  int sign={0};
  jv ret = (jv_array_append(jv_array(),jv_number(lgamma_r(jv_number_value(input), &sign))));
  jv_free(input);
  return jv_array_append(ret, jv_number(sign));
}


static jv f_negate(jq_state *jq, jv input) {
  if (jv_get_kind(input) != JV_KIND_NUMBER) {
    return type_error(input, "cannot be negated");
  }
  jv ret = jv_number(-jv_number_value(input));
  jv_free(input);
  return ret;
}

static jv f_startswith(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) != JV_KIND_STRING || jv_get_kind(b) != JV_KIND_STRING)
    return ret_error2(a, b, jv_string("startswith() requires string inputs"));
  int alen = jv_string_length_bytes(jv_copy(a));
  int blen = jv_string_length_bytes(jv_copy(b));
  jv ret={0};

  if (blen <= alen && memcmp(jv_string_value(a), jv_string_value(b), blen) == 0)
    ret = jv_true();
  else
    ret = jv_false();
  jv_free(a);
  jv_free(b);
  return ret;
}

static jv f_endswith(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) != JV_KIND_STRING || jv_get_kind(b) != JV_KIND_STRING)
    return ret_error2(a, b, jv_string("endswith() requires string inputs"));
  const char *astr = jv_string_value(a);
  const char *bstr = jv_string_value(b);
  size_t alen = jv_string_length_bytes(jv_copy(a));
  size_t blen = jv_string_length_bytes(jv_copy(b));
  jv ret={0};;

  if (alen < blen ||
     memcmp(astr + (alen - blen), bstr, blen) != 0)
    ret = jv_false();
  else
    ret = jv_true();
  jv_free(a);
  jv_free(b);
  return ret;
}

static jv f_ltrimstr(jq_state *jq, jv input, jv left) {
  if (jv_get_kind(f_startswith(jq, jv_copy(input), jv_copy(left))) != JV_KIND_TRUE) {
    jv_free(left);
    return input;
  }




  int prefixlen = jv_string_length_bytes(left);
  jv res = jv_string_sized(jv_string_value(input) + prefixlen,
                           jv_string_length_bytes(jv_copy(input)) - prefixlen);
  jv_free(input);
  return res;
}

static jv f_rtrimstr(jq_state *jq, jv input, jv right) {
  if (jv_get_kind(f_endswith(jq, jv_copy(input), jv_copy(right))) == JV_KIND_TRUE) {
    jv res = jv_string_sized(jv_string_value(input),
                             jv_string_length_bytes(jv_copy(input)) - jv_string_length_bytes(right));
    jv_free(input);
    return res;
  }
  jv_free(right);
  return input;
}

static jv f_minus(jq_state *jq, jv input, jv a, jv b) {
  jv_free(input);
  if (jv_get_kind(a) == JV_KIND_NUMBER && jv_get_kind(b) == JV_KIND_NUMBER) {
    return jv_number(jv_number_value(a) - jv_number_value(b));
  } else if (jv_get_kind(a) == JV_KIND_ARRAY && jv_get_kind(b) == JV_KIND_ARRAY) {
    jv out = jv_array();
    for (int jv_len__ = jv_array_length(jv_copy(a)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv x={0}; i < jv_len__ ? (x = jv_array_get(jv_copy(a), i), 1) : 0; i++) {
      int include = 1;
      for (int jv_len__ = jv_array_length(jv_copy(b)), j=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv y={0}; j < jv_len__ ? (y = jv_array_get(jv_copy(b), j), 1) : 0; j++) {
        if (jv_equal(jv_copy(x), y)) {
          include = 0;
          break;
        }
      }
      if (include)
        out = jv_array_append(out, jv_copy(x));
      jv_free(x);
    }
    jv_free(a);
    jv_free(b);
    return out;
  } else {
    return type_error2(a, b, "cannot be subtracted");
  }
}

static jv f_multiply(jq_state *jq, jv input, jv a, jv b) {
  jv_kind ak = jv_get_kind(a);
  jv_kind bk = jv_get_kind(b);
  jv_free(input);
  if (ak == JV_KIND_NUMBER && bk == JV_KIND_NUMBER) {
    return jv_number(jv_number_value(a) * jv_number_value(b));
  } else if ((ak == JV_KIND_STRING && bk == JV_KIND_NUMBER) ||
             (ak == JV_KIND_NUMBER && bk == JV_KIND_STRING)) {
    jv str = a;
    jv num = b;
    if (ak == JV_KIND_NUMBER) {
      str = b;
      num = a;
    }
    int n={0};
    size_t alen = jv_string_length_bytes(jv_copy(str));
    jv res = str;

    for (n = jv_number_value(num) - 1; n > 0; n--)
      res = jv_string_append_buf(res, jv_string_value(str), alen);

    jv_free(num);
    if (n < 0) {
      jv_free(str);
      return jv_null();
    }
    return res;
  } else if (ak == JV_KIND_OBJECT && bk == JV_KIND_OBJECT) {
    return jv_object_merge_recursive(a, b);
  } else {
    return type_error2(a, b, "cannot be multiplied");
  }
}

static jv f_divide(jq_state *jq, jv input, jv a, jv b) {
  jv_free(input);
  if (jv_get_kind(a) == JV_KIND_NUMBER && jv_get_kind(b) == JV_KIND_NUMBER) {
    if (jv_number_value(b) == 0.0)
      return type_error2(a, b, "cannot be divided because the divisor is zero");
    return jv_number(jv_number_value(a) / jv_number_value(b));
  } else if (jv_get_kind(a) == JV_KIND_STRING && jv_get_kind(b) == JV_KIND_STRING) {
    return jv_string_split(a, b);
  } else {
    return type_error2(a, b, "cannot be divided");
  }
}

static jv f_mod(jq_state *jq, jv input, jv a, jv b) {
  jv_free(input);
  if (jv_get_kind(a) == JV_KIND_NUMBER && jv_get_kind(b) == JV_KIND_NUMBER) {
    if ((intmax_t)jv_number_value(b) == 0)
      return type_error2(a, b, "cannot be divided (remainder) because the divisor is zero");
    return jv_number((intmax_t)jv_number_value(a) % (intmax_t)jv_number_value(b));
  } else {
    return type_error2(a, b, "cannot be divided (remainder)");
  }
}

static jv f_equal(jq_state *jq, jv input, jv a, jv b) {
  jv_free(input);
  return jv_bool(jv_equal(a, b));
}

static jv f_notequal(jq_state *jq, jv input, jv a, jv b) {
  jv_free(input);
  return jv_bool(!jv_equal(a, b));
}

enum cmp_op {
  CMP_OP_LESS,
  CMP_OP_GREATER,
  CMP_OP_LESSEQ,
  CMP_OP_GREATEREQ
};

static jv order_cmp(jv input, jv a, jv b, enum cmp_op op) {
  jv_free(input);
  int r = jv_cmp(a, b);
  return jv_bool((op == CMP_OP_LESS && r < 0) ||
                 (op == CMP_OP_LESSEQ && r <= 0) ||
                 (op == CMP_OP_GREATEREQ && r >= 0) ||
                 (op == CMP_OP_GREATER && r > 0));
}

static jv f_less(jq_state *jq, jv input, jv a, jv b) {
  return order_cmp(input, a, b, CMP_OP_LESS);
}

static jv f_greater(jq_state *jq, jv input, jv a, jv b) {
  return order_cmp(input, a, b, CMP_OP_GREATER);
}

static jv f_lesseq(jq_state *jq, jv input, jv a, jv b) {
  return order_cmp(input, a, b, CMP_OP_LESSEQ);
}

static jv f_greatereq(jq_state *jq, jv input, jv a, jv b) {
  return order_cmp(input, a, b, CMP_OP_GREATEREQ);
}

static jv f_contains(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) == jv_get_kind(b)) {
    return jv_bool(jv_contains(a, b));
  } else {
    return type_error2(a, b, "cannot have their containment checked");
  }
}

static jv f_dump(jq_state *jq, jv input) {
  return jv_dump_string(input, 0);
}

static jv f_json_parse(jq_state *jq, jv input) {
  if (jv_get_kind(input) != JV_KIND_STRING)
    return type_error(input, "only strings can be parsed");
  jv res = jv_parse_sized(jv_string_value(input),
                          jv_string_length_bytes(jv_copy(input)));
  jv_free(input);
  return res;
}

static jv f_tonumber(jq_state *jq, jv input) {
  if (jv_get_kind(input) == JV_KIND_NUMBER) {
    return input;
  }
  if (jv_get_kind(input) == JV_KIND_STRING) {
    jv parsed = jv_parse(jv_string_value(input));
    if (!jv_is_valid(parsed) || jv_get_kind(parsed) == JV_KIND_NUMBER) {
      jv_free(input);
      return parsed;
    }
  }
  return type_error(input, "cannot be parsed as a number");
}

static jv f_length(jq_state *jq, jv input) {
  if (jv_get_kind(input) == JV_KIND_ARRAY) {
    return jv_number(jv_array_length(input));
  } else if (jv_get_kind(input) == JV_KIND_OBJECT) {
    return jv_number(jv_object_length(input));
  } else if (jv_get_kind(input) == JV_KIND_STRING) {
    return jv_number(jv_string_length_codepoints(input));
  } else if (jv_get_kind(input) == JV_KIND_NUMBER) {
    return jv_number(fabs(jv_number_value(input)));
  } else if (jv_get_kind(input) == JV_KIND_NULL) {
    jv_free(input);
    return jv_number(0);
  } else {
    return type_error(input, "has no length");
  }
}

static jv f_tostring(jq_state *jq, jv input) {
  if (jv_get_kind(input) == JV_KIND_STRING) {
    return input;
  } else {
    return jv_dump_string(input, 0);
  }
}

static jv f_utf8bytelength(jq_state *jq, jv input) {
  if (jv_get_kind(input) != JV_KIND_STRING)
    return type_error(input, "only strings have UTF-8 byte length");
  return jv_number(jv_string_length_bytes(input));
}



static const unsigned char BASE64_ENCODE_TABLE[64 + 1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" "+/";
static const unsigned char BASE64_INVALID_ENTRY = 0xFF;
static const unsigned char BASE64_DECODE_TABLE[255] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  62,
  0xFF, 0xFF, 0xFF,
  63,
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,
  0xFF, 0xFF, 0xFF,
  99,
  0xFF, 0xFF, 0xFF,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};


static jv escape_string(jv input, const char* escapings) {

  
 ((
 jv_get_kind(input) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(input) == JV_KIND_STRING"
 , "builtin.c", 485, __PRETTY_FUNCTION__))
                                             ;
  const char* lookup[128] = {0};
  const char* p = escapings;
  lookup[0] = "\\0";
  while (*p) {
    lookup[(int)*p] = p+1;
    p++;
    p += strlen(p);
    p++;
  }

  jv ret = jv_string("");
  const char* i = jv_string_value(input);
  const char* end = i + jv_string_length_bytes(jv_copy(input));
  const char* cstart={0};
  int c = 0;
  while ((i = jvp_utf8_next((cstart = i), end, &c))) {
    if (c < 128 && lookup[c]) {
      ret = jv_string_append_str(ret, lookup[c]);
    } else {
      ret = jv_string_append_buf(ret, cstart, i - cstart);
    }
  }
  jv_free(input);
  return ret;

}

static jv f_format(jq_state *jq, jv input, jv fmt) {
  if (jv_get_kind(fmt) != JV_KIND_STRING) {
    jv_free(input);
    return type_error(fmt, "is not a valid format");
  }
  const char* fmt_s = jv_string_value(fmt);
  if (!strcmp(fmt_s, "json")) {
    jv_free(fmt);
    return jv_dump_string(input, 0);
  } else if (!strcmp(fmt_s, "text")) {
    jv_free(fmt);
    return f_tostring(jq, input);
  } else if (!strcmp(fmt_s, "csv") || !strcmp(fmt_s, "tsv")) {
    const char *quotes, *sep, *escapings={0};
    const char *msg={0};
    if (!strcmp(fmt_s, "csv")) {
      msg = "cannot be csv-formatted, only array";
      quotes = "\"";
      sep = ",";
      escapings = "\"\"\"\0";
    } else {
      msg = "cannot be tsv-formatted, only array";
      
     ((
     !strcmp(fmt_s, "tsv")
     ) ? (void) (0) : __assert_fail (
     "!strcmp(fmt_s, \"tsv\")"
     , "builtin.c", 535, __PRETTY_FUNCTION__))
                                  ;
      quotes = "";
      sep = "\t";
      escapings = "\t\\t\0\r\\r\0\n\\n\0\\\\\\\0";
    }
    jv_free(fmt);
    if (jv_get_kind(input) != JV_KIND_ARRAY)
      return type_error(input, msg);
    jv line = jv_string("");
    for (int jv_len__ = jv_array_length(jv_copy(input)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv x={0}; i < jv_len__ ? (x = jv_array_get(jv_copy(input), i), 1) : 0; i++) {
      if (i) line = jv_string_append_str(line, sep);
      switch (jv_get_kind(x)) {
      case JV_KIND_NULL:

        jv_free(x);
        break;
      case JV_KIND_TRUE:
      case JV_KIND_FALSE:
        line = jv_string_concat(line, jv_dump_string(x, 0));
        break;
      case JV_KIND_NUMBER:
        if (jv_number_value(x) != jv_number_value(x)) {

          jv_free(x);
        } else {
          line = jv_string_concat(line, jv_dump_string(x, 0));
        }
        break;
      case JV_KIND_STRING: {
        line = jv_string_append_str(line, quotes);
        line = jv_string_concat(line, escape_string(x, escapings));
        line = jv_string_append_str(line, quotes);
        break;
      }
      default:
        jv_free(input);
        jv_free(line);
        return type_error(x, "is not valid in a csv row");
      }
    }
    jv_free(input);
    return line;
  } else if (!strcmp(fmt_s, "html")) {
    jv_free(fmt);
    return escape_string(f_tostring(jq, input), "&&amp;\0<&lt;\0>&gt;\0'&apos;\0\"&quot;\0");
  } else if (!strcmp(fmt_s, "uri")) {
    jv_free(fmt);
    input = f_tostring(jq, input);

    int unreserved[128] = {0};
    const char* p = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" "-_.!~*'()";
    while (*p) unreserved[(int)*p++] = 1;

    jv line = jv_string("");
    const char* s = jv_string_value(input);
    for (int i=0; i<jv_string_length_bytes(jv_copy(input)); i++) {
      unsigned ch = (unsigned)(unsigned char)*s;
      if (ch < 128 && unreserved[ch]) {
        line = jv_string_append_buf(line, s, 1);
      } else {
        line = jv_string_concat(line, jv_string_fmt("%%%02X", ch));
      }
      s++;
    }
    jv_free(input);
    return line;
  } else if (!strcmp(fmt_s, "sh")) {
    jv_free(fmt);
    if (jv_get_kind(input) != JV_KIND_ARRAY)
      input = jv_array_set(jv_array(), 0, input);
    jv line = jv_string("");
    for (int jv_len__ = jv_array_length(jv_copy(input)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv x={0}; i < jv_len__ ? (x = jv_array_get(jv_copy(input), i), 1) : 0; i++) {
      if (i) line = jv_string_append_str(line, " ");
      switch (jv_get_kind(x)) {
      case JV_KIND_NULL:
      case JV_KIND_TRUE:
      case JV_KIND_FALSE:
      case JV_KIND_NUMBER:
        line = jv_string_concat(line, jv_dump_string(x, 0));
        break;

      case JV_KIND_STRING: {
        line = jv_string_append_str(line, "'");
        line = jv_string_concat(line, escape_string(x, "''\\''\0"));
        line = jv_string_append_str(line, "'");
        break;
      }

      default:
        jv_free(input);
        jv_free(line);
        return type_error(x, "can not be escaped for shell");
      }
    }
    jv_free(input);
    return line;
  } else if (!strcmp(fmt_s, "base64")) {
    jv_free(fmt);
    input = f_tostring(jq, input);
    jv line = jv_string("");
    const unsigned char* data = (const unsigned char*)jv_string_value(input);
    int len = jv_string_length_bytes(jv_copy(input));
    for (int i=0; i<len; i+=3) {
      uint32_t code = 0;
      int n = len - i >= 3 ? 3 : len-i;
      for (int j=0; j<3; j++) {
        code <<= 8;
        code |= j < n ? (unsigned)data[i+j] : 0;
      }
      char buf[4]={0};
      for (int j=0; j<4; j++) {
        buf[j] = BASE64_ENCODE_TABLE[(code >> (18 - j*6)) & 0x3f];
      }
      if (n < 3) buf[3] = '=';
      if (n < 2) buf[2] = '=';
      line = jv_string_append_buf(line, buf, sizeof(buf));
    }
    jv_free(input);
    return line;
  } else if (!strcmp(fmt_s, "base64d")) {
    jv_free(fmt);
    input = f_tostring(jq, input);
    const unsigned char* data = (const unsigned char*)jv_string_value(input);
    int len = jv_string_length_bytes(jv_copy(input));
    size_t decoded_len = (3 * len) / 4;
    char *result = jv_mem_calloc(decoded_len, sizeof(char));
    memset(result, 0, decoded_len * sizeof(char));
    uint32_t ri = 0;
    int input_bytes_read=0;
    uint32_t code = 0;
    for (int i=0; i<len && data[i] != '='; i++) {
      if (BASE64_DECODE_TABLE[data[i]] == BASE64_INVALID_ENTRY) {
        free(result);
        return type_error(input, "is not valid base64 data");
      }

      code <<= 6;
      code |= BASE64_DECODE_TABLE[data[i]];
      input_bytes_read++;

      if (input_bytes_read == 4) {
        result[ri++] = (code >> 16) & 0xFF;
        result[ri++] = (code >> 8) & 0xFF;
        result[ri++] = code & 0xFF;
        input_bytes_read = 0;
        code = 0;
      }
    }
    if (input_bytes_read == 3) {
      result[ri++] = (code >> 10) & 0xFF;
      result[ri++] = (code >> 2) & 0xFF;
    } else if (input_bytes_read == 2) {
      result[ri++] = (code >> 4) & 0xFF;
    } else if (input_bytes_read == 1) {
      free(result);
      return type_error(input, "trailing base64 byte found");
    }

    jv line = jv_string_sized(result, ri);
    jv_free(input);
    free(result);
    return line;
  } else {
    jv_free(input);
    return jv_invalid_with_msg(jv_string_concat(fmt, jv_string(" is not a valid format")));
  }
}

static jv f_keys(jq_state *jq, jv input) {
  if (jv_get_kind(input) == JV_KIND_OBJECT || jv_get_kind(input) == JV_KIND_ARRAY) {
    return jv_keys(input);
  } else {
    return type_error(input, "has no keys");
  }
}

static jv f_keys_unsorted(jq_state *jq, jv input) {
  if (jv_get_kind(input) == JV_KIND_OBJECT || jv_get_kind(input) == JV_KIND_ARRAY) {
    return jv_keys_unsorted(input);
  } else {
    return type_error(input, "has no keys");
  }
}

static jv f_sort(jq_state *jq, jv input){
  if (jv_get_kind(input) == JV_KIND_ARRAY) {
    return jv_sort(input, jv_copy(input));
  } else {
    return type_error(input, "cannot be sorted, as it is not an array");
  }
}

static jv f_sort_by_impl(jq_state *jq, jv input, jv keys) {
  if (jv_get_kind(input) == JV_KIND_ARRAY &&
      jv_get_kind(keys) == JV_KIND_ARRAY &&
      jv_array_length(jv_copy(input)) == jv_array_length(jv_copy(keys))) {
    return jv_sort(input, keys);
  } else {
    return type_error2(input, keys, "cannot be sorted, as they are not both arrays");
  }
}

static jv f_group_by_impl(jq_state *jq, jv input, jv keys) {
  if (jv_get_kind(input) == JV_KIND_ARRAY &&
      jv_get_kind(keys) == JV_KIND_ARRAY &&
      jv_array_length(jv_copy(input)) == jv_array_length(jv_copy(keys))) {
    return jv_group(input, keys);
  } else {
    return type_error2(input, keys, "cannot be sorted, as they are not both arrays");
  }
}
static jv f_match(jq_state *jq, jv input, jv regex, jv modifiers, jv testmode) {
  return jv_invalid_with_msg(jv_string("jq was compiled without ONIGURUMA regex libary. match/test/sub and related functions are not available."));
}


static jv minmax_by(jv values, jv keys, int is_min) {
  if (jv_get_kind(values) != JV_KIND_ARRAY)
    return type_error2(values, keys, "cannot be iterated over");
  if (jv_get_kind(keys) != JV_KIND_ARRAY)
    return type_error2(values, keys, "cannot be iterated over");
  if (jv_array_length(jv_copy(values)) != jv_array_length(jv_copy(keys)))
    return type_error2(values, keys, "have wrong length");

  if (jv_array_length(jv_copy(values)) == 0) {
    jv_free(values);
    jv_free(keys);
    return jv_null();
  }
  jv ret = jv_array_get(jv_copy(values), 0);
  jv retkey = jv_array_get(jv_copy(keys), 0);
  for (int i=1; i<jv_array_length(jv_copy(values)); i++) {
    jv item = jv_array_get(jv_copy(keys), i);
    int cmp = jv_cmp(jv_copy(item), jv_copy(retkey));
    if ((cmp < 0) == (is_min == 1)) {
      jv_free(retkey);
      retkey = item;
      jv_free(ret);
      ret = jv_array_get(jv_copy(values), i);
    } else {
      jv_free(item);
    }
  }
  jv_free(values);
  jv_free(keys);
  jv_free(retkey);
  return ret;
}

static jv f_min(jq_state *jq, jv x) {
  return minmax_by(x, jv_copy(x), 1);
}

static jv f_max(jq_state *jq, jv x) {
  return minmax_by(x, jv_copy(x), 0);
}

static jv f_min_by_impl(jq_state *jq, jv x, jv y) {
  return minmax_by(x, y, 1);
}

static jv f_max_by_impl(jq_state *jq, jv x, jv y) {
  return minmax_by(x, y, 0);
}


static jv f_type(jq_state *jq, jv input) {
  jv out = jv_string(jv_kind_name(jv_get_kind(input)));
  jv_free(input);
  return out;
}

static jv f_isinfinite(jq_state *jq, jv input) {
  jv_kind k = jv_get_kind(input);
  if (k != JV_KIND_NUMBER) {
    jv_free(input);
    return jv_false();
  }
  double n = jv_number_value(input);
  jv_free(input);
  return 
        __builtin_isinf_sign (
        n
        ) 
                 ? jv_true() : jv_false();
}

static jv f_isnan(jq_state *jq, jv input) {
  jv_kind k = jv_get_kind(input);
  if (k != JV_KIND_NUMBER) {
    jv_free(input);
    return jv_false();
  }
  double n = jv_number_value(input);
  jv_free(input);
  return 
        __builtin_isnan (
        n
        ) 
                 ? jv_true() : jv_false();
}

static jv f_isnormal(jq_state *jq, jv input) {
  jv_kind k = jv_get_kind(input);
  if (k != JV_KIND_NUMBER) {
    jv_free(input);
    return jv_false();
  }
  double n = jv_number_value(input);
  jv_free(input);
  return 
        __builtin_isnormal (
        n
        ) 
                    ? jv_true() : jv_false();
}

static jv f_infinite(jq_state *jq, jv input) {
  jv_free(input);
  return jv_number(
                  (__builtin_inff())
                          );
}

static jv f_nan(jq_state *jq, jv input) {
  jv_free(input);
  return jv_number(
                  (__builtin_nanf (""))
                     );
}

static jv f_error(jq_state *jq, jv input, jv msg) {
  jv_free(input);
  return jv_invalid_with_msg(msg);
}



extern char **environ;


static jv f_env(jq_state *jq, jv input) {
  jv_free(input);
  jv env = jv_object();
  const char *var, *val={0};
  for (char **e = environ; *e != 
                                ((void *)0)
                                    ; e++) {
    var = e[0];
    val = strchr(e[0], '=');
    if (val == 
              ((void *)0)
                  )
      env = jv_object_set(env, jv_string(var), jv_null());
    else if (var - val < 0x7fffffff)
      env = jv_object_set(env, jv_string_sized(var, val - var), jv_string(val + 1));
  }
  return env;
}

static jv f_halt(jq_state *jq, jv input) {
  jv_free(input);
  jq_halt(jq, jv_invalid(), jv_invalid());
  return jv_true();
}

static jv f_halt_error(jq_state *jq, jv input, jv a) {
  if (jv_get_kind(a) != JV_KIND_NUMBER) {
    jv_free(a);
    return type_error(input, "halt_error/1: number required");
  }
  jq_halt(jq, a, input);
  return jv_true();
}

static jv f_get_search_list(jq_state *jq, jv input) {
  jv_free(input);
  return jq_get_lib_dirs(jq);
}

static jv f_get_prog_origin(jq_state *jq, jv input) {
  jv_free(input);
  return jq_get_prog_origin(jq);
}

static jv f_get_jq_origin(jq_state *jq, jv input) {
  jv_free(input);
  return jq_get_jq_origin(jq);
}

static jv f_string_split(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) != JV_KIND_STRING || jv_get_kind(b) != JV_KIND_STRING) {
    return ret_error2(a, b, jv_string("split input and separator must be strings"));
  }
  return jv_string_split(a, b);
}

static jv f_string_explode(jq_state *jq, jv a) {
  if (jv_get_kind(a) != JV_KIND_STRING) {
    return ret_error(a, jv_string("explode input must be a string"));
  }
  return jv_string_explode(a);
}

static jv f_string_indexes(jq_state *jq, jv a, jv b) {
  return jv_string_indexes(a, b);
}

static jv f_string_implode(jq_state *jq, jv a) {
  if (jv_get_kind(a) != JV_KIND_ARRAY) {
    return ret_error(a, jv_string("implode input must be an array"));
  }
  return jv_string_implode(a);
}

static jv f_setpath(jq_state *jq, jv a, jv b, jv c) { return jv_setpath(a, b, c); }
extern jv _jq_path_append(jq_state *, jv, jv, jv);
static jv f_getpath(jq_state *jq, jv a, jv b) {
  return _jq_path_append(jq, a, b, jv_getpath(jv_copy(a), jv_copy(b)));
}
static jv f_delpaths(jq_state *jq, jv a, jv b) { return jv_delpaths(a, b); }
static jv f_has(jq_state *jq, jv a, jv b) { return jv_has(a, b); }

static jv f_modulemeta(jq_state *jq, jv a) {
  if (jv_get_kind(a) != JV_KIND_STRING) {
    return ret_error(a, jv_string("modulemeta input module name must be a string"));
  }
  return load_module_meta(jq, a);
}

static jv f_input(jq_state *jq, jv input) {
  jv_free(input);
  jq_input_cb cb={0};
  void *data={0};
  jq_get_input_cb(jq, &cb, &data);
  if (cb == 
           ((void *)0)
               )
    return jv_invalid_with_msg(jv_string("break"));
  jv v = cb(jq, data);
  if (jv_is_valid(v) || jv_invalid_has_msg(jv_copy(v)))
    return v;
  return jv_invalid_with_msg(jv_string("break"));
}

static jv f_debug(jq_state *jq, jv input) {
  jq_msg_cb cb={0};
  void *data={0};
  jq_get_debug_cb(jq, &cb, &data);
  if (cb != 
           ((void *)0)
               )
    cb(data, jv_copy(input));
  return input;
}

static jv f_stderr(jq_state *jq, jv input) {
  jv_dumpf(jv_copy(input), 
                          stderr
                                , 0);
  return input;
}

static jv tm2jv(struct tm *tm) {
  return (jv_array_append((jv_array_append((jv_array_append((jv_array_append((jv_array_append((jv_array_append((jv_array_append((jv_array_append(jv_array(),jv_number(tm->tm_year + 1900))),jv_number(tm->tm_mon))),jv_number(tm->tm_mday))),jv_number(tm->tm_hour))),jv_number(tm->tm_min))),jv_number(tm->tm_sec))),jv_number(tm->tm_wday))),jv_number(tm->tm_yday)))






                                         ;
}
static time_t my_timegm(struct tm *tm) {

  return timegm(tm);
}
static time_t my_mktime(struct tm *tm) {
  time_t t = mktime(tm);
  if (t == (time_t)-1)
    return t;

  return t + tm->tm_gmtoff;





}


static void set_tm_wday(struct tm *tm) {
  int century = (1900 + tm->tm_year) / 100;
  int year = (1900 + tm->tm_year) % 100;
  if (tm->tm_mon < 2)
    year--;




  int mon = tm->tm_mon - 1;
  if (mon < 1)
    mon += 12;
  int wday =
    (tm->tm_mday + (int)floor((2.6 * mon - 0.2)) + year + (int)floor(year / 4.0) + (int)floor(century / 4.0) - 2 * century) % 7;
  if (wday < 0)
    wday += 7;




  tm->tm_wday = wday;
}




static void set_tm_yday(struct tm *tm) {
  static const int d[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  int mon = tm->tm_mon;
  int year = 1900 + tm->tm_year;
  int leap_day = 0;
  if (tm->tm_mon > 1 &&
      ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
    leap_day = 1;


  if (mon < 0)
    mon = -mon;
  if (mon > 11)
    mon %= 12;

  int yday = d[mon] + leap_day + tm->tm_mday - 1;
  
 ((
 yday == tm->tm_yday || tm->tm_yday == 367
 ) ? (void) (0) : __assert_fail (
 "yday == tm->tm_yday || tm->tm_yday == 367"
 , "builtin.c", 1285, __PRETTY_FUNCTION__))
                                                  ;
  tm->tm_yday = yday;
}


static jv f_strptime(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) != JV_KIND_STRING || jv_get_kind(b) != JV_KIND_STRING) {
    return ret_error2(a, b, jv_string("strptime/1 requires string inputs and arguments"));
  }

  struct tm tm={0};
  memset(&tm, 0, sizeof(tm));
  tm.tm_wday = 8;
  tm.tm_yday = 367;
  const char *input = jv_string_value(a);
  const char *fmt = jv_string_value(b);
  const char *end = strptime(input, fmt, &tm);

  if (end == 
            ((void *)0) 
                 || (*end != '\0' && !
                                      ((*__ctype_b_loc ())[(int) ((
                                      *end
                                      ))] & (unsigned short int) _ISspace)
                                                   )) {
    return ret_error2(a, b, jv_string_fmt("date \"%s\" does not match format \"%s\"", input, fmt));
  }
  jv_free(b);
  if (tm.tm_wday == 8 && tm.tm_mday != 0 && tm.tm_mon >= 0 && tm.tm_mon <= 11)
    set_tm_wday(&tm);
  if (tm.tm_yday == 367 && tm.tm_mday != 0 && tm.tm_mon >= 0 && tm.tm_mon <= 11)
    set_tm_yday(&tm);

  jv r = tm2jv(&tm);
  if (*end != '\0')
    r = jv_array_append(r, jv_string(end));
  jv_free(a);
  return r;
}
static int jv2tm(jv a, struct tm *tm) {
  memset(tm, 0, sizeof(*tm));
  do { jv n = jv_array_get(jv_copy(a), (0)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_year = jv_number_value(n); jv_free(n); } while (0);
  tm->tm_year -= 1900;
  do { jv n = jv_array_get(jv_copy(a), (1)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_mon = jv_number_value(n); jv_free(n); } while (0);
  do { jv n = jv_array_get(jv_copy(a), (2)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_mday = jv_number_value(n); jv_free(n); } while (0);
  do { jv n = jv_array_get(jv_copy(a), (3)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_hour = jv_number_value(n); jv_free(n); } while (0);
  do { jv n = jv_array_get(jv_copy(a), (4)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_min = jv_number_value(n); jv_free(n); } while (0);
  do { jv n = jv_array_get(jv_copy(a), (5)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_sec = jv_number_value(n); jv_free(n); } while (0);
  do { jv n = jv_array_get(jv_copy(a), (6)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_wday = jv_number_value(n); jv_free(n); } while (0);
  do { jv n = jv_array_get(jv_copy(a), (7)); if (jv_get_kind(n) != (JV_KIND_NUMBER)) { jv_free(a); return 0; } tm->tm_yday = jv_number_value(n); jv_free(n); } while (0);
  jv_free(a);
  return 1;
}



static jv f_mktime(jq_state *jq, jv a) {
  if (jv_get_kind(a) != JV_KIND_ARRAY)
    return ret_error(a, jv_string("mktime requires array inputs"));
  if (jv_array_length(jv_copy(a)) < 6)
    return ret_error(a, jv_string("mktime requires parsed datetime inputs"));
  struct tm tm={0};
  if (!jv2tm(a, &tm))
    return jv_invalid_with_msg(jv_string("mktime requires parsed datetime inputs"));
  time_t t = my_mktime(&tm);
  if (t == (time_t)-1)
    return jv_invalid_with_msg(jv_string("invalid gmtime representation"));
  if (t == (time_t)-2)
    return jv_invalid_with_msg(jv_string("mktime not supported on this platform"));
  return jv_number(t);
}


static jv f_gmtime(jq_state *jq, jv a) {
  if (jv_get_kind(a) != JV_KIND_NUMBER)
    return ret_error(a, jv_string("gmtime() requires numeric inputs"));
  struct tm tm, *tmp={0};
  memset(&tm, 0, sizeof(tm));
  double fsecs = jv_number_value(a);
  time_t secs = fsecs;
  jv_free(a);
  tmp = gmtime_r(&secs, &tm);
  if (tmp == 
            ((void *)0)
                )
    return jv_invalid_with_msg(jv_string("errror converting number of seconds since epoch to datetime"));
  a = tm2jv(tmp);
  return jv_array_set(a, 5, jv_number(jv_number_value(jv_array_get(jv_copy(a), 5)) + (fsecs - floor(fsecs))));
}
static jv f_localtime(jq_state *jq, jv a) {
  if (jv_get_kind(a) != JV_KIND_NUMBER)
    return ret_error(a, jv_string("localtime() requires numeric inputs"));
  struct tm tm, *tmp={0};
  memset(&tm, 0, sizeof(tm));
  double fsecs = jv_number_value(a);
  time_t secs = fsecs;
  jv_free(a);
  tmp = localtime_r(&secs, &tm);
  if (tmp == 
            ((void *)0)
                )
    return jv_invalid_with_msg(jv_string("error converting number of seconds since epoch to datetime"));
  a = tm2jv(tmp);
  return jv_array_set(a, 5, jv_number(jv_number_value(jv_array_get(jv_copy(a), 5)) + (fsecs - floor(fsecs))));
}
static jv f_strftime(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) == JV_KIND_NUMBER) {
    a = f_gmtime(jq, a);
  } else if (jv_get_kind(a) != JV_KIND_ARRAY) {
    return ret_error2(a, b, jv_string("strftime/1 requires parsed datetime inputs"));
  } else if (jv_get_kind(b) != JV_KIND_STRING) {
    return ret_error2(a, b, jv_string("strftime/1 requires a string format"));
  }
  struct tm tm={0};
  if (!jv2tm(a, &tm))
    return ret_error(b, jv_string("strftime/1 requires parsed datetime inputs"));

  const char *fmt = jv_string_value(b);
  size_t alloced = strlen(fmt) + 100;
  char *buf = 
             __builtin_alloca (
             alloced
             )
                            ;
  size_t n = strftime(buf, alloced, fmt, &tm);
  jv_free(b);

  if (n == 0 || n > alloced)
    return jv_invalid_with_msg(jv_string("strftime/1: unknown system failure"));
  return jv_string(buf);
}
static jv f_strflocaltime(jq_state *jq, jv a, jv b) {
  if (jv_get_kind(a) == JV_KIND_NUMBER) {
    a = f_localtime(jq, a);
  } else if (jv_get_kind(a) != JV_KIND_ARRAY) {
    return ret_error2(a, b, jv_string("strflocaltime/1 requires parsed datetime inputs"));
  } else if (jv_get_kind(b) != JV_KIND_STRING) {
    return ret_error2(a, b, jv_string("strflocaltime/1 requires a string format"));
  }
  struct tm tm={0};
  if (!jv2tm(a, &tm))
    return jv_invalid_with_msg(jv_string("strflocaltime/1 requires parsed datetime inputs"));
  const char *fmt = jv_string_value(b);
  size_t alloced = strlen(fmt) + 100;
  char *buf = 
             __builtin_alloca (
             alloced
             )
                            ;
  size_t n = strftime(buf, alloced, fmt, &tm);
  jv_free(b);

  if (n == 0 || n > alloced)
    return jv_invalid_with_msg(jv_string("strflocaltime/1: unknown system failure"));
  return jv_string(buf);
}
static jv f_now(jq_state *jq, jv a) {
  jv_free(a);
  struct timeval tv={0};
  if (gettimeofday(&tv, 
                       ((void *)0)
                           ) == -1)
    return jv_number(time(
                         ((void *)0)
                             ));
  return jv_number(tv.tv_sec + tv.tv_usec / 1000000.0);
}







static jv f_current_filename(jq_state *jq, jv a) {
  jv_free(a);

  jv r = jq_util_input_get_current_filename(jq);
  if (jv_is_valid(r))
    return r;
  jv_free(r);
  return jv_null();
}
static jv f_current_line(jq_state *jq, jv a) {
  jv_free(a);
  return jq_util_input_get_current_line(jq);
}
static const struct cfunction function_list[] = {

{(cfunction_ptr)f_acos, "acos", 1},




{(cfunction_ptr)f_acosh, "acosh", 1},




{(cfunction_ptr)f_asin, "asin", 1},




{(cfunction_ptr)f_asinh, "asinh", 1},




{(cfunction_ptr)f_atan, "atan", 1},




{(cfunction_ptr)f_atan2, "atan2", 3},




{(cfunction_ptr)f_atanh, "atanh", 1},




{(cfunction_ptr)f_cbrt, "cbrt", 1},




{(cfunction_ptr)f_cos, "cos", 1},




{(cfunction_ptr)f_cosh, "cosh", 1},




{(cfunction_ptr)f_exp, "exp", 1},




{(cfunction_ptr)f_exp2, "exp2", 1},




{(cfunction_ptr)f_floor, "floor", 1},




{(cfunction_ptr)f_hypot, "hypot", 3},




{(cfunction_ptr)f_j0, "j0", 1},




{(cfunction_ptr)f_j1, "j1", 1},




{(cfunction_ptr)f_log, "log", 1},




{(cfunction_ptr)f_log10, "log10", 1},




{(cfunction_ptr)f_log2, "log2", 1},




{(cfunction_ptr)f_pow, "pow", 3},




{(cfunction_ptr)f_remainder, "remainder", 3},




{(cfunction_ptr)f_sin, "sin", 1},




{(cfunction_ptr)f_sinh, "sinh", 1},




{(cfunction_ptr)f_sqrt, "sqrt", 1},




{(cfunction_ptr)f_tan, "tan", 1},




{(cfunction_ptr)f_tanh, "tanh", 1},




{(cfunction_ptr)f_tgamma, "tgamma", 1},




{(cfunction_ptr)f_y0, "y0", 1},




{(cfunction_ptr)f_y1, "y1", 1},




{(cfunction_ptr)f_jn, "jn", 3},


{(cfunction_ptr)f_yn, "yn", 3},


{(cfunction_ptr)f_ceil, "ceil", 1},




{(cfunction_ptr)f_copysign, "copysign", 3},




{(cfunction_ptr)f_drem, "drem", 3},




{(cfunction_ptr)f_erf, "erf", 1},




{(cfunction_ptr)f_erfc, "erfc", 1},




{(cfunction_ptr)f_exp10, "exp10", 1},




{(cfunction_ptr)f_expm1, "expm1", 1},




{(cfunction_ptr)f_fabs, "fabs", 1},




{(cfunction_ptr)f_fdim, "fdim", 3},




{(cfunction_ptr)f_fma, "fma", 4},




{(cfunction_ptr)f_fmax, "fmax", 3},




{(cfunction_ptr)f_fmin, "fmin", 3},




{(cfunction_ptr)f_fmod, "fmod", 3},




{(cfunction_ptr)f_gamma, "gamma", 1},




{(cfunction_ptr)f_lgamma, "lgamma", 1},




{(cfunction_ptr)f_log1p, "log1p", 1},




{(cfunction_ptr)f_logb, "logb", 1},




{(cfunction_ptr)f_nearbyint, "nearbyint", 1},




{(cfunction_ptr)f_nextafter, "nextafter", 3},




{(cfunction_ptr)f_nexttoward, "nexttoward", 3},




{(cfunction_ptr)f_pow10, "pow10", 1},




{(cfunction_ptr)f_rint, "rint", 1},




{(cfunction_ptr)f_round, "round", 1},




{(cfunction_ptr)f_scalb, "scalb", 3},




{(cfunction_ptr)f_scalbln, "scalbln", 3},




{(cfunction_ptr)f_significand, "significand", 1},




{(cfunction_ptr)f_trunc, "trunc", 1},




{(cfunction_ptr)f_ldexp, "ldexp", 3},

  {(cfunction_ptr)f_frexp,"frexp", 1},


  {(cfunction_ptr)f_modf,"modf", 1},


  {(cfunction_ptr)f_lgamma_r,"lgamma_r", 1},

  {(cfunction_ptr)f_plus, "_plus", 3},
  {(cfunction_ptr)f_negate, "_negate", 1},
  {(cfunction_ptr)f_minus, "_minus", 3},
  {(cfunction_ptr)f_multiply, "_multiply", 3},
  {(cfunction_ptr)f_divide, "_divide", 3},
  {(cfunction_ptr)f_mod, "_mod", 3},
  {(cfunction_ptr)f_dump, "tojson", 1},
  {(cfunction_ptr)f_json_parse, "fromjson", 1},
  {(cfunction_ptr)f_tonumber, "tonumber", 1},
  {(cfunction_ptr)f_tostring, "tostring", 1},
  {(cfunction_ptr)f_keys, "keys", 1},
  {(cfunction_ptr)f_keys_unsorted, "keys_unsorted", 1},
  {(cfunction_ptr)f_startswith, "startswith", 2},
  {(cfunction_ptr)f_endswith, "endswith", 2},
  {(cfunction_ptr)f_ltrimstr, "ltrimstr", 2},
  {(cfunction_ptr)f_rtrimstr, "rtrimstr", 2},
  {(cfunction_ptr)f_string_split, "split", 2},
  {(cfunction_ptr)f_string_explode, "explode", 1},
  {(cfunction_ptr)f_string_implode, "implode", 1},
  {(cfunction_ptr)f_string_indexes, "_strindices", 2},
  {(cfunction_ptr)f_setpath, "setpath", 3},
  {(cfunction_ptr)f_getpath, "getpath", 2},
  {(cfunction_ptr)f_delpaths, "delpaths", 2},
  {(cfunction_ptr)f_has, "has", 2},
  {(cfunction_ptr)f_equal, "_equal", 3},
  {(cfunction_ptr)f_notequal, "_notequal", 3},
  {(cfunction_ptr)f_less, "_less", 3},
  {(cfunction_ptr)f_greater, "_greater", 3},
  {(cfunction_ptr)f_lesseq, "_lesseq", 3},
  {(cfunction_ptr)f_greatereq, "_greatereq", 3},
  {(cfunction_ptr)f_contains, "contains", 2},
  {(cfunction_ptr)f_length, "length", 1},
  {(cfunction_ptr)f_utf8bytelength, "utf8bytelength", 1},
  {(cfunction_ptr)f_type, "type", 1},
  {(cfunction_ptr)f_isinfinite, "isinfinite", 1},
  {(cfunction_ptr)f_isnan, "isnan", 1},
  {(cfunction_ptr)f_isnormal, "isnormal", 1},
  {(cfunction_ptr)f_infinite, "infinite", 1},
  {(cfunction_ptr)f_nan, "nan", 1},
  {(cfunction_ptr)f_sort, "sort", 1},
  {(cfunction_ptr)f_sort_by_impl, "_sort_by_impl", 2},
  {(cfunction_ptr)f_group_by_impl, "_group_by_impl", 2},
  {(cfunction_ptr)f_min, "min", 1},
  {(cfunction_ptr)f_max, "max", 1},
  {(cfunction_ptr)f_min_by_impl, "_min_by_impl", 2},
  {(cfunction_ptr)f_max_by_impl, "_max_by_impl", 2},
  {(cfunction_ptr)f_error, "error", 2},
  {(cfunction_ptr)f_format, "format", 2},
  {(cfunction_ptr)f_env, "env", 1},
  {(cfunction_ptr)f_halt, "halt", 1},
  {(cfunction_ptr)f_halt_error, "halt_error", 2},
  {(cfunction_ptr)f_get_search_list, "get_search_list", 1},
  {(cfunction_ptr)f_get_prog_origin, "get_prog_origin", 1},
  {(cfunction_ptr)f_get_jq_origin, "get_jq_origin", 1},
  {(cfunction_ptr)f_match, "_match_impl", 4},
  {(cfunction_ptr)f_modulemeta, "modulemeta", 1},
  {(cfunction_ptr)f_input, "_input", 1},
  {(cfunction_ptr)f_debug, "debug", 1},
  {(cfunction_ptr)f_stderr, "stderr", 1},
  {(cfunction_ptr)f_strptime, "strptime", 2},
  {(cfunction_ptr)f_strftime, "strftime", 2},
  {(cfunction_ptr)f_strflocaltime, "strflocaltime", 2},
  {(cfunction_ptr)f_mktime, "mktime", 1},
  {(cfunction_ptr)f_gmtime, "gmtime", 1},
  {(cfunction_ptr)f_localtime, "localtime", 1},
  {(cfunction_ptr)f_now, "now", 1},
  {(cfunction_ptr)f_current_filename, "input_filename", 1},
  {(cfunction_ptr)f_current_line, "input_line_number", 1},
};







struct bytecoded_builtin { const char* name; block code; };
static block bind_bytecoded_builtins(block b) {
  block builtins = gen_noop();
  {
    struct bytecoded_builtin builtin_defs[] = {
      {"empty", gen_op_simple(BACKTRACK)},
      {"not", gen_condbranch(gen_const(jv_false()),
                             gen_const(jv_true()))}
    };
    for (unsigned i=0; i<sizeof(builtin_defs)/sizeof(builtin_defs[0]); i++) {
      builtins = (block_join((builtins),(gen_function(builtin_defs[i].name, gen_noop(), builtin_defs[i].code))))
                                                                    ;
    }
  }
  {
    struct bytecoded_builtin builtin_def_1arg[] = {
      {"path", (block_join((block_join((gen_op_simple(PATH_BEGIN)),(gen_call("arg", gen_noop())))),(gen_op_simple(PATH_END))))

                                             },
    };
    for (unsigned i=0; i<sizeof(builtin_def_1arg)/sizeof(builtin_def_1arg[0]); i++) {
      builtins = (block_join((builtins),(gen_function(builtin_def_1arg[i].name, gen_param("arg"), builtin_def_1arg[i].code))))

                                                                        ;
    }
  }
  {

    block rangevar = gen_op_var_fresh(STOREV, "rangevar");
    block rangestart = gen_op_var_fresh(STOREV, "rangestart");
    block range = (block_join((block_join((block_join((block_join((block_join((block_join((block_join((gen_op_simple(DUP)),(gen_call("start", gen_noop())))),(rangestart))),(gen_call("end", gen_noop())))),(gen_op_simple(DUP)))),(gen_op_bound(LOADV, rangestart)))),(rangevar))),(gen_op_bound(RANGE, rangevar))))







                                                      ;
    builtins = (block_join((builtins),(gen_function("range", (block_join((gen_param("start")),(gen_param("end")))), range))))

                                                   ;
  }
  return block_bind(builtins, b, OP_IS_CALL_PSEUDO);
}



static const char* const jq_builtins =

"def halt_error: halt_error(5);\n"
"def error: error(.);\n"
"def map(f): [.[] | f];\n"
"def select(f): if f then . else empty end;\n"
"def sort_by(f): _sort_by_impl(map([f]));\n"
"def group_by(f): _group_by_impl(map([f]));\n"
"def unique: group_by(.) | map(.[0]);\n"
"def unique_by(f): group_by(f) | map(.[0]);\n"
"def max_by(f): _max_by_impl(map([f]));\n"
"def min_by(f): _min_by_impl(map([f]));\n"
"def add: reduce .[] as $x (null; . + $x);\n"
"def del(f): delpaths([path(f)]);\n"
"def _assign(paths; value): value as $v | reduce path(paths) as $p (.; setpath($p; $v));\n"
"def _modify(paths; update): reduce path(paths) as $p (.; label $out | (setpath($p; getpath($p) | update) | ., break $out), delpaths([$p]));\n"
"def map_values(f): .[] |= f;\n"
"\n"
"# recurse\n"
"def recurse(f): def r: ., (f | r); r;\n"
"def recurse(f; cond): def r: ., (f | select(cond) | r); r;\n"
"def recurse: recurse(.[]?);\n"
"def recurse_down: recurse;\n"
"\n"
"def to_entries: [keys_unsorted[] as $k | {key: $k, value: .[$k]}];\n"
"def from_entries: map({(.key // .Key // .name // .Name): (if has(\"value\") then .value else .Value end)}) | add | .//={};\n"
"def with_entries(f): to_entries | map(f) | from_entries;\n"
"def reverse: [.[length - 1 - range(0;length)]];\n"
"def indices($i): if type == \"array\" and ($i|type) == \"array\" then .[$i]\n"
"  elif type == \"array\" then .[[$i]]\n"
"  elif type == \"string\" and ($i|type) == \"string\" then _strindices($i)\n"
"  else .[$i] end;\n"
"def index($i):   indices($i) | .[0];       # TODO: optimize\n"
"def rindex($i):  indices($i) | .[-1:][0];  # TODO: optimize\n"
"def paths: path(recurse(if (type|. == \"array\" or . == \"object\") then .[] else empty end))|select(length > 0);\n"
"def paths(node_filter): . as $dot|paths|select(. as $p|$dot|getpath($p)|node_filter);\n"
"def any(generator; condition):\n"
"        [label $out | foreach generator as $i\n"
"                 (false;\n"
"                  if . then break $out elif $i | condition then true else . end;\n"
"                  if . then . else empty end)] | length == 1;\n"
"def any(condition): any(.[]; condition);\n"
"def any: any(.);\n"
"def all(generator; condition):\n"
"        [label $out | foreach generator as $i\n"
"                 (true;\n"
"                  if .|not then break $out elif $i | condition then . else false end;\n"
"                  if .|not then . else empty end)] | length == 0;\n"
"def all(condition): all(.[]; condition);\n"
"def all: all(.);\n"
"def isfinite: type == \"number\" and (isinfinite | not);\n"
"def arrays: select(type == \"array\");\n"
"def objects: select(type == \"object\");\n"
"def iterables: arrays, objects;\n"
"def booleans: select(type == \"boolean\");\n"
"def numbers: select(type == \"number\");\n"
"def normals: select(isnormal);\n"
"def finites: select(isfinite);\n"
"def strings: select(type == \"string\");\n"
"def nulls: select(type == \"null\");\n"
"def values: select(. != null);\n"
"def scalars: select(. == null or . == true or . == false or type == \"number\" or type == \"string\");\n"
"def scalars_or_empty: select(. == null or . == true or . == false or type == \"number\" or type == \"string\" or ((type==\"array\" or type==\"object\") and length==0));\n"
"def leaf_paths: paths(scalars);\n"
"def join($x): reduce .[] as $i (null;\n"
"            (if .==null then \"\" else .+$x end) +\n"
"            ($i | if type==\"boolean\" or type==\"number\" then tostring else .//\"\" end)\n"
"        ) // \"\";\n"
"def _flatten($x): reduce .[] as $i ([]; if $i | type == \"array\" and $x != 0 then . + ($i | _flatten($x-1)) else . + [$i] end);\n"
"def flatten($x): if $x < 0 then error(\"flatten depth must not be negative\") else _flatten($x) end;\n"
"def flatten: _flatten(-1);\n"
"def range($x): range(0;$x);\n"
"def fromdateiso8601: strptime(\"%Y-%m-%dT%H:%M:%SZ\")|mktime;\n"
"def todateiso8601: strftime(\"%Y-%m-%dT%H:%M:%SZ\");\n"
"def fromdate: fromdateiso8601;\n"
"def todate: todateiso8601;\n"
"def match(re; mode): _match_impl(re; mode; false)|.[];\n"
"def match($val): ($val|type) as $vt | if $vt == \"string\" then match($val; null)\n"
"   elif $vt == \"array\" and ($val | length) > 1 then match($val[0]; $val[1])\n"
"   elif $vt == \"array\" and ($val | length) > 0 then match($val[0]; null)\n"
"   else error( $vt + \" not a string or array\") end;\n"
"def test(re; mode): _match_impl(re; mode; true);\n"
"def test($val): ($val|type) as $vt | if $vt == \"string\" then test($val; null)\n"
"   elif $vt == \"array\" and ($val | length) > 1 then test($val[0]; $val[1])\n"
"   elif $vt == \"array\" and ($val | length) > 0 then test($val[0]; null)\n"
"   else error( $vt + \" not a string or array\") end;\n"
"def capture(re; mods): match(re; mods) | reduce ( .captures | .[] | select(.name != null) | { (.name) : .string } ) as $pair ({}; . + $pair);\n"
"def capture($val): ($val|type) as $vt | if $vt == \"string\" then capture($val; null)\n"
"   elif $vt == \"array\" and ($val | length) > 1 then capture($val[0]; $val[1])\n"
"   elif $vt == \"array\" and ($val | length) > 0 then capture($val[0]; null)\n"
"   else error( $vt + \" not a string or array\") end;\n"
"def scan(re):\n"
"  match(re; \"g\")\n"
"  |  if (.captures|length > 0)\n"
"      then [ .captures | .[] | .string ]\n"
"      else .string\n"
"      end ;\n"
"#\n"
"# If input is an array, then emit a stream of successive subarrays of length n (or less),\n"
"# and similarly for strings.\n"
"def _nwise(a; $n): if a|length <= $n then a else a[0:$n] , _nwise(a[$n:]; $n) end;\n"
"def _nwise($n): _nwise(.; $n);\n"
"#\n"
"# splits/1 produces a stream; split/1 is retained for backward compatibility.\n"
"def splits($re; flags): . as $s\n"
"#  # multiple occurrences of \"g\" are acceptable\n"
"  | [ match($re; \"g\" + flags) | (.offset, .offset + .length) ]\n"
"  | [0] + . +[$s|length]\n"
"  | _nwise(2)\n"
"  | $s[.[0]:.[1] ] ;\n"
"def splits($re): splits($re; null);\n"
"#\n"
"# split emits an array for backward compatibility\n"
"def split($re; flags): [ splits($re; flags) ];\n"
"#\n"
"# If s contains capture variables, then create a capture object and pipe it to s\n"
"def sub($re; s):\n"
"  . as $in\n"
"  | [match($re)]\n"
"  | if length == 0 then $in\n"
"    else .[0]\n"
"    | . as $r\n"
"#  # create the \"capture\" object:\n"
"    | reduce ( $r | .captures | .[] | select(.name != null) | { (.name) : .string } ) as $pair\n"
"        ({}; . + $pair)\n"
"    | $in[0:$r.offset] + s + $in[$r.offset+$r.length:]\n"
"    end ;\n"
"#\n"
"# If s contains capture variables, then create a capture object and pipe it to s\n"
"def sub($re; s; flags):\n"
"  def subg: [explode[] | select(. != 103)] | implode;\n"
"  # \"fla\" should be flags with all occurrences of g removed; gs should be non-nil if flags has a g\n"
"  def sub1(fla; gs):\n"
"    def mysub:\n"
"      . as $in\n"
"      | [match($re; fla)]\n"
"      | if length == 0 then $in\n"
"        else .[0] as $edit\n"
"        | ($edit | .offset + .length) as $len\n"
"        # create the \"capture\" object:\n"
"        | reduce ( $edit | .captures | .[] | select(.name != null) | { (.name) : .string } ) as $pair\n"
"            ({}; . + $pair)\n"
"        | $in[0:$edit.offset]\n"
"          + s\n"
"          + ($in[$len:] | if length > 0 and gs then mysub else . end)\n"
"        end ;\n"
"    mysub ;\n"
"    (flags | index(\"g\")) as $gs\n"
"    | (flags | if $gs then subg else . end) as $fla\n"
"    | sub1($fla; $gs);\n"
"#\n"
"def sub($re; s): sub($re; s; \"\");\n"
"# repeated substitution of re (which may contain named captures)\n"
"def gsub($re; s; flags): sub($re; s; flags + \"g\");\n"
"def gsub($re; s): sub($re; s; \"g\");\n"
"\n"
"########################################################################\n"
"# range/3, with a `by` expression argument\n"
"def range($init; $upto; $by):\n"
"    def _range:\n"
"        if ($by > 0 and . < $upto) or ($by < 0 and . > $upto) then ., ((.+$by)|_range) else . end;\n"
"    if $by == 0 then $init else $init|_range end | select(($by > 0 and . < $upto) or ($by < 0 and . > $upto));\n"
"# generic iterator/generator\n"
"def while(cond; update):\n"
"     def _while:\n"
"         if cond then ., (update | _while) else empty end;\n"
"     _while;\n"
"def until(cond; next):\n"
"     def _until:\n"
"         if cond then . else (next|_until) end;\n"
"     _until;\n"
"def limit($n; exp):\n"
"  if $n < 0 then exp\n"
"  else label $out | foreach exp as $item ($n; .-1; $item, if . <= 0 then break $out else empty end)\n"
"  end;\n"
"def isempty(g): 0 == ((label $go | g | (1, break $go)) // 0);\n"
"def first(g): label $out | g | ., break $out;\n"
"def last(g): reduce g as $item (null; $item);\n"
"def nth($n; g): if $n < 0 then error(\"nth doesn't support negative indices\") else last(limit($n + 1; g)) end;\n"
"def first: .[0];\n"
"def last: .[-1];\n"
"def nth($n): .[$n];\n"
"def combinations:\n"
"    if length == 0 then [] else\n"
"        .[0][] as $x\n"
"          | (.[1:] | combinations) as $y\n"
"          | [$x] + $y\n"
"    end;\n"
"def combinations(n):\n"
"    . as $dot\n"
"      | [range(n) | $dot]\n"
"      | combinations;\n"
"# transpose a possibly jagged matrix, quickly;\n"
"# rows are padded with nulls so the result is always rectangular.\n"
"def transpose:\n"
"  if . == [] then []\n"
"  else . as $in\n"
"  | (map(length) | max) as $max\n"
"  | length as $length\n"
"  | reduce range(0; $max) as $j\n"
"      ([]; . + [reduce range(0;$length) as $i ([]; . + [ $in[$i][$j] ] )] )\n"
"	        end;\n"
"def in(xs): . as $x | xs | has($x);\n"
"def inside(xs): . as $x | xs | contains($x);\n"
"def input: _input;\n"
"def repeat(exp):\n"
"     def _repeat:\n"
"         exp, _repeat;\n"
"     _repeat;\n"
"def inputs: try repeat(_input) catch if .==\"break\" then empty else .|error end;\n"
"# like ruby's downcase - only characters A to Z are affected\n"
"def ascii_downcase:\n"
"  explode | map( if 65 <= . and . <= 90 then . + 32  else . end) | implode;\n"
"# like ruby's upcase - only characters a to z are affected\n"
"def ascii_upcase:\n"
"  explode | map( if 97 <= . and . <= 122 then . - 32  else . end) | implode;\n"
"\n"
"# Streaming utilities\n"
"def truncate_stream(stream):\n"
"  . as $n | null | stream | . as $input | if (.[0]|length) > $n then setpath([0];$input[0][$n:]) else empty end;\n"
"def fromstream(i):\n"
"  foreach i as $item (\n"
"    [null,false,null,false];\n"
"    if ($item[0]|length) == 0 then [null,false,.[2],.[3]]\n"
"    elif ($item|length) == 1 and ($item[0]|length) < 2 then [null,false,.[0],.[1]]\n"
"    else . end |\n"
"    . as $state |\n"
"    if ($item|length) > 1 and ($item[0]|length) > 0 then\n"
"      [.[0]|setpath(($item|.[0]); ($item|.[1])),\n"
"      true,\n"
"      $state[2],\n"
"      $state[3]]\n"
"    else .\n"
"    end;\n"
"    if ($item[0]|length) == 1 and ($item|length == 1) and .[3] then .[2] else empty end,\n"
"    if ($item[0]|length) == 0 then $item[1] else empty end\n"
"    );\n"
"def tostream:\n"
"  {string:true,number:true,boolean:true,null:true} as $leaf_types |\n"
"  . as $dot |\n"
"  if $leaf_types[$dot|type] or length==0 then [[],$dot]\n"
"  else\n"
"    # We really need a _streaming_ form of `keys`.\n"
"    # We can use `range` for arrays, but not for objects.\n"
"    keys_unsorted as $keys |\n"
"    $keys[-1] as $last|\n"
"    ((# for each key\n"
"      $keys[] | . as $key |\n"
"      $dot[$key] | . as $dot |\n"
"      # recurse on each key/value\n"
"      tostream|.[0]|=[$key]+.),\n"
"     # then add the closing marker\n"
"     [[$last]])\n"
"  end;\n"
"\n"
"\n"
"# Assuming the input array is sorted, bsearch/1 returns\n"
"# the index of the target if the target is in the input array; and otherwise\n"
"#  (-1 - ix), where ix is the insertion point that would leave the array sorted.\n"
"# If the input is not sorted, bsearch will terminate but with irrelevant results.\n"
"def bsearch(target):\n"
"  if length == 0 then -1\n"
"  elif length == 1 then\n"
"     if target == .[0] then 0 elif target < .[0] then -1 else -2 end\n"
"  else . as $in\n"
"    # state variable: [start, end, answer]\n"
"    # where start and end are the upper and lower offsets to use.\n"
"    | [0, length-1, null]\n"
"    | until( .[0] > .[1] ;\n"
"             if .[2] != null then (.[1] = -1)               # i.e. break\n"
"             else\n"
"               ( ( (.[1] + .[0]) / 2 ) | floor ) as $mid\n"
"               | $in[$mid] as $monkey\n"
"               | if $monkey == target  then (.[2] = $mid)   # success\n"
"                 elif .[0] == .[1]     then (.[1] = -1)     # failure\n"
"                 elif $monkey < target then (.[0] = ($mid + 1))\n"
"                 else (.[1] = ($mid - 1))\n"
"                 end\n"
"             end )\n"
"    | if .[2] == null then          # compute the insertion point\n"
"         if $in[ .[0] ] < target then (-2 -.[0])\n"
"         else (-1 -.[0])\n"
"         end\n"
"      else .[2]\n"
"      end\n"
"  end;\n"
"\n"
"# Apply f to composite entities recursively, and to atoms\n"
"def walk(f):\n"
"  . as $in\n"
"  | if type == \"object\" then\n"
"      reduce keys_unsorted[] as $key\n"
"        ( {}; . + { ($key):  ($in[$key] | walk(f)) } ) | f\n"
"  elif type == \"array\" then map( walk(f) ) | f\n"
"  else f\n"
"  end;\n"
"\n"
"# SQL-ish operators here:\n"
"def INDEX(stream; idx_expr):\n"
"  reduce stream as $row ({};\n"
"    .[$row|idx_expr|\n"
"      if type != \"string\" then tojson\n"
"      else .\n"
"      end] |= $row);\n"
"def INDEX(idx_expr): INDEX(.[]; idx_expr);\n"
"def JOIN($idx; idx_expr):\n"
"  [.[] | [., $idx[idx_expr]]];\n"
"def JOIN($idx; stream; idx_expr):\n"
"  stream | [., $idx[idx_expr]];\n"
"def JOIN($idx; stream; idx_expr; join_expr):\n"
"  stream | [., $idx[idx_expr]] | join_expr;\n"
"def IN(s): reduce (first(select(. == s)) | true) as $v (false; if . or $v then true else false end);\n"
"def IN(src; s): reduce (src|IN(s)) as $v (false; if . or $v then true else false end);\n"
































































































































































































































































































;
static block gen_builtin_list(block builtins) {
  jv list = jv_array_append(block_list_funcs(builtins, 1), jv_string("builtins/0"));
  return (block_join((builtins),(gen_function("builtins", gen_noop(), gen_const(list)))));
}

static int builtins_bind_one(jq_state *jq, block* bb, const char* code) {
  struct locfile* src={0};
  src = locfile_init(jq, "<builtin>", code, strlen(code));
  block funcs={0};
  int nerrors = jq_parse_library(src, &funcs);
  if (nerrors == 0) {
    *bb = block_bind(funcs, *bb, OP_IS_CALL_PSEUDO);
  }
  locfile_free(src);
  return nerrors;
}

static int slurp_lib(jq_state *jq, block* bb) {
  int nerrors = 0;
  char* home = getenv("HOME");
  if (home) {
    jv filename = jv_string_append_str(jv_string(home), "/.jq");
    jv data = jv_load_file(jv_string_value(filename), 1);
    if (jv_is_valid(data)) {
      nerrors = builtins_bind_one(jq, bb, jv_string_value(data) );
    }
    jv_free(filename);
    jv_free(data);
  }
  return nerrors;
}

int builtins_bind(jq_state *jq, block* bb) {
  block builtins = gen_noop();
  int nerrors = slurp_lib(jq, bb);
  if (nerrors) {
    block_free(*bb);
    return nerrors;
  }
  nerrors = builtins_bind_one(jq, &builtins, jq_builtins);
  
 ((
 !nerrors
 ) ? (void) (0) : __assert_fail (
 "!nerrors"
 , "builtin.c", 1782, __PRETTY_FUNCTION__))
                 ;
  builtins = bind_bytecoded_builtins(builtins);
  builtins = gen_cbinding(function_list, sizeof(function_list)/sizeof(function_list[0]), builtins);
  builtins = gen_builtin_list(builtins);
  *bb = block_bind(builtins, *bb, OP_IS_CALL_PSEUDO);
  *bb = block_drop_unreferenced(*bb);
  return nerrors;
}
