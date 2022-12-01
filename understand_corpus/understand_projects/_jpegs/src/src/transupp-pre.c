typedef int ptrdiff_t;
typedef unsigned int size_t;
typedef int wchar_t;
























union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));


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


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;








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
__extension__ typedef long int __swblk_t;
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

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;



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





typedef __off_t off_t;
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





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
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));


typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;





struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
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
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


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
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
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
  long int __align;
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
    unsigned char __pad1;
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









extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (__const char *__command) ;

extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));











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
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
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







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));




typedef __gnuc_va_list va_list;


typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

                      ;








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



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






extern char *gets (char *__s) ;

extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






extern int sys_nerr;
extern __const char *__const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));















extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

typedef unsigned char JSAMPLE;
typedef short JCOEF;
typedef unsigned char JOCTET;
typedef unsigned char UINT8;
typedef unsigned short UINT16;







typedef short INT16;
typedef long INT32;
typedef unsigned int JDIMENSION;
typedef void noreturn_t;
typedef enum { FALSE = 0, TRUE = 1 } boolean;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;

typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef JBLOCKARRAY *JBLOCKIMAGE;

typedef JCOEF *JCOEFPTR;







typedef struct {




  UINT16 quantval[64];





  boolean sent_table;
} JQUANT_TBL;




typedef struct {

  UINT8 bits[17];

  UINT8 huffval[256];





  boolean sent_table;
} JHUFF_TBL;




typedef struct {



  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;




  int dc_tbl_no;
  int ac_tbl_no;
  JDIMENSION width_in_blocks;
  JDIMENSION height_in_blocks;





  int DCT_h_scaled_size;
  int DCT_v_scaled_size;







  JDIMENSION downsampled_width;
  JDIMENSION downsampled_height;
  boolean component_needed;



  int MCU_width;
  int MCU_height;
  int MCU_blocks;
  int MCU_sample_width;
  int last_col_width;
  int last_row_height;





  JQUANT_TBL * quant_table;


  void * dct_table;
} jpeg_component_info;




typedef struct {
  int comps_in_scan;
  int component_index[4];
  int Ss, Se;
  int Ah, Al;
} jpeg_scan_info;



typedef struct jpeg_marker_struct * jpeg_saved_marker_ptr;

struct jpeg_marker_struct {
  jpeg_saved_marker_ptr next;
  UINT8 marker;
  unsigned int original_length;
  unsigned int data_length;
  JOCTET * data;

};



typedef enum {
 JCS_UNKNOWN,
 JCS_GRAYSCALE,
 JCS_RGB,
 JCS_YCbCr,
 JCS_CMYK,
 JCS_YCCK,
 JCS_BG_RGB,
 JCS_BG_YCC
} J_COLOR_SPACE;



typedef enum {
 JCT_NONE = 0,
 JCT_SUBTRACT_GREEN = 1
} J_COLOR_TRANSFORM;



typedef enum {
 JDCT_ISLOW,
 JDCT_IFAST,
 JDCT_FLOAT
} J_DCT_METHOD;
typedef enum {
 JDITHER_NONE,
 JDITHER_ORDERED,
 JDITHER_FS
} J_DITHER_MODE;
struct jpeg_common_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;




};

typedef struct jpeg_common_struct * j_common_ptr;
typedef struct jpeg_compress_struct * j_compress_ptr;
typedef struct jpeg_decompress_struct * j_decompress_ptr;




struct jpeg_compress_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;


  struct jpeg_destination_mgr * dest;






  JDIMENSION image_width;
  JDIMENSION image_height;
  int input_components;
  J_COLOR_SPACE in_color_space;

  double input_gamma;
  unsigned int scale_num, scale_denom;

  JDIMENSION jpeg_width;
  JDIMENSION jpeg_height;







  int data_precision;

  int num_components;
  J_COLOR_SPACE jpeg_color_space;

  jpeg_component_info * comp_info;


  JQUANT_TBL * quant_tbl_ptrs[4];
  int q_scale_factor[4];




  JHUFF_TBL * dc_huff_tbl_ptrs[4];
  JHUFF_TBL * ac_huff_tbl_ptrs[4];


  UINT8 arith_dc_L[16];
  UINT8 arith_dc_U[16];
  UINT8 arith_ac_K[16];

  int num_scans;
  const jpeg_scan_info * scan_info;





  boolean raw_data_in;
  boolean arith_code;
  boolean optimize_coding;
  boolean CCIR601_sampling;
  boolean do_fancy_downsampling;
  int smoothing_factor;
  J_DCT_METHOD dct_method;






  unsigned int restart_interval;
  int restart_in_rows;



  boolean write_JFIF_header;
  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;




  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean write_Adobe_marker;

  J_COLOR_TRANSFORM color_transform;







  JDIMENSION next_scanline;
  boolean progressive_mode;
  int max_h_samp_factor;
  int max_v_samp_factor;

  int min_DCT_h_scaled_size;
  int min_DCT_v_scaled_size;

  JDIMENSION total_iMCU_rows;
  int comps_in_scan;
  jpeg_component_info * cur_comp_info[4];


  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;

  int blocks_in_MCU;
  int MCU_membership[10];



  int Ss, Se, Ah, Al;

  int block_size;
  const int * natural_order;
  int lim_Se;




  struct jpeg_comp_master * master;
  struct jpeg_c_main_controller * main;
  struct jpeg_c_prep_controller * prep;
  struct jpeg_c_coef_controller * coef;
  struct jpeg_marker_writer * marker;
  struct jpeg_color_converter * cconvert;
  struct jpeg_downsampler * downsample;
  struct jpeg_forward_dct * fdct;
  struct jpeg_entropy_encoder * entropy;
  jpeg_scan_info * script_space;
  int script_space_size;
};




struct jpeg_decompress_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;


  struct jpeg_source_mgr * src;




  JDIMENSION image_width;
  JDIMENSION image_height;
  int num_components;
  J_COLOR_SPACE jpeg_color_space;






  J_COLOR_SPACE out_color_space;

  unsigned int scale_num, scale_denom;

  double output_gamma;

  boolean buffered_image;
  boolean raw_data_out;

  J_DCT_METHOD dct_method;
  boolean do_fancy_upsampling;
  boolean do_block_smoothing;

  boolean quantize_colors;

  J_DITHER_MODE dither_mode;
  boolean two_pass_quantize;
  int desired_number_of_colors;

  boolean enable_1pass_quant;
  boolean enable_external_quant;
  boolean enable_2pass_quant;







  JDIMENSION output_width;
  JDIMENSION output_height;
  int out_color_components;
  int output_components;



  int rec_outbuf_height;
  int actual_number_of_colors;
  JSAMPARRAY colormap;
  JDIMENSION output_scanline;




  int input_scan_number;
  JDIMENSION input_iMCU_row;





  int output_scan_number;
  JDIMENSION output_iMCU_row;
  int (*coef_bits)[64];
  JQUANT_TBL * quant_tbl_ptrs[4];


  JHUFF_TBL * dc_huff_tbl_ptrs[4];
  JHUFF_TBL * ac_huff_tbl_ptrs[4];






  int data_precision;

  jpeg_component_info * comp_info;


  boolean is_baseline;
  boolean progressive_mode;
  boolean arith_code;

  UINT8 arith_dc_L[16];
  UINT8 arith_dc_U[16];
  UINT8 arith_ac_K[16];

  unsigned int restart_interval;




  boolean saw_JFIF_marker;

  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;
  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean saw_Adobe_marker;
  UINT8 Adobe_transform;

  J_COLOR_TRANSFORM color_transform;


  boolean CCIR601_sampling;





  jpeg_saved_marker_ptr marker_list;
  int max_h_samp_factor;
  int max_v_samp_factor;

  int min_DCT_h_scaled_size;
  int min_DCT_v_scaled_size;

  JDIMENSION total_iMCU_rows;
  JSAMPLE * sample_range_limit;






  int comps_in_scan;
  jpeg_component_info * cur_comp_info[4];


  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;

  int blocks_in_MCU;
  int MCU_membership[10];



  int Ss, Se, Ah, Al;



  int block_size;
  const int * natural_order;
  int lim_Se;





  int unread_marker;




  struct jpeg_decomp_master * master;
  struct jpeg_d_main_controller * main;
  struct jpeg_d_coef_controller * coef;
  struct jpeg_d_post_controller * post;
  struct jpeg_input_controller * inputctl;
  struct jpeg_marker_reader * marker;
  struct jpeg_entropy_decoder * entropy;
  struct jpeg_inverse_dct * idct;
  struct jpeg_upsampler * upsample;
  struct jpeg_color_deconverter * cconvert;
  struct jpeg_color_quantizer * cquantize;
};
struct jpeg_error_mgr {

  noreturn_t (*error_exit) (j_common_ptr cinfo);

  void (*emit_message) (j_common_ptr cinfo, int msg_level);

  void (*output_message) (j_common_ptr cinfo);

  void (*format_message) (j_common_ptr cinfo, char * buffer);


  void (*reset_error_mgr) (j_common_ptr cinfo);




  int msg_code;

  union {
    int i[8];
    char s[80];
  } msg_parm;



  int trace_level;







  long num_warnings;
  const char * const * jpeg_message_table;
  int last_jpeg_message;



  const char * const * addon_message_table;
  int first_addon_message;
  int last_addon_message;
};




struct jpeg_progress_mgr {
  void (*progress_monitor) (j_common_ptr cinfo);

  long pass_counter;
  long pass_limit;
  int completed_passes;
  int total_passes;
};




struct jpeg_destination_mgr {
  JOCTET * next_output_byte;
  size_t free_in_buffer;

  void (*init_destination) (j_compress_ptr cinfo);
  boolean (*empty_output_buffer) (j_compress_ptr cinfo);
  void (*term_destination) (j_compress_ptr cinfo);
};




struct jpeg_source_mgr {
  const JOCTET * next_input_byte;
  size_t bytes_in_buffer;

  void (*init_source) (j_decompress_ptr cinfo);
  boolean (*fill_input_buffer) (j_decompress_ptr cinfo);
  void (*skip_input_data) (j_decompress_ptr cinfo, long num_bytes);
  boolean (*resync_to_restart) (j_decompress_ptr cinfo, int desired);
  void (*term_source) (j_decompress_ptr cinfo);
};
typedef struct jvirt_sarray_control * jvirt_sarray_ptr;
typedef struct jvirt_barray_control * jvirt_barray_ptr;


struct jpeg_memory_mgr {

  void * (*alloc_small) (j_common_ptr cinfo, int pool_id, size_t sizeofobject)
                         ;
  void * (*alloc_large) (j_common_ptr cinfo, int pool_id, size_t sizeofobject)
                              ;
  JSAMPARRAY (*alloc_sarray) (j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows)

                             ;
  JBLOCKARRAY (*alloc_barray) (j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows)

                              ;
  jvirt_sarray_ptr (*request_virt_sarray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess)




                              ;
  jvirt_barray_ptr (*request_virt_barray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess)




                              ;
  void (*realize_virt_arrays) (j_common_ptr cinfo);
  JSAMPARRAY (*access_virt_sarray) (j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)



                          ;
  JBLOCKARRAY (*access_virt_barray) (j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)



                           ;
  void (*free_pool) (j_common_ptr cinfo, int pool_id);
  void (*self_destruct) (j_common_ptr cinfo);






  long max_memory_to_use;


  long max_alloc_chunk;
};





typedef boolean (*jpeg_marker_parser_method) (j_decompress_ptr cinfo);
extern struct jpeg_error_mgr * jpeg_std_error
 (struct jpeg_error_mgr * err);
extern void jpeg_CreateCompress (j_compress_ptr cinfo, int version, size_t structsize)
                                          ;
extern void jpeg_CreateDecompress (j_decompress_ptr cinfo, int version, size_t structsize)
                                     ;

extern void jpeg_destroy_compress (j_compress_ptr cinfo);
extern void jpeg_destroy_decompress (j_decompress_ptr cinfo);



extern void jpeg_stdio_dest (j_compress_ptr cinfo, FILE * outfile);
extern void jpeg_stdio_src (j_decompress_ptr cinfo, FILE * infile);


extern void jpeg_mem_dest (j_compress_ptr cinfo, unsigned char ** outbuffer, unsigned long * outsize)

                                   ;
extern void jpeg_mem_src (j_decompress_ptr cinfo, const unsigned char * inbuffer, unsigned long insize)

                               ;


extern void jpeg_set_defaults (j_compress_ptr cinfo);

extern void jpeg_set_colorspace (j_compress_ptr cinfo, J_COLOR_SPACE colorspace)
                                    ;
extern void jpeg_default_colorspace (j_compress_ptr cinfo);
extern void jpeg_set_quality (j_compress_ptr cinfo, int quality, boolean force_baseline)
                               ;
extern void jpeg_set_linear_quality (j_compress_ptr cinfo, int scale_factor, boolean force_baseline)

                               ;
extern void jpeg_default_qtables (j_compress_ptr cinfo, boolean force_baseline)
                                   ;
extern void jpeg_add_quant_table (j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline)


                                   ;
extern int jpeg_quality_scaling (int quality);
extern void jpeg_simple_progression (j_compress_ptr cinfo);
extern void jpeg_suppress_tables (j_compress_ptr cinfo, boolean suppress)
                             ;
extern JQUANT_TBL * jpeg_alloc_quant_table (j_common_ptr cinfo);
extern JHUFF_TBL * jpeg_alloc_huff_table (j_common_ptr cinfo);


extern void jpeg_start_compress (j_compress_ptr cinfo, boolean write_all_tables)
                                    ;
extern JDIMENSION jpeg_write_scanlines (j_compress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION num_lines)

                                ;
extern void jpeg_finish_compress (j_compress_ptr cinfo);


extern void jpeg_calc_jpeg_dimensions (j_compress_ptr cinfo);


extern JDIMENSION jpeg_write_raw_data (j_compress_ptr cinfo, JSAMPIMAGE data, JDIMENSION num_lines)

                               ;


extern void jpeg_write_marker
 (j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen)
                                                    ;

extern void jpeg_write_m_header
 (j_compress_ptr cinfo, int marker, unsigned int datalen);
extern void jpeg_write_m_byte
 (j_compress_ptr cinfo, int val);


extern void jpeg_write_tables (j_compress_ptr cinfo);


extern int jpeg_read_header (j_decompress_ptr cinfo, boolean require_image)
                             ;
extern boolean jpeg_start_decompress (j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_scanlines (j_decompress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION max_lines)

                               ;
extern boolean jpeg_finish_decompress (j_decompress_ptr cinfo);


extern JDIMENSION jpeg_read_raw_data (j_decompress_ptr cinfo, JSAMPIMAGE data, JDIMENSION max_lines)

                              ;


extern boolean jpeg_has_multiple_scans (j_decompress_ptr cinfo);
extern boolean jpeg_start_output (j_decompress_ptr cinfo, int scan_number)
                            ;
extern boolean jpeg_finish_output (j_decompress_ptr cinfo);
extern boolean jpeg_input_complete (j_decompress_ptr cinfo);
extern void jpeg_new_colormap (j_decompress_ptr cinfo);
extern int jpeg_consume_input (j_decompress_ptr cinfo);
extern void jpeg_core_output_dimensions (j_decompress_ptr cinfo);
extern void jpeg_calc_output_dimensions (j_decompress_ptr cinfo);


extern void jpeg_save_markers
 (j_decompress_ptr cinfo, int marker_code, unsigned int length_limit)
                                 ;


extern void jpeg_set_marker_processor
 (j_decompress_ptr cinfo, int marker_code, jpeg_marker_parser_method routine)
                                         ;


extern jvirt_barray_ptr * jpeg_read_coefficients (j_decompress_ptr cinfo);
extern void jpeg_write_coefficients (j_compress_ptr cinfo, jvirt_barray_ptr * coef_arrays)
                                       ;
extern void jpeg_copy_critical_parameters (j_decompress_ptr srcinfo, j_compress_ptr dstinfo)
                              ;







extern void jpeg_abort_compress (j_compress_ptr cinfo);
extern void jpeg_abort_decompress (j_decompress_ptr cinfo);




extern void jpeg_abort (j_common_ptr cinfo);
extern void jpeg_destroy (j_common_ptr cinfo);


extern boolean jpeg_resync_to_restart (j_decompress_ptr cinfo, int desired)
                      ;
typedef enum {
 JBUF_PASS_THRU,

 JBUF_SAVE_SOURCE,
 JBUF_CRANK_DEST,
 JBUF_SAVE_AND_PASS
} J_BUF_MODE;
struct jpeg_comp_master {
  void (*prepare_for_pass) (j_compress_ptr cinfo);
  void (*pass_startup) (j_compress_ptr cinfo);
  void (*finish_pass) (j_compress_ptr cinfo);


  boolean call_pass_startup;
  boolean is_last_pass;
};


struct jpeg_c_main_controller {
  void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail)

                                    ;
};


struct jpeg_c_prep_controller {
  void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*pre_process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail, JSAMPIMAGE output_buf, JDIMENSION *out_row_group_ctr, JDIMENSION out_row_groups_avail)





                                        ;
};


struct jpeg_c_coef_controller {
  void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  boolean (*compress_data) (j_compress_ptr cinfo, JSAMPIMAGE input_buf)
                             ;
};


struct jpeg_color_converter {
  void (*start_pass) (j_compress_ptr cinfo);
  void (*color_convert) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JSAMPIMAGE output_buf, JDIMENSION output_row, int num_rows)

                                         ;
};


struct jpeg_downsampler {
  void (*start_pass) (j_compress_ptr cinfo);
  void (*downsample) (j_compress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_index, JSAMPIMAGE output_buf, JDIMENSION out_row_group_index)


                                        ;

  boolean need_context_rows;
};


typedef void (*forward_DCT_ptr) (j_compress_ptr cinfo, jpeg_component_info * compptr, JSAMPARRAY sample_data, JBLOCKROW coef_blocks, JDIMENSION start_row, JDIMENSION start_col, JDIMENSION num_blocks)



                          ;

struct jpeg_forward_dct {
  void (*start_pass) (j_compress_ptr cinfo);

  forward_DCT_ptr forward_DCT[10];
};


struct jpeg_entropy_encoder {
  void (*start_pass) (j_compress_ptr cinfo, boolean gather_statistics);
  boolean (*encode_mcu) (j_compress_ptr cinfo, JBLOCKROW *MCU_data);
  void (*finish_pass) (j_compress_ptr cinfo);
};


struct jpeg_marker_writer {
  void (*write_file_header) (j_compress_ptr cinfo);
  void (*write_frame_header) (j_compress_ptr cinfo);
  void (*write_scan_header) (j_compress_ptr cinfo);
  void (*write_file_trailer) (j_compress_ptr cinfo);
  void (*write_tables_only) (j_compress_ptr cinfo);


  void (*write_marker_header) (j_compress_ptr cinfo, int marker, unsigned int datalen)
                                ;
  void (*write_marker_byte) (j_compress_ptr cinfo, int val);
};





struct jpeg_decomp_master {
  void (*prepare_for_output_pass) (j_decompress_ptr cinfo);
  void (*finish_output_pass) (j_decompress_ptr cinfo);


  boolean is_dummy_pass;
};


struct jpeg_input_controller {
  int (*consume_input) (j_decompress_ptr cinfo);
  void (*reset_input_controller) (j_decompress_ptr cinfo);
  void (*start_input_pass) (j_decompress_ptr cinfo);
  void (*finish_input_pass) (j_decompress_ptr cinfo);


  boolean has_multiple_scans;
  boolean eoi_reached;
};


struct jpeg_d_main_controller {
  void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*process_data) (j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)

                                     ;
};


struct jpeg_d_coef_controller {
  void (*start_input_pass) (j_decompress_ptr cinfo);
  int (*consume_data) (j_decompress_ptr cinfo);
  void (*start_output_pass) (j_decompress_ptr cinfo);
  int (*decompress_data) (j_decompress_ptr cinfo, JSAMPIMAGE output_buf)
                            ;

  jvirt_barray_ptr *coef_arrays;
};


struct jpeg_d_post_controller {
  void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*post_process_data) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)





                                   ;
};


struct jpeg_marker_reader {
  void (*reset_marker_reader) (j_decompress_ptr cinfo);




  int (*read_markers) (j_decompress_ptr cinfo);

  jpeg_marker_parser_method read_restart_marker;




  boolean saw_SOI;
  boolean saw_SOF;
  int next_restart_num;
  unsigned int discarded_bytes;
};


struct jpeg_entropy_decoder {
  void (*start_pass) (j_decompress_ptr cinfo);
  boolean (*decode_mcu) (j_decompress_ptr cinfo, JBLOCKROW *MCU_data);
  void (*finish_pass) (j_decompress_ptr cinfo);
};


typedef void (*inverse_DCT_method_ptr) (j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)


                                                 ;

struct jpeg_inverse_dct {
  void (*start_pass) (j_decompress_ptr cinfo);

  inverse_DCT_method_ptr inverse_DCT[10];
};


struct jpeg_upsampler {
  void (*start_pass) (j_decompress_ptr cinfo);
  void (*upsample) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)





                                 ;

  boolean need_context_rows;
};


struct jpeg_color_deconverter {
  void (*start_pass) (j_decompress_ptr cinfo);
  void (*color_convert) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row, JSAMPARRAY output_buf, int num_rows)

                                         ;
};


struct jpeg_color_quantizer {
  void (*start_pass) (j_decompress_ptr cinfo, boolean is_pre_scan);
  void (*color_quantize) (j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows)

                   ;
  void (*finish_pass) (j_decompress_ptr cinfo);
  void (*new_color_map) (j_decompress_ptr cinfo);
};
extern void jinit_compress_master (j_compress_ptr cinfo);
extern void jinit_c_master_control (j_compress_ptr cinfo, boolean transcode_only)
                              ;
extern void jinit_c_main_controller (j_compress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_c_prep_controller (j_compress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_c_coef_controller (j_compress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_color_converter (j_compress_ptr cinfo);
extern void jinit_downsampler (j_compress_ptr cinfo);
extern void jinit_forward_dct (j_compress_ptr cinfo);
extern void jinit_huff_encoder (j_compress_ptr cinfo);
extern void jinit_arith_encoder (j_compress_ptr cinfo);
extern void jinit_marker_writer (j_compress_ptr cinfo);

extern void jinit_master_decompress (j_decompress_ptr cinfo);
extern void jinit_d_main_controller (j_decompress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_d_coef_controller (j_decompress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_d_post_controller (j_decompress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_input_controller (j_decompress_ptr cinfo);
extern void jinit_marker_reader (j_decompress_ptr cinfo);
extern void jinit_huff_decoder (j_decompress_ptr cinfo);
extern void jinit_arith_decoder (j_decompress_ptr cinfo);
extern void jinit_inverse_dct (j_decompress_ptr cinfo);
extern void jinit_upsampler (j_decompress_ptr cinfo);
extern void jinit_color_deconverter (j_decompress_ptr cinfo);
extern void jinit_1pass_quantizer (j_decompress_ptr cinfo);
extern void jinit_2pass_quantizer (j_decompress_ptr cinfo);
extern void jinit_merged_upsampler (j_decompress_ptr cinfo);

extern void jinit_memory_mgr (j_common_ptr cinfo);


extern long jdiv_round_up (long a, long b);
extern long jround_up (long a, long b);
extern void jcopy_sample_rows (JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array, int dest_row, int num_rows, JDIMENSION num_cols)

                                           ;
extern void jcopy_block_row (JBLOCKROW input_row, JBLOCKROW output_row, JDIMENSION num_blocks)
                             ;




extern const int jpeg_natural_order[];
extern const int jpeg_natural_order7[];
extern const int jpeg_natural_order6[];
extern const int jpeg_natural_order5[];
extern const int jpeg_natural_order4[];
extern const int jpeg_natural_order3[];
extern const int jpeg_natural_order2[];


extern const INT32 jpeg_aritab[];
typedef enum {





JMSG_NOMESSAGE ,


JERR_BAD_ALIGN_TYPE ,
JERR_BAD_ALLOC_CHUNK ,
JERR_BAD_BUFFER_MODE ,
JERR_BAD_COMPONENT_ID ,
JERR_BAD_CROP_SPEC ,
JERR_BAD_DCT_COEF ,
JERR_BAD_DCTSIZE ,
JERR_BAD_DROP_SAMPLING ,

JERR_BAD_HUFF_TABLE ,
JERR_BAD_IN_COLORSPACE ,
JERR_BAD_J_COLORSPACE ,
JERR_BAD_LENGTH ,
JERR_BAD_LIB_VERSION ,

JERR_BAD_MCU_SIZE ,
JERR_BAD_POOL_ID ,
JERR_BAD_PRECISION ,
JERR_BAD_PROGRESSION ,

JERR_BAD_PROG_SCRIPT ,

JERR_BAD_SAMPLING ,
JERR_BAD_SCAN_SCRIPT ,
JERR_BAD_STATE ,
JERR_BAD_STRUCT_SIZE ,

JERR_BAD_VIRTUAL_ACCESS ,
JERR_BUFFER_SIZE ,
JERR_CANT_SUSPEND ,
JERR_CCIR601_NOTIMPL ,
JERR_COMPONENT_COUNT ,
JERR_CONVERSION_NOTIMPL ,
JERR_DAC_INDEX ,
JERR_DAC_VALUE ,
JERR_DHT_INDEX ,
JERR_DQT_INDEX ,
JERR_EMPTY_IMAGE ,
JERR_EMS_READ ,
JERR_EMS_WRITE ,
JERR_EOI_EXPECTED ,
JERR_FILE_READ ,
JERR_FILE_WRITE ,
JERR_FRACT_SAMPLE_NOTIMPL ,
JERR_HUFF_CLEN_OVERFLOW ,
JERR_HUFF_MISSING_CODE ,
JERR_IMAGE_TOO_BIG ,
JERR_INPUT_EMPTY ,
JERR_INPUT_EOF ,
JERR_MISMATCHED_QUANT_TABLE ,

JERR_MISSING_DATA ,
JERR_MODE_CHANGE ,
JERR_NOTIMPL ,
JERR_NOT_COMPILED ,
JERR_NO_ARITH_TABLE ,
JERR_NO_BACKING_STORE ,
JERR_NO_HUFF_TABLE ,
JERR_NO_IMAGE ,
JERR_NO_QUANT_TABLE ,
JERR_NO_SOI ,
JERR_OUT_OF_MEMORY ,
JERR_QUANT_COMPONENTS ,

JERR_QUANT_FEW_COLORS ,
JERR_QUANT_MANY_COLORS ,
JERR_SOF_BEFORE ,
JERR_SOF_DUPLICATE ,
JERR_SOF_NO_SOS ,
JERR_SOF_UNSUPPORTED ,
JERR_SOI_DUPLICATE ,
JERR_TFILE_CREATE ,
JERR_TFILE_READ ,
JERR_TFILE_SEEK ,
JERR_TFILE_WRITE ,

JERR_TOO_LITTLE_DATA ,
JERR_UNKNOWN_MARKER ,
JERR_VIRTUAL_BUG ,
JERR_WIDTH_OVERFLOW ,
JERR_XMS_READ ,
JERR_XMS_WRITE ,
JMSG_COPYRIGHT ,
JMSG_VERSION ,
JTRC_16BIT_TABLES ,

JTRC_ADOBE ,

JTRC_APP0 ,
JTRC_APP14 ,
JTRC_DAC ,
JTRC_DHT ,
JTRC_DQT ,
JTRC_DRI ,
JTRC_EMS_CLOSE ,
JTRC_EMS_OPEN ,
JTRC_EOI ,
JTRC_HUFFBITS ,
JTRC_JFIF ,
JTRC_JFIF_BADTHUMBNAILSIZE ,

JTRC_JFIF_EXTENSION ,

JTRC_JFIF_THUMBNAIL ,
JTRC_MISC_MARKER ,
JTRC_PARMLESS_MARKER ,
JTRC_QUANTVALS ,
JTRC_QUANT_3_NCOLORS ,
JTRC_QUANT_NCOLORS ,
JTRC_QUANT_SELECTED ,
JTRC_RECOVERY_ACTION ,
JTRC_RST ,
JTRC_SMOOTH_NOTIMPL ,

JTRC_SOF ,
JTRC_SOF_COMPONENT ,
JTRC_SOI ,
JTRC_SOS ,
JTRC_SOS_COMPONENT ,
JTRC_SOS_PARAMS ,
JTRC_TFILE_CLOSE ,
JTRC_TFILE_OPEN ,
JTRC_THUMB_JPEG ,

JTRC_THUMB_PALETTE ,

JTRC_THUMB_RGB ,

JTRC_UNKNOWN_IDS ,

JTRC_XMS_CLOSE ,
JTRC_XMS_OPEN ,
JWRN_ADOBE_XFORM ,
JWRN_ARITH_BAD_CODE ,
JWRN_BOGUS_PROGRESSION ,

JWRN_EXTRANEOUS_DATA ,

JWRN_HIT_MARKER ,
JWRN_HUFF_BAD_CODE ,
JWRN_JFIF_MAJOR ,
JWRN_JPEG_EOF ,
JWRN_MUST_RESYNC ,

JWRN_NOT_SEQUENTIAL ,
JWRN_TOO_MUCH_DATA ,



  JMSG_LASTMSGCODE
} J_MESSAGE_CODE;
typedef enum {
 JXFORM_NONE,
 JXFORM_FLIP_H,
 JXFORM_FLIP_V,
 JXFORM_TRANSPOSE,
 JXFORM_TRANSVERSE,
 JXFORM_ROT_90,
 JXFORM_ROT_180,
 JXFORM_ROT_270,
 JXFORM_WIPE
} JXFORM_CODE;







typedef enum {
        JCROP_UNSET,
        JCROP_POS,
        JCROP_NEG,
        JCROP_FORCE
} JCROP_CODE;







typedef struct {

  JXFORM_CODE transform;
  boolean perfect;
  boolean trim;
  boolean force_grayscale;
  boolean crop;




  JDIMENSION crop_width;
  JCROP_CODE crop_width_set;
  JDIMENSION crop_height;
  JCROP_CODE crop_height_set;
  JDIMENSION crop_xoffset;
  JCROP_CODE crop_xoffset_set;
  JDIMENSION crop_yoffset;
  JCROP_CODE crop_yoffset_set;


  int num_components;
  jvirt_barray_ptr * workspace_coef_arrays;
  JDIMENSION output_width;
  JDIMENSION output_height;
  JDIMENSION x_crop_offset;
  JDIMENSION y_crop_offset;
  JDIMENSION drop_width;
  JDIMENSION drop_height;
  int iMCU_sample_width;
  int iMCU_sample_height;
} jpeg_transform_info;





extern boolean jtransform_parse_crop_spec
 (jpeg_transform_info *info, const char *spec);

extern boolean jtransform_request_workspace
 (j_decompress_ptr srcinfo, jpeg_transform_info *info);

extern jvirt_barray_ptr * jtransform_adjust_parameters
 (j_decompress_ptr srcinfo, j_compress_ptr dstinfo, jvirt_barray_ptr *src_coef_arrays, jpeg_transform_info *info)

                                 ;

extern void jtransform_execute_transform
 (j_decompress_ptr srcinfo, j_compress_ptr dstinfo, jvirt_barray_ptr *src_coef_arrays, jpeg_transform_info *info)

                                 ;



extern boolean jtransform_perfect_transform
 (JDIMENSION image_width, JDIMENSION image_height, int MCU_width, int MCU_height, JXFORM_CODE transform)

                             ;
typedef enum {
 JCOPYOPT_NONE,
 JCOPYOPT_COMMENTS,
 JCOPYOPT_ALL
} JCOPY_OPTION;




extern void jcopy_markers_setup
 (j_decompress_ptr srcinfo, JCOPY_OPTION option);

extern void jcopy_markers_execute
 (j_decompress_ptr srcinfo, j_compress_ptr dstinfo, JCOPY_OPTION option)
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
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));








extern int isblank (int) __attribute__ ((__nothrow__));


extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));

static void
do_crop (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
  JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
  jvirt_barray_ptr *src_coef_arrays,
  jvirt_barray_ptr *dst_coef_arrays)

{
  JDIMENSION dst_blk_y, x_crop_blocks, y_crop_blocks;
  int ci, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  jpeg_component_info *compptr;




  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      src_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, src_coef_arrays[ci],
  dst_blk_y + y_crop_blocks,
  (JDIMENSION) compptr->v_samp_factor, FALSE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 jcopy_block_row(src_buffer[offset_y] + x_crop_blocks,
   dst_buffer[offset_y],
   compptr->width_in_blocks);
      }
    }
  }
}


static void
do_crop_ext (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
      JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
      jvirt_barray_ptr *src_coef_arrays,
      jvirt_barray_ptr *dst_coef_arrays)





{
  JDIMENSION MCU_cols, MCU_rows, comp_width, comp_height;
  JDIMENSION dst_blk_y, x_crop_blocks, y_crop_blocks;
  int ci, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  jpeg_component_info *compptr;

  MCU_cols = srcinfo->output_width /
    (dstinfo->max_h_samp_factor * dstinfo->min_DCT_h_scaled_size);
  MCU_rows = srcinfo->output_height /
    (dstinfo->max_v_samp_factor * dstinfo->min_DCT_v_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_width = MCU_cols * compptr->h_samp_factor;
    comp_height = MCU_rows * compptr->v_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      if (dstinfo->jpeg_height > srcinfo->output_height) {
 if (dst_blk_y < y_crop_blocks ||
     dst_blk_y >= comp_height + y_crop_blocks) {
   for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
     memset((void *)(dst_buffer[offset_y]), 0, (size_t)(compptr->width_in_blocks * ((size_t) sizeof(JBLOCK))))
                                                 ;
   }
   continue;
 }
 src_buffer = (*srcinfo->mem->access_virt_barray)
   ((j_common_ptr) srcinfo, src_coef_arrays[ci],
    dst_blk_y - y_crop_blocks,
    (JDIMENSION) compptr->v_samp_factor, FALSE);
      } else {
 src_buffer = (*srcinfo->mem->access_virt_barray)
   ((j_common_ptr) srcinfo, src_coef_arrays[ci],
    dst_blk_y + y_crop_blocks,
    (JDIMENSION) compptr->v_samp_factor, FALSE);
      }
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 if (dstinfo->jpeg_width > srcinfo->output_width) {
   if (x_crop_blocks > 0) {
     memset((void *)(dst_buffer[offset_y]), 0, (size_t)(x_crop_blocks * ((size_t) sizeof(JBLOCK))))
                                      ;
   }
   jcopy_block_row(src_buffer[offset_y],
     dst_buffer[offset_y] + x_crop_blocks,
     comp_width);
   if (compptr->width_in_blocks > comp_width + x_crop_blocks) {
     memset((void *)(dst_buffer[offset_y] + comp_width + x_crop_blocks), 0, (size_t)((compptr->width_in_blocks - comp_width - x_crop_blocks) * ((size_t) sizeof(JBLOCK))))


                                                      ;
   }
 } else {
   jcopy_block_row(src_buffer[offset_y] + x_crop_blocks,
     dst_buffer[offset_y],
     compptr->width_in_blocks);
 }
      }
    }
  }
}


static void
do_wipe (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
  JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
  jvirt_barray_ptr *src_coef_arrays,
  JDIMENSION drop_width, JDIMENSION drop_height)

{
  JDIMENSION x_wipe_blocks, wipe_width;
  JDIMENSION y_wipe_blocks, wipe_bottom;
  int ci, offset_y;
  JBLOCKARRAY buffer;
  jpeg_component_info *compptr;

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    x_wipe_blocks = x_crop_offset * compptr->h_samp_factor;
    wipe_width = drop_width * compptr->h_samp_factor;
    y_wipe_blocks = y_crop_offset * compptr->v_samp_factor;
    wipe_bottom = drop_height * compptr->v_samp_factor + y_wipe_blocks;
    for (; y_wipe_blocks < wipe_bottom;
  y_wipe_blocks += compptr->v_samp_factor) {
      buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, src_coef_arrays[ci], y_wipe_blocks,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 memset((void *)(buffer[offset_y] + x_wipe_blocks), 0, (size_t)(wipe_width * ((size_t) sizeof(JBLOCK))))
                               ;
      }
    }
  }
}


static void
do_flatten (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
     JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
     jvirt_barray_ptr *src_coef_arrays,
     JDIMENSION drop_width, JDIMENSION drop_height)



{
  JDIMENSION x_wipe_blocks, wipe_width, wipe_right;
  JDIMENSION y_wipe_blocks, wipe_bottom, blk_x;
  int ci, offset_y, dc_left_value, dc_right_value, average;
  JBLOCKARRAY buffer;
  jpeg_component_info *compptr;

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    x_wipe_blocks = x_crop_offset * compptr->h_samp_factor;
    wipe_width = drop_width * compptr->h_samp_factor;
    wipe_right = wipe_width + x_wipe_blocks;
    y_wipe_blocks = y_crop_offset * compptr->v_samp_factor;
    wipe_bottom = drop_height * compptr->v_samp_factor + y_wipe_blocks;
    for (; y_wipe_blocks < wipe_bottom;
  y_wipe_blocks += compptr->v_samp_factor) {
      buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, src_coef_arrays[ci], y_wipe_blocks,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 memset((void *)(buffer[offset_y] + x_wipe_blocks), 0, (size_t)(wipe_width * ((size_t) sizeof(JBLOCK))))
                               ;
 if (x_wipe_blocks > 0) {
   dc_left_value = buffer[offset_y][x_wipe_blocks - 1][0];
   if (wipe_right < compptr->width_in_blocks) {
     dc_right_value = buffer[offset_y][wipe_right][0];
     average = (dc_left_value + dc_right_value) >> 1;
   } else {
     average = dc_left_value;
   }
 } else if (wipe_right < compptr->width_in_blocks) {
   average = buffer[offset_y][wipe_right][0];
 } else continue;
 for (blk_x = x_wipe_blocks; blk_x < wipe_right; blk_x++) {
   buffer[offset_y][blk_x][0] = (JCOEF) average;
 }
      }
    }
  }
}


static void
do_flip_h_no_crop (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
     JDIMENSION x_crop_offset,
     jvirt_barray_ptr *src_coef_arrays)



{
  JDIMENSION MCU_cols, comp_width, blk_x, blk_y, x_crop_blocks;
  int ci, k, offset_y;
  JBLOCKARRAY buffer;
  JCOEFPTR ptr1, ptr2;
  JCOEF temp1, temp2;
  jpeg_component_info *compptr;






  MCU_cols = srcinfo->output_width /
    (dstinfo->max_h_samp_factor * dstinfo->min_DCT_h_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_width = MCU_cols * compptr->h_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    for (blk_y = 0; blk_y < compptr->height_in_blocks;
  blk_y += compptr->v_samp_factor) {
      buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, src_coef_arrays[ci], blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {

 for (blk_x = 0; blk_x * 2 < comp_width; blk_x++) {
   ptr1 = buffer[offset_y][blk_x];
   ptr2 = buffer[offset_y][comp_width - blk_x - 1];

   for (k = 0; k < 64; k += 2) {
     temp1 = *ptr1;
     temp2 = *ptr2;
     *ptr1++ = temp2;
     *ptr2++ = temp1;
     temp1 = *ptr1;
     temp2 = *ptr2;
     *ptr1++ = -temp2;
     *ptr2++ = -temp1;
   }
 }
 if (x_crop_blocks > 0) {





   for (blk_x = 0; blk_x < compptr->width_in_blocks; blk_x++) {
     jcopy_block_row(buffer[offset_y] + blk_x + x_crop_blocks,
       buffer[offset_y] + blk_x,
       (JDIMENSION) 1);
   }
 }
      }
    }
  }
}


static void
do_flip_h (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
    JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
    jvirt_barray_ptr *src_coef_arrays,
    jvirt_barray_ptr *dst_coef_arrays)

{
  JDIMENSION MCU_cols, comp_width, dst_blk_x, dst_blk_y;
  JDIMENSION x_crop_blocks, y_crop_blocks;
  int ci, k, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JBLOCKROW src_row_ptr, dst_row_ptr;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;





  MCU_cols = srcinfo->output_width /
    (dstinfo->max_h_samp_factor * dstinfo->min_DCT_h_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_width = MCU_cols * compptr->h_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      src_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, src_coef_arrays[ci],
  dst_blk_y + y_crop_blocks,
  (JDIMENSION) compptr->v_samp_factor, FALSE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 dst_row_ptr = dst_buffer[offset_y];
 src_row_ptr = src_buffer[offset_y];
 for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks; dst_blk_x++) {
   if (x_crop_blocks + dst_blk_x < comp_width) {

     dst_ptr = dst_row_ptr[dst_blk_x];
     src_ptr = src_row_ptr[comp_width - x_crop_blocks - dst_blk_x - 1];

     for (k = 0; k < 64; k += 2) {
       *dst_ptr++ = *src_ptr++;
       *dst_ptr++ = - *src_ptr++;
     }
   } else {

     jcopy_block_row(src_row_ptr + dst_blk_x + x_crop_blocks,
       dst_row_ptr + dst_blk_x,
       (JDIMENSION) 1);
   }
 }
      }
    }
  }
}


static void
do_flip_v (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
    JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
    jvirt_barray_ptr *src_coef_arrays,
    jvirt_barray_ptr *dst_coef_arrays)

{
  JDIMENSION MCU_rows, comp_height, dst_blk_x, dst_blk_y;
  JDIMENSION x_crop_blocks, y_crop_blocks;
  int ci, i, j, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JBLOCKROW src_row_ptr, dst_row_ptr;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;
  MCU_rows = srcinfo->output_height /
    (dstinfo->max_v_samp_factor * dstinfo->min_DCT_v_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_height = MCU_rows * compptr->v_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      if (y_crop_blocks + dst_blk_y < comp_height) {

 src_buffer = (*srcinfo->mem->access_virt_barray)
   ((j_common_ptr) srcinfo, src_coef_arrays[ci],
    comp_height - y_crop_blocks - dst_blk_y -
    (JDIMENSION) compptr->v_samp_factor,
    (JDIMENSION) compptr->v_samp_factor, FALSE);
      } else {

 src_buffer = (*srcinfo->mem->access_virt_barray)
   ((j_common_ptr) srcinfo, src_coef_arrays[ci],
    dst_blk_y + y_crop_blocks,
    (JDIMENSION) compptr->v_samp_factor, FALSE);
      }
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 if (y_crop_blocks + dst_blk_y < comp_height) {

   dst_row_ptr = dst_buffer[offset_y];
   src_row_ptr = src_buffer[compptr->v_samp_factor - offset_y - 1];
   src_row_ptr += x_crop_blocks;
   for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks;
        dst_blk_x++) {
     dst_ptr = dst_row_ptr[dst_blk_x];
     src_ptr = src_row_ptr[dst_blk_x];
     for (i = 0; i < 8; i += 2) {

       for (j = 0; j < 8; j++)
  *dst_ptr++ = *src_ptr++;

       for (j = 0; j < 8; j++)
  *dst_ptr++ = - *src_ptr++;
     }
   }
 } else {

   jcopy_block_row(src_buffer[offset_y] + x_crop_blocks,
     dst_buffer[offset_y],
     compptr->width_in_blocks);
 }
      }
    }
  }
}


static void
do_transpose (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
       JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
       jvirt_barray_ptr *src_coef_arrays,
       jvirt_barray_ptr *dst_coef_arrays)

{
  JDIMENSION dst_blk_x, dst_blk_y, x_crop_blocks, y_crop_blocks;
  int ci, i, j, offset_x, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;






  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks;
      dst_blk_x += compptr->h_samp_factor) {
   src_buffer = (*srcinfo->mem->access_virt_barray)
     ((j_common_ptr) srcinfo, src_coef_arrays[ci],
      dst_blk_x + x_crop_blocks,
      (JDIMENSION) compptr->h_samp_factor, FALSE);
   for (offset_x = 0; offset_x < compptr->h_samp_factor; offset_x++) {
     dst_ptr = dst_buffer[offset_y][dst_blk_x + offset_x];
     src_ptr = src_buffer[offset_x][dst_blk_y + offset_y + y_crop_blocks];
     for (i = 0; i < 8; i++)
       for (j = 0; j < 8; j++)
  dst_ptr[j*8 +i] = src_ptr[i*8 +j];
   }
 }
      }
    }
  }
}


static void
do_rot_90 (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
    JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
    jvirt_barray_ptr *src_coef_arrays,
    jvirt_barray_ptr *dst_coef_arrays)





{
  JDIMENSION MCU_cols, comp_width, dst_blk_x, dst_blk_y;
  JDIMENSION x_crop_blocks, y_crop_blocks;
  int ci, i, j, offset_x, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;





  MCU_cols = srcinfo->output_height /
    (dstinfo->max_h_samp_factor * dstinfo->min_DCT_h_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_width = MCU_cols * compptr->h_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks;
      dst_blk_x += compptr->h_samp_factor) {
   if (x_crop_blocks + dst_blk_x < comp_width) {

     src_buffer = (*srcinfo->mem->access_virt_barray)
       ((j_common_ptr) srcinfo, src_coef_arrays[ci],
        comp_width - x_crop_blocks - dst_blk_x -
        (JDIMENSION) compptr->h_samp_factor,
        (JDIMENSION) compptr->h_samp_factor, FALSE);
   } else {

     src_buffer = (*srcinfo->mem->access_virt_barray)
       ((j_common_ptr) srcinfo, src_coef_arrays[ci],
        dst_blk_x + x_crop_blocks,
        (JDIMENSION) compptr->h_samp_factor, FALSE);
   }
   for (offset_x = 0; offset_x < compptr->h_samp_factor; offset_x++) {
     dst_ptr = dst_buffer[offset_y][dst_blk_x + offset_x];
     if (x_crop_blocks + dst_blk_x < comp_width) {

       src_ptr = src_buffer[compptr->h_samp_factor - offset_x - 1]
  [dst_blk_y + offset_y + y_crop_blocks];
       for (i = 0; i < 8; i++) {
  for (j = 0; j < 8; j++)
    dst_ptr[j*8 +i] = src_ptr[i*8 +j];
  i++;
  for (j = 0; j < 8; j++)
    dst_ptr[j*8 +i] = -src_ptr[i*8 +j];
       }
     } else {

       src_ptr = src_buffer[offset_x]
  [dst_blk_y + offset_y + y_crop_blocks];
       for (i = 0; i < 8; i++)
  for (j = 0; j < 8; j++)
    dst_ptr[j*8 +i] = src_ptr[i*8 +j];
     }
   }
 }
      }
    }
  }
}


static void
do_rot_270 (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
     JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
     jvirt_barray_ptr *src_coef_arrays,
     jvirt_barray_ptr *dst_coef_arrays)





{
  JDIMENSION MCU_rows, comp_height, dst_blk_x, dst_blk_y;
  JDIMENSION x_crop_blocks, y_crop_blocks;
  int ci, i, j, offset_x, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;





  MCU_rows = srcinfo->output_width /
    (dstinfo->max_v_samp_factor * dstinfo->min_DCT_v_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_height = MCU_rows * compptr->v_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks;
      dst_blk_x += compptr->h_samp_factor) {
   src_buffer = (*srcinfo->mem->access_virt_barray)
     ((j_common_ptr) srcinfo, src_coef_arrays[ci],
      dst_blk_x + x_crop_blocks,
      (JDIMENSION) compptr->h_samp_factor, FALSE);
   for (offset_x = 0; offset_x < compptr->h_samp_factor; offset_x++) {
     dst_ptr = dst_buffer[offset_y][dst_blk_x + offset_x];
     if (y_crop_blocks + dst_blk_y < comp_height) {

       src_ptr = src_buffer[offset_x]
  [comp_height - y_crop_blocks - dst_blk_y - offset_y - 1];
       for (i = 0; i < 8; i++) {
  for (j = 0; j < 8; j++) {
    dst_ptr[j*8 +i] = src_ptr[i*8 +j];
    j++;
    dst_ptr[j*8 +i] = -src_ptr[i*8 +j];
  }
       }
     } else {

       src_ptr = src_buffer[offset_x]
  [dst_blk_y + offset_y + y_crop_blocks];
       for (i = 0; i < 8; i++)
  for (j = 0; j < 8; j++)
    dst_ptr[j*8 +i] = src_ptr[i*8 +j];
     }
   }
 }
      }
    }
  }
}


static void
do_rot_180 (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
     JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
     jvirt_barray_ptr *src_coef_arrays,
     jvirt_barray_ptr *dst_coef_arrays)





{
  JDIMENSION MCU_cols, MCU_rows, comp_width, comp_height, dst_blk_x, dst_blk_y;
  JDIMENSION x_crop_blocks, y_crop_blocks;
  int ci, i, j, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JBLOCKROW src_row_ptr, dst_row_ptr;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;

  MCU_cols = srcinfo->output_width /
    (dstinfo->max_h_samp_factor * dstinfo->min_DCT_h_scaled_size);
  MCU_rows = srcinfo->output_height /
    (dstinfo->max_v_samp_factor * dstinfo->min_DCT_v_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_width = MCU_cols * compptr->h_samp_factor;
    comp_height = MCU_rows * compptr->v_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      if (y_crop_blocks + dst_blk_y < comp_height) {

 src_buffer = (*srcinfo->mem->access_virt_barray)
   ((j_common_ptr) srcinfo, src_coef_arrays[ci],
    comp_height - y_crop_blocks - dst_blk_y -
    (JDIMENSION) compptr->v_samp_factor,
    (JDIMENSION) compptr->v_samp_factor, FALSE);
      } else {

 src_buffer = (*srcinfo->mem->access_virt_barray)
   ((j_common_ptr) srcinfo, src_coef_arrays[ci],
    dst_blk_y + y_crop_blocks,
    (JDIMENSION) compptr->v_samp_factor, FALSE);
      }
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 dst_row_ptr = dst_buffer[offset_y];
 if (y_crop_blocks + dst_blk_y < comp_height) {

   src_row_ptr = src_buffer[compptr->v_samp_factor - offset_y - 1];
   for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks; dst_blk_x++) {
     dst_ptr = dst_row_ptr[dst_blk_x];
     if (x_crop_blocks + dst_blk_x < comp_width) {

       src_ptr = src_row_ptr[comp_width - x_crop_blocks - dst_blk_x - 1];
       for (i = 0; i < 8; i += 2) {

  for (j = 0; j < 8; j += 2) {
    *dst_ptr++ = *src_ptr++;
    *dst_ptr++ = - *src_ptr++;
  }

  for (j = 0; j < 8; j += 2) {
    *dst_ptr++ = - *src_ptr++;
    *dst_ptr++ = *src_ptr++;
  }
       }
     } else {

       src_ptr = src_row_ptr[x_crop_blocks + dst_blk_x];
       for (i = 0; i < 8; i += 2) {
  for (j = 0; j < 8; j++)
    *dst_ptr++ = *src_ptr++;
  for (j = 0; j < 8; j++)
    *dst_ptr++ = - *src_ptr++;
       }
     }
   }
 } else {

   src_row_ptr = src_buffer[offset_y];
   for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks; dst_blk_x++) {
     if (x_crop_blocks + dst_blk_x < comp_width) {

       dst_ptr = dst_row_ptr[dst_blk_x];
       src_ptr = src_row_ptr[comp_width - x_crop_blocks - dst_blk_x - 1];
       for (i = 0; i < 64; i += 2) {
  *dst_ptr++ = *src_ptr++;
  *dst_ptr++ = - *src_ptr++;
       }
     } else {

       jcopy_block_row(src_row_ptr + dst_blk_x + x_crop_blocks,
         dst_row_ptr + dst_blk_x,
         (JDIMENSION) 1);
     }
   }
 }
      }
    }
  }
}


static void
do_transverse (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
        JDIMENSION x_crop_offset, JDIMENSION y_crop_offset,
        jvirt_barray_ptr *src_coef_arrays,
        jvirt_barray_ptr *dst_coef_arrays)
{
  JDIMENSION MCU_cols, MCU_rows, comp_width, comp_height, dst_blk_x, dst_blk_y;
  JDIMENSION x_crop_blocks, y_crop_blocks;
  int ci, i, j, offset_x, offset_y;
  JBLOCKARRAY src_buffer, dst_buffer;
  JCOEFPTR src_ptr, dst_ptr;
  jpeg_component_info *compptr;

  MCU_cols = srcinfo->output_height /
    (dstinfo->max_h_samp_factor * dstinfo->min_DCT_h_scaled_size);
  MCU_rows = srcinfo->output_width /
    (dstinfo->max_v_samp_factor * dstinfo->min_DCT_v_scaled_size);

  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    comp_width = MCU_cols * compptr->h_samp_factor;
    comp_height = MCU_rows * compptr->v_samp_factor;
    x_crop_blocks = x_crop_offset * compptr->h_samp_factor;
    y_crop_blocks = y_crop_offset * compptr->v_samp_factor;
    for (dst_blk_y = 0; dst_blk_y < compptr->height_in_blocks;
  dst_blk_y += compptr->v_samp_factor) {
      dst_buffer = (*srcinfo->mem->access_virt_barray)
 ((j_common_ptr) srcinfo, dst_coef_arrays[ci], dst_blk_y,
  (JDIMENSION) compptr->v_samp_factor, TRUE);
      for (offset_y = 0; offset_y < compptr->v_samp_factor; offset_y++) {
 for (dst_blk_x = 0; dst_blk_x < compptr->width_in_blocks;
      dst_blk_x += compptr->h_samp_factor) {
   if (x_crop_blocks + dst_blk_x < comp_width) {

     src_buffer = (*srcinfo->mem->access_virt_barray)
       ((j_common_ptr) srcinfo, src_coef_arrays[ci],
        comp_width - x_crop_blocks - dst_blk_x -
        (JDIMENSION) compptr->h_samp_factor,
        (JDIMENSION) compptr->h_samp_factor, FALSE);
   } else {
     src_buffer = (*srcinfo->mem->access_virt_barray)
       ((j_common_ptr) srcinfo, src_coef_arrays[ci],
        dst_blk_x + x_crop_blocks,
        (JDIMENSION) compptr->h_samp_factor, FALSE);
   }
   for (offset_x = 0; offset_x < compptr->h_samp_factor; offset_x++) {
     dst_ptr = dst_buffer[offset_y][dst_blk_x + offset_x];
     if (y_crop_blocks + dst_blk_y < comp_height) {
       if (x_crop_blocks + dst_blk_x < comp_width) {

  src_ptr = src_buffer[compptr->h_samp_factor - offset_x - 1]
    [comp_height - y_crop_blocks - dst_blk_y - offset_y - 1];
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      dst_ptr[j*8 +i] = src_ptr[i*8 +j];
      j++;
      dst_ptr[j*8 +i] = -src_ptr[i*8 +j];
    }
    i++;
    for (j = 0; j < 8; j++) {
      dst_ptr[j*8 +i] = -src_ptr[i*8 +j];
      j++;
      dst_ptr[j*8 +i] = src_ptr[i*8 +j];
    }
  }
       } else {

  src_ptr = src_buffer[offset_x]
    [comp_height - y_crop_blocks - dst_blk_y - offset_y - 1];
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      dst_ptr[j*8 +i] = src_ptr[i*8 +j];
      j++;
      dst_ptr[j*8 +i] = -src_ptr[i*8 +j];
    }
  }
       }
     } else {
       if (x_crop_blocks + dst_blk_x < comp_width) {

  src_ptr = src_buffer[compptr->h_samp_factor - offset_x - 1]
    [dst_blk_y + offset_y + y_crop_blocks];
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++)
      dst_ptr[j*8 +i] = src_ptr[i*8 +j];
    i++;
    for (j = 0; j < 8; j++)
      dst_ptr[j*8 +i] = -src_ptr[i*8 +j];
  }
       } else {

  src_ptr = src_buffer[offset_x]
    [dst_blk_y + offset_y + y_crop_blocks];
  for (i = 0; i < 8; i++)
    for (j = 0; j < 8; j++)
      dst_ptr[j*8 +i] = src_ptr[i*8 +j];
       }
     }
   }
 }
      }
    }
  }
}







static boolean
jt_read_integer (const char ** strptr, JDIMENSION * result)
{
  const char * ptr = *strptr;
  JDIMENSION val = 0;

  for (; ((*__ctype_b_loc ())[(int) ((*ptr))] & (unsigned short int) _ISdigit); ptr++) {
    val = val * 10 + (JDIMENSION) (*ptr - '0');
  }
  *result = val;
  if (ptr == *strptr)
    return FALSE;
  *strptr = ptr;
  return TRUE;
}
boolean
jtransform_parse_crop_spec (jpeg_transform_info *info, const char *spec)
{
  info->crop = FALSE;
  info->crop_width_set = JCROP_UNSET;
  info->crop_height_set = JCROP_UNSET;
  info->crop_xoffset_set = JCROP_UNSET;
  info->crop_yoffset_set = JCROP_UNSET;

  if (((*__ctype_b_loc ())[(int) ((*spec))] & (unsigned short int) _ISdigit)) {

    if (! jt_read_integer(&spec, &info->crop_width))
      return FALSE;
    if (*spec == 'f' || *spec == 'F') {
      spec++;
      info->crop_width_set = JCROP_FORCE;
    } else
      info->crop_width_set = JCROP_POS;
  }
  if (*spec == 'x' || *spec == 'X') {

    spec++;
    if (! jt_read_integer(&spec, &info->crop_height))
      return FALSE;
    if (*spec == 'f' || *spec == 'F') {
      spec++;
      info->crop_height_set = JCROP_FORCE;
    } else
      info->crop_height_set = JCROP_POS;
  }
  if (*spec == '+' || *spec == '-') {

    info->crop_xoffset_set = (*spec == '-') ? JCROP_NEG : JCROP_POS;
    spec++;
    if (! jt_read_integer(&spec, &info->crop_xoffset))
      return FALSE;
  }
  if (*spec == '+' || *spec == '-') {

    info->crop_yoffset_set = (*spec == '-') ? JCROP_NEG : JCROP_POS;
    spec++;
    if (! jt_read_integer(&spec, &info->crop_yoffset))
      return FALSE;
  }

  if (*spec != '\0')
    return FALSE;
  info->crop = TRUE;
  return TRUE;
}




static void
trim_right_edge (jpeg_transform_info *info, JDIMENSION full_width)
{
  JDIMENSION MCU_cols;

  MCU_cols = info->output_width / info->iMCU_sample_width;
  if (MCU_cols > 0 && info->x_crop_offset + MCU_cols ==
      full_width / info->iMCU_sample_width)
    info->output_width = MCU_cols * info->iMCU_sample_width;
}

static void
trim_bottom_edge (jpeg_transform_info *info, JDIMENSION full_height)
{
  JDIMENSION MCU_rows;

  MCU_rows = info->output_height / info->iMCU_sample_height;
  if (MCU_rows > 0 && info->y_crop_offset + MCU_rows ==
      full_height / info->iMCU_sample_height)
    info->output_height = MCU_rows * info->iMCU_sample_height;
}
boolean
jtransform_request_workspace (j_decompress_ptr srcinfo,
         jpeg_transform_info *info)
{
  jvirt_barray_ptr *coef_arrays;
  boolean need_workspace, transpose_it;
  jpeg_component_info *compptr;
  JDIMENSION xoffset, yoffset;
  JDIMENSION width_in_iMCUs, height_in_iMCUs;
  JDIMENSION width_in_blocks, height_in_blocks;
  int ci, h_samp_factor, v_samp_factor;


  if (info->force_grayscale &&
      (srcinfo->jpeg_color_space == JCS_YCbCr ||
       srcinfo->jpeg_color_space == JCS_BG_YCC) &&
      srcinfo->num_components == 3)

    info->num_components = 1;
  else

    info->num_components = srcinfo->num_components;


  jpeg_core_output_dimensions(srcinfo);



  if (info->perfect) {
    if (info->num_components == 1) {
      if (!jtransform_perfect_transform(srcinfo->output_width,
   srcinfo->output_height,
   srcinfo->min_DCT_h_scaled_size,
   srcinfo->min_DCT_v_scaled_size,
   info->transform))
 return FALSE;
    } else {
      if (!jtransform_perfect_transform(srcinfo->output_width,
   srcinfo->output_height,
   srcinfo->max_h_samp_factor * srcinfo->min_DCT_h_scaled_size,
   srcinfo->max_v_samp_factor * srcinfo->min_DCT_v_scaled_size,
   info->transform))
 return FALSE;
    }
  }






  switch (info->transform) {
  case JXFORM_TRANSPOSE:
  case JXFORM_TRANSVERSE:
  case JXFORM_ROT_90:
  case JXFORM_ROT_270:
    info->output_width = srcinfo->output_height;
    info->output_height = srcinfo->output_width;
    if (info->num_components == 1) {
      info->iMCU_sample_width = srcinfo->min_DCT_v_scaled_size;
      info->iMCU_sample_height = srcinfo->min_DCT_h_scaled_size;
    } else {
      info->iMCU_sample_width =
 srcinfo->max_v_samp_factor * srcinfo->min_DCT_v_scaled_size;
      info->iMCU_sample_height =
 srcinfo->max_h_samp_factor * srcinfo->min_DCT_h_scaled_size;
    }
    break;
  default:
    info->output_width = srcinfo->output_width;
    info->output_height = srcinfo->output_height;
    if (info->num_components == 1) {
      info->iMCU_sample_width = srcinfo->min_DCT_h_scaled_size;
      info->iMCU_sample_height = srcinfo->min_DCT_v_scaled_size;
    } else {
      info->iMCU_sample_width =
 srcinfo->max_h_samp_factor * srcinfo->min_DCT_h_scaled_size;
      info->iMCU_sample_height =
 srcinfo->max_v_samp_factor * srcinfo->min_DCT_v_scaled_size;
    }
    break;
  }




  if (info->crop) {

    if (info->crop_xoffset_set == JCROP_UNSET)
      info->crop_xoffset = 0;
    if (info->crop_yoffset_set == JCROP_UNSET)
      info->crop_yoffset = 0;
    if (info->crop_width_set == JCROP_UNSET) {
      if (info->crop_xoffset >= info->output_width)
 ((srcinfo)->err->msg_code = (JERR_BAD_CROP_SPEC), (*(srcinfo)->err->error_exit) ((j_common_ptr) (srcinfo)));
      info->crop_width = info->output_width - info->crop_xoffset;
    } else {

      if (info->crop_width > info->output_width) {

 if (info->transform != JXFORM_NONE ||
     info->crop_xoffset >= info->crop_width ||
     info->crop_xoffset > info->crop_width - info->output_width)
   ((srcinfo)->err->msg_code = (JERR_BAD_CROP_SPEC), (*(srcinfo)->err->error_exit) ((j_common_ptr) (srcinfo)));
      } else {
 if (info->crop_xoffset >= info->output_width ||
     info->crop_width <= 0 ||
     info->crop_xoffset > info->output_width - info->crop_width)
   ((srcinfo)->err->msg_code = (JERR_BAD_CROP_SPEC), (*(srcinfo)->err->error_exit) ((j_common_ptr) (srcinfo)));
      }
    }
    if (info->crop_height_set == JCROP_UNSET) {
      if (info->crop_yoffset >= info->output_height)
 ((srcinfo)->err->msg_code = (JERR_BAD_CROP_SPEC), (*(srcinfo)->err->error_exit) ((j_common_ptr) (srcinfo)));
      info->crop_height = info->output_height - info->crop_yoffset;
    } else {

      if (info->crop_height > info->output_height) {

 if (info->transform != JXFORM_NONE ||
     info->crop_yoffset >= info->crop_height ||
     info->crop_yoffset > info->crop_height - info->output_height)
   ((srcinfo)->err->msg_code = (JERR_BAD_CROP_SPEC), (*(srcinfo)->err->error_exit) ((j_common_ptr) (srcinfo)));
      } else {
 if (info->crop_yoffset >= info->output_height ||
     info->crop_height <= 0 ||
     info->crop_yoffset > info->output_height - info->crop_height)
   ((srcinfo)->err->msg_code = (JERR_BAD_CROP_SPEC), (*(srcinfo)->err->error_exit) ((j_common_ptr) (srcinfo)));
      }
    }

    if (info->crop_xoffset_set != JCROP_NEG)
      xoffset = info->crop_xoffset;
    else if (info->crop_width > info->output_width)
      xoffset = info->crop_width - info->output_width - info->crop_xoffset;
    else
      xoffset = info->output_width - info->crop_width - info->crop_xoffset;
    if (info->crop_yoffset_set != JCROP_NEG)
      yoffset = info->crop_yoffset;
    else if (info->crop_height > info->output_height)
      yoffset = info->crop_height - info->output_height - info->crop_yoffset;
    else
      yoffset = info->output_height - info->crop_height - info->crop_yoffset;

    if (info->transform == JXFORM_WIPE) {

      info->drop_width = (JDIMENSION) jdiv_round_up
 ((long) (info->crop_width + (xoffset % info->iMCU_sample_width)),
  (long) info->iMCU_sample_width);
      info->drop_height = (JDIMENSION) jdiv_round_up
 ((long) (info->crop_height + (yoffset % info->iMCU_sample_height)),
  (long) info->iMCU_sample_height);
    } else {

      if (info->crop_width_set == JCROP_FORCE ||
   info->crop_width > info->output_width)
 info->output_width = info->crop_width;
      else
 info->output_width =
   info->crop_width + (xoffset % info->iMCU_sample_width);
      if (info->crop_height_set == JCROP_FORCE ||
   info->crop_height > info->output_height)
 info->output_height = info->crop_height;
      else
 info->output_height =
   info->crop_height + (yoffset % info->iMCU_sample_height);
    }

    info->x_crop_offset = xoffset / info->iMCU_sample_width;
    info->y_crop_offset = yoffset / info->iMCU_sample_height;
  } else {
    info->x_crop_offset = 0;
    info->y_crop_offset = 0;
  }




  need_workspace = FALSE;
  transpose_it = FALSE;
  switch (info->transform) {
  case JXFORM_NONE:
    if (info->x_crop_offset != 0 || info->y_crop_offset != 0 ||
 info->output_width > srcinfo->output_width ||
 info->output_height > srcinfo->output_height)
      need_workspace = TRUE;

    break;
  case JXFORM_FLIP_H:
    if (info->trim)
      trim_right_edge(info, srcinfo->output_width);
    if (info->y_crop_offset != 0)
      need_workspace = TRUE;

    break;
  case JXFORM_FLIP_V:
    if (info->trim)
      trim_bottom_edge(info, srcinfo->output_height);

    need_workspace = TRUE;
    break;
  case JXFORM_TRANSPOSE:


    need_workspace = TRUE;
    transpose_it = TRUE;
    break;
  case JXFORM_TRANSVERSE:
    if (info->trim) {
      trim_right_edge(info, srcinfo->output_height);
      trim_bottom_edge(info, srcinfo->output_width);
    }

    need_workspace = TRUE;
    transpose_it = TRUE;
    break;
  case JXFORM_ROT_90:
    if (info->trim)
      trim_right_edge(info, srcinfo->output_height);

    need_workspace = TRUE;
    transpose_it = TRUE;
    break;
  case JXFORM_ROT_180:
    if (info->trim) {
      trim_right_edge(info, srcinfo->output_width);
      trim_bottom_edge(info, srcinfo->output_height);
    }

    need_workspace = TRUE;
    break;
  case JXFORM_ROT_270:
    if (info->trim)
      trim_bottom_edge(info, srcinfo->output_width);

    need_workspace = TRUE;
    transpose_it = TRUE;
    break;
  case JXFORM_WIPE:
    break;
  }





  if (need_workspace) {
    coef_arrays = (jvirt_barray_ptr *)
      (*srcinfo->mem->alloc_small) ((j_common_ptr) srcinfo, 1,
 ((size_t) sizeof(jvirt_barray_ptr)) * info->num_components);
    width_in_iMCUs = (JDIMENSION)
      jdiv_round_up((long) info->output_width,
      (long) info->iMCU_sample_width);
    height_in_iMCUs = (JDIMENSION)
      jdiv_round_up((long) info->output_height,
      (long) info->iMCU_sample_height);
    for (ci = 0; ci < info->num_components; ci++) {
      compptr = srcinfo->comp_info + ci;
      if (info->num_components == 1) {

 h_samp_factor = v_samp_factor = 1;
      } else if (transpose_it) {
 h_samp_factor = compptr->v_samp_factor;
 v_samp_factor = compptr->h_samp_factor;
      } else {
 h_samp_factor = compptr->h_samp_factor;
 v_samp_factor = compptr->v_samp_factor;
      }
      width_in_blocks = width_in_iMCUs * h_samp_factor;
      height_in_blocks = height_in_iMCUs * v_samp_factor;
      coef_arrays[ci] = (*srcinfo->mem->request_virt_barray)
 ((j_common_ptr) srcinfo, 1, FALSE,
  width_in_blocks, height_in_blocks, (JDIMENSION) v_samp_factor);
    }
    info->workspace_coef_arrays = coef_arrays;
  } else
    info->workspace_coef_arrays = ((void *)0);

  return TRUE;
}




static void
transpose_critical_parameters (j_compress_ptr dstinfo)
{
  int tblno, i, j, ci, itemp;
  jpeg_component_info *compptr;
  JQUANT_TBL *qtblptr;
  JDIMENSION jtemp;
  UINT16 qtemp;


  jtemp = dstinfo->image_width;
  dstinfo->image_width = dstinfo->image_height;
  dstinfo->image_height = jtemp;
  itemp = dstinfo->min_DCT_h_scaled_size;
  dstinfo->min_DCT_h_scaled_size = dstinfo->min_DCT_v_scaled_size;
  dstinfo->min_DCT_v_scaled_size = itemp;


  for (ci = 0; ci < dstinfo->num_components; ci++) {
    compptr = dstinfo->comp_info + ci;
    itemp = compptr->h_samp_factor;
    compptr->h_samp_factor = compptr->v_samp_factor;
    compptr->v_samp_factor = itemp;
  }


  for (tblno = 0; tblno < 4; tblno++) {
    qtblptr = dstinfo->quant_tbl_ptrs[tblno];
    if (qtblptr != ((void *)0)) {
      for (i = 0; i < 8; i++) {
 for (j = 0; j < i; j++) {
   qtemp = qtblptr->quantval[i*8 +j];
   qtblptr->quantval[i*8 +j] = qtblptr->quantval[j*8 +i];
   qtblptr->quantval[j*8 +i] = qtemp;
 }
      }
    }
  }
}







static void
adjust_exif_parameters (JOCTET * data, unsigned int length,
   JDIMENSION new_width, JDIMENSION new_height)
{
  boolean is_motorola;
  unsigned int number_of_tags, tagnum;
  unsigned int firstoffset, offset;
  JDIMENSION new_value;

  if (length < 12) return;


  if ((data[0]) == 0x49 && (data[1]) == 0x49)
    is_motorola = FALSE;
  else if ((data[0]) == 0x4D && (data[1]) == 0x4D)
    is_motorola = TRUE;
  else
    return;


  if (is_motorola) {
    if ((data[2]) != 0) return;
    if ((data[3]) != 0x2A) return;
  } else {
    if ((data[3]) != 0) return;
    if ((data[2]) != 0x2A) return;
  }


  if (is_motorola) {
    if ((data[4]) != 0) return;
    if ((data[5]) != 0) return;
    firstoffset = (data[6]);
    firstoffset <<= 8;
    firstoffset += (data[7]);
  } else {
    if ((data[7]) != 0) return;
    if ((data[6]) != 0) return;
    firstoffset = (data[5]);
    firstoffset <<= 8;
    firstoffset += (data[4]);
  }
  if (firstoffset > length - 2) return;


  if (is_motorola) {
    number_of_tags = (data[firstoffset]);
    number_of_tags <<= 8;
    number_of_tags += (data[firstoffset+1]);
  } else {
    number_of_tags = (data[firstoffset+1]);
    number_of_tags <<= 8;
    number_of_tags += (data[firstoffset]);
  }
  if (number_of_tags == 0) return;
  firstoffset += 2;


  for (;;) {
    if (firstoffset > length - 12) return;

    if (is_motorola) {
      tagnum = (data[firstoffset]);
      tagnum <<= 8;
      tagnum += (data[firstoffset+1]);
    } else {
      tagnum = (data[firstoffset+1]);
      tagnum <<= 8;
      tagnum += (data[firstoffset]);
    }
    if (tagnum == 0x8769) break;
    if (--number_of_tags == 0) return;
    firstoffset += 12;
  }


  if (is_motorola) {
    if ((data[firstoffset+8]) != 0) return;
    if ((data[firstoffset+9]) != 0) return;
    offset = (data[firstoffset+10]);
    offset <<= 8;
    offset += (data[firstoffset+11]);
  } else {
    if ((data[firstoffset+11]) != 0) return;
    if ((data[firstoffset+10]) != 0) return;
    offset = (data[firstoffset+9]);
    offset <<= 8;
    offset += (data[firstoffset+8]);
  }
  if (offset > length - 2) return;


  if (is_motorola) {
    number_of_tags = (data[offset]);
    number_of_tags <<= 8;
    number_of_tags += (data[offset+1]);
  } else {
    number_of_tags = (data[offset+1]);
    number_of_tags <<= 8;
    number_of_tags += (data[offset]);
  }
  if (number_of_tags < 2) return;
  offset += 2;


  do {
    if (offset > length - 12) return;

    if (is_motorola) {
      tagnum = (data[offset]);
      tagnum <<= 8;
      tagnum += (data[offset+1]);
    } else {
      tagnum = (data[offset+1]);
      tagnum <<= 8;
      tagnum += (data[offset]);
    }
    if (tagnum == 0xA002 || tagnum == 0xA003) {
      if (tagnum == 0xA002)
 new_value = new_width;
      else
 new_value = new_height;
      if (is_motorola) {
 data[offset+2] = 0;
 data[offset+3] = 4;
 data[offset+4] = 0;
 data[offset+5] = 0;
 data[offset+6] = 0;
 data[offset+7] = 1;
 data[offset+8] = 0;
 data[offset+9] = 0;
 data[offset+10] = (JOCTET)((new_value >> 8) & 0xFF);
 data[offset+11] = (JOCTET)(new_value & 0xFF);
      } else {
 data[offset+2] = 4;
 data[offset+3] = 0;
 data[offset+4] = 1;
 data[offset+5] = 0;
 data[offset+6] = 0;
 data[offset+7] = 0;
 data[offset+8] = (JOCTET)(new_value & 0xFF);
 data[offset+9] = (JOCTET)((new_value >> 8) & 0xFF);
 data[offset+10] = 0;
 data[offset+11] = 0;
      }
    }
    offset += 12;
  } while (--number_of_tags);
}
jvirt_barray_ptr *
jtransform_adjust_parameters (j_decompress_ptr srcinfo,
         j_compress_ptr dstinfo,
         jvirt_barray_ptr *src_coef_arrays,
         jpeg_transform_info *info)
{

  if (info->force_grayscale) {





    if ((((dstinfo->jpeg_color_space == JCS_YCbCr ||
    dstinfo->jpeg_color_space == JCS_BG_YCC) &&
   dstinfo->num_components == 3) ||
  (dstinfo->jpeg_color_space == JCS_GRAYSCALE &&
   dstinfo->num_components == 1)) &&
 srcinfo->comp_info[0].h_samp_factor == srcinfo->max_h_samp_factor &&
 srcinfo->comp_info[0].v_samp_factor == srcinfo->max_v_samp_factor) {





      int sv_quant_tbl_no = dstinfo->comp_info[0].quant_tbl_no;
      jpeg_set_colorspace(dstinfo, JCS_GRAYSCALE);
      dstinfo->comp_info[0].quant_tbl_no = sv_quant_tbl_no;
    } else {

      ((dstinfo)->err->msg_code = (JERR_CONVERSION_NOTIMPL), (*(dstinfo)->err->error_exit) ((j_common_ptr) (dstinfo)));
    }
  } else if (info->num_components == 1) {




    dstinfo->comp_info[0].h_samp_factor = 1;
    dstinfo->comp_info[0].v_samp_factor = 1;
  }




  dstinfo->jpeg_width = info->output_width;
  dstinfo->jpeg_height = info->output_height;


  switch (info->transform) {
  case JXFORM_TRANSPOSE:
  case JXFORM_TRANSVERSE:
  case JXFORM_ROT_90:
  case JXFORM_ROT_270:
    transpose_critical_parameters(dstinfo);
    break;
  default:
    break;
  }


  if (srcinfo->marker_list != ((void *)0) &&
      srcinfo->marker_list->marker == 0xE0 +1 &&
      srcinfo->marker_list->data_length >= 6 &&
      (srcinfo->marker_list->data[0]) == 0x45 &&
      (srcinfo->marker_list->data[1]) == 0x78 &&
      (srcinfo->marker_list->data[2]) == 0x69 &&
      (srcinfo->marker_list->data[3]) == 0x66 &&
      (srcinfo->marker_list->data[4]) == 0 &&
      (srcinfo->marker_list->data[5]) == 0) {

    dstinfo->write_JFIF_header = FALSE;

    if (dstinfo->jpeg_width != srcinfo->image_width ||
 dstinfo->jpeg_height != srcinfo->image_height)

      adjust_exif_parameters(srcinfo->marker_list->data + 6,
 srcinfo->marker_list->data_length - 6,
 dstinfo->jpeg_width, dstinfo->jpeg_height);
  }


  if (info->workspace_coef_arrays != ((void *)0))
    return info->workspace_coef_arrays;
  return src_coef_arrays;
}
void
jtransform_execute_transform (j_decompress_ptr srcinfo,
         j_compress_ptr dstinfo,
         jvirt_barray_ptr *src_coef_arrays,
         jpeg_transform_info *info)
{
  jvirt_barray_ptr *dst_coef_arrays = info->workspace_coef_arrays;




  switch (info->transform) {
  case JXFORM_NONE:
    if (info->output_width > srcinfo->output_width ||
 info->output_height > srcinfo->output_height)
      do_crop_ext(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
    src_coef_arrays, dst_coef_arrays);
    else if (info->x_crop_offset != 0 || info->y_crop_offset != 0)
      do_crop(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
       src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_FLIP_H:
    if (info->y_crop_offset != 0)
      do_flip_h(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
  src_coef_arrays, dst_coef_arrays);
    else
      do_flip_h_no_crop(srcinfo, dstinfo, info->x_crop_offset,
   src_coef_arrays);
    break;
  case JXFORM_FLIP_V:
    do_flip_v(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
       src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_TRANSPOSE:
    do_transpose(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
   src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_TRANSVERSE:
    do_transverse(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
    src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_ROT_90:
    do_rot_90(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
       src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_ROT_180:
    do_rot_180(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
        src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_ROT_270:
    do_rot_270(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
        src_coef_arrays, dst_coef_arrays);
    break;
  case JXFORM_WIPE:
    if (info->crop_width_set != JCROP_FORCE)
      do_wipe(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
       src_coef_arrays, info->drop_width, info->drop_height);
    else
      do_flatten(srcinfo, dstinfo, info->x_crop_offset, info->y_crop_offset,
   src_coef_arrays, info->drop_width, info->drop_height);
    break;
  }
}
boolean
jtransform_perfect_transform(JDIMENSION image_width, JDIMENSION image_height,
        int MCU_width, int MCU_height,
        JXFORM_CODE transform)
{
  boolean result = TRUE;

  switch (transform) {
  case JXFORM_FLIP_H:
  case JXFORM_ROT_270:
    if (image_width % (JDIMENSION) MCU_width)
      result = FALSE;
    break;
  case JXFORM_FLIP_V:
  case JXFORM_ROT_90:
    if (image_height % (JDIMENSION) MCU_height)
      result = FALSE;
    break;
  case JXFORM_TRANSVERSE:
  case JXFORM_ROT_180:
    if (image_width % (JDIMENSION) MCU_width)
      result = FALSE;
    if (image_height % (JDIMENSION) MCU_height)
      result = FALSE;
    break;
  default:
    break;
  }

  return result;
}
void
jcopy_markers_setup (j_decompress_ptr srcinfo, JCOPY_OPTION option)
{

  int m;


  if (option != JCOPYOPT_NONE) {
    jpeg_save_markers(srcinfo, 0xFE, 0xFFFF);
  }

  if (option == JCOPYOPT_ALL) {
    for (m = 0; m < 16; m++)
      jpeg_save_markers(srcinfo, 0xE0 + m, 0xFFFF);
  }

}
void
jcopy_markers_execute (j_decompress_ptr srcinfo, j_compress_ptr dstinfo,
         JCOPY_OPTION option)
{
  jpeg_saved_marker_ptr marker;






  for (marker = srcinfo->marker_list; marker != ((void *)0); marker = marker->next) {
    if (dstinfo->write_JFIF_header &&
 marker->marker == 0xE0 &&
 marker->data_length >= 5 &&
 (marker->data[0]) == 0x4A &&
 (marker->data[1]) == 0x46 &&
 (marker->data[2]) == 0x49 &&
 (marker->data[3]) == 0x46 &&
 (marker->data[4]) == 0)
      continue;
    if (dstinfo->write_Adobe_marker &&
 marker->marker == 0xE0 +14 &&
 marker->data_length >= 5 &&
 (marker->data[0]) == 0x41 &&
 (marker->data[1]) == 0x64 &&
 (marker->data[2]) == 0x6F &&
 (marker->data[3]) == 0x62 &&
 (marker->data[4]) == 0x65)
      continue;
    jpeg_write_marker(dstinfo, marker->marker,
        marker->data, marker->data_length);

  }
}
