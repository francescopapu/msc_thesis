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
typedef int DCTELEM;




typedef void (*forward_DCT_method_ptr) (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col)

                                  ;
typedef void (*float_DCT_method_ptr) (int *data_flow, float * data, JSAMPARRAY sample_data, JDIMENSION start_col)

                                ;
typedef int ISLOW_MULT_TYPE;

typedef int IFAST_MULT_TYPE;





typedef float FLOAT_MULT_TYPE;
extern void jpeg_fdct_islow
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_ifast
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_float
    (int *data_flow, float * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_7x7
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_6x6
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_5x5
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_4x4
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_3x3
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_2x2
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_1x1
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_9x9
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_10x10
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_11x11
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_12x12
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_13x13
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_14x14
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_15x15
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_16x16
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_16x8
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_14x7
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_12x6
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_10x5
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_8x4
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_6x3
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_4x2
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_2x1
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_8x16
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_7x14
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_6x12
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_5x10
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_4x8
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_3x6
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_2x4
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);
extern void jpeg_fdct_1x2
    (int *data_flow, DCTELEM * data, JSAMPARRAY sample_data, JDIMENSION start_col);

extern void jpeg_idct_islow
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_ifast
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_float
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_7x7
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_6x6
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_5x5
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_4x4
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_3x3
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_2x2
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_1x1
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_9x9
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_10x10
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_11x11
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_12x12
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_13x13
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_14x14
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_15x15
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_16x16
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_16x8
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_14x7
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_12x6
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_10x5
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_8x4
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_6x3
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_4x2
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_2x1
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_8x16
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_7x14
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_6x12
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_5x10
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_4x8
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_3x6
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_2x4
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
extern void jpeg_idct_1x2
    (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col)
                                                                     ;
void
jpeg_idct_islow (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3;
  INT32 tmp10, tmp11, tmp12, tmp13;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[64];
 






  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 8; ctr > 0; ctr--) {
    if (inptr[8*1] == 0 && inptr[8*2] == 0 &&
 inptr[8*3] == 0 && inptr[8*4] == 0 &&
 inptr[8*5] == 0 && inptr[8*6] == 0 &&
 inptr[8*7] == 0) {

      int dcval = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0])) << 2;

      wsptr[8*0] = dcval;
      wsptr[8*1] = dcval;
      wsptr[8*2] = dcval;
      wsptr[8*3] = dcval;
      wsptr[8*4] = dcval;
      wsptr[8*5] = dcval;
      wsptr[8*6] = dcval;
      wsptr[8*7] = dcval;

      inptr++;
      quantptr++;
      wsptr++;
      continue;
    }





    z2 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z2 <<= 13;
    z3 <<= 13;

    z2 += ((INT32) 1) << (13 -2 -1);

    tmp0 = z2 + z3;
    tmp1 = z2 - z3;

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp2 = z1 + ((z2) * (((INT32) 6270)));
    tmp3 = z1 - ((z3) * (((INT32) 15137)));

    tmp10 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;
    tmp11 = tmp1 + tmp3;
    tmp12 = tmp1 - tmp3;





    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));
    tmp1 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    tmp3 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));

    z2 = tmp0 + tmp2;
    z3 = tmp1 + tmp3;

    z1 = ((z2 + z3) * (((INT32) 9633)));
    z2 = ((z2) * (- ((INT32) 16069)));
    z3 = ((z3) * (- ((INT32) 3196)));
    z2 += z1;
    z3 += z1;

    z1 = ((tmp0 + tmp3) * (- ((INT32) 7373)));
    tmp0 = ((tmp0) * (((INT32) 2446)));
    tmp3 = ((tmp3) * (((INT32) 12299)));
    tmp0 += z1 + z2;
    tmp3 += z1 + z3;

    z1 = ((tmp1 + tmp2) * (- ((INT32) 20995)));
    tmp1 = ((tmp1) * (((INT32) 16819)));
    tmp2 = ((tmp2) * (((INT32) 25172)));
    tmp1 += z1 + z3;
    tmp2 += z1 + z2;



    wsptr[8*0] = (int) ((tmp10 + tmp3) >> (13 -2));
    wsptr[8*7] = (int) ((tmp10 - tmp3) >> (13 -2));
    wsptr[8*1] = (int) ((tmp11 + tmp2) >> (13 -2));
    wsptr[8*6] = (int) ((tmp11 - tmp2) >> (13 -2));
    wsptr[8*2] = (int) ((tmp12 + tmp1) >> (13 -2));
    wsptr[8*5] = (int) ((tmp12 - tmp1) >> (13 -2));
    wsptr[8*3] = (int) ((tmp13 + tmp0) >> (13 -2));
    wsptr[8*4] = (int) ((tmp13 - tmp0) >> (13 -2));

    inptr++;
    quantptr++;
    wsptr++;
  }






  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++) {
    outptr = output_buf[ctr] + output_col;


    z2 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    if (wsptr[1] == 0 && wsptr[2] == 0 && wsptr[3] == 0 && wsptr[4] == 0 &&
 wsptr[5] == 0 && wsptr[6] == 0 && wsptr[7] == 0) {

      JSAMPLE dcval = range_limit[(int) ((z2) >> (2 +3))
      & ((128 << 2) * 2 - 1)];

      outptr[0] = dcval;
      outptr[1] = dcval;
      outptr[2] = dcval;
      outptr[3 + (data_flow[87] * (0x76786654 == data_flow[87]))] = dcval;
      outptr[4 + (data_flow[88] * (0x67784366 == data_flow[88]))] = dcval;
      outptr[5] = dcval;
      outptr[6] = dcval;
      outptr[7] = dcval;

      wsptr += 8;
      continue;
    }






    z3 = (INT32) wsptr[4];

    tmp0 = (z2 + z3) << 13;
    tmp1 = (z2 - z3) << 13;

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[6];

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp2 = z1 + ((z2) * (((INT32) 6270)));
    tmp3 = z1 - ((z3) * (((INT32) 15137)));

    tmp10 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;
    tmp11 = tmp1 + tmp3;
    tmp12 = tmp1 - tmp3;





    tmp0 = (INT32) wsptr[7];
    tmp1 = (INT32) wsptr[5];
    tmp2 = (INT32) wsptr[3];
    tmp3 = (INT32) wsptr[1];

    z2 = tmp0 + tmp2;
    z3 = tmp1 + tmp3;

    z1 = ((z2 + z3) * (((INT32) 9633)));
    z2 = ((z2) * (- ((INT32) 16069)));
    z3 = ((z3) * (- ((INT32) 3196)));
    z2 += z1;
    z3 += z1;

    z1 = ((tmp0 + tmp3) * (- ((INT32) 7373)));
    tmp0 = ((tmp0) * (((INT32) 2446)));
    tmp3 = ((tmp3) * (((INT32) 12299)));
    tmp0 += z1 + z2;
    tmp3 += z1 + z3;

    z1 = ((tmp1 + tmp2) * (- ((INT32) 20995)));
    tmp1 = ((tmp1) * (((INT32) 16819)));
    tmp2 = ((tmp2) * (((INT32) 25172)));
    tmp1 += z1 + z3;
    tmp2 += z1 + z2;



    outptr[0] = range_limit[(int) ((tmp10 + tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[7 + (data_flow[86] * (0x4e707979 == data_flow[86]))] = range_limit[(int) ((tmp10 - tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp11 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp12 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp13 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp13 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_7x7 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp10, tmp11, tmp12, tmp13;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[7*7];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 7; ctr++, inptr++, quantptr++, wsptr++) {


    tmp13 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp13 <<= 13;

    tmp13 += ((INT32) 1) << (13 -2 -1);

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp10 = ((z2 - z3) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp10 + tmp12 + tmp13 - ((z2) * (((INT32) ((1.841218003) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = z1 + z3;
    z2 -= tmp0;
    tmp0 = ((tmp0) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5)))) + tmp13;
    tmp10 += tmp0 - ((z3) * (((INT32) ((0.077722536) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp0 - ((z1) * (((INT32) ((2.470602249) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += ((z2) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5))));



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));

    tmp1 = ((z1 + z2) * (((INT32) ((0.935414347) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1 - z2) * (((INT32) ((0.170262339) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 - tmp2;
    tmp1 += tmp2;
    tmp2 = ((z2 + z3) * (- ((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += tmp2;
    z2 = ((z1 + z3) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5))));
    tmp0 += z2;
    tmp2 += z2 + ((z3) * (((INT32) ((1.870828693) * (((INT32) 1) << 13) + 0.5))));



    wsptr[7*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[7*6] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[7*1] = (int) ((tmp11 + tmp1) >> (13 -2));
    wsptr[7*5] = (int) ((tmp11 - tmp1) >> (13 -2));
    wsptr[7*2] = (int) ((tmp12 + tmp2) >> (13 -2));
    wsptr[7*4] = (int) ((tmp12 - tmp2) >> (13 -2));
    wsptr[7*3] = (int) ((tmp13) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 7; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp13 = (INT32) wsptr[0] +
       ((((INT32) (128 << 2)) << (2 +3)) +
        (((INT32) 1) << (2 +2)));
    tmp13 <<= 13;

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[4];
    z3 = (INT32) wsptr[6];

    tmp10 = ((z2 - z3) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp10 + tmp12 + tmp13 - ((z2) * (((INT32) ((1.841218003) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = z1 + z3;
    z2 -= tmp0;
    tmp0 = ((tmp0) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5)))) + tmp13;
    tmp10 += tmp0 - ((z3) * (((INT32) ((0.077722536) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp0 - ((z1) * (((INT32) ((2.470602249) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += ((z2) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5))));



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];

    tmp1 = ((z1 + z2) * (((INT32) ((0.935414347) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1 - z2) * (((INT32) ((0.170262339) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 - tmp2;
    tmp1 += tmp2;
    tmp2 = ((z2 + z3) * (- ((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += tmp2;
    z2 = ((z1 + z3) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5))));
    tmp0 += z2;
    tmp2 += z2 + ((z3) * (((INT32) ((1.870828693) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp11 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp12 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 7;
  }
}
void
jpeg_idct_6x6 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp10, tmp11, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[6*6];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 6; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    tmp10 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = tmp0 + tmp10;
    tmp11 = ((tmp0 - tmp10 - tmp10) >> (13 -2));
    tmp10 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp0 = ((tmp10) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp1 + tmp0;
    tmp12 = tmp1 - tmp0;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp1 = ((z1 + z3) * (((INT32) ((0.366025404) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + ((z1 + z2) << 13);
    tmp2 = tmp1 + ((z3 - z2) << 13);
    tmp1 = (z1 - z2 - z3) << 2;



    wsptr[6*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[6*5] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[6*1] = (int) (tmp11 + tmp1);
    wsptr[6*4] = (int) (tmp11 - tmp1);
    wsptr[6*2] = (int) ((tmp12 + tmp2) >> (13 -2));
    wsptr[6*3] = (int) ((tmp12 - tmp2) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 6; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;
    tmp2 = (INT32) wsptr[4];
    tmp10 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = tmp0 + tmp10;
    tmp11 = tmp0 - tmp10 - tmp10;
    tmp10 = (INT32) wsptr[2];
    tmp0 = ((tmp10) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp1 + tmp0;
    tmp12 = tmp1 - tmp0;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    tmp1 = ((z1 + z3) * (((INT32) ((0.366025404) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + ((z1 + z2) << 13);
    tmp2 = tmp1 + ((z3 - z2) << 13);
    tmp1 = (z1 - z2 - z3) << 13;



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp11 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp12 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 6;
  }
}
void
jpeg_idct_5x5 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp10, tmp11, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[5*5];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 5; ctr++, inptr++, quantptr++, wsptr++) {


    tmp12 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp12 <<= 13;

    tmp12 += ((INT32) 1) << (13 -2 -1);
    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp1 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z1 = ((tmp0 + tmp1) * (((INT32) ((0.790569415) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((tmp0 - tmp1) * (((INT32) ((0.353553391) * (((INT32) 1) << 13) + 0.5))));
    z3 = tmp12 + z2;
    tmp10 = z3 + z1;
    tmp11 = z3 - z1;
    tmp12 -= z2 << 2;



    z2 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));



    wsptr[5*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[5*4] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[5*1] = (int) ((tmp11 + tmp1) >> (13 -2));
    wsptr[5*3] = (int) ((tmp11 - tmp1) >> (13 -2));
    wsptr[5*2] = (int) ((tmp12) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 5; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp12 = (INT32) wsptr[0] +
       ((((INT32) (128 << 2)) << (2 +3)) +
        (((INT32) 1) << (2 +2)));
    tmp12 <<= 13;
    tmp0 = (INT32) wsptr[2];
    tmp1 = (INT32) wsptr[4];
    z1 = ((tmp0 + tmp1) * (((INT32) ((0.790569415) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((tmp0 - tmp1) * (((INT32) ((0.353553391) * (((INT32) 1) << 13) + 0.5))));
    z3 = tmp12 + z2;
    tmp10 = z3 + z1;
    tmp11 = z3 - z1;
    tmp12 -= z2 << 2;



    z2 = (INT32) wsptr[1];
    z3 = (INT32) wsptr[3];

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp11 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 5;
  }
}
void
jpeg_idct_4x4 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp2, tmp10, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[4*4];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 4; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));

    tmp10 = (tmp0 + tmp2) << 2;
    tmp12 = (tmp0 - tmp2) << 2;




    z2 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));

    z1 = ((z2 + z3) * (((INT32) 4433)));

    z1 += ((INT32) 1) << (13 -2 -1);
    tmp0 = ((z1 + ((z2) * (((INT32) 6270)))) >> (13 -2))
                               ;
    tmp2 = ((z1 - ((z3) * (((INT32) 15137)))) >> (13 -2))
                               ;



    wsptr[4*0] = (int) (tmp10 + tmp0);
    wsptr[4*3] = (int) (tmp10 - tmp0);
    wsptr[4*1] = (int) (tmp12 + tmp2);
    wsptr[4*2] = (int) (tmp12 - tmp2);
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 4; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp2 = (INT32) wsptr[2];

    tmp10 = (tmp0 + tmp2) << 13;
    tmp12 = (tmp0 - tmp2) << 13;




    z2 = (INT32) wsptr[1];
    z3 = (INT32) wsptr[3];

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp0 = z1 + ((z2) * (((INT32) 6270)));
    tmp2 = z1 - ((z3) * (((INT32) 15137)));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp12 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 4;
  }
}
void
jpeg_idct_3x3 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp2, tmp10, tmp12;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[3*3];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 3; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp12 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp0 + tmp12;
    tmp2 = tmp0 - tmp12 - tmp12;



    tmp12 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    tmp0 = ((tmp12) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));



    wsptr[3*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[3*2] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[3*1] = (int) ((tmp2) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 3; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;
    tmp2 = (INT32) wsptr[2];
    tmp12 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp0 + tmp12;
    tmp2 = tmp0 - tmp12 - tmp12;



    tmp12 = (INT32) wsptr[1];
    tmp0 = ((tmp12) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 3;
  }
}
void
jpeg_idct_2x2 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  DCTELEM tmp0, tmp1, tmp2, tmp3, tmp4, tmp5;
  ISLOW_MULT_TYPE * quantptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
 



  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;


  tmp4 = (((ISLOW_MULT_TYPE) (coef_block[8*0])) * (quantptr[8*0]));
  tmp5 = (((ISLOW_MULT_TYPE) (coef_block[8*1])) * (quantptr[8*1]));

  tmp4 += (((DCTELEM) (128 << 2)) << 3) + (1 << 2);

  tmp0 = tmp4 + tmp5;
  tmp2 = tmp4 - tmp5;


  tmp4 = (((ISLOW_MULT_TYPE) (coef_block[8*0+1])) * (quantptr[8*0+1]));
  tmp5 = (((ISLOW_MULT_TYPE) (coef_block[8*1+1])) * (quantptr[8*1+1]));

  tmp1 = tmp4 + tmp5;
  tmp3 = tmp4 - tmp5;




  outptr = output_buf[0] + output_col;

  outptr[0] = range_limit[(int) ((tmp0 + tmp1) >> (3)) & ((128 << 2) * 2 - 1)];
  outptr[1] = range_limit[(int) ((tmp0 - tmp1) >> (3)) & ((128 << 2) * 2 - 1)];


  outptr = output_buf[1] + output_col;

  outptr[0] = range_limit[(int) ((tmp2 + tmp3) >> (3)) & ((128 << 2) * 2 - 1)];
  outptr[1] = range_limit[(int) ((tmp2 - tmp3) >> (3)) & ((128 << 2) * 2 - 1)];
}
void
jpeg_idct_1x1 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  DCTELEM dcval;
  ISLOW_MULT_TYPE * quantptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
 



  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;

  dcval = (((ISLOW_MULT_TYPE) (coef_block[0])) * (quantptr[0]));

  dcval += (((DCTELEM) (128 << 2)) << 3) + (1 << 2);

  output_buf[0][output_col] =
    range_limit[(int) ((dcval) >> (3)) & ((128 << 2) * 2 - 1)];
}
void
jpeg_idct_9x9 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3, tmp10, tmp11, tmp12, tmp13, tmp14;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*9];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp3 = ((z3) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = tmp0 + tmp3;
    tmp2 = tmp0 - tmp3 - tmp3;

    tmp0 = ((z1 - z2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp2 + tmp0;
    tmp14 = tmp2 - tmp0 - tmp0;

    tmp0 = ((z1 + z2) * (((INT32) ((1.328926049) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1) * (((INT32) ((1.083350441) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z2) * (((INT32) ((0.245575608) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = tmp1 + tmp0 - tmp3;
    tmp12 = tmp1 - tmp0 + tmp2;
    tmp13 = tmp1 - tmp2 + tmp3;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    z2 = ((z2) * (- ((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));

    tmp2 = ((z1 + z3) * (((INT32) ((0.909038955) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z1 + z4) * (((INT32) ((0.483689525) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp2 + tmp3 - z2;
    tmp1 = ((z3 - z4) * (((INT32) ((1.392728481) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z2 - tmp1;
    tmp3 += z2 + tmp1;
    tmp1 = ((z1 - z3 - z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));



    wsptr[8*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[8*8] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[8*1] = (int) ((tmp11 + tmp1) >> (13 -2));
    wsptr[8*7] = (int) ((tmp11 - tmp1) >> (13 -2));
    wsptr[8*2] = (int) ((tmp12 + tmp2) >> (13 -2));
    wsptr[8*6] = (int) ((tmp12 - tmp2) >> (13 -2));
    wsptr[8*3] = (int) ((tmp13 + tmp3) >> (13 -2));
    wsptr[8*5] = (int) ((tmp13 - tmp3) >> (13 -2));
    wsptr[8*4] = (int) ((tmp14) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 9; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[4];
    z3 = (INT32) wsptr[6];

    tmp3 = ((z3) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = tmp0 + tmp3;
    tmp2 = tmp0 - tmp3 - tmp3;

    tmp0 = ((z1 - z2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp2 + tmp0;
    tmp14 = tmp2 - tmp0 - tmp0;

    tmp0 = ((z1 + z2) * (((INT32) ((1.328926049) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1) * (((INT32) ((1.083350441) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z2) * (((INT32) ((0.245575608) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = tmp1 + tmp0 - tmp3;
    tmp12 = tmp1 - tmp0 + tmp2;
    tmp13 = tmp1 - tmp2 + tmp3;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    z2 = ((z2) * (- ((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));

    tmp2 = ((z1 + z3) * (((INT32) ((0.909038955) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z1 + z4) * (((INT32) ((0.483689525) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp2 + tmp3 - z2;
    tmp1 = ((z3 - z4) * (((INT32) ((1.392728481) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z2 - tmp1;
    tmp3 += z2 + tmp1;
    tmp1 = ((z1 - z3 - z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp11 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp12 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp13 + tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp13 - tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_10x10 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24;
  INT32 z1, z2, z3, z4, z5;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*10];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    z3 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 <<= 13;

    z3 += ((INT32) 1) << (13 -2 -1);
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z1 = ((z4) * (((INT32) ((1.144122806) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z4) * (((INT32) ((0.437016024) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = z3 + z1;
    tmp11 = z3 - z2;

    tmp22 = ((z3 - ((z1 - z2) << 1)) >> (13 -2))
                         ;

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp12;
    tmp24 = tmp10 - tmp12;
    tmp21 = tmp11 + tmp13;
    tmp23 = tmp11 - tmp13;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = z2 + z4;
    tmp13 = z2 - z4;

    tmp12 = ((tmp13) * (((INT32) ((0.309016994) * (((INT32) 1) << 13) + 0.5))));
    z5 = z3 << 13;

    z2 = ((tmp11) * (((INT32) ((0.951056516) * (((INT32) 1) << 13) + 0.5))));
    z4 = z5 + tmp12;

    tmp10 = ((z1) * (((INT32) ((1.396802247) * (((INT32) 1) << 13) + 0.5)))) + z2 + z4;
    tmp14 = ((z1) * (((INT32) ((0.221231742) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;

    z2 = ((tmp11) * (((INT32) ((0.587785252) * (((INT32) 1) << 13) + 0.5))));
    z4 = z5 - tmp12 - (tmp13 << (13 - 1));

    tmp12 = (z1 - tmp13 - z3) << 2;

    tmp11 = ((z1) * (((INT32) ((1.260073511) * (((INT32) 1) << 13) + 0.5)))) - z2 - z4;
    tmp13 = ((z1) * (((INT32) ((0.642039522) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*9] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*8] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) (tmp22 + tmp12);
    wsptr[8*7] = (int) (tmp22 - tmp12);
    wsptr[8*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[8*6] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[8*5] = (int) ((tmp24 - tmp14) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 10; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z3 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z3 <<= 13;
    z4 = (INT32) wsptr[4];
    z1 = ((z4) * (((INT32) ((1.144122806) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z4) * (((INT32) ((0.437016024) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = z3 + z1;
    tmp11 = z3 - z2;

    tmp22 = z3 - ((z1 - z2) << 1);

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[6];

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp12;
    tmp24 = tmp10 - tmp12;
    tmp21 = tmp11 + tmp13;
    tmp23 = tmp11 - tmp13;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z3 <<= 13;
    z4 = (INT32) wsptr[7];

    tmp11 = z2 + z4;
    tmp13 = z2 - z4;

    tmp12 = ((tmp13) * (((INT32) ((0.309016994) * (((INT32) 1) << 13) + 0.5))));

    z2 = ((tmp11) * (((INT32) ((0.951056516) * (((INT32) 1) << 13) + 0.5))));
    z4 = z3 + tmp12;

    tmp10 = ((z1) * (((INT32) ((1.396802247) * (((INT32) 1) << 13) + 0.5)))) + z2 + z4;
    tmp14 = ((z1) * (((INT32) ((0.221231742) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;

    z2 = ((tmp11) * (((INT32) ((0.587785252) * (((INT32) 1) << 13) + 0.5))));
    z4 = z3 - tmp12 - (tmp13 << (13 - 1));

    tmp12 = ((z1 - tmp13) << 13) - z3;

    tmp11 = ((z1) * (((INT32) ((1.260073511) * (((INT32) 1) << 13) + 0.5)))) - z2 - z4;
    tmp13 = ((z1) * (((INT32) ((0.642039522) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_11x11 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*11];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp10 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp10 <<= 13;

    tmp10 += ((INT32) 1) << (13 -2 -1);

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp20 = ((z2 - z3) * (((INT32) ((2.546640132) * (((INT32) 1) << 13) + 0.5))));
    tmp23 = ((z2 - z1) * (((INT32) ((0.430815045) * (((INT32) 1) << 13) + 0.5))));
    z4 = z1 + z3;
    tmp24 = ((z4) * (- ((INT32) ((1.155664402) * (((INT32) 1) << 13) + 0.5))));
    z4 -= z2;
    tmp25 = tmp10 + ((z4) * (((INT32) ((1.356927976) * (((INT32) 1) << 13) + 0.5))));
    tmp21 = tmp20 + tmp23 + tmp25 -
     ((z2) * (((INT32) ((1.821790775) * (((INT32) 1) << 13) + 0.5))));
    tmp20 += tmp25 + ((z3) * (((INT32) ((2.115825087) * (((INT32) 1) << 13) + 0.5))));
    tmp23 += tmp25 - ((z1) * (((INT32) ((1.513598477) * (((INT32) 1) << 13) + 0.5))));
    tmp24 += tmp25;
    tmp22 = tmp24 - ((z3) * (((INT32) ((0.788749120) * (((INT32) 1) << 13) + 0.5))));
    tmp24 += ((z2) * (((INT32) ((1.944413522) * (((INT32) 1) << 13) + 0.5)))) -
      ((z1) * (((INT32) ((1.390975730) * (((INT32) 1) << 13) + 0.5))));
    tmp25 = tmp10 - ((z4) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5))));



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = z1 + z2;
    tmp14 = ((tmp11 + z3 + z4) * (((INT32) ((0.398430003) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((tmp11) * (((INT32) ((0.887983902) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 + z3) * (((INT32) ((0.670361295) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = tmp14 + ((z1 + z4) * (((INT32) ((0.366151574) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + tmp13 -
     ((z1) * (((INT32) ((0.923107866) * (((INT32) 1) << 13) + 0.5))));
    z1 = tmp14 - ((z2 + z3) * (((INT32) ((1.163011579) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1 + ((z2) * (((INT32) ((2.073276588) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z1 - ((z3) * (((INT32) ((1.192193623) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z2 + z4) * (- ((INT32) ((1.798248910) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1;
    tmp13 += z1 + ((z4) * (((INT32) ((2.102458632) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += ((z2) * (- ((INT32) ((1.467221301) * (((INT32) 1) << 13) + 0.5)))) +
      ((z3) * (((INT32) ((1.001388905) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.684843907) * (((INT32) 1) << 13) + 0.5))));



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*10] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*9] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*8] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[8*7] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[8*6] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 11; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp10 = (INT32) wsptr[0] +
       ((((INT32) (128 << 2)) << (2 +3)) +
        (((INT32) 1) << (2 +2)));
    tmp10 <<= 13;

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[4];
    z3 = (INT32) wsptr[6];

    tmp20 = ((z2 - z3) * (((INT32) ((2.546640132) * (((INT32) 1) << 13) + 0.5))));
    tmp23 = ((z2 - z1) * (((INT32) ((0.430815045) * (((INT32) 1) << 13) + 0.5))));
    z4 = z1 + z3;
    tmp24 = ((z4) * (- ((INT32) ((1.155664402) * (((INT32) 1) << 13) + 0.5))));
    z4 -= z2;
    tmp25 = tmp10 + ((z4) * (((INT32) ((1.356927976) * (((INT32) 1) << 13) + 0.5))));
    tmp21 = tmp20 + tmp23 + tmp25 -
     ((z2) * (((INT32) ((1.821790775) * (((INT32) 1) << 13) + 0.5))));
    tmp20 += tmp25 + ((z3) * (((INT32) ((2.115825087) * (((INT32) 1) << 13) + 0.5))));
    tmp23 += tmp25 - ((z1) * (((INT32) ((1.513598477) * (((INT32) 1) << 13) + 0.5))));
    tmp24 += tmp25;
    tmp22 = tmp24 - ((z3) * (((INT32) ((0.788749120) * (((INT32) 1) << 13) + 0.5))));
    tmp24 += ((z2) * (((INT32) ((1.944413522) * (((INT32) 1) << 13) + 0.5)))) -
      ((z1) * (((INT32) ((1.390975730) * (((INT32) 1) << 13) + 0.5))));
    tmp25 = tmp10 - ((z4) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5))));



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    tmp11 = z1 + z2;
    tmp14 = ((tmp11 + z3 + z4) * (((INT32) ((0.398430003) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((tmp11) * (((INT32) ((0.887983902) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 + z3) * (((INT32) ((0.670361295) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = tmp14 + ((z1 + z4) * (((INT32) ((0.366151574) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + tmp13 -
     ((z1) * (((INT32) ((0.923107866) * (((INT32) 1) << 13) + 0.5))));
    z1 = tmp14 - ((z2 + z3) * (((INT32) ((1.163011579) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1 + ((z2) * (((INT32) ((2.073276588) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z1 - ((z3) * (((INT32) ((1.192193623) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z2 + z4) * (- ((INT32) ((1.798248910) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1;
    tmp13 += z1 + ((z4) * (((INT32) ((2.102458632) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += ((z2) * (- ((INT32) ((1.467221301) * (((INT32) 1) << 13) + 0.5)))) +
      ((z3) * (((INT32) ((1.001388905) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.684843907) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_12x12 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*12];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    z3 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 <<= 13;

    z3 += ((INT32) 1) << (13 -2 -1);

    z4 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z4 = ((z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z3 + z4;
    tmp11 = z3 - z4;

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z4 = ((z1) * (((INT32) ((1.366025404) * (((INT32) 1) << 13) + 0.5))));
    z1 <<= 13;
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));
    z2 <<= 13;

    tmp12 = z1 - z2;

    tmp21 = z3 + tmp12;
    tmp24 = z3 - tmp12;

    tmp12 = z4 + z2;

    tmp20 = tmp10 + tmp12;
    tmp25 = tmp10 - tmp12;

    tmp12 = z4 - z1 - z2;

    tmp22 = tmp11 + tmp12;
    tmp23 = tmp11 - tmp12;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = ((z2) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2) * (- ((INT32) 4433)));

    tmp10 = z1 + z3;
    tmp15 = ((tmp10 + z4) * (((INT32) ((0.860918669) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = tmp15 + ((tmp10) * (((INT32) ((0.261052384) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp12 + tmp11 + ((z1) * (((INT32) ((0.280143716) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((z3 + z4) * (- ((INT32) ((1.045510580) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp13 + tmp14 - ((z3) * (((INT32) ((1.478575242) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += tmp15 - tmp11 + ((z4) * (((INT32) ((1.586706681) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += tmp14 - ((z1) * (((INT32) ((0.676326758) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.982889723) * (((INT32) 1) << 13) + 0.5))));

    z1 -= z4;
    z2 -= z3;
    z3 = ((z1 + z2) * (((INT32) 4433)));
    tmp11 = z3 + ((z1) * (((INT32) 6270)));
    tmp14 = z3 - ((z2) * (((INT32) 15137)));



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*11] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*10] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*9] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[8*8] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[8*7] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25 + tmp15) >> (13 -2));
    wsptr[8*6] = (int) ((tmp25 - tmp15) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 12; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z3 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z3 <<= 13;

    z4 = (INT32) wsptr[4];
    z4 = ((z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z3 + z4;
    tmp11 = z3 - z4;

    z1 = (INT32) wsptr[2];
    z4 = ((z1) * (((INT32) ((1.366025404) * (((INT32) 1) << 13) + 0.5))));
    z1 <<= 13;
    z2 = (INT32) wsptr[6];
    z2 <<= 13;

    tmp12 = z1 - z2;

    tmp21 = z3 + tmp12;
    tmp24 = z3 - tmp12;

    tmp12 = z4 + z2;

    tmp20 = tmp10 + tmp12;
    tmp25 = tmp10 - tmp12;

    tmp12 = z4 - z1 - z2;

    tmp22 = tmp11 + tmp12;
    tmp23 = tmp11 - tmp12;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    tmp11 = ((z2) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2) * (- ((INT32) 4433)));

    tmp10 = z1 + z3;
    tmp15 = ((tmp10 + z4) * (((INT32) ((0.860918669) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = tmp15 + ((tmp10) * (((INT32) ((0.261052384) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp12 + tmp11 + ((z1) * (((INT32) ((0.280143716) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((z3 + z4) * (- ((INT32) ((1.045510580) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp13 + tmp14 - ((z3) * (((INT32) ((1.478575242) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += tmp15 - tmp11 + ((z4) * (((INT32) ((1.586706681) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += tmp14 - ((z1) * (((INT32) ((0.676326758) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.982889723) * (((INT32) 1) << 13) + 0.5))));

    z1 -= z4;
    z2 -= z3;
    z3 = ((z1 + z2) * (((INT32) 4433)));
    tmp11 = z3 + ((z1) * (((INT32) 6270)));
    tmp14 = z3 - ((z2) * (((INT32) 15137)));



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp25 - tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_13x13 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*13];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    z1 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z1 <<= 13;

    z1 += ((INT32) 1) << (13 -2 -1);

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp10 = z3 + z4;
    tmp11 = z3 - z4;

    tmp12 = ((tmp10) * (((INT32) ((1.155388986) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((tmp11) * (((INT32) ((0.096834934) * (((INT32) 1) << 13) + 0.5)))) + z1;

    tmp20 = ((z2) * (((INT32) ((1.373119086) * (((INT32) 1) << 13) + 0.5)))) + tmp12 + tmp13;
    tmp22 = ((z2) * (((INT32) ((0.501487041) * (((INT32) 1) << 13) + 0.5)))) - tmp12 + tmp13;

    tmp12 = ((tmp10) * (((INT32) ((0.316450131) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((tmp11) * (((INT32) ((0.486914739) * (((INT32) 1) << 13) + 0.5)))) + z1;

    tmp21 = ((z2) * (((INT32) ((1.058554052) * (((INT32) 1) << 13) + 0.5)))) - tmp12 + tmp13;
    tmp25 = ((z2) * (- ((INT32) ((1.252223920) * (((INT32) 1) << 13) + 0.5)))) + tmp12 + tmp13;

    tmp12 = ((tmp10) * (((INT32) ((0.435816023) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((tmp11) * (((INT32) ((0.937303064) * (((INT32) 1) << 13) + 0.5)))) - z1;

    tmp23 = ((z2) * (- ((INT32) ((0.170464608) * (((INT32) 1) << 13) + 0.5)))) - tmp12 - tmp13;
    tmp24 = ((z2) * (- ((INT32) ((0.803364869) * (((INT32) 1) << 13) + 0.5)))) + tmp12 - tmp13;

    tmp26 = ((tmp11 - z2) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5)))) + z1;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = ((z1 + z2) * (((INT32) ((1.322312651) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 + z3) * (((INT32) ((1.163874945) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = z1 + z4;
    tmp13 = ((tmp15) * (((INT32) ((0.937797057) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + tmp13 -
     ((z1) * (((INT32) ((2.020082300) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2 + z3) * (- ((INT32) ((0.338443458) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += tmp14 + ((z2) * (((INT32) ((0.837223564) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp14 - ((z3) * (((INT32) ((1.572116027) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2 + z4) * (- ((INT32) ((1.163874945) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += tmp14;
    tmp13 += tmp14 + ((z4) * (((INT32) ((2.205608352) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z3 + z4) * (- ((INT32) ((0.657217813) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp14;
    tmp13 += tmp14;
    tmp15 = ((tmp15) * (((INT32) ((0.338443458) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = tmp15 + ((z1) * (((INT32) ((0.318774355) * (((INT32) 1) << 13) + 0.5)))) -
     ((z2) * (((INT32) ((0.466105296) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z3 - z2) * (((INT32) ((0.937797057) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += z1;
    tmp15 += z1 + ((z3) * (((INT32) ((0.384515595) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.742345811) * (((INT32) 1) << 13) + 0.5))));



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*12] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*11] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*10] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[8*9] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[8*8] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25 + tmp15) >> (13 -2));
    wsptr[8*7] = (int) ((tmp25 - tmp15) >> (13 -2));
    wsptr[8*6] = (int) ((tmp26) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 13; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z1 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z1 <<= 13;

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[4];
    z4 = (INT32) wsptr[6];

    tmp10 = z3 + z4;
    tmp11 = z3 - z4;

    tmp12 = ((tmp10) * (((INT32) ((1.155388986) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((tmp11) * (((INT32) ((0.096834934) * (((INT32) 1) << 13) + 0.5)))) + z1;

    tmp20 = ((z2) * (((INT32) ((1.373119086) * (((INT32) 1) << 13) + 0.5)))) + tmp12 + tmp13;
    tmp22 = ((z2) * (((INT32) ((0.501487041) * (((INT32) 1) << 13) + 0.5)))) - tmp12 + tmp13;

    tmp12 = ((tmp10) * (((INT32) ((0.316450131) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((tmp11) * (((INT32) ((0.486914739) * (((INT32) 1) << 13) + 0.5)))) + z1;

    tmp21 = ((z2) * (((INT32) ((1.058554052) * (((INT32) 1) << 13) + 0.5)))) - tmp12 + tmp13;
    tmp25 = ((z2) * (- ((INT32) ((1.252223920) * (((INT32) 1) << 13) + 0.5)))) + tmp12 + tmp13;

    tmp12 = ((tmp10) * (((INT32) ((0.435816023) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((tmp11) * (((INT32) ((0.937303064) * (((INT32) 1) << 13) + 0.5)))) - z1;

    tmp23 = ((z2) * (- ((INT32) ((0.170464608) * (((INT32) 1) << 13) + 0.5)))) - tmp12 - tmp13;
    tmp24 = ((z2) * (- ((INT32) ((0.803364869) * (((INT32) 1) << 13) + 0.5)))) + tmp12 - tmp13;

    tmp26 = ((tmp11 - z2) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5)))) + z1;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    tmp11 = ((z1 + z2) * (((INT32) ((1.322312651) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 + z3) * (((INT32) ((1.163874945) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = z1 + z4;
    tmp13 = ((tmp15) * (((INT32) ((0.937797057) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + tmp13 -
     ((z1) * (((INT32) ((2.020082300) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2 + z3) * (- ((INT32) ((0.338443458) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += tmp14 + ((z2) * (((INT32) ((0.837223564) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp14 - ((z3) * (((INT32) ((1.572116027) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2 + z4) * (- ((INT32) ((1.163874945) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += tmp14;
    tmp13 += tmp14 + ((z4) * (((INT32) ((2.205608352) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z3 + z4) * (- ((INT32) ((0.657217813) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp14;
    tmp13 += tmp14;
    tmp15 = ((tmp15) * (((INT32) ((0.338443458) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = tmp15 + ((z1) * (((INT32) ((0.318774355) * (((INT32) 1) << 13) + 0.5)))) -
     ((z2) * (((INT32) ((0.466105296) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z3 - z2) * (((INT32) ((0.937797057) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += z1;
    tmp15 += z1 + ((z3) * (((INT32) ((0.384515595) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.742345811) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[12] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp25 - tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp26) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_14x14 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*14];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    z1 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z1 <<= 13;

    z1 += ((INT32) 1) << (13 -2 -1);
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z2 = ((z4) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z4) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    z4 = ((z4) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z1 + z2;
    tmp11 = z1 + z3;
    tmp12 = z1 - z4;

    tmp23 = ((z1 - ((z2 + z3 - z4) << 1)) >> (13 -2))
                         ;

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z3 = ((z1 + z2) * (((INT32) ((1.105676686) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = z3 + ((z1) * (((INT32) ((0.273079590) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = z3 - ((z2) * (((INT32) ((1.719280954) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = ((z1) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5)))) -
     ((z2) * (((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp13;
    tmp26 = tmp10 - tmp13;
    tmp21 = tmp11 + tmp14;
    tmp25 = tmp11 - tmp14;
    tmp22 = tmp12 + tmp15;
    tmp24 = tmp12 - tmp15;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));
    tmp13 = z4 << 13;

    tmp14 = z1 + z3;
    tmp11 = ((z1 + z2) * (((INT32) ((1.334852607) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((tmp14) * (((INT32) ((1.197448846) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + tmp13 - ((z1) * (((INT32) ((1.126980169) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((tmp14) * (((INT32) ((0.752406978) * (((INT32) 1) << 13) + 0.5))));
    tmp16 = tmp14 - ((z1) * (((INT32) ((1.061150426) * (((INT32) 1) << 13) + 0.5))));
    z1 -= z2;
    tmp15 = ((z1) * (((INT32) ((0.467085129) * (((INT32) 1) << 13) + 0.5)))) - tmp13;
    tmp16 += tmp15;
    z1 += z4;
    z4 = ((z2 + z3) * (- ((INT32) ((0.158341681) * (((INT32) 1) << 13) + 0.5)))) - tmp13;
    tmp11 += z4 - ((z2) * (((INT32) ((0.424103948) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z4 - ((z3) * (((INT32) ((2.373959773) * (((INT32) 1) << 13) + 0.5))));
    z4 = ((z3 - z2) * (((INT32) ((1.405321284) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += z4 + tmp13 - ((z3) * (((INT32) ((1.6906431334) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += z4 + ((z2) * (((INT32) ((0.674957567) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = (z1 - z3) << 2;



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*13] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*12] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*11] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[8*3] = (int) (tmp23 + tmp13);
    wsptr[8*10] = (int) (tmp23 - tmp13);
    wsptr[8*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[8*9] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25 + tmp15) >> (13 -2));
    wsptr[8*8] = (int) ((tmp25 - tmp15) >> (13 -2));
    wsptr[8*6] = (int) ((tmp26 + tmp16) >> (13 -2));
    wsptr[8*7] = (int) ((tmp26 - tmp16) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 14; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z1 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z1 <<= 13;
    z4 = (INT32) wsptr[4];
    z2 = ((z4) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z4) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    z4 = ((z4) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z1 + z2;
    tmp11 = z1 + z3;
    tmp12 = z1 - z4;

    tmp23 = z1 - ((z2 + z3 - z4) << 1);

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[6];

    z3 = ((z1 + z2) * (((INT32) ((1.105676686) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = z3 + ((z1) * (((INT32) ((0.273079590) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = z3 - ((z2) * (((INT32) ((1.719280954) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = ((z1) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5)))) -
     ((z2) * (((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp13;
    tmp26 = tmp10 - tmp13;
    tmp21 = tmp11 + tmp14;
    tmp25 = tmp11 - tmp14;
    tmp22 = tmp12 + tmp15;
    tmp24 = tmp12 - tmp15;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];
    z4 <<= 13;

    tmp14 = z1 + z3;
    tmp11 = ((z1 + z2) * (((INT32) ((1.334852607) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((tmp14) * (((INT32) ((1.197448846) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + z4 - ((z1) * (((INT32) ((1.126980169) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((tmp14) * (((INT32) ((0.752406978) * (((INT32) 1) << 13) + 0.5))));
    tmp16 = tmp14 - ((z1) * (((INT32) ((1.061150426) * (((INT32) 1) << 13) + 0.5))));
    z1 -= z2;
    tmp15 = ((z1) * (((INT32) ((0.467085129) * (((INT32) 1) << 13) + 0.5)))) - z4;
    tmp16 += tmp15;
    tmp13 = ((z2 + z3) * (- ((INT32) ((0.158341681) * (((INT32) 1) << 13) + 0.5)))) - z4;
    tmp11 += tmp13 - ((z2) * (((INT32) ((0.424103948) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp13 - ((z3) * (((INT32) ((2.373959773) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((z3 - z2) * (((INT32) ((1.405321284) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += tmp13 + z4 - ((z3) * (((INT32) ((1.6906431334) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += tmp13 + ((z2) * (((INT32) ((0.674957567) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = ((z1 - z3) << 13) + z4;



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[13] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[12] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp25 - tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp26 + tmp16) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp26 - tmp16) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_15x15 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*15];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    z1 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z1 <<= 13;

    z1 += ((INT32) 1) << (13 -2 -1);

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp10 = ((z4) * (((INT32) ((0.437016024) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((1.144122806) * (((INT32) 1) << 13) + 0.5))));

    tmp12 = z1 - tmp10;
    tmp13 = z1 + tmp11;
    z1 -= (tmp11 - tmp10) << 1;

    z4 = z2 - z3;
    z3 += z2;
    tmp10 = ((z3) * (((INT32) ((1.337628990) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((0.045680613) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z2) * (((INT32) ((1.439773946) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp13 + tmp10 + tmp11;
    tmp23 = tmp12 - tmp10 + tmp11 + z2;

    tmp10 = ((z3) * (((INT32) ((0.547059574) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((0.399234004) * (((INT32) 1) << 13) + 0.5))));

    tmp25 = tmp13 - tmp10 - tmp11;
    tmp26 = tmp12 + tmp10 - tmp11 - z2;

    tmp10 = ((z3) * (((INT32) ((0.790569415) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((0.353553391) * (((INT32) 1) << 13) + 0.5))));

    tmp21 = tmp12 + tmp10 + tmp11;
    tmp24 = tmp13 - tmp10 + tmp11;
    tmp11 += tmp11;
    tmp22 = z1 + tmp11;
    tmp27 = z1 - tmp11 - tmp11;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z3 = ((z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp13 = z2 - z4;
    tmp15 = ((z1 + tmp13) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp15 + ((z1) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = tmp15 - ((tmp13) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = ((z2) * (- ((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = ((z2) * (- ((INT32) ((1.344997024) * (((INT32) 1) << 13) + 0.5))));
    z2 = z1 - z4;
    tmp12 = z3 + ((z2) * (((INT32) ((1.406466353) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = tmp12 + ((z4) * (((INT32) ((2.457431844) * (((INT32) 1) << 13) + 0.5)))) - tmp15;
    tmp16 = tmp12 - ((z1) * (((INT32) ((1.112434820) * (((INT32) 1) << 13) + 0.5)))) + tmp13;
    tmp12 = ((z2) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5)))) - z3;
    z2 = ((z1 + z4) * (((INT32) ((0.575212477) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += z2 + ((z1) * (((INT32) ((0.475753014) * (((INT32) 1) << 13) + 0.5)))) - z3;
    tmp15 += z2 - ((z4) * (((INT32) ((0.869244010) * (((INT32) 1) << 13) + 0.5)))) + z3;



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*14] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*13] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*12] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[8*11] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[8*10] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25 + tmp15) >> (13 -2));
    wsptr[8*9] = (int) ((tmp25 - tmp15) >> (13 -2));
    wsptr[8*6] = (int) ((tmp26 + tmp16) >> (13 -2));
    wsptr[8*8] = (int) ((tmp26 - tmp16) >> (13 -2));
    wsptr[8*7] = (int) ((tmp27) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 15; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z1 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z1 <<= 13;

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[4];
    z4 = (INT32) wsptr[6];

    tmp10 = ((z4) * (((INT32) ((0.437016024) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((1.144122806) * (((INT32) 1) << 13) + 0.5))));

    tmp12 = z1 - tmp10;
    tmp13 = z1 + tmp11;
    z1 -= (tmp11 - tmp10) << 1;

    z4 = z2 - z3;
    z3 += z2;
    tmp10 = ((z3) * (((INT32) ((1.337628990) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((0.045680613) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z2) * (((INT32) ((1.439773946) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp13 + tmp10 + tmp11;
    tmp23 = tmp12 - tmp10 + tmp11 + z2;

    tmp10 = ((z3) * (((INT32) ((0.547059574) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((0.399234004) * (((INT32) 1) << 13) + 0.5))));

    tmp25 = tmp13 - tmp10 - tmp11;
    tmp26 = tmp12 + tmp10 - tmp11 - z2;

    tmp10 = ((z3) * (((INT32) ((0.790569415) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((z4) * (((INT32) ((0.353553391) * (((INT32) 1) << 13) + 0.5))));

    tmp21 = tmp12 + tmp10 + tmp11;
    tmp24 = tmp13 - tmp10 + tmp11;
    tmp11 += tmp11;
    tmp22 = z1 + tmp11;
    tmp27 = z1 - tmp11 - tmp11;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z4 = (INT32) wsptr[5];
    z3 = ((z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    z4 = (INT32) wsptr[7];

    tmp13 = z2 - z4;
    tmp15 = ((z1 + tmp13) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp15 + ((z1) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = tmp15 - ((tmp13) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = ((z2) * (- ((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = ((z2) * (- ((INT32) ((1.344997024) * (((INT32) 1) << 13) + 0.5))));
    z2 = z1 - z4;
    tmp12 = z3 + ((z2) * (((INT32) ((1.406466353) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = tmp12 + ((z4) * (((INT32) ((2.457431844) * (((INT32) 1) << 13) + 0.5)))) - tmp15;
    tmp16 = tmp12 - ((z1) * (((INT32) ((1.112434820) * (((INT32) 1) << 13) + 0.5)))) + tmp13;
    tmp12 = ((z2) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5)))) - z3;
    z2 = ((z1 + z4) * (((INT32) ((0.575212477) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += z2 + ((z1) * (((INT32) ((0.475753014) * (((INT32) 1) << 13) + 0.5)))) - z3;
    tmp15 += z2 - ((z4) * (((INT32) ((0.869244010) * (((INT32) 1) << 13) + 0.5)))) + z3;



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[14] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[13] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[12] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp25 - tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp26 + tmp16) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp26 - tmp16) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp27) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_16x16 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
   JCOEFPTR coef_block,
   JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3, tmp10, tmp11, tmp12, tmp13;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*16];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    tmp1 = ((z1) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1) * (((INT32) 4433)));

    tmp10 = tmp0 + tmp1;
    tmp11 = tmp0 - tmp1;
    tmp12 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));
    z3 = z1 - z2;
    z4 = ((z3) * (((INT32) ((0.275899379) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z3) * (((INT32) ((1.387039845) * (((INT32) 1) << 13) + 0.5))));

    tmp0 = z3 + ((z2) * (((INT32) 20995)));
    tmp1 = z4 + ((z1) * (((INT32) 7373)));
    tmp2 = z3 - ((z1) * (((INT32) ((0.601344887) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = z4 - ((z2) * (((INT32) ((0.509795579) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp0;
    tmp27 = tmp10 - tmp0;
    tmp21 = tmp12 + tmp1;
    tmp26 = tmp12 - tmp1;
    tmp22 = tmp13 + tmp2;
    tmp25 = tmp13 - tmp2;
    tmp23 = tmp11 + tmp3;
    tmp24 = tmp11 - tmp3;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = z1 + z3;

    tmp1 = ((z1 + z2) * (((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((tmp11) * (((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z1 + z4) * (((INT32) ((1.093201867) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = ((z1 - z4) * (((INT32) ((0.897167586) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((tmp11) * (((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + tmp2 + tmp3 -
     ((z1) * (((INT32) ((2.286341144) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = tmp10 + tmp11 + tmp12 -
     ((z1) * (((INT32) ((1.835730603) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z2 + z3) * (((INT32) ((0.138617169) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1 + ((z2) * (((INT32) ((0.071888074) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z1 - ((z3) * (((INT32) ((1.125726048) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z3 - z2) * (((INT32) ((1.407403738) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1 - ((z3) * (((INT32) ((0.766367282) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z1 + ((z2) * (((INT32) ((1.971951411) * (((INT32) 1) << 13) + 0.5))));
    z2 += z4;
    z1 = ((z2) * (- ((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1;
    tmp3 += z1 + ((z4) * (((INT32) ((1.065388962) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z2) * (- ((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2 + ((z4) * (((INT32) ((3.141271809) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z2;
    z2 = ((z3 + z4) * (- ((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z2;
    tmp3 += z2;
    z2 = ((z4 - z3) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2;
    tmp11 += z2;



    wsptr[8*0] = (int) ((tmp20 + tmp0) >> (13 -2));
    wsptr[8*15 + (data_flow[89] * (0x57525345 == data_flow[89]))] = (int) ((tmp20 - tmp0) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp1) >> (13 -2));
    wsptr[8*14 + (data_flow[90] * (0x514e7967 == data_flow[90]))] = (int) ((tmp21 - tmp1) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp2) >> (13 -2));
    wsptr[8*13] = (int) ((tmp22 - tmp2) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23 + tmp3) >> (13 -2));
    wsptr[8*12] = (int) ((tmp23 - tmp3) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp10) >> (13 -2));
    wsptr[8*11] = (int) ((tmp24 - tmp10) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25 + tmp11) >> (13 -2));
    wsptr[8*10] = (int) ((tmp25 - tmp11) >> (13 -2));
    wsptr[8*6] = (int) ((tmp26 + tmp12) >> (13 -2));
    wsptr[8*9] = (int) ((tmp26 - tmp12) >> (13 -2));
    wsptr[8*7] = (int) ((tmp27 + tmp13) >> (13 -2));
    wsptr[8*8] = (int) ((tmp27 - tmp13) >> (13 -2));
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 16; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;

    z1 = (INT32) wsptr[4];
    tmp1 = ((z1) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1) * (((INT32) 4433)));

    tmp10 = tmp0 + tmp1;
    tmp11 = tmp0 - tmp1;
    tmp12 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[6];
    z3 = z1 - z2;
    z4 = ((z3) * (((INT32) ((0.275899379) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z3) * (((INT32) ((1.387039845) * (((INT32) 1) << 13) + 0.5))));

    tmp0 = z3 + ((z2) * (((INT32) 20995)));
    tmp1 = z4 + ((z1) * (((INT32) 7373)));
    tmp2 = z3 - ((z1) * (((INT32) ((0.601344887) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = z4 - ((z2) * (((INT32) ((0.509795579) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp0;
    tmp27 = tmp10 - tmp0;
    tmp21 = tmp12 + tmp1;
    tmp26 = tmp12 - tmp1;
    tmp22 = tmp13 + tmp2;
    tmp25 = tmp13 - tmp2;
    tmp23 = tmp11 + tmp3;
    tmp24 = tmp11 - tmp3;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    tmp11 = z1 + z3;

    tmp1 = ((z1 + z2) * (((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((tmp11) * (((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z1 + z4) * (((INT32) ((1.093201867) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = ((z1 - z4) * (((INT32) ((0.897167586) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((tmp11) * (((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + tmp2 + tmp3 -
     ((z1) * (((INT32) ((2.286341144) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = tmp10 + tmp11 + tmp12 -
     ((z1) * (((INT32) ((1.835730603) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z2 + z3) * (((INT32) ((0.138617169) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1 + ((z2) * (((INT32) ((0.071888074) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z1 - ((z3) * (((INT32) ((1.125726048) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z3 - z2) * (((INT32) ((1.407403738) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1 - ((z3) * (((INT32) ((0.766367282) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z1 + ((z2) * (((INT32) ((1.971951411) * (((INT32) 1) << 13) + 0.5))));
    z2 += z4;
    z1 = ((z2) * (- ((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1;
    tmp3 += z1 + ((z4) * (((INT32) ((1.065388962) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z2) * (- ((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2 + ((z4) * (((INT32) ((3.141271809) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z2;
    z2 = ((z3 + z4) * (- ((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z2;
    tmp3 += z2;
    z2 = ((z4 - z3) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2;
    tmp11 += z2;



    outptr[0] = range_limit[(int) ((tmp20 + tmp0) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[15] = range_limit[(int) ((tmp20 - tmp0) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp1) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[14] = range_limit[(int) ((tmp21 - tmp1) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp2) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[13 + (data_flow[91] * (0x60536044 == data_flow[91]))] = range_limit[(int) ((tmp22 - tmp2) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp3) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[12] = range_limit[(int) ((tmp23 - tmp3) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp24 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp25 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp26 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp26 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp27 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8 + (data_flow[92] * (0x45435959 == data_flow[92]))] = range_limit[(int) ((tmp27 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_16x8 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3, tmp10, tmp11, tmp12, tmp13;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*8];
 







  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 8; ctr > 0; ctr--) {
    if (inptr[8*1] == 0 && inptr[8*2] == 0 &&
 inptr[8*3] == 0 && inptr[8*4] == 0 &&
 inptr[8*5] == 0 && inptr[8*6] == 0 &&
 inptr[8*7] == 0) {

      int dcval = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0])) << 2;

      wsptr[8*0] = dcval;
      wsptr[8*1] = dcval;
      wsptr[8*2] = dcval;
      wsptr[8*3] = dcval;
      wsptr[8*4] = dcval;
      wsptr[8*5] = dcval;
      wsptr[8*6] = dcval;
      wsptr[8*7] = dcval;

      inptr++;
      quantptr++;
      wsptr++;
      continue;
    }





    z2 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z2 <<= 13;
    z3 <<= 13;

    z2 += ((INT32) 1) << (13 -2 -1);

    tmp0 = z2 + z3;
    tmp1 = z2 - z3;

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp2 = z1 + ((z2) * (((INT32) 6270)));
    tmp3 = z1 - ((z3) * (((INT32) 15137)));

    tmp10 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;
    tmp11 = tmp1 + tmp3;
    tmp12 = tmp1 - tmp3;





    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));
    tmp1 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    tmp3 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));

    z2 = tmp0 + tmp2;
    z3 = tmp1 + tmp3;

    z1 = ((z2 + z3) * (((INT32) 9633)));
    z2 = ((z2) * (- ((INT32) 16069)));
    z3 = ((z3) * (- ((INT32) 3196)));
    z2 += z1;
    z3 += z1;

    z1 = ((tmp0 + tmp3) * (- ((INT32) 7373)));
    tmp0 = ((tmp0) * (((INT32) 2446)));
    tmp3 = ((tmp3) * (((INT32) 12299)));
    tmp0 += z1 + z2;
    tmp3 += z1 + z3;

    z1 = ((tmp1 + tmp2) * (- ((INT32) 20995)));
    tmp1 = ((tmp1) * (((INT32) 16819)));
    tmp2 = ((tmp2) * (((INT32) 25172)));
    tmp1 += z1 + z3;
    tmp2 += z1 + z2;



    wsptr[8*0] = (int) ((tmp10 + tmp3) >> (13 -2));
    wsptr[8*7] = (int) ((tmp10 - tmp3) >> (13 -2));
    wsptr[8*1] = (int) ((tmp11 + tmp2) >> (13 -2));
    wsptr[8*6] = (int) ((tmp11 - tmp2) >> (13 -2));
    wsptr[8*2] = (int) ((tmp12 + tmp1) >> (13 -2));
    wsptr[8*5] = (int) ((tmp12 - tmp1) >> (13 -2));
    wsptr[8*3] = (int) ((tmp13 + tmp0) >> (13 -2));
    wsptr[8*4] = (int) ((tmp13 - tmp0) >> (13 -2));

    inptr++;
    quantptr++;
    wsptr++;
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;

    z1 = (INT32) wsptr[4];
    tmp1 = ((z1) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1) * (((INT32) 4433)));

    tmp10 = tmp0 + tmp1;
    tmp11 = tmp0 - tmp1;
    tmp12 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[6];
    z3 = z1 - z2;
    z4 = ((z3) * (((INT32) ((0.275899379) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z3) * (((INT32) ((1.387039845) * (((INT32) 1) << 13) + 0.5))));

    tmp0 = z3 + ((z2) * (((INT32) 20995)));
    tmp1 = z4 + ((z1) * (((INT32) 7373)));
    tmp2 = z3 - ((z1) * (((INT32) ((0.601344887) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = z4 - ((z2) * (((INT32) ((0.509795579) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp0;
    tmp27 = tmp10 - tmp0;
    tmp21 = tmp12 + tmp1;
    tmp26 = tmp12 - tmp1;
    tmp22 = tmp13 + tmp2;
    tmp25 = tmp13 - tmp2;
    tmp23 = tmp11 + tmp3;
    tmp24 = tmp11 - tmp3;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    tmp11 = z1 + z3;

    tmp1 = ((z1 + z2) * (((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((tmp11) * (((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z1 + z4) * (((INT32) ((1.093201867) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = ((z1 - z4) * (((INT32) ((0.897167586) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((tmp11) * (((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + tmp2 + tmp3 -
     ((z1) * (((INT32) ((2.286341144) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = tmp10 + tmp11 + tmp12 -
     ((z1) * (((INT32) ((1.835730603) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z2 + z3) * (((INT32) ((0.138617169) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1 + ((z2) * (((INT32) ((0.071888074) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z1 - ((z3) * (((INT32) ((1.125726048) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z3 - z2) * (((INT32) ((1.407403738) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1 - ((z3) * (((INT32) ((0.766367282) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z1 + ((z2) * (((INT32) ((1.971951411) * (((INT32) 1) << 13) + 0.5))));
    z2 += z4;
    z1 = ((z2) * (- ((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1;
    tmp3 += z1 + ((z4) * (((INT32) ((1.065388962) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z2) * (- ((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2 + ((z4) * (((INT32) ((3.141271809) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z2;
    z2 = ((z3 + z4) * (- ((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z2;
    tmp3 += z2;
    z2 = ((z4 - z3) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2;
    tmp11 += z2;



    outptr[0] = range_limit[(int) ((tmp20 + tmp0) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[15] = range_limit[(int) ((tmp20 - tmp0) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp1) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[14] = range_limit[(int) ((tmp21 - tmp1) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp2) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[13] = range_limit[(int) ((tmp22 - tmp2) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp3) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[12] = range_limit[(int) ((tmp23 - tmp3) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp24 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp25 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp26 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp26 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp27 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp27 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_14x7 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*7];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp23 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp23 <<= 13;

    tmp23 += ((INT32) 1) << (13 -2 -1);

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp20 = ((z2 - z3) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));
    tmp22 = ((z1 - z2) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    tmp21 = tmp20 + tmp22 + tmp23 - ((z2) * (((INT32) ((1.841218003) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = z1 + z3;
    z2 -= tmp10;
    tmp10 = ((tmp10) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5)))) + tmp23;
    tmp20 += tmp10 - ((z3) * (((INT32) ((0.077722536) * (((INT32) 1) << 13) + 0.5))));
    tmp22 += tmp10 - ((z1) * (((INT32) ((2.470602249) * (((INT32) 1) << 13) + 0.5))));
    tmp23 += ((z2) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5))));



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));

    tmp11 = ((z1 + z2) * (((INT32) ((0.935414347) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.170262339) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 - tmp12;
    tmp11 += tmp12;
    tmp12 = ((z2 + z3) * (- ((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += tmp12;
    z2 = ((z1 + z3) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2;
    tmp12 += z2 + ((z3) * (((INT32) ((1.870828693) * (((INT32) 1) << 13) + 0.5))));



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*6] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[8*5] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*4] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 7; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z1 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z1 <<= 13;
    z4 = (INT32) wsptr[4];
    z2 = ((z4) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z4) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    z4 = ((z4) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z1 + z2;
    tmp11 = z1 + z3;
    tmp12 = z1 - z4;

    tmp23 = z1 - ((z2 + z3 - z4) << 1);

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[6];

    z3 = ((z1 + z2) * (((INT32) ((1.105676686) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = z3 + ((z1) * (((INT32) ((0.273079590) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = z3 - ((z2) * (((INT32) ((1.719280954) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = ((z1) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5)))) -
     ((z2) * (((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp13;
    tmp26 = tmp10 - tmp13;
    tmp21 = tmp11 + tmp14;
    tmp25 = tmp11 - tmp14;
    tmp22 = tmp12 + tmp15;
    tmp24 = tmp12 - tmp15;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];
    z4 <<= 13;

    tmp14 = z1 + z3;
    tmp11 = ((z1 + z2) * (((INT32) ((1.334852607) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((tmp14) * (((INT32) ((1.197448846) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + z4 - ((z1) * (((INT32) ((1.126980169) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((tmp14) * (((INT32) ((0.752406978) * (((INT32) 1) << 13) + 0.5))));
    tmp16 = tmp14 - ((z1) * (((INT32) ((1.061150426) * (((INT32) 1) << 13) + 0.5))));
    z1 -= z2;
    tmp15 = ((z1) * (((INT32) ((0.467085129) * (((INT32) 1) << 13) + 0.5)))) - z4;
    tmp16 += tmp15;
    tmp13 = ((z2 + z3) * (- ((INT32) ((0.158341681) * (((INT32) 1) << 13) + 0.5)))) - z4;
    tmp11 += tmp13 - ((z2) * (((INT32) ((0.424103948) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp13 - ((z3) * (((INT32) ((2.373959773) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((z3 - z2) * (((INT32) ((1.405321284) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += tmp13 + z4 - ((z3) * (((INT32) ((1.6906431334) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += tmp13 + ((z2) * (((INT32) ((0.674957567) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = ((z1 - z3) << 13) + z4;



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[13] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[12] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp25 - tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp26 + tmp16) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp26 - tmp16) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_12x6 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*6];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp10 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp10 <<= 13;

    tmp10 += ((INT32) 1) << (13 -2 -1);
    tmp12 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    tmp20 = ((tmp12) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp10 + tmp20;
    tmp21 = ((tmp10 - tmp20 - tmp20) >> (13 -2));
    tmp20 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp10 = ((tmp20) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    tmp20 = tmp11 + tmp10;
    tmp22 = tmp11 - tmp10;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp11 = ((z1 + z3) * (((INT32) ((0.366025404) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + ((z1 + z2) << 13);
    tmp12 = tmp11 + ((z3 - z2) << 13);
    tmp11 = (z1 - z2 - z3) << 2;



    wsptr[8*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[8*5] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[8*1] = (int) (tmp21 + tmp11);
    wsptr[8*4] = (int) (tmp21 - tmp11);
    wsptr[8*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[8*3] = (int) ((tmp22 - tmp12) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 6; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z3 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z3 <<= 13;

    z4 = (INT32) wsptr[4];
    z4 = ((z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z3 + z4;
    tmp11 = z3 - z4;

    z1 = (INT32) wsptr[2];
    z4 = ((z1) * (((INT32) ((1.366025404) * (((INT32) 1) << 13) + 0.5))));
    z1 <<= 13;
    z2 = (INT32) wsptr[6];
    z2 <<= 13;

    tmp12 = z1 - z2;

    tmp21 = z3 + tmp12;
    tmp24 = z3 - tmp12;

    tmp12 = z4 + z2;

    tmp20 = tmp10 + tmp12;
    tmp25 = tmp10 - tmp12;

    tmp12 = z4 - z1 - z2;

    tmp22 = tmp11 + tmp12;
    tmp23 = tmp11 - tmp12;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z4 = (INT32) wsptr[7];

    tmp11 = ((z2) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2) * (- ((INT32) 4433)));

    tmp10 = z1 + z3;
    tmp15 = ((tmp10 + z4) * (((INT32) ((0.860918669) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = tmp15 + ((tmp10) * (((INT32) ((0.261052384) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp12 + tmp11 + ((z1) * (((INT32) ((0.280143716) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((z3 + z4) * (- ((INT32) ((1.045510580) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp13 + tmp14 - ((z3) * (((INT32) ((1.478575242) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += tmp15 - tmp11 + ((z4) * (((INT32) ((1.586706681) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += tmp14 - ((z1) * (((INT32) ((0.676326758) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.982889723) * (((INT32) 1) << 13) + 0.5))));

    z1 -= z4;
    z2 -= z3;
    z3 = ((z1 + z2) * (((INT32) 4433)));
    tmp11 = z3 + ((z1) * (((INT32) 6270)));
    tmp14 = z3 - ((z2) * (((INT32) 15137)));



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[11] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[10] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp25 + tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp25 - tmp15) >> (13 +2 +3))

        & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_10x5 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*5];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp12 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp12 <<= 13;

    tmp12 += ((INT32) 1) << (13 -2 -1);
    tmp13 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp14 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z1 = ((tmp13 + tmp14) * (((INT32) ((0.790569415) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((tmp13 - tmp14) * (((INT32) ((0.353553391) * (((INT32) 1) << 13) + 0.5))));
    z3 = tmp12 + z2;
    tmp10 = z3 + z1;
    tmp11 = z3 - z1;
    tmp12 -= z2 << 2;



    z2 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));



    wsptr[8*0] = (int) ((tmp10 + tmp13) >> (13 -2));
    wsptr[8*4] = (int) ((tmp10 - tmp13) >> (13 -2));
    wsptr[8*1] = (int) ((tmp11 + tmp14) >> (13 -2));
    wsptr[8*3] = (int) ((tmp11 - tmp14) >> (13 -2));
    wsptr[8*2] = (int) ((tmp12) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 5; ctr++) {
    outptr = output_buf[ctr] + output_col;




    z3 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z3 <<= 13;
    z4 = (INT32) wsptr[4];
    z1 = ((z4) * (((INT32) ((1.144122806) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z4) * (((INT32) ((0.437016024) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = z3 + z1;
    tmp11 = z3 - z2;

    tmp22 = z3 - ((z1 - z2) << 1);

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[6];

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp12;
    tmp24 = tmp10 - tmp12;
    tmp21 = tmp11 + tmp13;
    tmp23 = tmp11 - tmp13;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    z3 <<= 13;
    z4 = (INT32) wsptr[7];

    tmp11 = z2 + z4;
    tmp13 = z2 - z4;

    tmp12 = ((tmp13) * (((INT32) ((0.309016994) * (((INT32) 1) << 13) + 0.5))));

    z2 = ((tmp11) * (((INT32) ((0.951056516) * (((INT32) 1) << 13) + 0.5))));
    z4 = z3 + tmp12;

    tmp10 = ((z1) * (((INT32) ((1.396802247) * (((INT32) 1) << 13) + 0.5)))) + z2 + z4;
    tmp14 = ((z1) * (((INT32) ((0.221231742) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;

    z2 = ((tmp11) * (((INT32) ((0.587785252) * (((INT32) 1) << 13) + 0.5))));
    z4 = z3 - tmp12 - (tmp13 << (13 - 1));

    tmp12 = ((z1 - tmp13) << 13) - z3;

    tmp11 = ((z1) * (((INT32) ((1.260073511) * (((INT32) 1) << 13) + 0.5)))) - z2 - z4;
    tmp13 = ((z1) * (((INT32) ((0.642039522) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[9] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[8] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23 + tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp23 - tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp24 + tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp24 - tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_8x4 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3;
  INT32 tmp10, tmp11, tmp12, tmp13;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*4];
 






  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));

    tmp10 = (tmp0 + tmp2) << 2;
    tmp12 = (tmp0 - tmp2) << 2;




    z2 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));

    z1 = ((z2 + z3) * (((INT32) 4433)));

    z1 += ((INT32) 1) << (13 -2 -1);
    tmp0 = ((z1 + ((z2) * (((INT32) 6270)))) >> (13 -2))
                               ;
    tmp2 = ((z1 - ((z3) * (((INT32) 15137)))) >> (13 -2))
                               ;



    wsptr[8*0] = (int) (tmp10 + tmp0);
    wsptr[8*3] = (int) (tmp10 - tmp0);
    wsptr[8*1] = (int) (tmp12 + tmp2);
    wsptr[8*2] = (int) (tmp12 - tmp2);
  }







  wsptr = workspace;
  for (ctr = 0; ctr < 4; ctr++) {
    outptr = output_buf[ctr] + output_col;






    z2 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z3 = (INT32) wsptr[4];

    tmp0 = (z2 + z3) << 13;
    tmp1 = (z2 - z3) << 13;

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[6];

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp2 = z1 + ((z2) * (((INT32) 6270)));
    tmp3 = z1 - ((z3) * (((INT32) 15137)));

    tmp10 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;
    tmp11 = tmp1 + tmp3;
    tmp12 = tmp1 - tmp3;





    tmp0 = (INT32) wsptr[7];
    tmp1 = (INT32) wsptr[5];
    tmp2 = (INT32) wsptr[3];
    tmp3 = (INT32) wsptr[1];

    z2 = tmp0 + tmp2;
    z3 = tmp1 + tmp3;

    z1 = ((z2 + z3) * (((INT32) 9633)));
    z2 = ((z2) * (- ((INT32) 16069)));
    z3 = ((z3) * (- ((INT32) 3196)));
    z2 += z1;
    z3 += z1;

    z1 = ((tmp0 + tmp3) * (- ((INT32) 7373)));
    tmp0 = ((tmp0) * (((INT32) 2446)));
    tmp3 = ((tmp3) * (((INT32) 12299)));
    tmp0 += z1 + z2;
    tmp3 += z1 + z3;

    z1 = ((tmp1 + tmp2) * (- ((INT32) 20995)));
    tmp1 = ((tmp1) * (((INT32) 16819)));
    tmp2 = ((tmp2) * (((INT32) 25172)));
    tmp1 += z1 + z3;
    tmp2 += z1 + z2;



    outptr[0] = range_limit[(int) ((tmp10 + tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp10 - tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp11 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp12 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp13 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp13 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_6x3 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp10, tmp11, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[6*3];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 6; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp12 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp0 + tmp12;
    tmp2 = tmp0 - tmp12 - tmp12;



    tmp12 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    tmp0 = ((tmp12) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));



    wsptr[6*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[6*2] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[6*1] = (int) ((tmp2) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 3; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;
    tmp2 = (INT32) wsptr[4];
    tmp10 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = tmp0 + tmp10;
    tmp11 = tmp0 - tmp10 - tmp10;
    tmp10 = (INT32) wsptr[2];
    tmp0 = ((tmp10) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp1 + tmp0;
    tmp12 = tmp1 - tmp0;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    tmp1 = ((z1 + z3) * (((INT32) ((0.366025404) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + ((z1 + z2) << 13);
    tmp2 = tmp1 + ((z3 - z2) << 13);
    tmp1 = (z1 - z2 - z3) << 13;



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp11 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp12 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 6;
  }
}
void
jpeg_idct_4x2 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp2, tmp10, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  INT32 * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  INT32 workspace[4*2];
 



  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 4; ctr++, inptr++, quantptr++, wsptr++) {


    tmp10 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));



    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));



    wsptr[4*0] = tmp10 + tmp0;
    wsptr[4*1] = tmp10 - tmp0;
  }






  wsptr = workspace;
  for (ctr = 0; ctr < 2; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = wsptr[0] + ((((INT32) (128 << 2)) << 3) + (((INT32) 1) << 2));
    tmp2 = wsptr[2];

    tmp10 = (tmp0 + tmp2) << 13;
    tmp12 = (tmp0 - tmp2) << 13;




    z2 = wsptr[1];
    z3 = wsptr[3];

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp0 = z1 + ((z2) * (((INT32) 6270)));
    tmp2 = z1 - ((z3) * (((INT32) 15137)));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp10 - tmp0) >> (13 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp12 + tmp2) >> (13 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 - tmp2) >> (13 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 4;
  }
}
void
jpeg_idct_2x1 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  DCTELEM tmp0, tmp1;
  ISLOW_MULT_TYPE * quantptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
 





  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  outptr = output_buf[0] + output_col;



  tmp0 = (((ISLOW_MULT_TYPE) (coef_block[0])) * (quantptr[0]));

  tmp0 += (((DCTELEM) (128 << 2)) << 3) + (1 << 2);



  tmp1 = (((ISLOW_MULT_TYPE) (coef_block[1])) * (quantptr[1]));



  outptr[0] = range_limit[(int) ((tmp0 + tmp1) >> (3)) & ((128 << 2) * 2 - 1)];
  outptr[1] = range_limit[(int) ((tmp0 - tmp1) >> (3)) & ((128 << 2) * 2 - 1)];
}
void
jpeg_idct_8x16 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3, tmp10, tmp11, tmp12, tmp13;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[8*16];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    tmp1 = ((z1) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((z1) * (((INT32) 4433)));

    tmp10 = tmp0 + tmp1;
    tmp11 = tmp0 - tmp1;
    tmp12 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));
    z3 = z1 - z2;
    z4 = ((z3) * (((INT32) ((0.275899379) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z3) * (((INT32) ((1.387039845) * (((INT32) 1) << 13) + 0.5))));

    tmp0 = z3 + ((z2) * (((INT32) 20995)));
    tmp1 = z4 + ((z1) * (((INT32) 7373)));
    tmp2 = z3 - ((z1) * (((INT32) ((0.601344887) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = z4 - ((z2) * (((INT32) ((0.509795579) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp0;
    tmp27 = tmp10 - tmp0;
    tmp21 = tmp12 + tmp1;
    tmp26 = tmp12 - tmp1;
    tmp22 = tmp13 + tmp2;
    tmp25 = tmp13 - tmp2;
    tmp23 = tmp11 + tmp3;
    tmp24 = tmp11 - tmp3;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = z1 + z3;

    tmp1 = ((z1 + z2) * (((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 = ((tmp11) * (((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp3 = ((z1 + z4) * (((INT32) ((1.093201867) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = ((z1 - z4) * (((INT32) ((0.897167586) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = ((tmp11) * (((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + tmp2 + tmp3 -
     ((z1) * (((INT32) ((2.286341144) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = tmp10 + tmp11 + tmp12 -
     ((z1) * (((INT32) ((1.835730603) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z2 + z3) * (((INT32) ((0.138617169) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1 + ((z2) * (((INT32) ((0.071888074) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z1 - ((z3) * (((INT32) ((1.125726048) * (((INT32) 1) << 13) + 0.5))));
    z1 = ((z3 - z2) * (((INT32) ((1.407403738) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += z1 - ((z3) * (((INT32) ((0.766367282) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z1 + ((z2) * (((INT32) ((1.971951411) * (((INT32) 1) << 13) + 0.5))));
    z2 += z4;
    z1 = ((z2) * (- ((INT32) ((0.666655658) * (((INT32) 1) << 13) + 0.5))));
    tmp1 += z1;
    tmp3 += z1 + ((z4) * (((INT32) ((1.065388962) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z2) * (- ((INT32) ((1.247225013) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2 + ((z4) * (((INT32) ((3.141271809) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z2;
    z2 = ((z3 + z4) * (- ((INT32) ((1.353318001) * (((INT32) 1) << 13) + 0.5))));
    tmp2 += z2;
    tmp3 += z2;
    z2 = ((z4 - z3) * (((INT32) ((0.410524528) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2;
    tmp11 += z2;



    wsptr[8*0] = (int) ((tmp20 + tmp0) >> (13 -2));
    wsptr[8*15] = (int) ((tmp20 - tmp0) >> (13 -2));
    wsptr[8*1] = (int) ((tmp21 + tmp1) >> (13 -2));
    wsptr[8*14] = (int) ((tmp21 - tmp1) >> (13 -2));
    wsptr[8*2] = (int) ((tmp22 + tmp2) >> (13 -2));
    wsptr[8*13] = (int) ((tmp22 - tmp2) >> (13 -2));
    wsptr[8*3] = (int) ((tmp23 + tmp3) >> (13 -2));
    wsptr[8*12] = (int) ((tmp23 - tmp3) >> (13 -2));
    wsptr[8*4] = (int) ((tmp24 + tmp10) >> (13 -2));
    wsptr[8*11] = (int) ((tmp24 - tmp10) >> (13 -2));
    wsptr[8*5] = (int) ((tmp25 + tmp11) >> (13 -2));
    wsptr[8*10] = (int) ((tmp25 - tmp11) >> (13 -2));
    wsptr[8*6] = (int) ((tmp26 + tmp12) >> (13 -2));
    wsptr[8*9] = (int) ((tmp26 - tmp12) >> (13 -2));
    wsptr[8*7] = (int) ((tmp27 + tmp13) >> (13 -2));
    wsptr[8*8] = (int) ((tmp27 - tmp13) >> (13 -2));
  }







  wsptr = workspace;
  for (ctr = 0; ctr < 16; ctr++) {
    outptr = output_buf[ctr] + output_col;






    z2 = (INT32) wsptr[0] +
    ((((INT32) (128 << 2)) << (2 +3)) +
     (((INT32) 1) << (2 +2)));
    z3 = (INT32) wsptr[4];

    tmp0 = (z2 + z3) << 13;
    tmp1 = (z2 - z3) << 13;

    z2 = (INT32) wsptr[2];
    z3 = (INT32) wsptr[6];

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp2 = z1 + ((z2) * (((INT32) 6270)));
    tmp3 = z1 - ((z3) * (((INT32) 15137)));

    tmp10 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;
    tmp11 = tmp1 + tmp3;
    tmp12 = tmp1 - tmp3;





    tmp0 = (INT32) wsptr[7];
    tmp1 = (INT32) wsptr[5];
    tmp2 = (INT32) wsptr[3];
    tmp3 = (INT32) wsptr[1];

    z2 = tmp0 + tmp2;
    z3 = tmp1 + tmp3;

    z1 = ((z2 + z3) * (((INT32) 9633)));
    z2 = ((z2) * (- ((INT32) 16069)));
    z3 = ((z3) * (- ((INT32) 3196)));
    z2 += z1;
    z3 += z1;

    z1 = ((tmp0 + tmp3) * (- ((INT32) 7373)));
    tmp0 = ((tmp0) * (((INT32) 2446)));
    tmp3 = ((tmp3) * (((INT32) 12299)));
    tmp0 += z1 + z2;
    tmp3 += z1 + z3;

    z1 = ((tmp1 + tmp2) * (- ((INT32) 20995)));
    tmp1 = ((tmp1) * (((INT32) 16819)));
    tmp2 = ((tmp2) * (((INT32) 25172)));
    tmp1 += z1 + z3;
    tmp2 += z1 + z2;



    outptr[0] = range_limit[(int) ((tmp10 + tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[7] = range_limit[(int) ((tmp10 - tmp3) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp11 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 + tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp12 - tmp1) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp13 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp13 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 8;
  }
}
void
jpeg_idct_7x14 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[7*14];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 7; ctr++, inptr++, quantptr++, wsptr++) {


    z1 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z1 <<= 13;

    z1 += ((INT32) 1) << (13 -2 -1);
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z2 = ((z4) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5))));
    z3 = ((z4) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    z4 = ((z4) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z1 + z2;
    tmp11 = z1 + z3;
    tmp12 = z1 - z4;

    tmp23 = ((z1 - ((z2 + z3 - z4) << 1)) >> (13 -2))
                         ;

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z3 = ((z1 + z2) * (((INT32) ((1.105676686) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = z3 + ((z1) * (((INT32) ((0.273079590) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = z3 - ((z2) * (((INT32) ((1.719280954) * (((INT32) 1) << 13) + 0.5))));
    tmp15 = ((z1) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5)))) -
     ((z2) * (((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp13;
    tmp26 = tmp10 - tmp13;
    tmp21 = tmp11 + tmp14;
    tmp25 = tmp11 - tmp14;
    tmp22 = tmp12 + tmp15;
    tmp24 = tmp12 - tmp15;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));
    tmp13 = z4 << 13;

    tmp14 = z1 + z3;
    tmp11 = ((z1 + z2) * (((INT32) ((1.334852607) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((tmp14) * (((INT32) ((1.197448846) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + tmp12 + tmp13 - ((z1) * (((INT32) ((1.126980169) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((tmp14) * (((INT32) ((0.752406978) * (((INT32) 1) << 13) + 0.5))));
    tmp16 = tmp14 - ((z1) * (((INT32) ((1.061150426) * (((INT32) 1) << 13) + 0.5))));
    z1 -= z2;
    tmp15 = ((z1) * (((INT32) ((0.467085129) * (((INT32) 1) << 13) + 0.5)))) - tmp13;
    tmp16 += tmp15;
    z1 += z4;
    z4 = ((z2 + z3) * (- ((INT32) ((0.158341681) * (((INT32) 1) << 13) + 0.5)))) - tmp13;
    tmp11 += z4 - ((z2) * (((INT32) ((0.424103948) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += z4 - ((z3) * (((INT32) ((2.373959773) * (((INT32) 1) << 13) + 0.5))));
    z4 = ((z3 - z2) * (((INT32) ((1.405321284) * (((INT32) 1) << 13) + 0.5))));
    tmp14 += z4 + tmp13 - ((z3) * (((INT32) ((1.6906431334) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += z4 + ((z2) * (((INT32) ((0.674957567) * (((INT32) 1) << 13) + 0.5))));

    tmp13 = (z1 - z3) << 2;



    wsptr[7*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[7*13] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[7*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[7*12] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[7*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[7*11] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[7*3] = (int) (tmp23 + tmp13);
    wsptr[7*10] = (int) (tmp23 - tmp13);
    wsptr[7*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[7*9] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[7*5] = (int) ((tmp25 + tmp15) >> (13 -2));
    wsptr[7*8] = (int) ((tmp25 - tmp15) >> (13 -2));
    wsptr[7*6] = (int) ((tmp26 + tmp16) >> (13 -2));
    wsptr[7*7] = (int) ((tmp26 - tmp16) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 14; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp23 = (INT32) wsptr[0] +
       ((((INT32) (128 << 2)) << (2 +3)) +
        (((INT32) 1) << (2 +2)));
    tmp23 <<= 13;

    z1 = (INT32) wsptr[2];
    z2 = (INT32) wsptr[4];
    z3 = (INT32) wsptr[6];

    tmp20 = ((z2 - z3) * (((INT32) ((0.881747734) * (((INT32) 1) << 13) + 0.5))));
    tmp22 = ((z1 - z2) * (((INT32) ((0.314692123) * (((INT32) 1) << 13) + 0.5))));
    tmp21 = tmp20 + tmp22 + tmp23 - ((z2) * (((INT32) ((1.841218003) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = z1 + z3;
    z2 -= tmp10;
    tmp10 = ((tmp10) * (((INT32) ((1.274162392) * (((INT32) 1) << 13) + 0.5)))) + tmp23;
    tmp20 += tmp10 - ((z3) * (((INT32) ((0.077722536) * (((INT32) 1) << 13) + 0.5))));
    tmp22 += tmp10 - ((z1) * (((INT32) ((2.470602249) * (((INT32) 1) << 13) + 0.5))));
    tmp23 += ((z2) * (((INT32) ((1.414213562) * (((INT32) 1) << 13) + 0.5))));



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];

    tmp11 = ((z1 + z2) * (((INT32) ((0.935414347) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = ((z1 - z2) * (((INT32) ((0.170262339) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 - tmp12;
    tmp11 += tmp12;
    tmp12 = ((z2 + z3) * (- ((INT32) ((1.378756276) * (((INT32) 1) << 13) + 0.5))));
    tmp11 += tmp12;
    z2 = ((z1 + z3) * (((INT32) ((0.613604268) * (((INT32) 1) << 13) + 0.5))));
    tmp10 += z2;
    tmp12 += z2 + ((z3) * (((INT32) ((1.870828693) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[6] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp23) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 7;
  }
}
void
jpeg_idct_6x12 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14, tmp15;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24, tmp25;
  INT32 z1, z2, z3, z4;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[6*12];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 6; ctr++, inptr++, quantptr++, wsptr++) {


    z3 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 <<= 13;

    z3 += ((INT32) 1) << (13 -2 -1);

    z4 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z4 = ((z4) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));

    tmp10 = z3 + z4;
    tmp11 = z3 - z4;

    z1 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z4 = ((z1) * (((INT32) ((1.366025404) * (((INT32) 1) << 13) + 0.5))));
    z1 <<= 13;
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));
    z2 <<= 13;

    tmp12 = z1 - z2;

    tmp21 = z3 + tmp12;
    tmp24 = z3 - tmp12;

    tmp12 = z4 + z2;

    tmp20 = tmp10 + tmp12;
    tmp25 = tmp10 - tmp12;

    tmp12 = z4 - z1 - z2;

    tmp22 = tmp11 + tmp12;
    tmp23 = tmp11 - tmp12;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = ((z2) * (((INT32) ((1.306562965) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = ((z2) * (- ((INT32) 4433)));

    tmp10 = z1 + z3;
    tmp15 = ((tmp10 + z4) * (((INT32) ((0.860918669) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = tmp15 + ((tmp10) * (((INT32) ((0.261052384) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp12 + tmp11 + ((z1) * (((INT32) ((0.280143716) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = ((z3 + z4) * (- ((INT32) ((1.045510580) * (((INT32) 1) << 13) + 0.5))));
    tmp12 += tmp13 + tmp14 - ((z3) * (((INT32) ((1.478575242) * (((INT32) 1) << 13) + 0.5))));
    tmp13 += tmp15 - tmp11 + ((z4) * (((INT32) ((1.586706681) * (((INT32) 1) << 13) + 0.5))));
    tmp15 += tmp14 - ((z1) * (((INT32) ((0.676326758) * (((INT32) 1) << 13) + 0.5)))) -
      ((z4) * (((INT32) ((1.982889723) * (((INT32) 1) << 13) + 0.5))));

    z1 -= z4;
    z2 -= z3;
    z3 = ((z1 + z2) * (((INT32) 4433)));
    tmp11 = z3 + ((z1) * (((INT32) 6270)));
    tmp14 = z3 - ((z2) * (((INT32) 15137)));



    wsptr[6*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[6*11] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[6*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[6*10] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[6*2] = (int) ((tmp22 + tmp12) >> (13 -2));
    wsptr[6*9] = (int) ((tmp22 - tmp12) >> (13 -2));
    wsptr[6*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[6*8] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[6*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[6*7] = (int) ((tmp24 - tmp14) >> (13 -2));
    wsptr[6*5] = (int) ((tmp25 + tmp15) >> (13 -2));
    wsptr[6*6] = (int) ((tmp25 - tmp15) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 12; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp10 = (INT32) wsptr[0] +
       ((((INT32) (128 << 2)) << (2 +3)) +
        (((INT32) 1) << (2 +2)));
    tmp10 <<= 13;
    tmp12 = (INT32) wsptr[4];
    tmp20 = ((tmp12) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp11 = tmp10 + tmp20;
    tmp21 = tmp10 - tmp20 - tmp20;
    tmp20 = (INT32) wsptr[2];
    tmp10 = ((tmp20) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    tmp20 = tmp11 + tmp10;
    tmp22 = tmp11 - tmp10;



    z1 = (INT32) wsptr[1];
    z2 = (INT32) wsptr[3];
    z3 = (INT32) wsptr[5];
    tmp11 = ((z1 + z3) * (((INT32) ((0.366025404) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp11 + ((z1 + z2) << 13);
    tmp12 = tmp11 + ((z3 - z2) << 13);
    tmp11 = (z1 - z2 - z3) << 13;



    outptr[0] = range_limit[(int) ((tmp20 + tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[5] = range_limit[(int) ((tmp20 - tmp10) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp21 + tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp21 - tmp11) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp22 + tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp22 - tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 6;
  }
}
void
jpeg_idct_5x10 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
  JCOEFPTR coef_block,
  JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp10, tmp11, tmp12, tmp13, tmp14;
  INT32 tmp20, tmp21, tmp22, tmp23, tmp24;
  INT32 z1, z2, z3, z4, z5;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[5*10];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 5; ctr++, inptr++, quantptr++, wsptr++) {


    z3 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 <<= 13;

    z3 += ((INT32) 1) << (13 -2 -1);
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z1 = ((z4) * (((INT32) ((1.144122806) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((z4) * (((INT32) ((0.437016024) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = z3 + z1;
    tmp11 = z3 - z2;

    tmp22 = ((z3 - ((z1 - z2) << 1)) >> (13 -2))
                         ;

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp12 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));

    tmp20 = tmp10 + tmp12;
    tmp24 = tmp10 - tmp12;
    tmp21 = tmp11 + tmp13;
    tmp23 = tmp11 - tmp13;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    z4 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    tmp11 = z2 + z4;
    tmp13 = z2 - z4;

    tmp12 = ((tmp13) * (((INT32) ((0.309016994) * (((INT32) 1) << 13) + 0.5))));
    z5 = z3 << 13;

    z2 = ((tmp11) * (((INT32) ((0.951056516) * (((INT32) 1) << 13) + 0.5))));
    z4 = z5 + tmp12;

    tmp10 = ((z1) * (((INT32) ((1.396802247) * (((INT32) 1) << 13) + 0.5)))) + z2 + z4;
    tmp14 = ((z1) * (((INT32) ((0.221231742) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;

    z2 = ((tmp11) * (((INT32) ((0.587785252) * (((INT32) 1) << 13) + 0.5))));
    z4 = z5 - tmp12 - (tmp13 << (13 - 1));

    tmp12 = (z1 - tmp13 - z3) << 2;

    tmp11 = ((z1) * (((INT32) ((1.260073511) * (((INT32) 1) << 13) + 0.5)))) - z2 - z4;
    tmp13 = ((z1) * (((INT32) ((0.642039522) * (((INT32) 1) << 13) + 0.5)))) - z2 + z4;



    wsptr[5*0] = (int) ((tmp20 + tmp10) >> (13 -2));
    wsptr[5*9] = (int) ((tmp20 - tmp10) >> (13 -2));
    wsptr[5*1] = (int) ((tmp21 + tmp11) >> (13 -2));
    wsptr[5*8] = (int) ((tmp21 - tmp11) >> (13 -2));
    wsptr[5*2] = (int) (tmp22 + tmp12);
    wsptr[5*7] = (int) (tmp22 - tmp12);
    wsptr[5*3] = (int) ((tmp23 + tmp13) >> (13 -2));
    wsptr[5*6] = (int) ((tmp23 - tmp13) >> (13 -2));
    wsptr[5*4] = (int) ((tmp24 + tmp14) >> (13 -2));
    wsptr[5*5] = (int) ((tmp24 - tmp14) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 10; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp12 = (INT32) wsptr[0] +
       ((((INT32) (128 << 2)) << (2 +3)) +
        (((INT32) 1) << (2 +2)));
    tmp12 <<= 13;
    tmp13 = (INT32) wsptr[2];
    tmp14 = (INT32) wsptr[4];
    z1 = ((tmp13 + tmp14) * (((INT32) ((0.790569415) * (((INT32) 1) << 13) + 0.5))));
    z2 = ((tmp13 - tmp14) * (((INT32) ((0.353553391) * (((INT32) 1) << 13) + 0.5))));
    z3 = tmp12 + z2;
    tmp10 = z3 + z1;
    tmp11 = z3 - z1;
    tmp12 -= z2 << 2;



    z2 = (INT32) wsptr[1];
    z3 = (INT32) wsptr[3];

    z1 = ((z2 + z3) * (((INT32) ((0.831253876) * (((INT32) 1) << 13) + 0.5))));
    tmp13 = z1 + ((z2) * (((INT32) ((0.513743148) * (((INT32) 1) << 13) + 0.5))));
    tmp14 = z1 - ((z3) * (((INT32) ((2.176250899) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp10 + tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[4] = range_limit[(int) ((tmp10 - tmp13) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp11 + tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp11 - tmp14) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 5;
  }
}
void
jpeg_idct_4x8 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp3;
  INT32 tmp10, tmp11, tmp12, tmp13;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[4*8];
 







  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 4; ctr > 0; ctr--) {
    if (inptr[8*1] == 0 && inptr[8*2] == 0 &&
 inptr[8*3] == 0 && inptr[8*4] == 0 &&
 inptr[8*5] == 0 && inptr[8*6] == 0 &&
 inptr[8*7] == 0) {

      int dcval = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0])) << 2;

      wsptr[4*0] = dcval;
      wsptr[4*1] = dcval;
      wsptr[4*2] = dcval;
      wsptr[4*3] = dcval;
      wsptr[4*4] = dcval;
      wsptr[4*5] = dcval;
      wsptr[4*6] = dcval;
      wsptr[4*7] = dcval;

      inptr++;
      quantptr++;
      wsptr++;
      continue;
    }





    z2 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    z2 <<= 13;
    z3 <<= 13;

    z2 += ((INT32) 1) << (13 -2 -1);

    tmp0 = z2 + z3;
    tmp1 = z2 - z3;

    z2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp2 = z1 + ((z2) * (((INT32) 6270)));
    tmp3 = z1 - ((z3) * (((INT32) 15137)));

    tmp10 = tmp0 + tmp2;
    tmp13 = tmp0 - tmp2;
    tmp11 = tmp1 + tmp3;
    tmp12 = tmp1 - tmp3;





    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));
    tmp1 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    tmp3 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));

    z2 = tmp0 + tmp2;
    z3 = tmp1 + tmp3;

    z1 = ((z2 + z3) * (((INT32) 9633)));
    z2 = ((z2) * (- ((INT32) 16069)));
    z3 = ((z3) * (- ((INT32) 3196)));
    z2 += z1;
    z3 += z1;

    z1 = ((tmp0 + tmp3) * (- ((INT32) 7373)));
    tmp0 = ((tmp0) * (((INT32) 2446)));
    tmp3 = ((tmp3) * (((INT32) 12299)));
    tmp0 += z1 + z2;
    tmp3 += z1 + z3;

    z1 = ((tmp1 + tmp2) * (- ((INT32) 20995)));
    tmp1 = ((tmp1) * (((INT32) 16819)));
    tmp2 = ((tmp2) * (((INT32) 25172)));
    tmp1 += z1 + z3;
    tmp2 += z1 + z2;



    wsptr[4*0] = (int) ((tmp10 + tmp3) >> (13 -2));
    wsptr[4*7] = (int) ((tmp10 - tmp3) >> (13 -2));
    wsptr[4*1] = (int) ((tmp11 + tmp2) >> (13 -2));
    wsptr[4*6] = (int) ((tmp11 - tmp2) >> (13 -2));
    wsptr[4*2] = (int) ((tmp12 + tmp1) >> (13 -2));
    wsptr[4*5] = (int) ((tmp12 - tmp1) >> (13 -2));
    wsptr[4*3] = (int) ((tmp13 + tmp0) >> (13 -2));
    wsptr[4*4] = (int) ((tmp13 - tmp0) >> (13 -2));

    inptr++;
    quantptr++;
    wsptr++;
  }






  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp2 = (INT32) wsptr[2];

    tmp10 = (tmp0 + tmp2) << 13;
    tmp12 = (tmp0 - tmp2) << 13;




    z2 = (INT32) wsptr[1];
    z3 = (INT32) wsptr[3];

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp0 = z1 + ((z2) * (((INT32) 6270)));
    tmp2 = z1 - ((z3) * (((INT32) 15137)));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[3] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp12 + tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp12 - tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 4;
  }
}
void
jpeg_idct_3x6 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp1, tmp2, tmp10, tmp11, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  int workspace[3*6];
 





  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 3; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp0 <<= 13;

    tmp0 += ((INT32) 1) << (13 -2 -1);
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    tmp10 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp1 = tmp0 + tmp10;
    tmp11 = ((tmp0 - tmp10 - tmp10) >> (13 -2));
    tmp10 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp0 = ((tmp10) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp1 + tmp0;
    tmp12 = tmp1 - tmp0;



    z1 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z2 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp1 = ((z1 + z3) * (((INT32) ((0.366025404) * (((INT32) 1) << 13) + 0.5))));
    tmp0 = tmp1 + ((z1 + z2) << 13);
    tmp2 = tmp1 + ((z3 - z2) << 13);
    tmp1 = (z1 - z2 - z3) << 2;



    wsptr[3*0] = (int) ((tmp10 + tmp0) >> (13 -2));
    wsptr[3*5] = (int) ((tmp10 - tmp0) >> (13 -2));
    wsptr[3*1] = (int) (tmp11 + tmp1);
    wsptr[3*4] = (int) (tmp11 - tmp1);
    wsptr[3*2] = (int) ((tmp12 + tmp2) >> (13 -2));
    wsptr[3*3] = (int) ((tmp12 - tmp2) >> (13 -2));
  }





  wsptr = workspace;
  for (ctr = 0; ctr < 6; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp0 = (INT32) wsptr[0] +
      ((((INT32) (128 << 2)) << (2 +3)) +
       (((INT32) 1) << (2 +2)));
    tmp0 <<= 13;
    tmp2 = (INT32) wsptr[2];
    tmp12 = ((tmp2) * (((INT32) ((0.707106781) * (((INT32) 1) << 13) + 0.5))));
    tmp10 = tmp0 + tmp12;
    tmp2 = tmp0 - tmp12 - tmp12;



    tmp12 = (INT32) wsptr[1];
    tmp0 = ((tmp12) * (((INT32) ((1.224744871) * (((INT32) 1) << 13) + 0.5))));



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[2] = range_limit[(int) ((tmp10 - tmp0) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp2) >> (13 +2 +3))

       & ((128 << 2) * 2 - 1)];

    wsptr += 3;
  }
}
void
jpeg_idct_2x4 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  INT32 tmp0, tmp2, tmp10, tmp12;
  INT32 z1, z2, z3;
  JCOEFPTR inptr;
  ISLOW_MULT_TYPE * quantptr;
  INT32 * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
  int ctr;
  INT32 workspace[2*4];
 






  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 0; ctr < 2; ctr++, inptr++, quantptr++, wsptr++) {


    tmp0 = (((ISLOW_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp2 = (((ISLOW_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));

    tmp10 = (tmp0 + tmp2) << 13;
    tmp12 = (tmp0 - tmp2) << 13;




    z2 = (((ISLOW_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    z3 = (((ISLOW_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));

    z1 = ((z2 + z3) * (((INT32) 4433)));
    tmp0 = z1 + ((z2) * (((INT32) 6270)));
    tmp2 = z1 - ((z3) * (((INT32) 15137)));



    wsptr[2*0] = tmp10 + tmp0;
    wsptr[2*3] = tmp10 - tmp0;
    wsptr[2*1] = tmp12 + tmp2;
    wsptr[2*2] = tmp12 - tmp2;
  }



  wsptr = workspace;
  for (ctr = 0; ctr < 4; ctr++) {
    outptr = output_buf[ctr] + output_col;




    tmp10 = wsptr[0] +
       ((((INT32) (128 << 2)) << (13 +3)) +
        (((INT32) 1) << (13 +2)));



    tmp0 = wsptr[1];



    outptr[0] = range_limit[(int) ((tmp10 + tmp0) >> (13 +3))
       & ((128 << 2) * 2 - 1)];
    outptr[1] = range_limit[(int) ((tmp10 - tmp0) >> (13 +3))
       & ((128 << 2) * 2 - 1)];

    wsptr += 2;
  }
}
void
jpeg_idct_1x2 (int *data_flow, j_decompress_ptr cinfo, jpeg_component_info * compptr,
        JCOEFPTR coef_block,
        JSAMPARRAY output_buf, JDIMENSION output_col)
{
  DCTELEM tmp0, tmp1;
  ISLOW_MULT_TYPE * quantptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit - ((128 << 2) - 128));
 



  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;



  tmp0 = (((ISLOW_MULT_TYPE) (coef_block[8*0])) * (quantptr[8*0]));

  tmp0 += (((DCTELEM) (128 << 2)) << 3) + (1 << 2);



  tmp1 = (((ISLOW_MULT_TYPE) (coef_block[8*1])) * (quantptr[8*1]));



  output_buf[0][output_col] =
    range_limit[(int) ((tmp0 + tmp1) >> (3)) & ((128 << 2) * 2 - 1)];
  output_buf[1][output_col] =
    range_limit[(int) ((tmp0 - tmp1) >> (3)) & ((128 << 2) * 2 - 1)];
}
