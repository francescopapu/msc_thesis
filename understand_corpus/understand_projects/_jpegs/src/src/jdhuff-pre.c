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



extern int atexit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
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






typedef int (*__compar_fn_t) (int *data_flow, __const void *, __const void *);



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

  noreturn_t (*error_exit) (int *data_flow, j_common_ptr cinfo);

  void (*emit_message) (int *data_flow, j_common_ptr cinfo, int msg_level);

  void (*output_message) (int *data_flow, j_common_ptr cinfo);

  void (*format_message) (int *data_flow, j_common_ptr cinfo, char * buffer);


  void (*reset_error_mgr) (int *data_flow, j_common_ptr cinfo);




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
  void (*progress_monitor) (int *data_flow, j_common_ptr cinfo);

  long pass_counter;
  long pass_limit;
  int completed_passes;
  int total_passes;
};




struct jpeg_destination_mgr {
  JOCTET * next_output_byte;
  size_t free_in_buffer;

  void (*init_destination) (int *data_flow, j_compress_ptr cinfo);
  boolean (*empty_output_buffer) (int *data_flow, j_compress_ptr cinfo);
  void (*term_destination) (int *data_flow, j_compress_ptr cinfo);
};




struct jpeg_source_mgr {
  const JOCTET * next_input_byte;
  size_t bytes_in_buffer;

  void (*init_source) (int *data_flow, j_decompress_ptr cinfo);
  boolean (*fill_input_buffer) (int *data_flow, j_decompress_ptr cinfo);
  void (*skip_input_data) (int *data_flow, j_decompress_ptr cinfo, long num_bytes);
  boolean (*resync_to_restart) (int *data_flow, j_decompress_ptr cinfo, int desired);
  void (*term_source) (int *data_flow, j_decompress_ptr cinfo);
};
typedef struct jvirt_sarray_control * jvirt_sarray_ptr;
typedef struct jvirt_barray_control * jvirt_barray_ptr;


struct jpeg_memory_mgr {

  void * (*alloc_small) (int *data_flow, j_common_ptr cinfo, int pool_id, size_t sizeofobject)
                         ;
  void * (*alloc_large) (int *data_flow, j_common_ptr cinfo, int pool_id, size_t sizeofobject)
                              ;
  JSAMPARRAY (*alloc_sarray) (int *data_flow, j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows)

                             ;
  JBLOCKARRAY (*alloc_barray) (int *data_flow, j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows)

                              ;
  jvirt_sarray_ptr (*request_virt_sarray) (int *data_flow, j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess)




                              ;
  jvirt_barray_ptr (*request_virt_barray) (int *data_flow, j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess)




                              ;
  void (*realize_virt_arrays) (int *data_flow, j_common_ptr cinfo);
  JSAMPARRAY (*access_virt_sarray) (int *data_flow, j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)



                          ;
  JBLOCKARRAY (*access_virt_barray) (int *data_flow, j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)



                           ;
  void (*free_pool) (int *data_flow, j_common_ptr cinfo, int pool_id);
  void (*self_destruct) (int *data_flow, j_common_ptr cinfo);






  long max_memory_to_use;


  long max_alloc_chunk;
};





typedef boolean (*jpeg_marker_parser_method) (int *data_flow, j_decompress_ptr cinfo);
extern struct jpeg_error_mgr * jpeg_std_error
 (int *data_flow, struct jpeg_error_mgr * err);
extern void jpeg_CreateCompress (int *data_flow, j_compress_ptr cinfo, int version, size_t structsize)
                                          ;
extern void jpeg_CreateDecompress (int *data_flow, j_decompress_ptr cinfo, int version, size_t structsize)
                                     ;

extern void jpeg_destroy_compress (int *data_flow, j_compress_ptr cinfo);
extern void jpeg_destroy_decompress (int *data_flow, j_decompress_ptr cinfo);



extern void jpeg_stdio_dest (int *data_flow, j_compress_ptr cinfo, FILE * outfile);
extern void jpeg_stdio_src (int *data_flow, j_decompress_ptr cinfo, FILE * infile);


extern void jpeg_mem_dest (int *data_flow, j_compress_ptr cinfo, unsigned char ** outbuffer, unsigned long * outsize)

                                   ;
extern void jpeg_mem_src (int *data_flow, j_decompress_ptr cinfo, const unsigned char * inbuffer, unsigned long insize)

                               ;


extern void jpeg_set_defaults (int *data_flow, j_compress_ptr cinfo);

extern void jpeg_set_colorspace (int *data_flow, j_compress_ptr cinfo, J_COLOR_SPACE colorspace)
                                    ;
extern void jpeg_default_colorspace (int *data_flow, j_compress_ptr cinfo);
extern void jpeg_set_quality (int *data_flow, j_compress_ptr cinfo, int quality, boolean force_baseline)
                               ;
extern void jpeg_set_linear_quality (int *data_flow, j_compress_ptr cinfo, int scale_factor, boolean force_baseline)

                               ;
extern void jpeg_default_qtables (int *data_flow, j_compress_ptr cinfo, boolean force_baseline)
                                   ;
extern void jpeg_add_quant_table (int *data_flow, j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline)


                                   ;
extern int jpeg_quality_scaling (int *data_flow, int quality);
extern void jpeg_simple_progression (int *data_flow, j_compress_ptr cinfo);
extern void jpeg_suppress_tables (int *data_flow, j_compress_ptr cinfo, boolean suppress)
                             ;
extern JQUANT_TBL * jpeg_alloc_quant_table (int *data_flow, j_common_ptr cinfo);
extern JHUFF_TBL * jpeg_alloc_huff_table (int *data_flow, j_common_ptr cinfo);


extern void jpeg_start_compress (int *data_flow, j_compress_ptr cinfo, boolean write_all_tables)
                                    ;
extern JDIMENSION jpeg_write_scanlines (int *data_flow, j_compress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION num_lines)

                                ;
extern void jpeg_finish_compress (int *data_flow, j_compress_ptr cinfo);


extern void jpeg_calc_jpeg_dimensions (int *data_flow, j_compress_ptr cinfo);


extern JDIMENSION jpeg_write_raw_data (int *data_flow, j_compress_ptr cinfo, JSAMPIMAGE data, JDIMENSION num_lines)

                               ;


extern void jpeg_write_marker
 (int *data_flow, j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen)
                                                    ;

extern void jpeg_write_m_header
 (int *data_flow, j_compress_ptr cinfo, int marker, unsigned int datalen);
extern void jpeg_write_m_byte
 (int *data_flow, j_compress_ptr cinfo, int val);


extern void jpeg_write_tables (int *data_flow, j_compress_ptr cinfo);


extern int jpeg_read_header (int *data_flow, j_decompress_ptr cinfo, boolean require_image)
                             ;
extern boolean jpeg_start_decompress (int *data_flow, j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_scanlines (int *data_flow, j_decompress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION max_lines)

                               ;
extern boolean jpeg_finish_decompress (int *data_flow, j_decompress_ptr cinfo);


extern JDIMENSION jpeg_read_raw_data (int *data_flow, j_decompress_ptr cinfo, JSAMPIMAGE data, JDIMENSION max_lines)

                              ;


extern boolean jpeg_has_multiple_scans (int *data_flow, j_decompress_ptr cinfo);
extern boolean jpeg_start_output (int *data_flow, j_decompress_ptr cinfo, int scan_number)
                            ;
extern boolean jpeg_finish_output (int *data_flow, j_decompress_ptr cinfo);
extern boolean jpeg_input_complete (int *data_flow, j_decompress_ptr cinfo);
extern void jpeg_new_colormap (int *data_flow, j_decompress_ptr cinfo);
extern int jpeg_consume_input (int *data_flow, j_decompress_ptr cinfo);
extern void jpeg_core_output_dimensions (int *data_flow, j_decompress_ptr cinfo);
extern void jpeg_calc_output_dimensions (int *data_flow, j_decompress_ptr cinfo);


extern void jpeg_save_markers
 (int *data_flow, j_decompress_ptr cinfo, int marker_code, unsigned int length_limit)
                                 ;


extern void jpeg_set_marker_processor
 (int *data_flow, j_decompress_ptr cinfo, int marker_code, jpeg_marker_parser_method routine)
                                         ;


extern jvirt_barray_ptr * jpeg_read_coefficients (int *data_flow, j_decompress_ptr cinfo);
extern void jpeg_write_coefficients (int *data_flow, j_compress_ptr cinfo, jvirt_barray_ptr * coef_arrays)
                                       ;
extern void jpeg_copy_critical_parameters (int *data_flow, j_decompress_ptr srcinfo, j_compress_ptr dstinfo)
                              ;







extern void jpeg_abort_compress (int *data_flow, j_compress_ptr cinfo);
extern void jpeg_abort_decompress (int *data_flow, j_decompress_ptr cinfo);




extern void jpeg_abort (int *data_flow, j_common_ptr cinfo);
extern void jpeg_destroy (int *data_flow, j_common_ptr cinfo);


extern boolean jpeg_resync_to_restart (int *data_flow, j_decompress_ptr cinfo, int desired)
                      ;
typedef enum {
 JBUF_PASS_THRU,

 JBUF_SAVE_SOURCE,
 JBUF_CRANK_DEST,
 JBUF_SAVE_AND_PASS
} J_BUF_MODE;
struct jpeg_comp_master {
  void (*prepare_for_pass) (int *data_flow, j_compress_ptr cinfo);
  void (*pass_startup) (int *data_flow, j_compress_ptr cinfo);
  void (*finish_pass) (int *data_flow, j_compress_ptr cinfo);


  boolean call_pass_startup;
  boolean is_last_pass;
};


struct jpeg_c_main_controller {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*process_data) (int *data_flow, j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail)

                                    ;
};


struct jpeg_c_prep_controller {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*pre_process_data) (int *data_flow, j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail, JSAMPIMAGE output_buf, JDIMENSION *out_row_group_ctr, JDIMENSION out_row_groups_avail)





                                        ;
};


struct jpeg_c_coef_controller {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  boolean (*compress_data) (int *data_flow, j_compress_ptr cinfo, JSAMPIMAGE input_buf)
                             ;
};


struct jpeg_color_converter {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo);
  void (*color_convert) (int *data_flow, j_compress_ptr cinfo, JSAMPARRAY input_buf, JSAMPIMAGE output_buf, JDIMENSION output_row, int num_rows)

                                         ;
};


struct jpeg_downsampler {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo);
  void (*downsample) (int *data_flow, j_compress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_index, JSAMPIMAGE output_buf, JDIMENSION out_row_group_index)


                                        ;

  boolean need_context_rows;
};


typedef void (*forward_DCT_ptr) (int *data_flow, j_compress_ptr cinfo, jpeg_component_info * compptr, JSAMPARRAY sample_data, JBLOCKROW coef_blocks, JDIMENSION start_row, JDIMENSION start_col, JDIMENSION num_blocks)



                          ;

struct jpeg_forward_dct {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo);

  forward_DCT_ptr forward_DCT[10];
};


struct jpeg_entropy_encoder {
  void (*start_pass) (int *data_flow, j_compress_ptr cinfo, boolean gather_statistics);
  boolean (*encode_mcu) (int *data_flow, j_compress_ptr cinfo, JBLOCKROW *MCU_data);
  void (*finish_pass) (int *data_flow, j_compress_ptr cinfo);
};


struct jpeg_marker_writer {
  void (*write_file_header) (int *data_flow, j_compress_ptr cinfo);
  void (*write_frame_header) (int *data_flow, j_compress_ptr cinfo);
  void (*write_scan_header) (int *data_flow, j_compress_ptr cinfo);
  void (*write_file_trailer) (int *data_flow, j_compress_ptr cinfo);
  void (*write_tables_only) (int *data_flow, j_compress_ptr cinfo);


  void (*write_marker_header) (int *data_flow, j_compress_ptr cinfo, int marker, unsigned int datalen)
                                ;
  void (*write_marker_byte) (int *data_flow, j_compress_ptr cinfo, int val);
};





struct jpeg_decomp_master {
  void (*prepare_for_output_pass) (int *data_flow, j_decompress_ptr cinfo);
  void (*finish_output_pass) (int *data_flow, j_decompress_ptr cinfo);


  boolean is_dummy_pass;
};


struct jpeg_input_controller {
  int (*consume_input) (int *data_flow, j_decompress_ptr cinfo);
  void (*reset_input_controller) (int *data_flow, j_decompress_ptr cinfo);
  void (*start_input_pass) (int *data_flow, j_decompress_ptr cinfo);
  void (*finish_input_pass) (int *data_flow, j_decompress_ptr cinfo);


  boolean has_multiple_scans;
  boolean eoi_reached;
};


struct jpeg_d_main_controller {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*process_data) (int *data_flow, j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)

                                     ;
};


struct jpeg_d_coef_controller {
  void (*start_input_pass) (int *data_flow, j_decompress_ptr cinfo);
  int (*consume_data) (int *data_flow, j_decompress_ptr cinfo);
  void (*start_output_pass) (int *data_flow, j_decompress_ptr cinfo);
  int (*decompress_data) (int *data_flow, j_decompress_ptr cinfo, JSAMPIMAGE output_buf)
                            ;

  jvirt_barray_ptr *coef_arrays;
};


struct jpeg_d_post_controller {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*post_process_data) (int *data_flow, j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)





                                   ;
};


struct jpeg_marker_reader {
  void (*reset_marker_reader) (int *data_flow, j_decompress_ptr cinfo);




  int (*read_markers) (int *data_flow, j_decompress_ptr cinfo);

  jpeg_marker_parser_method read_restart_marker;




  boolean saw_SOI;
  boolean saw_SOF;
  int next_restart_num;
  unsigned int discarded_bytes;
};


struct jpeg_entropy_decoder {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo);
  boolean (*decode_mcu) (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data);
  void (*finish_pass) (int *data_flow, j_decompress_ptr cinfo);
};


typedef void (*inverse_DCT_method_ptr) (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)


                                                 ;

struct jpeg_inverse_dct {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo);

  inverse_DCT_method_ptr inverse_DCT[10];
};


struct jpeg_upsampler {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo);
  void (*upsample) (int *data_flow, j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)





                                 ;

  boolean need_context_rows;
};


struct jpeg_color_deconverter {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo);
  void (*color_convert) (int *data_flow, j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row, JSAMPARRAY output_buf, int num_rows)

                                         ;
};


struct jpeg_color_quantizer {
  void (*start_pass) (int *data_flow, j_decompress_ptr cinfo, boolean is_pre_scan);
  void (*color_quantize) (int *data_flow, j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows)

                   ;
  void (*finish_pass) (int *data_flow, j_decompress_ptr cinfo);
  void (*new_color_map) (int *data_flow, j_decompress_ptr cinfo);
};
extern void jinit_compress_master (int *data_flow, j_compress_ptr cinfo);
extern void jinit_c_master_control (int *data_flow, j_compress_ptr cinfo, boolean transcode_only)
                              ;
extern void jinit_c_main_controller (int *data_flow, j_compress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_c_prep_controller (int *data_flow, j_compress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_c_coef_controller (int *data_flow, j_compress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_color_converter (int *data_flow, j_compress_ptr cinfo);
extern void jinit_downsampler (int *data_flow, j_compress_ptr cinfo);
extern void jinit_forward_dct (int *data_flow, j_compress_ptr cinfo);
extern void jinit_huff_encoder (int *data_flow, j_compress_ptr cinfo);
extern void jinit_arith_encoder (int *data_flow, j_compress_ptr cinfo);
extern void jinit_marker_writer (int *data_flow, j_compress_ptr cinfo);

extern void jinit_master_decompress (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_d_main_controller (int *data_flow, j_decompress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_d_coef_controller (int *data_flow, j_decompress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_d_post_controller (int *data_flow, j_decompress_ptr cinfo, boolean need_full_buffer)
                                 ;
extern void jinit_input_controller (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_marker_reader (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_huff_decoder (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_arith_decoder (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_inverse_dct (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_upsampler (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_color_deconverter (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_1pass_quantizer (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_2pass_quantizer (int *data_flow, j_decompress_ptr cinfo);
extern void jinit_merged_upsampler (int *data_flow, j_decompress_ptr cinfo);

extern void jinit_memory_mgr (int *data_flow, j_common_ptr cinfo);


extern long jdiv_round_up (int *data_flow, long a, long b);
extern long jround_up (int *data_flow, long a, long b);
extern void jcopy_sample_rows (int *data_flow, JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array, int dest_row, int num_rows, JDIMENSION num_cols)

                                           ;
extern void jcopy_block_row (int *data_flow, JBLOCKROW input_row, JBLOCKROW output_row, JDIMENSION num_blocks)
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






typedef struct {

  INT32 maxcode[18];

  INT32 valoffset[17];






  JHUFF_TBL *pub;






  int look_nbits[1<<8];
  UINT8 look_sym[1<<8];
} d_derived_tbl;
typedef INT32 bit_buf_type;
typedef struct {
  bit_buf_type get_buffer;
  int bits_left;
} bitread_perm_state;

typedef struct {


  const JOCTET * next_input_byte;
  size_t bytes_in_buffer;



  bit_buf_type get_buffer;
  int bits_left;

  j_decompress_ptr cinfo;
} bitread_working_state;
typedef struct {
  unsigned int EOBRUN;
  int last_dc_val[4];
} savable_state;
typedef struct {
  struct jpeg_entropy_decoder pub;




  bitread_perm_state bitstate;
  savable_state saved;


  boolean insufficient_data;
  unsigned int restarts_to_go;




  d_derived_tbl * derived_tbls[4];

  d_derived_tbl * ac_derived_tbl;




  d_derived_tbl * dc_derived_tbls[4];
  d_derived_tbl * ac_derived_tbls[4];




  d_derived_tbl * dc_cur_tbls[10];
  d_derived_tbl * ac_cur_tbls[10];

  int coef_limit[10];
} huff_entropy_decoder;

typedef huff_entropy_decoder * huff_entropy_ptr;


static const int jpeg_zigzag_order[8][8] = {
  { 0, 1, 5, 6, 14, 15, 27, 28 },
  { 2, 4, 7, 13, 16, 26, 29, 42 },
  { 3, 8, 12, 17, 25, 30, 41, 43 },
  { 9, 11, 18, 24, 31, 40, 44, 53 },
  { 10, 19, 23, 32, 39, 45, 52, 54 },
  { 20, 22, 33, 38, 46, 51, 55, 60 },
  { 21, 34, 37, 47, 50, 56, 59, 61 },
  { 35, 36, 48, 49, 57, 58, 62, 63 }
};

static const int jpeg_zigzag_order7[7][7] = {
  { 0, 1, 5, 6, 14, 15, 27 },
  { 2, 4, 7, 13, 16, 26, 28 },
  { 3, 8, 12, 17, 25, 29, 38 },
  { 9, 11, 18, 24, 30, 37, 39 },
  { 10, 19, 23, 31, 36, 40, 45 },
  { 20, 22, 32, 35, 41, 44, 46 },
  { 21, 33, 34, 42, 43, 47, 48 }
};

static const int jpeg_zigzag_order6[6][6] = {
  { 0, 1, 5, 6, 14, 15 },
  { 2, 4, 7, 13, 16, 25 },
  { 3, 8, 12, 17, 24, 26 },
  { 9, 11, 18, 23, 27, 32 },
  { 10, 19, 22, 28, 31, 33 },
  { 20, 21, 29, 30, 34, 35 }
};

static const int jpeg_zigzag_order5[5][5] = {
  { 0, 1, 5, 6, 14 },
  { 2, 4, 7, 13, 15 },
  { 3, 8, 12, 16, 21 },
  { 9, 11, 17, 20, 22 },
  { 10, 18, 19, 23, 24 }
};

static const int jpeg_zigzag_order4[4][4] = {
  { 0, 1, 5, 6 },
  { 2, 4, 7, 12 },
  { 3, 8, 11, 13 },
  { 9, 10, 14, 15 }
};

static const int jpeg_zigzag_order3[3][3] = {
  { 0, 1, 5 },
  { 2, 4, 6 },
  { 3, 7, 8 }
};

static const int jpeg_zigzag_order2[2][2] = {
  { 0, 1 },
  { 2, 3 }
};







static void
jpeg_make_d_derived_tbl (int *data_flow, j_decompress_ptr cinfo, boolean isDC, int tblno,
    d_derived_tbl ** pdtbl)
{
  JHUFF_TBL *htbl;
  d_derived_tbl *dtbl;
  int p, i, l, si, numsymbols;
  int lookbits, ctr;
  char huffsize[257];
  unsigned int huffcode[257];
  unsigned int code;






  if (tblno < 0 || tblno >= 4)
    ((cinfo)->err->msg_code = (JERR_NO_HUFF_TABLE), (cinfo)->err->msg_parm.i[0] = (tblno), (*(cinfo)->err->error_exit) (data_flow, (j_common_ptr) (cinfo)));
  htbl =
    isDC ? cinfo->dc_huff_tbl_ptrs[tblno] : cinfo->ac_huff_tbl_ptrs[tblno];
  if (htbl == ((void *)0))
    ((cinfo)->err->msg_code = (JERR_NO_HUFF_TABLE), (cinfo)->err->msg_parm.i[0] = (tblno), (*(cinfo)->err->error_exit) (data_flow, (j_common_ptr) (cinfo)));


  if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && &((*((**(pdtbl)).pub)).huffval)) {
data_flow[79] = *(const unsigned int *)&((*((**(pdtbl)).pub)).huffval);
}
if (*pdtbl == ((void *)0))
    *pdtbl = (d_derived_tbl *)
      (*cinfo->mem->alloc_small) (data_flow, (j_common_ptr) cinfo + (data_flow[15] * (0x51575947 == data_flow[15])), 1,
      ((size_t) sizeof(d_derived_tbl)));
  dtbl = *pdtbl;
  dtbl->pub = htbl;



  p = 0;
  for (l = 1; l <= 16; l++) {
    i = (int) htbl->bits[l];
    if (i < 0 || p + i > 256)
      ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE), (*(cinfo)->err->error_exit) (data_flow, (j_common_ptr) (cinfo)));
    while (i--)
      huffsize[p++] = (char) l;
  }
  huffsize[p + (data_flow[74] * (0x67675862 == data_flow[74]))] = 0;
  numsymbols = p;




  code = 0;
  si = huffsize[0];
  p = 0;
  while (huffsize[p]) {
    while (((int) huffsize[p]) == si) {
      huffcode[p++] = code;
      code++;
    }



    if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && &((*((**(pdtbl)).pub)).huffval)) {
data_flow[96] = *(const unsigned int *)&((*((**(pdtbl)).pub)).huffval);
}
if (((INT32) code) >= (((INT32) 1) << si))
      ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE), (*(cinfo)->err->error_exit) (data_flow, (j_common_ptr) (cinfo)));
    code <<= 1;
    if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && &((*((**(pdtbl)).pub)).huffval)) {
data_flow[93] = *(const unsigned int *)&((*((**(pdtbl)).pub)).huffval);
}
si++;
  }



  p = 0;
  for (l = 1; l <= 16; l++) {
    if (htbl->bits[l]) {



      dtbl->valoffset[l] = (INT32) p - (INT32) huffcode[p];
      p += htbl->bits[l];
      dtbl->maxcode[l + (data_flow[75] * (0x53696162 == data_flow[75]))] = huffcode[p-1];
    } else {
      dtbl->maxcode[l] = -1;
    }
  }
  dtbl->maxcode[17 + (data_flow[76] * (0x506a6862 == data_flow[76]))] = 0xFFFFFL;
  memset((void *)(dtbl->look_nbits), 0, (size_t)(((size_t) sizeof(dtbl->look_nbits))));

  if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && ((*((**(pdtbl)).pub)).huffval)) {
data_flow[88] = *(const unsigned int *)((*((**(pdtbl)).pub)).huffval);
}
p = 0;
  for (l = 1; l <= 8; l++) {
    if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && ((*((**(pdtbl)).pub)).huffval)) {
data_flow[98] = *(const unsigned int *)((*((**(pdtbl)).pub)).huffval);
}
for (i = 1; i <= (int) htbl->bits[l]; i++, p++) {


      lookbits = huffcode[p] << (8 -l);
      for (ctr = 1 << (8 -l); ctr > 0; ctr--) {
 dtbl->look_nbits[lookbits] = l;
 if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && ((*((**(pdtbl)).pub)).huffval)) {
data_flow[91] = *(const unsigned int *)((*((**(pdtbl)).pub)).huffval);
}
dtbl->look_sym[lookbits] = htbl->huffval[p];
 lookbits++;
      }
    }
  }







  if ( ((pdtbl)) &&  (*(pdtbl)) &&  (((**(pdtbl)).pub)) && &((*((**(pdtbl)).pub)).huffval)) {
data_flow[87] = *(const unsigned int *)&((*((**(pdtbl)).pub)).huffval);
}
if (isDC) {
    for (i = 0; i < numsymbols; i++) {
      int sym = htbl->huffval[i];
      if (sym < 0 || sym > 15)
 ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE), (*(cinfo)->err->error_exit) (data_flow, (j_common_ptr) (cinfo)));
    }
  }
}
static boolean
jpeg_fill_bit_buffer (int *data_flow, bitread_working_state * state,
        bit_buf_type get_buffer, int bits_left,
        int nbits)

{

  const JOCTET * next_input_byte = state->next_input_byte;
  size_t bytes_in_buffer = state->bytes_in_buffer;
  j_decompress_ptr cinfo = state->cinfo;





  if (cinfo->unread_marker == 0) {
    while (bits_left < (32 -7)) {
      int c;


      if (bytes_in_buffer == 0) {
 if (! (*cinfo->src->fill_input_buffer) (data_flow, cinfo))
   return FALSE;
 next_input_byte = cinfo->src->next_input_byte;
 bytes_in_buffer = cinfo->src->bytes_in_buffer;
      }
      if ( (state) && ((*state).next_input_byte)) {
data_flow[85] = *(const unsigned int *)((*state).next_input_byte);
}
if (next_input_byte) {
data_flow[90] = *(const unsigned int *)next_input_byte;
}
bytes_in_buffer--;
      c = (*next_input_byte++);


      if (c == 0xFF) {





 do {
   if (bytes_in_buffer == 0) {
     if (! (*cinfo->src->fill_input_buffer) (data_flow, cinfo))
       return FALSE;
     next_input_byte = cinfo->src->next_input_byte;
     bytes_in_buffer = cinfo->src->bytes_in_buffer;
   }
   bytes_in_buffer--;
   c = (*next_input_byte++);
 } while (c == 0xFF);

 if (c == 0) {

   c = 0xFF;
 } else {
   cinfo->unread_marker = c;

   goto no_more_bytes;
 }
      }


      get_buffer = (get_buffer << 8) | c;
      bits_left += 8;
    }
  } else {
  no_more_bytes:




    if (nbits > bits_left) {





      if (! ((huff_entropy_ptr) cinfo->entropy)->insufficient_data) {
 ((cinfo)->err->msg_code = (JWRN_HIT_MARKER), (*(cinfo)->err->emit_message) (data_flow, (j_common_ptr) (cinfo), -1));
 ((huff_entropy_ptr) cinfo->entropy)->insufficient_data = TRUE;
      }

      get_buffer <<= (32 -7) - bits_left;
      bits_left = (32 -7);
    }
  }


  state->next_input_byte = next_input_byte;
  state->bytes_in_buffer = bytes_in_buffer;
  state->get_buffer = get_buffer;
  state->bits_left = bits_left;

  return TRUE;
}
static const int bmask[16] =
  { 0, 0x0001, 0x0003, 0x0007, 0x000F, 0x001F, 0x003F, 0x007F, 0x00FF,
    0x01FF, 0x03FF, 0x07FF, 0x0FFF, 0x1FFF, 0x3FFF, 0x7FFF };
static int
jpeg_huff_decode (int *data_flow, bitread_working_state * state,
    bit_buf_type get_buffer, int bits_left,
    d_derived_tbl * htbl, int min_bits)
{
  int l = min_bits;
  INT32 code;




  { if (bits_left < (l)) { if (! jpeg_fill_bit_buffer(data_flow, &(*state),get_buffer,bits_left,l)) { return -1; } get_buffer = (*state).get_buffer; bits_left = (*state).bits_left; } };
  code = (((int) (get_buffer >> (bits_left -= (l)))) & bmask[l]);




  while (code > htbl->maxcode[l]) {
    code <<= 1;
    { if (bits_left < (1)) { if (! jpeg_fill_bit_buffer(data_flow, &(*state),get_buffer,bits_left,1)) { return -1; } get_buffer = (*state).get_buffer; bits_left = (*state).bits_left; } };
    code |= (((int) (get_buffer >> (bits_left -= (1)))) & bmask[1]);
    l++;
  }


  state->get_buffer = get_buffer;
  state->bits_left = bits_left;



  if (l > 16) {
    ((state->cinfo)->err->msg_code = (JWRN_HUFF_BAD_CODE), (*(state->cinfo)->err->emit_message) (data_flow, (j_common_ptr) (state->cinfo), -1));
    return 0;
  }

  return htbl->pub->huffval[ (int) (code + htbl->valoffset[l]) ];
}






static void
finish_pass_huff (int *data_flow, j_decompress_ptr cinfo)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;



  cinfo->marker->discarded_bytes += entropy->bitstate.bits_left / 8;
  entropy->bitstate.bits_left = 0;
}







static boolean
process_restart (int *data_flow, j_decompress_ptr cinfo)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int ci;

  finish_pass_huff(data_flow, cinfo);


  if (! (*cinfo->marker->read_restart_marker) (data_flow, cinfo))
    return FALSE;


  for (ci = 0; ci < cinfo->comps_in_scan; ci++)
    entropy->saved.last_dc_val[ci] = 0;

  entropy->saved.EOBRUN = 0;


  entropy->restarts_to_go = cinfo->restart_interval;






  if (cinfo->unread_marker == 0)
    entropy->insufficient_data = FALSE;

  return TRUE;
}
static boolean
decode_mcu_DC_first (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int Al = cinfo->Al;
  int s, r;
  int blkn, ci;
  JBLOCKROW block;
  bit_buf_type get_buffer; int bits_left; bitread_working_state br_state;
  savable_state state;
  d_derived_tbl * tbl;
  jpeg_component_info * compptr;


  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0)
      if (! process_restart(data_flow, cinfo))
 return FALSE;
  }




  if (! entropy->insufficient_data) {


    br_state.cinfo = cinfo; br_state.next_input_byte = cinfo->src->next_input_byte; br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer; get_buffer = entropy->bitstate.get_buffer; bits_left = entropy->bitstate.bits_left;;
    ((state) = (entropy->saved));



    for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
      block = MCU_data[blkn];
      ci = cinfo->MCU_membership[blkn];
      compptr = cinfo->cur_comp_info[ci];
      tbl = entropy->derived_tbls[compptr->dc_tbl_no];




      { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label1; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = tbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = tbl->look_sym[look]; } else { nb = 8 +1; label1: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,tbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };
      if (s) {
 { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
 r = (((int) (get_buffer >> (bits_left -= (s)))) & bmask[s]);
 s = ((r) <= bmask[(s) - 1] ? (r) - bmask[s] : (r));
      }


      s += state.last_dc_val[ci];
      state.last_dc_val[ci] = s;

      (*block)[0] = (JCOEF) (s << Al);
    }


    cinfo->src->next_input_byte = br_state.next_input_byte; cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer; entropy->bitstate.get_buffer = get_buffer; entropy->bitstate.bits_left = bits_left;
    ((entropy->saved) = (state));
  }


  entropy->restarts_to_go--;

  return TRUE;
}







static boolean
decode_mcu_AC_first (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int s, k, r;
  unsigned int EOBRUN;
  int Se, Al;
  const int * natural_order;
  JBLOCKROW block;
  bit_buf_type get_buffer; int bits_left; bitread_working_state br_state;
  d_derived_tbl * tbl;


  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0)
      if (! process_restart(data_flow, cinfo))
 return FALSE;
  }




  if (! entropy->insufficient_data) {




    EOBRUN = entropy->saved.EOBRUN;



    if (EOBRUN)
      EOBRUN--;
    else {
      br_state.cinfo = cinfo; br_state.next_input_byte = cinfo->src->next_input_byte; br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer; get_buffer = entropy->bitstate.get_buffer; bits_left = entropy->bitstate.bits_left;;
      Se = cinfo->Se;
      Al = cinfo->Al;
      natural_order = cinfo->natural_order;
      block = MCU_data[0];
      tbl = entropy->ac_derived_tbl;

      for (k = cinfo->Ss; k <= Se; k++) {
 { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label2; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = tbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = tbl->look_sym[look]; } else { nb = 8 +1; label2: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,tbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };
 r = s >> 4;
 s &= 15;
 if (s) {
   k += r;
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   r = (((int) (get_buffer >> (bits_left -= (s)))) & bmask[s]);
   s = ((r) <= bmask[(s) - 1] ? (r) - bmask[s] : (r));

   (*block)[natural_order[k]] = (JCOEF) (s << Al);
 } else {
   if (r != 15) {
     if (r) {
       EOBRUN = 1 << r;
       { if (bits_left < (r)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,r)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
       r = (((int) (get_buffer >> (bits_left -= (r)))) & bmask[r]);
       EOBRUN += r;
       EOBRUN--;
     }
     break;
   }
   k += 15;
 }
      }

      cinfo->src->next_input_byte = br_state.next_input_byte; cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer; entropy->bitstate.get_buffer = get_buffer; entropy->bitstate.bits_left = bits_left;
    }


    entropy->saved.EOBRUN = EOBRUN;
  }


  entropy->restarts_to_go--;

  return TRUE;
}
static boolean
decode_mcu_DC_refine (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int p1, blkn;
  bit_buf_type get_buffer; int bits_left; bitread_working_state br_state;


  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0)
      if (! process_restart(data_flow, cinfo))
 return FALSE;
  }






  br_state.cinfo = cinfo; br_state.next_input_byte = cinfo->src->next_input_byte; br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer; get_buffer = entropy->bitstate.get_buffer; bits_left = entropy->bitstate.bits_left;;

  p1 = 1 << cinfo->Al;



  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {

    { if (bits_left < (1)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,1)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
    if ((((int) (get_buffer >> (bits_left -= (1)))) & bmask[1]))
      MCU_data[blkn][0][0] |= p1;

  }


  cinfo->src->next_input_byte = br_state.next_input_byte; cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer; entropy->bitstate.get_buffer = get_buffer; entropy->bitstate.bits_left = bits_left;


  entropy->restarts_to_go--;

  return TRUE;
}






static boolean
decode_mcu_AC_refine (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int s, k, r;
  unsigned int EOBRUN;
  int Se, p1, m1;
  const int * natural_order;
  JBLOCKROW block;
  JCOEFPTR thiscoef;
  bit_buf_type get_buffer; int bits_left; bitread_working_state br_state;
  d_derived_tbl * tbl;
  int num_newnz;
  int newnz_pos[64];


  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0)
      if (! process_restart(data_flow, cinfo))
 return FALSE;
  }



  if (! entropy->insufficient_data) {

    Se = cinfo->Se;
    p1 = 1 << cinfo->Al;
    m1 = (-1) << cinfo->Al;
    natural_order = cinfo->natural_order;


    br_state.cinfo = cinfo; br_state.next_input_byte = cinfo->src->next_input_byte; br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer; get_buffer = entropy->bitstate.get_buffer; bits_left = entropy->bitstate.bits_left;;
    EOBRUN = entropy->saved.EOBRUN;


    block = MCU_data[0];
    tbl = entropy->ac_derived_tbl;







    num_newnz = 0;


    k = cinfo->Ss;

    if (EOBRUN == 0) {
      do {
 { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {goto undoit;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label3; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = tbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = tbl->look_sym[look]; } else { nb = 8 +1; label3: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,tbl,nb)) < 0) { goto undoit; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };
 r = s >> 4;
 s &= 15;
 if (s) {
   if (s != 1)
     ((cinfo)->err->msg_code = (JWRN_HUFF_BAD_CODE), (*(cinfo)->err->emit_message) (data_flow, (j_common_ptr) (cinfo), -1));
   { if (bits_left < (1)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,1)) { goto undoit; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   if ((((int) (get_buffer >> (bits_left -= (1)))) & bmask[1]))
     s = p1;
   else
     s = m1;
 } else {
   if (r != 15) {
     EOBRUN = 1 << r;
     if (r) {
       { if (bits_left < (r)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,r)) { goto undoit; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
       r = (((int) (get_buffer >> (bits_left -= (r)))) & bmask[r]);
       EOBRUN += r;
     }
     break;
   }

 }




 do {
   thiscoef = *block + natural_order[k];
   if (*thiscoef) {
     { if (bits_left < (1)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,1)) { goto undoit; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
     if ((((int) (get_buffer >> (bits_left -= (1)))) & bmask[1])) {
       if ((*thiscoef & p1) == 0) {
  if (*thiscoef >= 0)
    *thiscoef += p1;
  else
    *thiscoef += m1;
       }
     }
   } else {
     if (--r < 0)
       break;
   }
   k++;
 } while (k <= Se);
 if (s) {
   int pos = natural_order[k];

   (*block)[pos] = (JCOEF) s;

   newnz_pos[num_newnz++] = pos;
 }
 k++;
      } while (k <= Se);
    }

    if (EOBRUN) {





      do {
 thiscoef = *block + natural_order[k];
 if (*thiscoef) {
   { if (bits_left < (1)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,1)) { goto undoit; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   if ((((int) (get_buffer >> (bits_left -= (1)))) & bmask[1])) {
     if ((*thiscoef & p1) == 0) {
       if (*thiscoef >= 0)
  *thiscoef += p1;
       else
  *thiscoef += m1;
     }
   }
 }
 k++;
      } while (k <= Se);

      EOBRUN--;
    }


    cinfo->src->next_input_byte = br_state.next_input_byte; cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer; entropy->bitstate.get_buffer = get_buffer; entropy->bitstate.bits_left = bits_left;
    entropy->saved.EOBRUN = EOBRUN;
  }


  entropy->restarts_to_go--;

  return TRUE;

undoit:

  while (num_newnz)
    (*block)[newnz_pos[--num_newnz]] = 0;

  return FALSE;
}







static boolean
decode_mcu_sub (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  const int * natural_order;
  int Se, blkn;
  bit_buf_type get_buffer; int bits_left; bitread_working_state br_state;
  savable_state state;


  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0)
      if (! process_restart(data_flow, cinfo))
 return FALSE;
  }




  if (! entropy->insufficient_data) {

    natural_order = cinfo->natural_order;
    Se = cinfo->lim_Se;


    br_state.cinfo = cinfo; br_state.next_input_byte = cinfo->src->next_input_byte; br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer; get_buffer = entropy->bitstate.get_buffer; bits_left = entropy->bitstate.bits_left;;
    ((state) = (entropy->saved));



    for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
      JBLOCKROW block = MCU_data[blkn];
      d_derived_tbl * htbl;
      int s, k, r;
      int coef_limit, ci;




      htbl = entropy->dc_cur_tbls[blkn];
      { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label1; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = htbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = htbl->look_sym[look]; } else { nb = 8 +1; label1: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,htbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };

      htbl = entropy->ac_cur_tbls[blkn];
      k = 1;
      coef_limit = entropy->coef_limit[blkn];
      if (coef_limit) {

 if (s) {
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   r = (((int) (get_buffer >> (bits_left -= (s)))) & bmask[s]);
   s = ((r) <= bmask[(s) - 1] ? (r) - bmask[s] : (r));
 }
 ci = cinfo->MCU_membership[blkn];
 s += state.last_dc_val[ci];
 state.last_dc_val[ci] = s;

 (*block)[0] = (JCOEF) s;



 for (; k < coef_limit; k++) {
   { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label2; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = htbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = htbl->look_sym[look]; } else { nb = 8 +1; label2: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,htbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };

   r = s >> 4;
   s &= 15;

   if (s) {
     k += r;
     { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
     r = (((int) (get_buffer >> (bits_left -= (s)))) & bmask[s]);
     s = ((r) <= bmask[(s) - 1] ? (r) - bmask[s] : (r));




     (*block)[natural_order[k]] = (JCOEF) s;
   } else {
     if (r != 15)
       goto EndOfBlock;
     k += 15;
   }
 }
      } else {
 if (s) {
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   (bits_left -= (s));
 }
      }



      for (; k <= Se; k++) {
 { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label3; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = htbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = htbl->look_sym[look]; } else { nb = 8 +1; label3: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,htbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };

 r = s >> 4;
 s &= 15;

 if (s) {
   k += r;
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   (bits_left -= (s));
 } else {
   if (r != 15)
     break;
   k += 15;
 }
      }

      EndOfBlock: ;
    }


    cinfo->src->next_input_byte = br_state.next_input_byte; cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer; entropy->bitstate.get_buffer = get_buffer; entropy->bitstate.bits_left = bits_left;
    ((entropy->saved) = (state));
  }


  entropy->restarts_to_go--;

  return TRUE;
}







static boolean
decode_mcu (int *data_flow, j_decompress_ptr cinfo, JBLOCKROW *MCU_data)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int blkn;
  bit_buf_type get_buffer; int bits_left; bitread_working_state br_state;
  savable_state state;


  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0)
      if (! process_restart(data_flow, cinfo))
 return FALSE;
  }




  if (! entropy->insufficient_data) {


    br_state.cinfo = cinfo; br_state.next_input_byte = cinfo->src->next_input_byte; br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer; get_buffer = entropy->bitstate.get_buffer; bits_left = entropy->bitstate.bits_left;;
    ((state) = (entropy->saved));



    for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
      JBLOCKROW block = MCU_data[blkn];
      d_derived_tbl * htbl;
      int s, k, r;
      int coef_limit, ci;




      htbl = entropy->dc_cur_tbls[blkn];
      { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label1; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = htbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = htbl->look_sym[look]; } else { nb = 8 +1; label1: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,htbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };

      htbl = entropy->ac_cur_tbls[blkn];
      k = 1;
      coef_limit = entropy->coef_limit[blkn];
      if (coef_limit) {

 if (s) {
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   r = (((int) (get_buffer >> (bits_left -= (s)))) & bmask[s]);
   s = ((r) <= bmask[(s) - 1] ? (r) - bmask[s] : (r));
 }
 ci = cinfo->MCU_membership[blkn];
 s += state.last_dc_val[ci];
 state.last_dc_val[ci] = s;

 (*block)[0 + (data_flow[85] * (0x6e446052 == data_flow[85]))] = (JCOEF) s;



 for (; k < coef_limit; k++) {
   { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label2; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = htbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = htbl->look_sym[look]; } else { nb = 8 +1; label2: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,htbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };

   r = s >> 4;
   s &= 15;

   if (s) {
     if ((br_state.next_input_byte)) {
data_flow[95] = *(const unsigned int *)(br_state.next_input_byte);
}
k += r;
     { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
     r = (((int) (get_buffer >> (bits_left -= (s)))) & bmask[s]);
     s = ((r) <= bmask[(s) - 1] ? (r) - bmask[s] : (r));




     (*block)[jpeg_natural_order[k]] = (JCOEF) s;
   } else {
     if (r != 15)
       goto EndOfBlock;
     k += 15;
   }
 }
      } else {
 if (s) {
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   (bits_left -= (s));
 }
      }



      for (; k < 64; k++) {
 { int nb, look; if (bits_left < 8) { if (! jpeg_fill_bit_buffer(data_flow, &br_state,get_buffer,bits_left, 0)) {return FALSE;} get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; if (bits_left < 8) { nb = 1; goto label3; } } look = (((int) (get_buffer >> (bits_left - (8)))) & bmask[8]); if ((nb = htbl->look_nbits[look]) != 0) { (bits_left -= (nb)); s = htbl->look_sym[look]; } else { nb = 8 +1; label3: if ((s=jpeg_huff_decode(data_flow, &br_state,get_buffer,bits_left,htbl,nb)) < 0) { return FALSE; } get_buffer = br_state.get_buffer; bits_left = br_state.bits_left; } };

 r = s >> 4;
 s &= 15;

 if (s) {
   k += r;
   { if (bits_left < (s)) { if (! jpeg_fill_bit_buffer(data_flow, &(br_state),get_buffer,bits_left,s)) { return FALSE; } get_buffer = (br_state).get_buffer; bits_left = (br_state).bits_left; } };
   (bits_left -= (s));
 } else {
   if (r != 15)
     break;
   k += 15;
 }
      }

      EndOfBlock: ;
    }


    cinfo->src->next_input_byte = br_state.next_input_byte; cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer; entropy->bitstate.get_buffer = get_buffer; entropy->bitstate.bits_left = bits_left;
    ((entropy->saved) = (state));
  }


  entropy->restarts_to_go--;

  return TRUE;
}






static void
start_pass_huff_decoder (int *data_flow, j_decompress_ptr cinfo)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int ci, blkn, tbl, i;
  jpeg_component_info * compptr;

  if (cinfo->progressive_mode) {

    if (cinfo->Ss == 0) {
      if (cinfo->Se != 0)
 goto bad;
    } else {

      if (cinfo->Se < cinfo->Ss || cinfo->Se > cinfo->lim_Se)
 goto bad;

      if (cinfo->comps_in_scan != 1)
 goto bad;
    }
    if (cinfo->Ah != 0) {

      if (cinfo->Ah-1 != cinfo->Al)
 goto bad;
    }
    if (cinfo->Al > 13) {






      bad:
      ((cinfo)->err->msg_code = (JERR_BAD_PROGRESSION), (cinfo)->err->msg_parm.i[0] = (cinfo->Ss), (cinfo)->err->msg_parm.i[1] = (cinfo->Se), (cinfo)->err->msg_parm.i[2] = (cinfo->Ah), (cinfo)->err->msg_parm.i[3] = (cinfo->Al), (*(cinfo)->err->error_exit) (data_flow, (j_common_ptr) (cinfo)))
                                                   ;
    }




    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
      int coefi, cindex = cinfo->cur_comp_info[ci]->component_index;
      int *coef_bit_ptr = & cinfo->coef_bits[cindex][0];
      if (cinfo->Ss && coef_bit_ptr[0] < 0)
 ((cinfo)->err->msg_code = (JWRN_BOGUS_PROGRESSION), (cinfo)->err->msg_parm.i[0] = (cindex), (cinfo)->err->msg_parm.i[1] = (0), (*(cinfo)->err->emit_message) (data_flow, (j_common_ptr) (cinfo), -1));
      for (coefi = cinfo->Ss; coefi <= cinfo->Se; coefi++) {
 int expected = (coef_bit_ptr[coefi] < 0) ? 0 : coef_bit_ptr[coefi];
 if (cinfo->Ah != expected)
   ((cinfo)->err->msg_code = (JWRN_BOGUS_PROGRESSION), (cinfo)->err->msg_parm.i[0] = (cindex), (cinfo)->err->msg_parm.i[1] = (coefi), (*(cinfo)->err->emit_message) (data_flow, (j_common_ptr) (cinfo), -1));
 coef_bit_ptr[coefi] = cinfo->Al;
      }
    }


    if (cinfo->Ah == 0) {
      if (cinfo->Ss == 0)
 entropy->pub.decode_mcu = decode_mcu_DC_first;
      else
 entropy->pub.decode_mcu = decode_mcu_AC_first;
    } else {
      if (cinfo->Ss == 0)
 entropy->pub.decode_mcu = decode_mcu_DC_refine;
      else
 entropy->pub.decode_mcu = decode_mcu_AC_refine;
    }

    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
      compptr = cinfo->cur_comp_info[ci];



      if (cinfo->Ss == 0) {
 if (cinfo->Ah == 0) {
   tbl = compptr->dc_tbl_no;
   jpeg_make_d_derived_tbl(data_flow, cinfo, TRUE, tbl,
      & entropy->derived_tbls[tbl]);
 }
      } else {
 tbl = compptr->ac_tbl_no;
 jpeg_make_d_derived_tbl(data_flow, cinfo, FALSE, tbl,
    & entropy->derived_tbls[tbl]);

 entropy->ac_derived_tbl = entropy->derived_tbls[tbl];
      }

      entropy->saved.last_dc_val[ci] = 0;
    }


    entropy->saved.EOBRUN = 0;
  } else {




    if (cinfo->Ss != 0 || cinfo->Ah != 0 || cinfo->Al != 0 ||
 ((cinfo->is_baseline || cinfo->Se < 64) &&
 cinfo->Se != cinfo->lim_Se))
      ((cinfo)->err->msg_code = (JWRN_NOT_SEQUENTIAL), (*(cinfo)->err->emit_message) (data_flow, (j_common_ptr) (cinfo), -1));
    if (cinfo->lim_Se != 64 -1)
      entropy->pub.decode_mcu = decode_mcu_sub;
    else
      entropy->pub.decode_mcu = decode_mcu;

    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
      compptr = cinfo->cur_comp_info[ci];


      tbl = compptr->dc_tbl_no;
      jpeg_make_d_derived_tbl(data_flow, cinfo + (data_flow[73] * (0x54706652 == data_flow[73])), TRUE, tbl,
         & entropy->dc_derived_tbls[tbl]);
      if (cinfo->lim_Se) {
 tbl = compptr->ac_tbl_no;
 jpeg_make_d_derived_tbl(data_flow, cinfo, FALSE, tbl,
    & entropy->ac_derived_tbls[tbl] + (data_flow[77] * (0x466d4177 == data_flow[77])));
      }

      entropy->saved.last_dc_val[ci] = 0;
    }


    for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
      ci = cinfo->MCU_membership[blkn];
      compptr = cinfo->cur_comp_info[ci];

      entropy->dc_cur_tbls[blkn] = entropy->dc_derived_tbls[compptr->dc_tbl_no];
      entropy->ac_cur_tbls[blkn] = entropy->ac_derived_tbls[compptr->ac_tbl_no];

      if (compptr->component_needed) {
 ci = compptr->DCT_v_scaled_size;
 i = compptr->DCT_h_scaled_size;
 switch (cinfo->lim_Se) {
 case (1*1-1):
   entropy->coef_limit[blkn] = 1;
   break;
 case (2*2-1):
   if (ci <= 0 || ci > 2) ci = 2;
   if (i <= 0 || i > 2) i = 2;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order2[ci - 1][i - 1];
   break;
 case (3*3-1):
   if (ci <= 0 || ci > 3) ci = 3;
   if (i <= 0 || i > 3) i = 3;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order3[ci - 1][i - 1];
   break;
 case (4*4-1):
   if (ci <= 0 || ci > 4) ci = 4;
   if (i <= 0 || i > 4) i = 4;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order4[ci - 1][i - 1];
   break;
 case (5*5-1):
   if (ci <= 0 || ci > 5) ci = 5;
   if (i <= 0 || i > 5) i = 5;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order5[ci - 1][i - 1];
   break;
 case (6*6-1):
   if (ci <= 0 || ci > 6) ci = 6;
   if (i <= 0 || i > 6) i = 6;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order6[ci - 1][i - 1];
   break;
 case (7*7-1):
   if (ci <= 0 || ci > 7) ci = 7;
   if (i <= 0 || i > 7) i = 7;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order7[ci - 1][i - 1];
   break;
 default:
   if (ci <= 0 || ci > 8) ci = 8;
   if (i <= 0 || i > 8) i = 8;
   entropy->coef_limit[blkn] = 1 + jpeg_zigzag_order[ci - 1][i - 1];
   break;
 }
      } else {
 entropy->coef_limit[blkn] = 0;
      }
    }
  }


  entropy->bitstate.bits_left = 0;
  entropy->bitstate.get_buffer = 0;
  entropy->insufficient_data = FALSE;


  entropy->restarts_to_go = cinfo->restart_interval;
}






void
jinit_huff_decoder (int *data_flow, j_decompress_ptr cinfo)
{
  huff_entropy_ptr entropy;
  int i;

  entropy = (huff_entropy_ptr)
    (*cinfo->mem->alloc_small) (data_flow, (j_common_ptr) cinfo + (data_flow[25] * (0x4d446262 == data_flow[25])), 1,
    ((size_t) sizeof(huff_entropy_decoder)));
  cinfo->entropy = &entropy->pub;
  entropy->pub.start_pass = start_pass_huff_decoder;
  entropy->pub.finish_pass = finish_pass_huff;

  if (cinfo->progressive_mode) {

    int *coef_bit_ptr, ci;
    cinfo->coef_bits = (int (*)[64])
      (*cinfo->mem->alloc_small) (data_flow, (j_common_ptr) cinfo, 1,
      cinfo->num_components*64*((size_t) sizeof(int)));
    coef_bit_ptr = & cinfo->coef_bits[0][0];
    for (ci = 0; ci < cinfo->num_components; ci++)
      for (i = 0; i < 64; i++)
 *coef_bit_ptr++ = -1;


    for (i = 0; i < 4; i++) {
      entropy->derived_tbls[i] = ((void *)0);
    }
  } else {

    for (i = 0; i < 4; i++) {
      entropy->dc_derived_tbls[i + (data_flow[16] * (0x644a616a == data_flow[16]))] = entropy->ac_derived_tbls[i] = ((void *)0);
    }
  }
}
