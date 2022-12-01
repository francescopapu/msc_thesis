











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






extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     ;



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



extern int atexit (void (*__func) (int *data_flow)) ;







extern int at_quick_exit (void (*__func) (int *data_flow)) ;







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
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






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



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






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


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
uint16_t _af_byteswap_int16 (int *data_flow, uint16_t x);
uint32_t _af_byteswap_int32 (int *data_flow, uint32_t x);
float _af_byteswap_float32 (int *data_flow, float x);
double _af_byteswap_double64 (double x);

_Bool 
    _af_filesetup_ok (int *data_flow, AFfilesetup setup);

_Bool 
    _af_filehandle_ok (int *data_flow, AFfilehandle file);


_Bool 
    _af_filehandle_can_read (int *data_flow, AFfilehandle file);

void *_af_malloc (int *data_flow, size_t size);
void *_af_realloc (int *data_flow, void *ptr, size_t size);
void *_af_calloc (int *data_flow, size_t nmemb, size_t size);
char *_af_strdup (int *data_flow, char *s);

AUpvlist _af_pv_long (int *data_flow, long val);
AUpvlist _af_pv_double (int *data_flow, double val);
AUpvlist _af_pv_pointer (int *data_flow, void *val);


_Bool 
    _af_pv_getlong (int *data_flow, AUpvlist pvlist, int param, long *l);

_Bool 
    _af_pv_getdouble (int *data_flow, AUpvlist pvlist, int param, double *d);

_Bool 
    _af_pv_getptr (int *data_flow, AUpvlist pvlist, int param, void **v);

_TrackSetup *_af_filesetup_get_tracksetup (int *data_flow, AFfilesetup setup, int trackid);
_Track *_af_filehandle_get_track (int *data_flow, AFfilehandle file, int trackid);


_Bool 
    _af_unique_ids (int *data_flow, int *ids, int nids, char *idname, int iderr);

float _af_format_frame_size (int *data_flow, _AudioFormat *format, 
                                                  _Bool 
                                                       stretch3to4);
int _af_format_frame_size_uncompressed (int *data_flow, _AudioFormat *format, 
                                                             _Bool 
                                                                  stretch3to4);
float _af_format_sample_size (int *data_flow, _AudioFormat *format, 
                                                   _Bool 
                                                        stretch3to4);
int _af_format_sample_size_uncompressed (int *data_flow, _AudioFormat *format, 
                                                              _Bool 
                                                                   stretch3to4);

status _af_set_sample_format (int *data_flow, _AudioFormat *f, int sampleFormat, int sampleWidth);


_Bool 
    _af_filehandle_can_read (int *data_flow, AFfilehandle file);

_Bool 
    _af_filehandle_can_write (int *data_flow, AFfilehandle file);

status af_read_uint32_be (int *data_flow, uint32_t *value, AFvirtualfile *vf);
status af_read_uint32_le (int *data_flow, uint32_t *value, AFvirtualfile *vf);
status af_read_uint16_be (int *data_flow, uint16_t *value, AFvirtualfile *vf);
status af_read_uint16_le (int *data_flow, uint16_t *value, AFvirtualfile *vf);
status af_read_uint8 (int *data_flow, uint8_t *value, AFvirtualfile *vf);

status af_write_uint32_be (int *data_flow, const uint32_t *value, AFvirtualfile *vf);
status af_write_uint32_le (int *data_flow, const uint32_t *value, AFvirtualfile *vf);
status af_write_uint16_be (int *data_flow, const uint16_t *value, AFvirtualfile *vf);
status af_write_uint16_le (int *data_flow, const uint16_t *value, AFvirtualfile *vf);
status af_write_uint8 (int *data_flow, const uint8_t *value, AFvirtualfile *vf);

status af_read_pstring (int *data_flow, char value[256], AFvirtualfile *vf);
status af_write_pstring (int *data_flow, const char *value, AFvirtualfile *vf);
AFfilesetup _af_filesetup_copy (int *data_flow, AFfilesetup setup, AFfilesetup defaultSetup,
        
       _Bool 
            copyMarks);

void _af_setup_free_markers (int *data_flow, AFfilesetup setup, int trackno);
void _af_setup_free_tracks (int *data_flow, AFfilesetup setup);
void _af_setup_free_loops (int *data_flow, AFfilesetup setup, int instno);
void _af_setup_free_instruments (int *data_flow, AFfilesetup setup);
AFfilesetup _af_filesetup_copy (int *data_flow, AFfilesetup setup, AFfilesetup defaultSetup,
        
       _Bool 
            copyMarks);
status _af_filesetup_make_handle (int *data_flow, AFfilesetup setup, AFfilehandle handle);

_InstrumentSetup *_af_instsetup_new (int *data_flow, int count);
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

static status WriteFormat (int *data_flow, AFfilehandle file);
static status WriteFrameCount (int *data_flow, AFfilehandle file);
static status WriteMiscellaneous (int *data_flow, AFfilehandle file);
static status WriteCues (int *data_flow, AFfilehandle file);
static status WriteData (int *data_flow, AFfilehandle file);

_WAVEInfo *waveinfo_new (int *data_flow)
{
 _WAVEInfo *waveinfo = _af_malloc(data_flow, sizeof (_WAVEInfo));

 waveinfo->factOffset = 0;
 waveinfo->miscellaneousStartOffset = 0;
 waveinfo->totalMiscellaneousSize = 0;
 waveinfo->markOffset = 0;
 waveinfo->dataSizeOffset = 0;

 return waveinfo;
}

static status WriteFormat (int *data_flow, AFfilehandle file)
{
 _Track *track = 
                 ((void *)0)
                     ;

 uint16_t formatTag, channelCount={0};
 uint32_t sampleRate, averageBytesPerSecond={0};
 uint16_t blockAlign={0};
 uint32_t chunkSize={0};
 uint16_t bitsPerSample={0};

 
((
file != 
((void *)0)) ? (void) (0) : __assert_fail (
"file != NULL"
, "libaudiofile/wavewrite.c", 73, __PRETTY_FUNCTION__))
                    ;

 track = _af_filehandle_get_track(data_flow, file, AF_DEFAULT_TRACK);

 af_fwrite(data_flow, "fmt ", 4, 1, file->fh);

 switch (track->f.compressionType)
 {
  case AF_COMPRESSION_NONE:
   chunkSize = 16;
   if (track->f.sampleFormat == AF_SAMPFMT_FLOAT ||
    track->f.sampleFormat == AF_SAMPFMT_DOUBLE)
   {
    formatTag = WAVE_FORMAT_IEEE_FLOAT;
   }
   else if (track->f.sampleFormat == AF_SAMPFMT_TWOSCOMP ||
    track->f.sampleFormat == AF_SAMPFMT_UNSIGNED)
   {
    formatTag = WAVE_FORMAT_PCM;
   }
   else
   {
    _af_error(data_flow, AF_BAD_COMPTYPE, "bad sample format");
    return (-1);
   }

   blockAlign = _af_format_frame_size(data_flow, &track->f, 
                                                0
                                                     );
   bitsPerSample = 8 * _af_format_sample_size(data_flow, &track->f, 
                                                        0
                                                             );
   break;




  case AF_COMPRESSION_G711_ULAW:
   chunkSize = 18;
   formatTag = IBM_FORMAT_MULAW;
   blockAlign = track->f.channelCount;
   bitsPerSample = 8;
   break;

  case AF_COMPRESSION_G711_ALAW:
   chunkSize = 18;
   formatTag = IBM_FORMAT_ALAW;
   blockAlign = track->f.channelCount;
   bitsPerSample = 8;
   break;

  default:
   _af_error(data_flow, AF_BAD_COMPTYPE, "bad compression type");
   return (-1);
 }

 af_write_uint32_le(data_flow, &chunkSize, file->fh);
 af_write_uint16_le(data_flow, &formatTag, file->fh);

 channelCount = track->f.channelCount;
 af_write_uint16_le(data_flow, &channelCount, file->fh);

 sampleRate = track->f.sampleRate;
 af_write_uint32_le(data_flow, &sampleRate, file->fh);

 averageBytesPerSecond =
  track->f.sampleRate * _af_format_frame_size(data_flow, &track->f, 
                                                        0
                                                             );
 af_write_uint32_le(data_flow, &averageBytesPerSecond, file->fh);

 blockAlign = _af_format_frame_size(data_flow, &track->f, 
                                              0
                                                   );
 af_write_uint16_le(data_flow, &blockAlign, file->fh);

 af_write_uint16_le(data_flow, &bitsPerSample, file->fh);

 if (track->f.compressionType == AF_COMPRESSION_G711_ULAW ||
  track->f.compressionType == AF_COMPRESSION_G711_ALAW)
 {
  uint16_t zero = 0;
  af_write_uint16_le(data_flow, &zero, file->fh);
 }

 return (0);
}

static status WriteFrameCount (int *data_flow, AFfilehandle file)
{
 _Track *track = 
                 ((void *)0)
                     ;
 _WAVEInfo *waveinfo = 
                      ((void *)0)
                          ;
 uint32_t factSize = 4;
 uint32_t totalFrameCount={0};

 
((
file != 
((void *)0)) ? (void) (0) : __assert_fail (
"file != NULL"
, "libaudiofile/wavewrite.c", 160, __PRETTY_FUNCTION__))
                    ;

 track = _af_filehandle_get_track(data_flow, file, AF_DEFAULT_TRACK);
 waveinfo = (_WAVEInfo *) file->formatSpecific;


 if (track->f.compressionType == AF_COMPRESSION_NONE &&
  (track->f.sampleFormat == AF_SAMPFMT_TWOSCOMP ||
  track->f.sampleFormat == AF_SAMPFMT_UNSIGNED))
  return (0);





 if (waveinfo->factOffset == 0)
  waveinfo->factOffset = af_ftell(data_flow, file->fh);
 else
  af_fseek(data_flow, file->fh, waveinfo->factOffset, 
                                          0
                                                  );

 af_fwrite(data_flow, "fact", 4, 1, file->fh);
 af_write_uint32_le(data_flow, &factSize, file->fh);

 totalFrameCount = track->totalfframes;
 af_write_uint32_le(data_flow, &totalFrameCount, file->fh);

 return (0);
}

static status WriteData (int *data_flow, AFfilehandle file)
{
 _Track *track={0};
 uint32_t chunkSize={0};
 _WAVEInfo *waveinfo={0};

 
((
file
) ? (void) (0) : __assert_fail (
"file"
, "libaudiofile/wavewrite.c", 195, __PRETTY_FUNCTION__))
            ;

 waveinfo = file->formatSpecific;
 track = _af_filehandle_get_track(data_flow, file, AF_DEFAULT_TRACK);

 af_fwrite(data_flow, "data", 4, 1, file->fh);
 waveinfo->dataSizeOffset = af_ftell(data_flow, file->fh);

 chunkSize = (int) _af_format_frame_size(data_flow, &track->f, 
                                                   0
                                                        ) *
  track->totalfframes;

 af_write_uint32_le(data_flow, &chunkSize, file->fh);
 track->fpos_first_frame = af_ftell(data_flow, file->fh);

 return (0);
}

status _af_wave_update (int *data_flow, AFfilehandle file)
{
 _Track *track={0};
 _WAVEInfo *wave = (_WAVEInfo *) file->formatSpecific;

 track = _af_filehandle_get_track(data_flow, file, AF_DEFAULT_TRACK);

 if (track->fpos_first_frame != 0)
 {
  uint32_t dataLength, fileLength={0};


  WriteFrameCount(data_flow, file);


  af_fseek(data_flow, file->fh, wave->dataSizeOffset, 
                                          0
                                                  );





  dataLength = (uint32_t) track->totalfframes *
   (int) _af_format_frame_size(data_flow, &track->f, 
                                         0
                                              );
  af_write_uint32_le(data_flow, &dataLength, file->fh);


  fileLength = (uint32_t) af_flength(data_flow, file->fh);
  fileLength -= 8;

  af_fseek(data_flow, file->fh, 4, 
                       0
                               );
  af_write_uint32_le(data_flow, &fileLength, file->fh);
 }






 WriteMiscellaneous(data_flow, file);


 WriteCues(data_flow, file);

 return (0);
}


static status misc_type_to_wave (int *data_flow, int misctype, uint32_t *miscid)
{
 if (misctype == AF_MISC_AUTH)
  memcpy(miscid, "IART", 4);
 else if (misctype == AF_MISC_NAME)
  memcpy(miscid, "INAM", 4);
 else if (misctype == AF_MISC_COPY)
  memcpy(miscid, "ICOP", 4);
 else if (misctype == AF_MISC_ICMT)
  memcpy(miscid, "ICMT", 4);
 else if (misctype == AF_MISC_ICRD)
  memcpy(miscid, "ICRD", 4);
 else if (misctype == AF_MISC_ISFT)
  memcpy(miscid, "ISFT", 4);
 else
  return (-1);

 return (0);
}

status WriteMiscellaneous (int *data_flow, AFfilehandle filehandle)
{
 _WAVEInfo *wave = (_WAVEInfo *) filehandle->formatSpecific;

 if (filehandle->miscellaneousCount != 0)
 {
  int i={0};
  uint32_t miscellaneousBytes={0};
  uint32_t chunkSize={0};


  miscellaneousBytes = 12;


  for (i=0; i<filehandle->miscellaneousCount; i++)
  {
   uint32_t miscid={0};


   if (misc_type_to_wave(data_flow, filehandle->miscellaneous[i].type,
    &miscid) == (-1))
    continue;


   miscellaneousBytes += 8;
   miscellaneousBytes += filehandle->miscellaneous[i].size;


   if (filehandle->miscellaneous[i].size % 2 != 0)
    miscellaneousBytes++;

   
  ((
  miscellaneousBytes % 2 == 0
  ) ? (void) (0) : __assert_fail (
  "miscellaneousBytes % 2 == 0"
  , "libaudiofile/wavewrite.c", 310, __PRETTY_FUNCTION__))
                                     ;
  }

  if (wave->miscellaneousStartOffset == 0)
   wave->miscellaneousStartOffset = af_ftell(data_flow, filehandle->fh);
  else
   af_fseek(data_flow, filehandle->fh, wave->miscellaneousStartOffset, 
                                                           0
                                                                   );

  wave->totalMiscellaneousSize = miscellaneousBytes;
  af_fwrite(data_flow, "LIST", 4, 1, filehandle->fh);


  chunkSize = miscellaneousBytes-8;
  af_write_uint32_le(data_flow, &chunkSize, filehandle->fh);


  af_fwrite(data_flow, "INFO", 4, 1, filehandle->fh);


  for (i=0; i<filehandle->miscellaneousCount; i++)
  {
   uint32_t miscsize = filehandle->miscellaneous[i].size;
   uint32_t miscid = 0;


   if (misc_type_to_wave(data_flow, filehandle->miscellaneous[i].type,
    &miscid) == (-1))
    continue;

   af_fwrite(data_flow, &miscid, 4, 1, filehandle->fh);
   af_write_uint32_le(data_flow, &miscsize, filehandle->fh);
   if (filehandle->miscellaneous[i].buffer != 
                                             ((void *)0)
                                                 )
   {
    uint8_t zero = 0;

    af_fwrite(data_flow, filehandle->miscellaneous[i].buffer, filehandle->miscellaneous[i].size, 1, filehandle->fh);


    if ((filehandle->miscellaneous[i].size%2) != 0)
     af_write_uint8(data_flow, &zero, filehandle->fh);
   }
   else
   {
    int size={0};
    size = filehandle->miscellaneous[i].size;


    if ((size % 2) != 0)
     size++;
    af_fseek(data_flow, filehandle->fh, size, 
                                  1
                                          );
   }
  }
 }

 return (0);
}

static status WriteCues (int *data_flow, AFfilehandle file)
{
 int i, *markids, markCount={0};
 uint32_t numCues, cueChunkSize, listChunkSize={0};
 _WAVEInfo *wave={0};

 
((
file
) ? (void) (0) : __assert_fail (
"file"
, "libaudiofile/wavewrite.c", 384, __PRETTY_FUNCTION__))
            ;

 markCount = afGetMarkIDs(data_flow, file, AF_DEFAULT_TRACK, 
                                                 ((void *)0)
                                                     );
 if (markCount == 0)
  return (0);

 wave = file->formatSpecific;

 if (wave->markOffset == 0)
  wave->markOffset = af_ftell(data_flow, file->fh);
 else
  af_fseek(data_flow, file->fh, wave->markOffset, 
                                      0
                                              );

 af_fwrite(data_flow, "cue ", 4, 1, file->fh);





 cueChunkSize = 4 + markCount * 24;
 af_write_uint32_le(data_flow, &cueChunkSize, file->fh);
 numCues = markCount;
 af_write_uint32_le(data_flow, &numCues, file->fh);

 markids = _af_calloc(data_flow, markCount, sizeof (int));
 
((
markids != 
((void *)0)) ? (void) (0) : __assert_fail (
"markids != NULL"
, "libaudiofile/wavewrite.c", 409, __PRETTY_FUNCTION__))
                       ;
 afGetMarkIDs(data_flow, file, AF_DEFAULT_TRACK, markids);


 for (i=0; i < markCount; i++)
 {
  uint32_t identifier, position, chunkStart, blockStart={0};
  uint32_t sampleOffset={0};
  AFframecount markposition={0};

  identifier = markids[i];
  af_write_uint32_le(data_flow, &identifier, file->fh);

  position = i;
  af_write_uint32_le(data_flow, &position, file->fh);


  af_fwrite(data_flow, "data", 4, 1, file->fh);






  chunkStart = 0;
  af_fwrite(data_flow, &chunkStart, sizeof (uint32_t), 1, file->fh);

  blockStart = 0;
  af_fwrite(data_flow, &blockStart, sizeof (uint32_t), 1, file->fh);

  markposition = afGetMarkPosition(data_flow, file, AF_DEFAULT_TRACK, markids[i]);


  sampleOffset = markposition;
  af_write_uint32_le(data_flow, &sampleOffset, file->fh);
 }






 listChunkSize = 4;
 for (i=0; i<markCount; i++)
 {
  const char *name={0};

  name = afGetMarkName(data_flow, file, AF_DEFAULT_TRACK, markids[i]);
  listChunkSize += 12 + (strlen(name) + 1) +
   ((strlen(name) + 1) % 2);
 }

 af_fwrite(data_flow, "LIST", 4, 1, file->fh);
 af_write_uint32_le(data_flow, &listChunkSize, file->fh);
 af_fwrite(data_flow, "adtl", 4, 1, file->fh);

 for (i=0; i<markCount; i++)
 {
  const char *name={0};
  uint32_t labelSize, cuePointID={0};

  name = afGetMarkName(data_flow, file, AF_DEFAULT_TRACK, markids[i]);


  labelSize = 4+(strlen(name)+1) + ((strlen(name) + 1) % 2);
  cuePointID = markids[i];

  af_fwrite(data_flow, "labl", 4, 1, file->fh);
  af_write_uint32_le(data_flow, &labelSize, file->fh);
  af_write_uint32_le(data_flow, &cuePointID, file->fh);
  af_fwrite(data_flow, name, strlen(name) + 1, 1, file->fh);





  if (((strlen(name) + 1) % 2) != 0)
  {
   uint8_t zero=0;
   af_write_uint8(data_flow, &zero, file->fh);
  }
 }

 free(markids);

 return (0);
}

status _af_wave_write_init (int *data_flow, AFfilesetup setup, AFfilehandle filehandle)
{
 uint32_t zero = 0;

 if (_af_filesetup_make_handle(data_flow, setup, filehandle) == (-1))
  return (-1);

 filehandle->formatSpecific = waveinfo_new(data_flow);

 af_fseek(data_flow, filehandle->fh, 0, 
                            0
                                    );
 af_fwrite(data_flow, "RIFF", 4, 1, filehandle->fh);
 af_fwrite(data_flow, &zero, 4, 1, filehandle->fh);
 af_fwrite(data_flow, "WAVE", 4, 1, filehandle->fh);

 WriteMiscellaneous(data_flow, filehandle);
 WriteCues(data_flow, filehandle);
 WriteFormat(data_flow, filehandle);
 WriteFrameCount(data_flow, filehandle);
 WriteData(data_flow, filehandle);

 return (0);
}
