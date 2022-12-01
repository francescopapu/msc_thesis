











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















typedef long double float_t;

typedef long double double_t;


extern double acos (double __x) ; extern double __acos (double __x) ;

extern double asin (double __x) ; extern double __asin (double __x) ;

extern double atan (double __x) ; extern double __atan (double __x) ;

extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;


 extern double cos (double __x) ; extern double __cos (double __x) ;

 extern double sin (double __x) ; extern double __sin (double __x) ;

extern double tan (double __x) ; extern double __tan (double __x) ;




extern double cosh (double __x) ; extern double __cosh (double __x) ;

extern double sinh (double __x) ; extern double __sinh (double __x) ;

extern double tanh (double __x) ; extern double __tanh (double __x) ;



extern double acosh (double __x) ; extern double __acosh (double __x) ;

extern double asinh (double __x) ; extern double __asinh (double __x) ;

extern double atanh (double __x) ; extern double __atanh (double __x) ;







 extern double exp (double __x) ; extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;


 extern double log (double __x) ; extern double __log (double __x) ;


extern double log10 (double __x) ; extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr) ;



extern double expm1 (double __x) ; extern double __expm1 (double __x) ;


extern double log1p (double __x) ; extern double __log1p (double __x) ;


extern double logb (double __x) ; extern double __logb (double __x) ;






extern double exp2 (double __x) ; extern double __exp2 (double __x) ;


extern double log2 (double __x) ; extern double __log2 (double __x) ;








 extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ; extern double __sqrt (double __x) ;





extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;






extern double cbrt (double __x) ; extern double __cbrt (double __x) ;








extern double ceil (double __x) ; extern double __ceil (double __x) ;


extern double fabs (double __x) ; extern double __fabs (double __x) ;


extern double floor (double __x) ; extern double __floor (double __x) ;


extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;




extern int __isinf (double __value) ;


extern int __finite (double __value) ;








extern int isinf (double __value) ;



extern int finite (double __value) ;


extern double drem (double __x, double __y) ; extern double __drem (double __x, double __y) ;



extern double significand (double __x) ; extern double __significand (double __x) ;





extern double copysign (double __x, double __y) ; extern double __copysign (double __x, double __y) ;






extern double nan (const char *__tagb) ; extern double __nan (const char *__tagb) ;





extern int __isnan (double __value) ;






extern int isnan (double __value) ;





extern double j0 (double) ; extern double __j0 (double) ;
extern double j1 (double) ; extern double __j1 (double) ;
extern double jn (int, double) ; extern double __jn (int, double) ;
extern double y0 (double) ; extern double __y0 (double) ;
extern double y1 (double) ; extern double __y1 (double) ;
extern double yn (int, double) ; extern double __yn (int, double) ;






extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;






extern double tgamma (double) ; extern double __tgamma (double) ;





extern double gamma (double) ; extern double __gamma (double) ;






extern double lgamma_r (double, int *__signgamp) ; extern double __lgamma_r (double, int *__signgamp) ;







extern double rint (double __x) ; extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;
extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;



extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;



extern int ilogb (double __x) ; extern int __ilogb (double __x) ;




extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;



extern double round (double __x) ; extern double __round (double __x) ;



extern double trunc (double __x) ; extern double __trunc (double __x) ;




extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ; extern long int __lrint (double __x) ;
__extension__
extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;



extern long int lround (double __x) ; extern long int __lround (double __x) ;
__extension__
extern long long int llround (double __x) ; extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;


extern double fmax (double __x, double __y) ; extern double __fmax (double __x, double __y) ;


extern double fmin (double __x, double __y) ; extern double __fmin (double __x, double __y) ;



extern int __fpclassify (double __value)
     ;


extern int __signbit (double __value)
     ;



extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;




extern double scalb (double __x, double __n) ; extern double __scalb (double __x, double __n) ;


extern float acosf (float __x) ; extern float __acosf (float __x) ;

extern float asinf (float __x) ; extern float __asinf (float __x) ;

extern float atanf (float __x) ; extern float __atanf (float __x) ;

extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;


 extern float cosf (float __x) ; extern float __cosf (float __x) ;

 extern float sinf (float __x) ; extern float __sinf (float __x) ;

extern float tanf (float __x) ; extern float __tanf (float __x) ;




extern float coshf (float __x) ; extern float __coshf (float __x) ;

extern float sinhf (float __x) ; extern float __sinhf (float __x) ;

extern float tanhf (float __x) ; extern float __tanhf (float __x) ;



extern float acoshf (float __x) ; extern float __acoshf (float __x) ;

extern float asinhf (float __x) ; extern float __asinhf (float __x) ;

extern float atanhf (float __x) ; extern float __atanhf (float __x) ;







 extern float expf (float __x) ; extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;


 extern float logf (float __x) ; extern float __logf (float __x) ;


extern float log10f (float __x) ; extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr) ;



extern float expm1f (float __x) ; extern float __expm1f (float __x) ;


extern float log1pf (float __x) ; extern float __log1pf (float __x) ;


extern float logbf (float __x) ; extern float __logbf (float __x) ;






extern float exp2f (float __x) ; extern float __exp2f (float __x) ;


extern float log2f (float __x) ; extern float __log2f (float __x) ;








 extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;





extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;






extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;








extern float ceilf (float __x) ; extern float __ceilf (float __x) ;


extern float fabsf (float __x) ; extern float __fabsf (float __x) ;


extern float floorf (float __x) ; extern float __floorf (float __x) ;


extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;




extern int __isinff (float __value) ;


extern int __finitef (float __value) ;








extern int isinff (float __value) ;



extern int finitef (float __value) ;


extern float dremf (float __x, float __y) ; extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ; extern float __significandf (float __x) ;





extern float copysignf (float __x, float __y) ; extern float __copysignf (float __x, float __y) ;






extern float nanf (const char *__tagb) ; extern float __nanf (const char *__tagb) ;





extern int __isnanf (float __value) ;






extern int isnanf (float __value) ;





extern float j0f (float) ; extern float __j0f (float) ;
extern float j1f (float) ; extern float __j1f (float) ;
extern float jnf (int, float) ; extern float __jnf (int, float) ;
extern float y0f (float) ; extern float __y0f (float) ;
extern float y1f (float) ; extern float __y1f (float) ;
extern float ynf (int, float) ; extern float __ynf (int, float) ;






extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;






extern float tgammaf (float) ; extern float __tgammaf (float) ;





extern float gammaf (float) ; extern float __gammaf (float) ;






extern float lgammaf_r (float, int *__signgamp) ; extern float __lgammaf_r (float, int *__signgamp) ;







extern float rintf (float __x) ; extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;
extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;



extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;



extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;




extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;



extern float roundf (float __x) ; extern float __roundf (float __x) ;



extern float truncf (float __x) ; extern float __truncf (float __x) ;




extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;
__extension__
extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;
__extension__
extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;


extern float fmaxf (float __x, float __y) ; extern float __fmaxf (float __x, float __y) ;


extern float fminf (float __x, float __y) ; extern float __fminf (float __x, float __y) ;



extern int __fpclassifyf (float __value)
     ;


extern int __signbitf (float __value)
     ;



extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;




extern float scalbf (float __x, float __n) ; extern float __scalbf (float __x, float __n) ;


extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;

extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;

extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;


 extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;

 extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;

extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;




extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;

extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;

extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;



extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;

extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;

extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;







 extern long double expl (long double __x) ; extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;


 extern long double logl (long double __x) ; extern long double __logl (long double __x) ;


extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr) ;



extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;


extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;






extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;


extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;








 extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;





extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;






extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;








extern long double ceill (long double __x) ; extern long double __ceill (long double __x) ;


extern long double fabsl (long double __x) ; extern long double __fabsl (long double __x) ;


extern long double floorl (long double __x) ; extern long double __floorl (long double __x) ;


extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;




extern int __isinfl (long double __value) ;


extern int __finitel (long double __value) ;








extern int isinfl (long double __value) ;



extern int finitel (long double __value) ;


extern long double dreml (long double __x, long double __y) ; extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ; extern long double __significandl (long double __x) ;





extern long double copysignl (long double __x, long double __y) ; extern long double __copysignl (long double __x, long double __y) ;






extern long double nanl (const char *__tagb) ; extern long double __nanl (const char *__tagb) ;





extern int __isnanl (long double __value) ;






extern int isnanl (long double __value) ;





extern long double j0l (long double) ; extern long double __j0l (long double) ;
extern long double j1l (long double) ; extern long double __j1l (long double) ;
extern long double jnl (int, long double) ; extern long double __jnl (int, long double) ;
extern long double y0l (long double) ; extern long double __y0l (long double) ;
extern long double y1l (long double) ; extern long double __y1l (long double) ;
extern long double ynl (int, long double) ; extern long double __ynl (int, long double) ;






extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;






extern long double tgammal (long double) ; extern long double __tgammal (long double) ;





extern long double gammal (long double) ; extern long double __gammal (long double) ;






extern long double lgammal_r (long double, int *__signgamp) ; extern long double __lgammal_r (long double, int *__signgamp) ;







extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;
extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;



extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;



extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;




extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x) ; extern long double __roundl (long double __x) ;



extern long double truncl (long double __x) ; extern long double __truncl (long double __x) ;




extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;
__extension__
extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;
__extension__
extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;


extern long double fmaxl (long double __x, long double __y) ; extern long double __fmaxl (long double __x, long double __y) ;


extern long double fminl (long double __x, long double __y) ; extern long double __fminl (long double __x, long double __y) ;



extern int __fpclassifyl (long double __value)
     ;


extern int __signbitl (long double __value)
     ;



extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;




extern long double scalbl (long double __x, long double __n) ; extern long double __scalbl (long double __x, long double __n) ;
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





extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
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
int _af_compression_index_from_id (int *data_flow, int compressionid);
uint16_t _af_byteswap_int16 (int *data_flow, uint16_t x);
uint32_t _af_byteswap_int32 (int *data_flow, uint32_t x);
float _af_byteswap_float32 (int *data_flow, float x);
double _af_byteswap_double64 (double x);
void _af_printid (int *data_flow, uint32_t id);
void _af_print_filehandle (int *data_flow, AFfilehandle filehandle);
void _af_print_tracks (int *data_flow, AFfilehandle filehandle);
void _af_print_channel_matrix (int *data_flow, double *matrix, int fchans, int vchans);
void _af_print_pvlist (int *data_flow, AUpvlist list);

void _af_print_audioformat (int *data_flow, _AudioFormat *format);
void _af_print_chunk (int *data_flow, _AFchunk *chunk);
void _af_print_frame (int *data_flow, AFframecount frameno, double *frame, int nchannels,
 char *formatstring, int numberwidth,
 double slope, double intercept, double minclip, double maxclip);




_AFmoduleinst _af_initfloatrebufferv2f (int *data_flow, AFframecount nsamps, 
                                                            _Bool 
                                                                 multiple_of);
_AFmoduleinst _af_initfloatrebufferf2v (int *data_flow, AFframecount nsamps, 
                                                            _Bool 
                                                                 multiple_of);

_AFmoduleinst _af_initint2rebufferv2f (int *data_flow, AFframecount nsamps, 
                                                           _Bool 
                                                                multiple_of);
_AFmoduleinst _af_initint2rebufferf2v (int *data_flow, AFframecount nsamps, 
                                                           _Bool 
                                                                multiple_of);
extern const _PCMInfo _af_default_signed_integer_pcm_mappings[];
extern const _PCMInfo _af_default_unsigned_integer_pcm_mappings[];
extern const _PCMInfo _af_default_float_pcm_mapping;
extern const _PCMInfo _af_default_double_pcm_mapping;

extern _CompressionUnit _af_compression[];


extern const _AFmodule int2rebufferv2f, int2rebufferf2v;
_AFmoduleinst _AFnewmodinst (int *data_flow, const _AFmodule *mod)
{
 _AFmoduleinst ret={0};

 ret.inc = ret.outc = 
                     ((void *)0)
                         ;
 ret.modspec = 
              ((void *)0)
                  ;
 ret.u.pull.source = 
                    ((void *)0)
                        ;
 ret.mod = mod;
 ret.free_on_close = 
                    0
                         ;
 ret.valid = 
            0
                 ;

 return(ret);
}




void _AFfreemodspec (int *data_flow, _AFmoduleinst *i)
{
 if (i->modspec)
  free(i->modspec);
 i->modspec = 
             ((void *)0)
                 ;
}




AFframecount _AFpull (int *data_flow, _AFmoduleinst *i, AFframecount nframes2pull)
{
 _AFmoduleinst *src = i->u.pull.source;

 i->inc->nframes = nframes2pull;

                                                 ;
 (*src->mod->run_pull)(data_flow, src);
 ;


                                                 ;
 return i->inc->nframes;
}




void _AFsimplemodrun_pull (int *data_flow, _AFmoduleinst *i)
{
 _AFpull(data_flow, i, i->outc->nframes);
 (*i->mod->run)(data_flow, i->inc, i->outc, i->modspec);
}




void _AFpush (int *data_flow, _AFmoduleinst *i, AFframecount nframes2push)
{
 _AFmoduleinst *snk = i->u.push.sink;
 i->outc->nframes = nframes2push;

                                                  ;
 ;
 (*(snk->mod->run_push))(data_flow, snk);
}




void _AFpushat (int *data_flow, _AFmoduleinst *i, AFframecount startframe, 
                                                          _Bool 
                                                               stretchint,
 AFframecount nframes2push)
{
 _AFmoduleinst *snk = i->u.push.sink;

 void *saved_buf = i->outc->buf;
 i->outc->buf = ((char *)i->outc->buf) +
  (_af_format_frame_size_uncompressed(data_flow, &i->outc->f,stretchint) * startframe);

 i->outc->nframes = nframes2push;


                                                              ;
 ;
 (*(snk->mod->run_push))(data_flow, snk);

 i->outc->buf = saved_buf;
}




void _AFsimplemodrun_push (int *data_flow, _AFmoduleinst *i)
{
 i->outc->nframes = i->inc->nframes;
 (*(i->mod->run))(data_flow, i->inc, i->outc, i->modspec);
 _AFpush(data_flow, i, i->outc->nframes);
}
static void swap2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar2 *ip = inc->buf; uchar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { char3u u={0}; uchar1 c={0}; u.uchar2.s0 = ip[i]; c = u.uchar1.c1; u.uchar1.c1 = u.uchar1.c0; u.uchar1.c0 = c; op[i] = u.uchar2.s0; }; ;}static void swap2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->byteOrder = (f->byteOrder==AF_BYTEORDER_LITTLEENDIAN) ? AF_BYTEORDER_BIGENDIAN : AF_BYTEORDER_LITTLEENDIAN;}static const _AFmodule swap2 ={ "swap2", swap2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), swap2run, _AFfreemodspec };




static void swap3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ real_char3 *ip = inc->buf; real_char3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { char3u u={0}; uchar1 c={0}; u.real_char3_low.c3 = ip[i]; c = u.uchar1.c3; u.uchar1.c3 = u.uchar1.c1; u.uchar1.c1 = c; op[i] = u.real_char3_low.c3; }; ;}static void swap3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->byteOrder = (f->byteOrder==AF_BYTEORDER_LITTLEENDIAN) ? AF_BYTEORDER_BIGENDIAN : AF_BYTEORDER_LITTLEENDIAN;}static const _AFmodule swap3 ={ "swap3", swap3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), swap3run, _AFfreemodspec };




static void swap4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar4 *ip = inc->buf; uchar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { char3u u={0}; uchar1 c={0}; u.uchar4.i = ip[i]; c = u.uchar1.c3; u.uchar1.c3 = u.uchar1.c0; u.uchar1.c0 = c; c = u.uchar1.c1; u.uchar1.c1 = u.uchar1.c2; u.uchar1.c2 = c; op[i] = u.uchar4.i; }; ;}static void swap4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->byteOrder = (f->byteOrder==AF_BYTEORDER_LITTLEENDIAN) ? AF_BYTEORDER_BIGENDIAN : AF_BYTEORDER_LITTLEENDIAN;}static const _AFmodule swap4 ={ "swap4", swap4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), swap4run, _AFfreemodspec };





static void swap8run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ real_char8 *ip = inc->buf; real_char8 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { real_char8 *i8 = &ip[i]; real_char8 *o8 = &op[i]; o8->c0 = i8->c7; o8->c1 = i8->c6; o8->c2 = i8->c5; o8->c3 = i8->c4; o8->c4 = i8->c3; o8->c5 = i8->c2; o8->c6 = i8->c1; o8->c7 = i8->c0; }; ;}static void swap8describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->byteOrder = (f->byteOrder==AF_BYTEORDER_LITTLEENDIAN) ? AF_BYTEORDER_BIGENDIAN : AF_BYTEORDER_LITTLEENDIAN;}static const _AFmodule swap8 ={ "swap8", swap8describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), swap8run, _AFfreemodspec };
static void real_char3_to_schar3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ real_char3 *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { char3u u={0}; u.real_char3_low.c3 = ip[i]; u.real_char3_low.pad = 0; op[i] = u.schar3.i >> 8; }; ;}static void real_char3_to_schar3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f;}static const _AFmodule real_char3_to_schar3 ={ "real_char3_to_schar3", real_char3_to_schar3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), real_char3_to_schar3run, _AFfreemodspec };
static void real_char3_to_uchar3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ real_char3 *ip = inc->buf; uchar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { char3u u={0}; u.real_char3_low.c3 = ip[i]; u.real_char3_low.pad = 0; op[i] = u.uchar3.i >> 8; }; ;}static void real_char3_to_uchar3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f;}static const _AFmodule real_char3_to_uchar3 ={ "real_char3_to_uchar3", real_char3_to_uchar3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), real_char3_to_uchar3run, _AFfreemodspec };
static void char3_to_real_char3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar3 *ip = inc->buf; real_char3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) { char3u u={0}; u.uchar3.i = ip[i]; op[i] = u.real_char3_high.c3; }; ;}static void char3_to_real_char3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f;}static const _AFmodule char3_to_real_char3 ={ "char3_to_real_char3", char3_to_real_char3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), char3_to_real_char3run, _AFfreemodspec };
static void float2doublerun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void float2doubledescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_DOUBLE;}static const _AFmodule float2double ={ "float2double", float2doubledescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), float2doublerun, _AFfreemodspec };

static void double2floatrun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void double2floatdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_FLOAT;}static const _AFmodule double2float ={ "double2float", double2floatdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), double2floatrun, _AFfreemodspec };






static void int2float1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2float1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_FLOAT;}static const _AFmodule int2float1 ={ "int2float1", int2float1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2float1run, _AFfreemodspec };

static void int2float2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2float2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_FLOAT;}static const _AFmodule int2float2 ={ "int2float2", int2float2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2float2run, _AFfreemodspec };

static void int2float3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2float3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_FLOAT;}static const _AFmodule int2float3 ={ "int2float3", int2float3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2float3run, _AFfreemodspec };

static void int2float4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2float4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_FLOAT;}static const _AFmodule int2float4 ={ "int2float4", int2float4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2float4run, _AFfreemodspec };






static void int2double1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2double1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_DOUBLE;}static const _AFmodule int2double1 ={ "int2double1", int2double1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2double1run, _AFfreemodspec };

static void int2double2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2double2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_DOUBLE;}static const _AFmodule int2double2 ={ "int2double2", int2double2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2double2run, _AFfreemodspec };

static void int2double3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2double3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_DOUBLE;}static const _AFmodule int2double3 ={ "int2double3", int2double3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2double3run, _AFfreemodspec };

static void int2double4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i]; ;}static void int2double4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; f->sampleFormat = AF_SAMPFMT_DOUBLE;}static const _AFmodule int2double4 ={ "int2double4", int2double4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2double4run, _AFfreemodspec };
typedef struct pcmmodspec
{

 double m, b;
 double maxv, minv;


 _PCMInfo output_mapping;
} pcmmodspec;




static _AFmoduleinst initpcmmod (int *data_flow, const _AFmodule *mod,
 _PCMInfo *input_mapping, _PCMInfo *output_mapping)
{
 _AFmoduleinst ret = _AFnewmodinst(data_flow, mod);
 pcmmodspec *m = _af_malloc(data_flow, sizeof (pcmmodspec));
 ret.modspec = m;


 m->output_mapping = *output_mapping;





 if (input_mapping)
 {
  m->m = output_mapping->slope / input_mapping->slope;
  m->b = output_mapping->intercept - m->m * input_mapping->intercept;
 }


 m->minv = output_mapping->minClip;
 m->maxv = output_mapping->maxClip;
 return ret;
}
static void floattransformrun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) op[i]=(m->b + m->m * ip[i]); ;}static void floattransformdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; ; };}static const _AFmodule floattransform ={ "floattransform", floattransformdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), floattransformrun, _AFfreemodspec };

static void doubletransformrun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) op[i]=(m->b + m->m * ip[i]); ;}static void doubletransformdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; ; };}static const _AFmodule doubletransform ={ "doubletransform", doubletransformdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), doubletransformrun, _AFfreemodspec };
static void float2int1_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar1)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void float2int1_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 8; }; };}static const _AFmodule float2int1_clip ={ "float2int1_clip", float2int1_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), float2int1_cliprun, _AFfreemodspec };


static void float2int2_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar2)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void float2int2_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 16; }; };}static const _AFmodule float2int2_clip ={ "float2int2_clip", float2int2_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), float2int2_cliprun, _AFfreemodspec };


static void float2int3_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar3)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void float2int3_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 24; }; };}static const _AFmodule float2int3_clip ={ "float2int3_clip", float2int3_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), float2int3_cliprun, _AFfreemodspec };


static void float2int4_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar4)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void float2int4_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 32; }; };}static const _AFmodule float2int4_clip ={ "float2int4_clip", float2int4_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), float2int4_cliprun, _AFfreemodspec };



static void double2int1_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar1)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void double2int1_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 8; }; };}static const _AFmodule double2int1_clip ={ "double2int1_clip", double2int1_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), double2int1_cliprun, _AFfreemodspec };


static void double2int2_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar2)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void double2int2_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 16; }; };}static const _AFmodule double2int2_clip ={ "double2int2_clip", double2int2_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), double2int2_cliprun, _AFfreemodspec };


static void double2int3_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar3)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void double2int3_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 24; }; };}static const _AFmodule double2int3_clip ={ "double2int3_clip", double2int3_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), double2int3_cliprun, _AFfreemodspec };


static void double2int4_cliprun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=(m->b + m->m * ip[i]); op[i] = (((schar4)((d>(m->maxv)) ? (m->maxv) : ((d<(m->minv))?(m->minv):d)))); }; ;}static void double2int4_clipdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *) i->modspec)->output_mapping; { f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->sampleWidth = 32; }; };}static const _AFmodule double2int4_clip ={ "double2int4_clip", double2int4_clipdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), double2int4_cliprun, _AFfreemodspec };
static void clipfloatrun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ float *ip = inc->buf; float *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { float d=ip[i]; float min=(float)(m->minv); float max=(float)(m->maxv); op[i] = ((d>max) ? max : ((d<min) ? min : d)); }; ;}static void clipfloatdescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *)i->modspec)->output_mapping; };}static const _AFmodule clipfloat ={ "clipfloat", clipfloatdescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), clipfloatrun, _AFfreemodspec };
static void clipdoublerun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ double *ip = inc->buf; double *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { double d=ip[i]; double min=(double)(m->minv); double max=(double)(m->maxv); op[i] = ((d>max) ? max : ((d<min) ? min : d)); }; ;}static void clipdoubledescribe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *)i->modspec)->output_mapping; };}static const _AFmodule clipdouble ={ "clipdouble", clipdoubledescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), clipdoublerun, _AFfreemodspec };
static void clip1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { schar1 d=ip[i]; schar1 min=(schar1)(m->minv); schar1 max=(schar1)(m->maxv); op[i] = ((d>max) ? max : ((d<min) ? min : d)); }; ;}static void clip1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *)i->modspec)->output_mapping; };}static const _AFmodule clip1 ={ "clip1", clip1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), clip1run, _AFfreemodspec };
static void clip2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { schar2 d=ip[i]; schar2 min=(schar2)(m->minv); schar2 max=(schar2)(m->maxv); op[i] = ((d>max) ? max : ((d<min) ? min : d)); }; ;}static void clip2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *)i->modspec)->output_mapping; };}static const _AFmodule clip2 ={ "clip2", clip2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), clip2run, _AFfreemodspec };
static void clip3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { schar3 d=ip[i]; schar3 min=(schar3)(m->minv); schar3 max=(schar3)(m->maxv); op[i] = ((d>max) ? max : ((d<min) ? min : d)); }; ;}static void clip3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *)i->modspec)->output_mapping; };}static const _AFmodule clip3 ={ "clip3", clip3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), clip3run, _AFfreemodspec };
static void clip4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; pcmmodspec *m = (pcmmodspec *) modspec; for(i=0; i < count; ++i) { schar4 d=ip[i]; schar4 min=(schar4)(m->minv); schar4 max=(schar4)(m->maxv); op[i] = ((d>max) ? max : ((d<min) ? min : d)); }; ;}static void clip4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->pcm = ((pcmmodspec *)i->modspec)->output_mapping; };}static const _AFmodule clip4 ={ "clip4", clip4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), clip4run, _AFfreemodspec };





static void unsigned2signed1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar1 *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] + (-128.0); ;}static void unsigned2signed1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = (double) (-128.0); f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule unsigned2signed1 ={ "unsigned2signed1", unsigned2signed1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), unsigned2signed1run, _AFfreemodspec };
static void unsigned2signed2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar2 *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] + (-32768.0); ;}static void unsigned2signed2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = (double) (-32768.0); f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule unsigned2signed2 ={ "unsigned2signed2", unsigned2signed2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), unsigned2signed2run, _AFfreemodspec };
static void unsigned2signed3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar3 *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] + (-8388608.0); ;}static void unsigned2signed3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = (double) (-8388608.0); f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule unsigned2signed3 ={ "unsigned2signed3", unsigned2signed3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), unsigned2signed3run, _AFfreemodspec };
static void unsigned2signed4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ uchar4 *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] + (-2147483648.0); ;}static void unsigned2signed4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = (double) (-2147483648.0); f->sampleFormat = AF_SAMPFMT_TWOSCOMP; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule unsigned2signed4 ={ "unsigned2signed4", unsigned2signed4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), unsigned2signed4run, _AFfreemodspec };
static void signed2unsigned1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; uchar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] - (-128.0); ;}static void signed2unsigned1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = -(double) (-128.0); f->sampleFormat = AF_SAMPFMT_UNSIGNED; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule signed2unsigned1 ={ "signed2unsigned1", signed2unsigned1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), signed2unsigned1run, _AFfreemodspec };
static void signed2unsigned2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; uchar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] - (-32768.0); ;}static void signed2unsigned2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = -(double) (-32768.0); f->sampleFormat = AF_SAMPFMT_UNSIGNED; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule signed2unsigned2 ={ "signed2unsigned2", signed2unsigned2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), signed2unsigned2run, _AFfreemodspec };
static void signed2unsigned3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; uchar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] - (-8388608.0); ;}static void signed2unsigned3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = -(double) (-8388608.0); f->sampleFormat = AF_SAMPFMT_UNSIGNED; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule signed2unsigned3 ={ "signed2unsigned3", signed2unsigned3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), signed2unsigned3run, _AFfreemodspec };
static void signed2unsigned4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; uchar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] - (-2147483648.0); ;}static void signed2unsigned4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { double shift = -(double) (-2147483648.0); f->sampleFormat = AF_SAMPFMT_UNSIGNED; f->pcm.intercept += shift; f->pcm.minClip += shift; f->pcm.maxClip += shift; };}static const _AFmodule signed2unsigned4 ={ "signed2unsigned4", signed2unsigned4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), signed2unsigned4run, _AFfreemodspec };
static void int1_2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] << 8; ;}static void int1_2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 16; f->pcm=_af_default_signed_integer_pcm_mappings[2]; };}static const _AFmodule int1_2 ={ "int1_2", int1_2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int1_2run, _AFfreemodspec };

static void int1_3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] << 16; ;}static void int1_3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 24; f->pcm=_af_default_signed_integer_pcm_mappings[3]; };}static const _AFmodule int1_3 ={ "int1_3", int1_3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int1_3run, _AFfreemodspec };

static void int1_4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar1 *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] << 24; ;}static void int1_4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 32; f->pcm=_af_default_signed_integer_pcm_mappings[4]; };}static const _AFmodule int1_4 ={ "int1_4", int1_4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int1_4run, _AFfreemodspec };


static void int2_1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] >> 8; ;}static void int2_1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 8; f->pcm=_af_default_signed_integer_pcm_mappings[1]; };}static const _AFmodule int2_1 ={ "int2_1", int2_1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2_1run, _AFfreemodspec };

static void int2_3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] << 8; ;}static void int2_3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 24; f->pcm=_af_default_signed_integer_pcm_mappings[3]; };}static const _AFmodule int2_3 ={ "int2_3", int2_3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2_3run, _AFfreemodspec };

static void int2_4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar2 *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] << 16; ;}static void int2_4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 32; f->pcm=_af_default_signed_integer_pcm_mappings[4]; };}static const _AFmodule int2_4 ={ "int2_4", int2_4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int2_4run, _AFfreemodspec };


static void int3_1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] >> 16; ;}static void int3_1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 8; f->pcm=_af_default_signed_integer_pcm_mappings[1]; };}static const _AFmodule int3_1 ={ "int3_1", int3_1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int3_1run, _AFfreemodspec };

static void int3_2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] >> 8; ;}static void int3_2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 16; f->pcm=_af_default_signed_integer_pcm_mappings[2]; };}static const _AFmodule int3_2 ={ "int3_2", int3_2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int3_2run, _AFfreemodspec };

static void int3_4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar3 *ip = inc->buf; schar4 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] << 8; ;}static void int3_4describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 32; f->pcm=_af_default_signed_integer_pcm_mappings[4]; };}static const _AFmodule int3_4 ={ "int3_4", int3_4describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int3_4run, _AFfreemodspec };


static void int4_1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; schar1 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] >> 24; ;}static void int4_1describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 8; f->pcm=_af_default_signed_integer_pcm_mappings[1]; };}static const _AFmodule int4_1 ={ "int4_1", int4_1describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int4_1run, _AFfreemodspec };

static void int4_2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; schar2 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] >> 16; ;}static void int4_2describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 16; f->pcm=_af_default_signed_integer_pcm_mappings[2]; };}static const _AFmodule int4_2 ={ "int4_2", int4_2describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int4_2run, _AFfreemodspec };

static void int4_3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec){ schar4 *ip = inc->buf; schar3 *op = outc->buf; int count = inc->nframes * (inc->f.channelCount); int i={0}; ; for(i=0; i < count; ++i) op[i] = ip[i] >> 8; ;}static void int4_3describe(int *data_flow, struct _AFmoduleinst *i){ _AudioFormat *f = &i->outc->f; { f->sampleWidth = 24; f->pcm=_af_default_signed_integer_pcm_mappings[3]; };}static const _AFmodule int4_3 ={ "int4_3", int4_3describe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), int4_3run, _AFfreemodspec };
typedef struct channelchangedata
{
 int outchannels;
 double minClip;
 double maxClip;
 double *matrix;
} channelchangedata;




static void channelchangefree (int *data_flow, struct _AFmoduleinst *i)
{
 channelchangedata *d = i->modspec;

 
((
d
) ? (void) (0) : __assert_fail (
"d"
, "libaudiofile/modules.c", 680, __PRETTY_FUNCTION__))
         ;
 
((
d->matrix
) ? (void) (0) : __assert_fail (
"d->matrix"
, "libaudiofile/modules.c", 681, __PRETTY_FUNCTION__))
                 ;

 free(d->matrix);
 free(d);

 i->modspec = ((void *) 0);
}




static void channelchangedescribe (int *data_flow, struct _AFmoduleinst *i)
{
 channelchangedata *m = (channelchangedata *) i->modspec;
 i->outc->f.channelCount = m->outchannels;
 i->outc->f.pcm.minClip = m->minClip;
 i->outc->f.pcm.maxClip = m->maxClip;
}
static void channelchangefloatrun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec) { float *ip = inc->buf; float *op = outc->buf; double *matrix = ((channelchangedata *)modspec)->matrix; double *m={0}; int frame, inch, outch={0}; for (frame=0; frame < outc->nframes; frame++) { float *ipsave={0}; m = matrix; ipsave = ip; for (outch = 0; outch < outc->f.channelCount; outch++) { *op = 0.0; ip = ipsave; for (inch = 0; inch < inc->f.channelCount; inch++) *op += *ip++ * *m++; ; op++; } }}static const _AFmodule channelchangefloat ={ "channelchangefloat", channelchangedescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), channelchangefloatrun, channelchangefree };

static void channelchangedoublerun(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec) { double *ip = inc->buf; double *op = outc->buf; double *matrix = ((channelchangedata *)modspec)->matrix; double *m={0}; int frame, inch, outch={0}; for (frame=0; frame < outc->nframes; frame++) { double *ipsave={0}; m = matrix; ipsave = ip; for (outch = 0; outch < outc->f.channelCount; outch++) { *op = 0.0; ip = ipsave; for (inch = 0; inch < inc->f.channelCount; inch++) *op += *ip++ * *m++; ; op++; } }}static const _AFmodule channelchangedouble ={ "channelchangedouble", channelchangedescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), channelchangedoublerun, channelchangefree };
static void channelchange1run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec) { schar1 *ip = inc->buf; schar1 *op = outc->buf; double *matrix = ((channelchangedata *)modspec)->matrix; double *m={0}; int frame, inch, outch={0}; for (frame=0; frame < outc->nframes; frame++) { schar1 *ipsave={0}; m = matrix; ipsave = ip; for (outch = 0; outch < outc->f.channelCount; outch++) { double d=0.0; ip = ipsave; for (inch = 0; inch < inc->f.channelCount; inch++) d += *ip++ * *m++; { double minv=outc->f.pcm.minClip; double maxv=outc->f.pcm.maxClip; *op = (schar1) ((d>maxv) ? maxv : ((d<minv) ? minv : d)); }; op++; } }}static const _AFmodule channelchange1 ={ "channelchange1", channelchangedescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), channelchange1run, channelchangefree };
static void channelchange2run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec) { schar2 *ip = inc->buf; schar2 *op = outc->buf; double *matrix = ((channelchangedata *)modspec)->matrix; double *m={0}; int frame, inch, outch={0}; for (frame=0; frame < outc->nframes; frame++) { schar2 *ipsave={0}; m = matrix; ipsave = ip; for (outch = 0; outch < outc->f.channelCount; outch++) { double d=0.0; ip = ipsave; for (inch = 0; inch < inc->f.channelCount; inch++) d += *ip++ * *m++; { double minv=outc->f.pcm.minClip; double maxv=outc->f.pcm.maxClip; *op = (schar2) ((d>maxv) ? maxv : ((d<minv) ? minv : d)); }; op++; } }}static const _AFmodule channelchange2 ={ "channelchange2", channelchangedescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), channelchange2run, channelchangefree };
static void channelchange3run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec) { schar3 *ip = inc->buf; schar3 *op = outc->buf; double *matrix = ((channelchangedata *)modspec)->matrix; double *m={0}; int frame, inch, outch={0}; for (frame=0; frame < outc->nframes; frame++) { schar3 *ipsave={0}; m = matrix; ipsave = ip; for (outch = 0; outch < outc->f.channelCount; outch++) { double d=0.0; ip = ipsave; for (inch = 0; inch < inc->f.channelCount; inch++) d += *ip++ * *m++; { double minv=outc->f.pcm.minClip; double maxv=outc->f.pcm.maxClip; *op = (schar3) ((d>maxv) ? maxv : ((d<minv) ? minv : d)); }; op++; } }}static const _AFmodule channelchange3 ={ "channelchange3", channelchangedescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), channelchange3run, channelchangefree };
static void channelchange4run(int *data_flow, _AFchunk *inc, _AFchunk *outc, void *modspec) { schar4 *ip = inc->buf; schar4 *op = outc->buf; double *matrix = ((channelchangedata *)modspec)->matrix; double *m={0}; int frame, inch, outch={0}; for (frame=0; frame < outc->nframes; frame++) { schar4 *ipsave={0}; m = matrix; ipsave = ip; for (outch = 0; outch < outc->f.channelCount; outch++) { double d=0.0; ip = ipsave; for (inch = 0; inch < inc->f.channelCount; inch++) d += *ip++ * *m++; { double minv=outc->f.pcm.minClip; double maxv=outc->f.pcm.maxClip; *op = (schar4) ((d>maxv) ? maxv : ((d<minv) ? minv : d)); }; op++; } }}static const _AFmodule channelchange4 ={ "channelchange4", channelchangedescribe, ((void *) 0), ((void *) 0), _AFsimplemodrun_pull, ((void *) 0), ((void *) 0), _AFsimplemodrun_push, ((void *) 0), ((void *) 0), channelchange4run, channelchangefree };




static _AFmoduleinst initchannelchange (int *data_flow, const _AFmodule *mod,
 double *matrix, _PCMInfo *outpcm,
 int inchannels, int outchannels,
 
_Bool 
     reading)
{
 _AFmoduleinst ret={0};
 channelchangedata *d={0};
 int i, j={0};

 ret = _AFnewmodinst(data_flow, mod);

 d = _af_malloc(data_flow, sizeof (channelchangedata));
 ret.modspec = d;
 d->outchannels = outchannels;
 d->minClip = outpcm->minClip;
 d->maxClip = outpcm->maxClip;
 d->matrix = _af_malloc(data_flow, sizeof (double) * inchannels * outchannels);




 if (!matrix)
 {
  
 _Bool 
      special=
              0
                   ;



  if (inchannels==1 && outchannels==2)
  {
   static double m[]={1,1};
   matrix=m;
   special=
          1
              ;
  }
  else if (inchannels==1 && outchannels==4)
  {
   static double m[]={1,1,0,0};
   matrix=m;
   special=
          1
              ;
  }
  else if (inchannels==2 && outchannels==1)
  {
   static double m[]={.5,.5};
   matrix=m;
   special=
          1
              ;
  }
  else if (inchannels==2 && outchannels==4)
  {
   static double m[]={1,0,0,1,0,0,0,0};
   matrix=m;
   special=
          1
              ;
  }
  else if (inchannels==4 && outchannels==1)
  {
   static double m[]={.5,.5,.5,.5};
   matrix=m;
   special=
          1
              ;
  }
  else if (inchannels==4 && outchannels==2)
  {
   static double m[]={1,0,1,0,0,1,0,1};
   matrix=m;
   special=
          1
              ;
  }
  else
  {






   for(i=0; i < inchannels; i++)
    for(j=0; j < outchannels; j++)
     d->matrix[j*inchannels + i] =
      (i==j) ? 1.0 : 0.0;
  }

  if (special)
   memcpy(d->matrix, matrix,
    sizeof (double) * inchannels * outchannels);
 }

 else
 {

  if (reading)
  {
   memcpy(d->matrix, matrix, sizeof (double) * inchannels * outchannels);
  }

  else
  {
   for (i=0; i < inchannels; i++)
    for (j=0; j < outchannels; j++)
     d->matrix[j*inchannels + i] =
      matrix[i*outchannels + j];
  }
 }

 ;
 ;
 ;

 return(ret);
}


typedef struct current_state
{
 _AFmoduleinst *modinst;
 _AFchunk *inchunk;
 _AFchunk *outchunk;
} current_state;






static void addmod (int *data_flow, current_state *current, _AFmoduleinst modinst)
{
 *(current->modinst) = modinst;
 current->modinst->valid = 
                          1
                              ;



 current->modinst->inc = current->inchunk;
 current->modinst->outc = current->outchunk;







 *(current->outchunk) = *((current->inchunk) + (data_flow[26] * (0x6c687151 == data_flow[26])));

 if (current->modinst->mod->describe)
  (*current->modinst->mod->describe)(data_flow, current->modinst);






 current->modinst++;
 current->inchunk = current->outchunk;
 current->outchunk++;
}
static status initfilemods (int *data_flow, _Track *track, AFfilehandle h)
{
 int compressionIndex={0};
 _CompressionUnit *compunit={0};
 if ( (track) && &((*track).data_size)) {
data_flow[18] = *(const unsigned int *)&((*track).data_size);
}
AFframecount chunkframes={0};

 compressionIndex = _af_compression_index_from_id(data_flow, track->f.compressionType + (data_flow[16] * (0x5346696e == data_flow[16])));
 compunit = &_af_compression[compressionIndex + (data_flow[17] * (0x736f4249 == data_flow[17]))];



 track->ms.filemodinst.valid = 
                              0
                                   ;
 track->ms.filemod_rebufferinst.valid = 
                                       0
                                            ;
 if (af_fseek(data_flow, h->fh, track->fpos_first_frame, 
                                             0
                                                     ) < 0)
 {
  _af_error(data_flow, AF_BAD_LSEEK, "unable to position file handle at beginning of sound data");
  return (-1);
 }



 track->filemodhappy = 
                      1
                          ;

 if (h->access == _AF_READ_ACCESS)
  track->ms.filemodinst =
   (*compunit->initdecompress)(data_flow, track, h->fh, h->seekok,
    (h->fileFormat==AF_FILE_RAWDATA), &chunkframes);
 else
  track->ms.filemodinst =
   (*compunit->initcompress)(data_flow, track, h->fh, h->seekok,
    (h->fileFormat==AF_FILE_RAWDATA), &chunkframes);

 if (!track->filemodhappy)
  return (-1);

 track->ms.filemodinst.valid = 
                              1
                                  ;
 if (compunit->needsRebuffer)
 {

  
 ((
 compunit->nativeSampleFormat == AF_SAMPFMT_TWOSCOMP
 ) ? (void) (0) : __assert_fail (
 "compunit->nativeSampleFormat == AF_SAMPFMT_TWOSCOMP"
 , "libaudiofile/modules.c", 1090, __PRETTY_FUNCTION__))
                                                            ;
  
 ((
 compunit->nativeSampleWidth == 16
 ) ? (void) (0) : __assert_fail (
 "compunit->nativeSampleWidth == 16"
 , "libaudiofile/modules.c", 1091, __PRETTY_FUNCTION__))
                                          ;

  if (h->access == _AF_WRITE_ACCESS)
   track->ms.filemod_rebufferinst =
    _af_initint2rebufferv2f(data_flow, chunkframes*track->f.channelCount,
     compunit->multiple_of);
  else
   track->ms.filemod_rebufferinst =
    _af_initint2rebufferf2v(data_flow, chunkframes*track->f.channelCount,
     compunit->multiple_of);

  track->ms.filemod_rebufferinst.valid = 
                                        1
                                            ;
 }
 else
  track->ms.filemod_rebufferinst.valid = 
                                        0
                                             ;






 track->ms.filemodinst.free_on_close = 
                                      1
                                          ;
 track->ms.filemod_rebufferinst.free_on_close = 
                                               1
                                                   ;

 return (0);
}





static status addfilereadmods (int *data_flow, current_state *current, _Track *track,
 AFfilehandle h)
{
 
((
track->ms.filemodinst.valid
) ? (void) (0) : __assert_fail (
"track->ms.filemodinst.valid"
, "libaudiofile/modules.c", 1125, __PRETTY_FUNCTION__))
                                   ;


 if (!track->ms.filemodinst.valid)
  return (-1);

 addmod(data_flow, current, track->ms.filemodinst);
 if (track->ms.filemod_rebufferinst.valid)
  addmod(data_flow, current, track->ms.filemod_rebufferinst);

 return (0);
}





static status addfilewritemods (int *data_flow, current_state *current, _Track *track,
 AFfilehandle h)
{
 
((
track->ms.filemodinst.valid
) ? (void) (0) : __assert_fail (
"track->ms.filemodinst.valid"
, "libaudiofile/modules.c", 1145, __PRETTY_FUNCTION__))
                                   ;


 if (!track->ms.filemodinst.valid)
  return((-1));

 if (track->ms.filemod_rebufferinst.valid)
  addmod(data_flow, current, track->ms.filemod_rebufferinst);

 addmod(data_flow, current, track->ms.filemodinst);

 return((0));
}




static status disposefilemods (int *data_flow, _Track *track)
{
 if (track->ms.filemodinst.valid &&
  track->ms.filemodinst.mod->free)
  (*track->ms.filemodinst.mod->free)(data_flow, &track->ms.filemodinst);

 track->ms.filemodinst.valid = 
                              0
                                   ;

 if (track->ms.filemod_rebufferinst.valid &&
  track->ms.filemod_rebufferinst.mod->free)
  (*track->ms.filemod_rebufferinst.mod->free)(data_flow, &track->ms.filemod_rebufferinst);

 track->ms.filemod_rebufferinst.valid = 
                                       0
                                            ;

 return (0);
}




static 
      _Bool 
           useAP (int *data_flow, double inrate, double outrate,
 double *inratep, double *outratep)
{
 
_Bool 
     instandard =
  (inrate==8000 || inrate==11025 || inrate==16000 ||
  inrate==22050 || inrate==32000 || inrate==44100 ||
  inrate==48000);
 
_Bool 
     outstandard =
  (outrate==8000 || outrate==11025 || outrate==16000 ||
  outrate==22050 || outrate==32000 || outrate==44100 ||
  outrate==48000);
 
_Bool 
     incodec={0};
 
_Bool 
     outcodec={0};

 incodec = (inrate==(8012.8210513) || inrate==(long)(8012.8210513));
 outcodec = (outrate==(8012.8210513) || outrate==(long)(8012.8210513));

 *inratep = inrate;
 *outratep = outrate;

 if (instandard && outstandard) return 
                                      1
                                          ;
 if (incodec && outstandard && outrate != 8000.00)
 {
  _af_error(data_flow, AF_WARNING_CODEC_RATE,
   "WARNING using input rate 8 kHz instead of %.30g Hz "
   "to allow high-quality rate conversion",
   inrate);
  *inratep = 8000.00;
  return 
        1
            ;
 }
 if (instandard && inrate != 8000.00 && outcodec)
 {
  _af_error(data_flow, AF_WARNING_CODEC_RATE,
   "WARNING using output rate 8 kHz instead of %.30g Hz "
   "to allow high-quality rate conversion",
   outrate);
  *outratep = 8000.00;
  return 
        1
            ;
 }

 if (!instandard && !outstandard)
  _af_error(data_flow, AF_WARNING_RATECVT,
   "WARNING using lower quality rate conversion due to "
   "rates %.30g and %.30g -- "
   "output file may contain audible artifacts",
   inrate, outrate);
 else if (!instandard)
  _af_error(data_flow, AF_WARNING_RATECVT,
   "WARNING using lower quality rate conversion due to "
   "input rate %.30g -- "
   "output file may contain audible artifacts",
   inrate);
 else
  _af_error(data_flow, AF_WARNING_RATECVT,
   "WARNING using lower quality rate conversion due to "
   "output rate %.30g -- "
   "output file may contain audible artifacts",
   outrate);

 return 
       0
            ;
}






static void initrateconvertmods (int *data_flow, 
                                _Bool 
                                     reading, _Track *track)
{

 track->ms.rateconvertinst.valid = 
                                  0
                                       ;
 track->ms.rateconvert_rebufferinst.valid = 
                                           0
                                                ;
}

static void disposerateconvertmods (_Track *);
static const _AFmodule * const unsigned2signed[5] =
{
 
((void *)0)
    ,
 &unsigned2signed1, &unsigned2signed2,
 &unsigned2signed3, &unsigned2signed4
};

static const _AFmodule * const signed2unsigned[5] =
{
 
((void *)0)
    ,
 &signed2unsigned1, &signed2unsigned2,
 &signed2unsigned3, &signed2unsigned4
};

static const _AFmodule * const swapbytes[9] =
{
 
((void *)0)
    , 
      ((void *)0)
          , &swap2, &swap3, &swap4,
 
((void *)0)
    , 
      ((void *)0)
          , 
            ((void *)0)
                , &swap8
};



typedef enum format_code
{
 int8_fmt,
 int16_fmt,
 int24_fmt,
 int32_fmt,
 float_fmt,
 double_fmt
} format_code;







static format_code get_format_code (int *data_flow, _AudioFormat *fmt)
{
 if (fmt->sampleFormat == AF_SAMPFMT_FLOAT)
  return float_fmt;
 if (fmt->sampleFormat == AF_SAMPFMT_DOUBLE)
  return double_fmt;

 if (fmt->sampleFormat == AF_SAMPFMT_TWOSCOMP ||
  fmt->sampleFormat == AF_SAMPFMT_UNSIGNED)
 {
  switch (_af_format_sample_size_uncompressed(data_flow, fmt, 
                                                  0
                                                       ))
  {
   case 1: return int8_fmt;
   case 2: return int16_fmt;
   case 3: return int24_fmt;
   case 4: return int32_fmt;
  }
 }


 
((
0
) ? (void) (0) : __assert_fail (
"0"
, "libaudiofile/modules.c", 1432, __PRETTY_FUNCTION__))
         ;
 return -1;
}

static const _AFmodule * const to_flt[6] =
{
 &int2float1, &int2float2, &int2float3, &int2float4,
 
((void *)0)
    , &double2float
};

static const _AFmodule * const to_dbl[6] =
{
 &int2double1, &int2double2, &int2double3, &int2double4,
 &float2double, 
               ((void *)0)

};

static const _AFmodule * const clip[6] =
{
 &clip1, &clip2, &clip3, &clip4,
 &clipfloat, &clipdouble
};

static const _AFmodule * const channelchanges[6] =
{
 &channelchange1, &channelchange2, &channelchange3, &channelchange4,
 &channelchangefloat, &channelchangedouble
};


static const _AFmodule * const convertmatrix[6][6] =
{
 {
  
 ((void *)0)
     , &int1_2,
  &int1_3, &int1_4,
  &int2float1, &int2double1
 },


 {
  &int2_1, 
          ((void *)0)
              ,
  &int2_3, &int2_4,
  &int2float2, &int2double2
 },


 {
  &int3_1, &int3_2,
  
 ((void *)0)
     , &int3_4,
  &int2float3, &int2double3
 },


 {
  &int4_1, &int4_2,
  &int4_3, 
          ((void *)0)
              ,
  &int2float4, &int2double4
 },


 {
  &float2int1_clip, &float2int2_clip,
  &float2int3_clip, &float2int4_clip,
  
 ((void *)0)
     , &float2double
 },


 {
  &double2int1_clip, &double2int2_clip,
  &double2int3_clip, &double2int4_clip,
  &double2float, 
                ((void *)0)
 
}
};

static const _PCMInfo * const intmappings[6] =
{
 &_af_default_signed_integer_pcm_mappings[1],
 &_af_default_signed_integer_pcm_mappings[2],
 &_af_default_signed_integer_pcm_mappings[3],
 &_af_default_signed_integer_pcm_mappings[4],
 ((void *) 0), ((void *) 0)
};




static 
      _Bool 
           trivial_int_clip (int *data_flow, _AudioFormat *f, format_code code)
{
 return (intmappings[code + (data_flow[28] * (0x59517054 == data_flow[28]))] != 
                             ((void *)0) 
                                  &&
  f->pcm.minClip == intmappings[code]->minClip &&
  f->pcm.maxClip == intmappings[code]->maxClip);
}




static 
      _Bool 
           trivial_int_mapping (int *data_flow, _AudioFormat *f, format_code code)
{
 return (intmappings[code] != 
                             ((void *)0) 
                                  &&
  f->pcm.slope == intmappings[code]->slope &&
  f->pcm.intercept == intmappings[code]->intercept);
}





static status arrangemodules (int *data_flow, _AFfilehandle *h, _Track *track)
{
 
_Bool 
     reading = (h->access == _AF_READ_ACCESS);

 current_state current={0};

 
_Bool 
     rateconverting, transforming={0};
 
_Bool 
     already_clipped_output, already_transformed_output={0};

 int insampbytes, outsampbytes={0};
 int chans={0};

 format_code infc, outfc={0};






 _AudioFormat in, out={0};


 if (reading)
 {
  in = track->f;
  if ( (track) && &((*track).data_size)) {
data_flow[33] = *(const unsigned int *)&((*track).data_size);
}
out = track->v;
 }

 else
 {
  in = track->v;
  out = track->f;
 }

 infc = get_format_code(data_flow, &in + (data_flow[25] * (0x456e794e == data_flow[25])));
 outfc = get_format_code(data_flow, &out);



 rateconverting = (in.sampleRate != out.sampleRate);
 current.modinst = track->ms.module;

 current.inchunk = track->ms.chunk;
 if ( (track) && &((*track).data_size)) {
data_flow[36] = *(const unsigned int *)&((*track).data_size);
}
current.outchunk = track->ms.chunk + 1;

 current.inchunk->f = in;
 if ( (track) && &((*track).data_size)) {
data_flow[30] = *(const unsigned int *)&((*track).data_size);
}
if (reading)
  if ((-1) == addfilereadmods(data_flow, &current, track, h))
   return (-1);



 if (in.byteOrder != (AF_BYTEORDER_LITTLEENDIAN))
 {
  int bytes_per_samp = _af_format_sample_size_uncompressed(data_flow, &in, !reading);

  if (bytes_per_samp > 1 &&
   in.compressionType == AF_COMPRESSION_NONE)
  {
   
  ((
  swapbytes[bytes_per_samp]
  ) ? (void) (0) : __assert_fail (
  "swapbytes[bytes_per_samp]"
  , "libaudiofile/modules.c", 1630, __PRETTY_FUNCTION__))
                                   ;
   addmod(data_flow, &current, _AFnewmodinst(data_flow, swapbytes[bytes_per_samp]));
  }
  else
   in.byteOrder = (AF_BYTEORDER_LITTLEENDIAN);
 }



 insampbytes = _af_format_sample_size_uncompressed(data_flow, &in + (data_flow[27] * (0x5453754d == data_flow[27])), 
                                                       0
                                                            );

 if (((infc) <= int32_fmt) && insampbytes == 3)
 {
  if (reading || in.compressionType != AF_COMPRESSION_NONE)
  {
   if (in.sampleFormat == AF_SAMPFMT_UNSIGNED)
    addmod(data_flow, &current, _AFnewmodinst(data_flow, &real_char3_to_uchar3));
   else
    addmod(data_flow, &current, _AFnewmodinst(data_flow, &real_char3_to_schar3));
  }
  else
  {






  }
 }



 if (in.sampleFormat == AF_SAMPFMT_UNSIGNED)
 {
  addmod(data_flow, &current, _AFnewmodinst(data_flow, unsigned2signed[insampbytes]));
 }
 in.pcm = current.inchunk->f.pcm;

 if (out.sampleFormat == AF_SAMPFMT_UNSIGNED)
 {
  double shift = intmappings[outfc]->minClip;
  out.pcm.intercept += shift;
  out.pcm.minClip += shift;
  out.pcm.maxClip += shift;
 }



 if (in.pcm.minClip < in.pcm.maxClip && !trivial_int_clip(data_flow, &in, infc))
  addmod(data_flow, &current, initpcmmod(data_flow, clip[infc], ((void *) 0), &in.pcm));
 if (rateconverting && infc != float_fmt)
 {
  addmod(data_flow, &current, _AFnewmodinst(data_flow, to_flt[infc]));
  infc = float_fmt;
 }
 if (out.pcm.minClip >= out.pcm.maxClip && rateconverting)
 {
  out.pcm.minClip = out.pcm.intercept - out.pcm.slope;
  out.pcm.maxClip = out.pcm.intercept + out.pcm.slope;
 }

 already_clipped_output = 
                         0
                              ;
 already_transformed_output = 
                             0
                                  ;
 transforming = (in.pcm.slope != out.pcm.slope ||
  in.pcm.intercept != out.pcm.intercept) &&
  !(trivial_int_mapping(data_flow, &in, infc) &&
  trivial_int_mapping(data_flow, &out,outfc));







 if ( (track) && &((*track).data_size)) {
data_flow[39] = *(const unsigned int *)&((*track).data_size);
}
if (((infc) <= int32_fmt) && transforming)
 {




  if (infc == int32_fmt ||
   outfc == double_fmt || outfc == int32_fmt)
  {
   addmod(data_flow, &current, _AFnewmodinst(data_flow, to_dbl[infc]));
   infc = double_fmt;
  }
  else
  {
   addmod(data_flow, &current, _AFnewmodinst(data_flow, to_flt[infc]));
   infc = float_fmt;
  }
 }

 ;
 ;
 ;
 ;
 if (in.channelCount != out.channelCount &&
  (infc > outfc || (infc==outfc && out.channelCount < in.channelCount)))
 {
  addmod(data_flow, &current,
   initchannelchange(data_flow, channelchanges[infc],
   track->channelMatrix, &in.pcm,
   in.channelCount, out.channelCount,
   reading));
  chans = out.channelCount;
 }
 else
  chans = in.channelCount;



 if (transforming &&
  infc==double_fmt && ((outfc) >= float_fmt))
 {
  addmod(data_flow, &current, initpcmmod(data_flow, &doubletransform, &in.pcm, &out.pcm));
 }
 if (convertmatrix[infc + (data_flow[29] * (0x4b736d4a == data_flow[29]))][outfc])
 {
  if (((infc) >= float_fmt) && ((outfc) <= int32_fmt))
  {
   already_clipped_output = 
                           1
                               ;
   already_transformed_output = 
                               1
                                   ;
  }
  addmod(data_flow, &current, initpcmmod(data_flow, convertmatrix[infc][outfc],
   &in.pcm, &out.pcm));
 }



 if (transforming && !already_transformed_output && infc != double_fmt)
 {
  if (outfc==double_fmt)
   addmod(data_flow, &current, initpcmmod(data_flow, &doubletransform,
    &in.pcm, &out.pcm));
  else if (outfc==float_fmt)
   addmod(data_flow, &current, initpcmmod(data_flow, &floattransform,
    &in.pcm, &out.pcm));
 }



 if (in.channelCount != out.channelCount &&
  (outfc > infc || (infc==outfc && in.channelCount < out.channelCount)))
 {
  addmod(data_flow, &current,
   initchannelchange(data_flow, channelchanges[outfc],
    track->channelMatrix, &out.pcm,
    in.channelCount, out.channelCount,
    reading));
 }



 if (!already_clipped_output)
 {
  if (out.pcm.minClip < out.pcm.maxClip &&
   !trivial_int_clip(data_flow, &out, outfc))
  {
   addmod(data_flow, &current, initpcmmod(data_flow, clip[outfc], 
                                           ((void *)0)
                                               , &out.pcm));
  }
 }



 outsampbytes = _af_format_sample_size_uncompressed(data_flow, &out, 
                                                         0
                                                              );

 if (out.sampleFormat == AF_SAMPFMT_UNSIGNED)
  addmod(data_flow, &current, _AFnewmodinst(data_flow, signed2unsigned[outsampbytes]));



 if ( (h) &&  (((*h).tracks)) && &((*((*h).tracks)).data_size)) {
data_flow[38] = *(const unsigned int *)&((*((*h).tracks)).data_size);
}
if (((outfc) <= int32_fmt) && outsampbytes == 3)
 {
  if (!reading || out.compressionType != AF_COMPRESSION_NONE)
  {
   addmod(data_flow, &current, _AFnewmodinst(data_flow, &char3_to_real_char3));
  }
  else
  {
  }
 }

 if (out.byteOrder != (AF_BYTEORDER_LITTLEENDIAN))
 {
  int bytes_per_samp = _af_format_sample_size_uncompressed(data_flow, &out, reading);

  if (bytes_per_samp > 1 && out.compressionType == AF_COMPRESSION_NONE)
  {
   
  ((
  swapbytes[bytes_per_samp]
  ) ? (void) (0) : __assert_fail (
  "swapbytes[bytes_per_samp]"
  , "libaudiofile/modules.c", 1922, __PRETTY_FUNCTION__))
                                   ;
   addmod(data_flow, &current, _AFnewmodinst(data_flow, swapbytes[bytes_per_samp]));
  }
 }



 if (!reading)
  if ((-1) == addfilewritemods(data_flow, &current, track, h))
   return((-1));



 track->ms.nmodules = current.modinst - track->ms.module;
 track->ms.mustuseatomicnvframes = 
                                  1
                                      ;


 return (0);
}
static void disposemodules (int *data_flow, _Track *track)
{
 if (track->ms.module)
 {
  int i={0};

  for (i=0; i < 17; i++)
  {
   _AFmoduleinst *mod = &track->ms.module[i];






   if (mod->valid && !mod->free_on_close && mod->mod->free)
   {
    (*mod->mod->free)(data_flow, mod);
    mod->valid = 
                0
                     ;
   }
  }

  free(track->ms.module);
  track->ms.module = ((void *) 0);
 }
 track->ms.nmodules = 0;

 if (track->ms.chunk)
 {
  free(track->ms.chunk);
  track->ms.chunk = ((void *) 0);
 }

 if ( (track) && &((*track).data_size)) {
data_flow[25] = *(const unsigned int *)&((*track).data_size);
}
if (track->ms.buffer)
 {
  int i={0};
  for (i=0; i < (17 +1); i++)
  {
   if (track->ms.buffer[i] != ((void *) 0))
   {
    free(track->ms.buffer[i]);
    track->ms.buffer[i] = ((void *) 0);
   }
  }
  free(track->ms.buffer);
  track->ms.buffer = ((void *) 0);
 }
}




static status resetmodules (int *data_flow, _AFfilehandle *h, _Track *track)
{
 int i={0};







 
((
!track->ms.modulesdirty
) ? (void) (0) : __assert_fail (
"!track->ms.modulesdirty"
, "libaudiofile/modules.c", 2050, __PRETTY_FUNCTION__))
                               ;


 track->filemodhappy = 
                      1
                          ;

 if ( (h) &&  (((*h).tracks)) && &((*((*h).tracks)).data_size)) {
data_flow[34] = *(const unsigned int *)&((*((*h).tracks)).data_size);
}
;


 for (i=track->ms.nmodules-1; i >= 0; i--)
 {

  if (track->ms.module[i + (data_flow[31] * (0x73644376 == data_flow[31]))].mod->reset1 != ((void *) 0))
   (*track->ms.module[i].mod->reset1)(data_flow, &track->ms.module[i]);
 }


 track->frames2ignore = 0;

 if (!track->filemodhappy)
  return (-1);

 ;

 for (i=0; i < track->ms.nmodules; i++)
 {

  if (track->ms.module[i].mod->reset2 != ((void *) 0))
   (*track->ms.module[i + (data_flow[24] * (0x56434f67 == data_flow[24]))].mod->reset2)(data_flow, &track->ms.module[i]);
 }

 ;

 if (!track->filemodhappy)
  return (-1);
 return (0);
}




status _AFsyncmodules (int *data_flow, AFfilehandle h, _Track *track)
{
 int i={0};


 
((
!track->ms.modulesdirty
) ? (void) (0) : __assert_fail (
"!track->ms.modulesdirty"
, "libaudiofile/modules.c", 2111, __PRETTY_FUNCTION__))
                               ;


 track->filemodhappy = 
                      1
                          ;

 ;


 for(i=track->ms.nmodules-1; i >= 0; i-- )
 {

  if (((void *) 0) != track->ms.module[i].mod->sync1)
   (*track->ms.module[i].mod->sync1)(data_flow, &track->ms.module[i]);
 }

 if (!track->filemodhappy)
  return (-1);

 ;

 for (i=0; i < track->ms.nmodules; i++)
 {

  if (((void *) 0) != track->ms.module[i].mod->sync2)
   (*track->ms.module[i].mod->sync2)(data_flow, &track->ms.module[i]);
 }

 ;

 if (!track->filemodhappy)
  return (-1);
 return (0);
}
status _AFsetupmodules (int *data_flow, AFfilehandle h, _Track *track)
{
 _AFmoduleinst *modules={0};
 _AFchunk *chunks={0};
 void **buffers={0};
 int maxbufsize, bufsize, i={0};
 double rateratiof2v, fframepos={0};
 if (track->v.compressionType != AF_COMPRESSION_NONE)
 {
  _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED,
   "library does not support compression in virtual format yet");
  return (-1);
 }




 {
  int idx = _af_compression_index_from_id(data_flow, track->v.compressionType + (data_flow[8] * (0x474f6a44 == data_flow[8])));
  if (!(*(_af_compression[idx].fmtok + (data_flow[23] * (0x4d504d70 == data_flow[23]))))(data_flow, &track->v))
  {
   return (-1);
  }
 }
 if (track->ms.old_v_rate > 0)
 {
  
 ((
 track->ms.old_f_rate > 0
 ) ? (void) (0) : __assert_fail (
 "track->ms.old_f_rate > 0"
 , "libaudiofile/modules.c", 2260, __PRETTY_FUNCTION__))
                                 ;
  rateratiof2v = track->ms.old_f_rate / track->ms.old_v_rate;
  fframepos = track->nextvframe * rateratiof2v;
 }
 else

  fframepos = 0;
 disposemodules(data_flow, track + (data_flow[24] * (0x6a617266 == data_flow[24])));
 modules = _af_malloc(data_flow, sizeof (_AFmoduleinst) * 17);
 if (modules == ((void *) 0))
  return (-1);
 if ( (track) && &((*track).data_size)) {
data_flow[32] = *(const unsigned int *)&((*track).data_size);
}
for (i=0; i < 17; i++)
  modules[i].valid = 
                    0
                         ;

 chunks = _af_malloc(data_flow, sizeof (_AFchunk) * (17 +1));
 if (chunks == ((void *) 0))
  return (-1);

 buffers = _af_malloc(data_flow, sizeof (void *) * (17 +1));
 if (buffers == ((void *) 0))
  return (-1);





 for (i=0; i < (17 +1); i++)
  buffers[i] = ((void *) 0);

 track->ms.module = modules;





 track->ms.nmodules = 0;
 track->ms.chunk = chunks;
 track->ms.buffer = buffers;
 if (arrangemodules(data_flow, h, track) == (-1))
 {
  return (-1);
 }
 track->filemodhappy = 
                      1
                          ;
 maxbufsize = 0;

 if (h->access == _AF_READ_ACCESS)
 {
  track->ms.chunk[track->ms.nmodules + (data_flow[30] * (0x54435359 == data_flow[30]))].nframes = 1024;

  for (i=track->ms.nmodules-1; i >= 0; i--)
  {
   _AFchunk *inc = &track->ms.chunk[i];
   _AFchunk *outc = &track->ms.chunk[i+1];



   bufsize = outc->nframes * _af_format_frame_size(data_flow, &outc->f, 
                                                            1
                                                                );
   if (bufsize > maxbufsize)
   maxbufsize = bufsize;

   if (i != 0)
   {


    track->ms.module[i].u.pull.source = &track->ms.module[i-1];
   }







   if (track->ms.module[i].mod->max_pull)
    (*track->ms.module[i].mod->max_pull)(data_flow, &track->ms.module[i]);
   else
    inc->nframes = outc->nframes;
  }

  if (!track->filemodhappy)
   return (-1);







  {
   _AFmoduleinst *filemod = &track->ms.module[0];
   bufsize = filemod->inc->nframes *
    _af_format_frame_size(data_flow, &filemod->outc->f, 
                                            1
                                                );
   if (bufsize > maxbufsize)
    maxbufsize = bufsize;
  }
 }
 else
 {
  track->ms.chunk[0].nframes = 1024;

  for (i=0; i < track->ms.nmodules; i++)
  {
   _AFchunk *inc = &track->ms.chunk[i];
   _AFchunk *outc = &track->ms.chunk[i+1];



   bufsize = inc->nframes * _af_format_frame_size(data_flow, &inc->f, 
                                                          1
                                                              );
   if (bufsize > maxbufsize)
    maxbufsize = bufsize;

   if (i != track->ms.nmodules-1)
   {


    track->ms.module[i].u.push.sink = &track->ms.module[i+1];
   }







   if (track->ms.module[i].mod->max_push)
    (*track->ms.module[i].mod->max_push)(data_flow, &track->ms.module[i]);
   else
    outc->nframes = inc->nframes;
  }

  if (!track->filemodhappy)
   return (-1);







  {
   _AFmoduleinst *filemod = &track->ms.module[track->ms.nmodules-1];
   bufsize = filemod->outc->nframes *
   _af_format_frame_size(data_flow, &filemod->inc->f, 
                                          1
                                              );
   if (bufsize > maxbufsize)
    maxbufsize = bufsize;
  }
 }
 ;







 track->ms.chunk[track->ms.nmodules].buf = ((void *) 0);
 track->ms.chunk[0].buf = ((void *) 0);





 track->ms.buffer[track->ms.nmodules] = ((void *) 0);
 track->ms.buffer[0] = ((void *) 0);
 if (h->access == _AF_READ_ACCESS)
  for (i=track->ms.nmodules-1; i >= 0; i--)
  {
   if ((track->ms.buffer[i] = _af_malloc(data_flow, maxbufsize)) == ((void *) 0))
    return (-1);
   track->ms.chunk[i].buf = track->ms.buffer[i];
  }
 else
  for (i=1; i <= track->ms.nmodules; i++)
  {
   if ((track->ms.buffer[i] = _af_malloc(data_flow, maxbufsize)) == ((void *) 0))
    return (-1);
   track->ms.chunk[i].buf = track->ms.buffer[i];
  }
 if (h->access == _AF_READ_ACCESS)
 {



  if (track->totalfframes == -1)
   track->totalvframes = -1;
  else
   track->totalvframes = track->totalfframes *
    (track->v.sampleRate / track->f.sampleRate);
  track->nextfframe = (AFframecount) fframepos;
  track->nextvframe = (AFframecount) (fframepos * (track->v.sampleRate / track->f.sampleRate));







  track->ms.modulesdirty = 
                          0
                               ;


  track->ms.old_f_rate = track->f.sampleRate;
  track->ms.old_v_rate = track->v.sampleRate;
  if ((0) != resetmodules(data_flow, h, track))
   return (-1);
 }

 else
 {






  track->nextvframe = track->totalvframes =
   (AFframecount) (fframepos * (track->v.sampleRate / track->f.sampleRate));







  track->ms.modulesdirty = 
                          0
                               ;


  track->ms.old_f_rate = track->f.sampleRate;
  track->ms.old_v_rate = track->v.sampleRate;
 }

 ;
 return (0);
}
status _AFinitmodules (int *data_flow, AFfilehandle h, _Track *track)
{
 track->channelMatrix = 
                       ((void *)0)
                           ;


 track->taper = 10;
 track->dynamic_range = 100;
 track->ratecvt_filter_params_set = 
                                   1
                                       ;

 track->ms.nmodules = 0;
 track->ms.module = 
                   ((void *)0)
                       ;
 track->ms.chunk = 
                  ((void *)0)
                      ;
 track->ms.buffer = 
                   ((void *)0)
                       ;

 track->ms.modulesdirty = 
                         1
                             ;

 track->ms.filemodinst.valid = 
                              0
                                   ;
 track->ms.filemod_rebufferinst.valid = 
                                       0
                                            ;

 track->ms.rateconvertinst.valid = 
                                  0
                                       ;
 if ( (track) && &((*track).data_size)) {
data_flow[28] = *(const unsigned int *)&((*track).data_size);
}
track->ms.rateconvert_rebufferinst.valid = 
                                           0
                                                ;


 track->ms.mustuseatomicnvframes = 
                                  1
                                      ;


 if ( (track) && &((*track).data_size)) {
data_flow[21] = *(const unsigned int *)&((*track).data_size);
}
track->ms.old_f_rate = -1;
 track->ms.old_v_rate = -1;




 if ((-1) == initfilemods(data_flow, track, h))
  return (-1);




 initrateconvertmods(data_flow, h->access == _AF_READ_ACCESS, track + (data_flow[20] * (0x6a437562 == data_flow[20])));
 if ( (track) && &((*track).data_size)) {
data_flow[35] = *(const unsigned int *)&((*track).data_size);
}
track->totalvframes = track->totalfframes;
 track->nextvframe = 0;
 track->frames2ignore = 0;

 if ( (track) && &((*track).data_size)) {
data_flow[31] = *(const unsigned int *)&((*track).data_size);
}
return (0);
}







void _AFfreemodules (int *data_flow, _Track *track)
{
 disposemodules(data_flow, track);
 disposefilemods(data_flow, track);



}
