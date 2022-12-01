











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
extern int _IO_feof (_IO_FILE *__fp);
extern int _IO_ferror (_IO_FILE *__fp);

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *);
extern void _IO_funlockfile (_IO_FILE *);
extern int _IO_ftrylockfile (_IO_FILE *);
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *);




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename);

extern int rename (const char *__old, const char *__new);




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new);








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






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf);



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n);





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size);


extern void setlinebuf (FILE *__stream);








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...);





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);





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
     const char *__restrict __format, ...);
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf")

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")



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



extern void clearerr (FILE *__stream);

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;




extern void clearerr_unlocked (FILE *__stream);
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s);
extern void flockfile (FILE *__stream);



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream);




extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
    ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
    ;




extern void __assert (const char *__assertion, const char *__file, int __line)
    ;










extern int *__errno_location (void);


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
     __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nonnull__ (1))) ;










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









extern long int random (void);


extern void srandom (unsigned int __seed);





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void);

extern void srand (unsigned int __seed);




extern int rand_r (unsigned int *__seed);







extern double drand48 (void);
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void);
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void);
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval);
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;










extern void *realloc (void *__ptr, size_t __size)
    ;

extern void free (void *__ptr);




extern void cfree (void *__ptr);










extern void *alloca (size_t __size);











extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void);



extern int atexit (void (*__func) (int *data_flow)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (int *data_flow)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nonnull__ (1)));






extern void exit (int __status);





extern void quick_exit (int __status);







extern void _Exit (int __status);






extern char *getenv (const char *__name) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void);
extern char *mktemp (char *__template) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
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
     int *__restrict __sign) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n);


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n);


extern int wctomb (char *__s, wchar_t __wchar);



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n);

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
    ;








extern int rpmatch (const char *__response) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nonnull__ (1)));

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
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode);





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask);
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]);
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nonnull__ (3, 5)));




typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (2)));






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
     __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum);

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r")

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l);





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i);
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig);


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));












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
const char* jv_kind_name(int *data_flow, jv_kind);
static int jv_is_valid(int *data_flow, jv x) { return jv_get_kind(x) != JV_KIND_INVALID; }

jv jv_copy(jv);
void jv_free(jv);

int jv_get_refcnt(int *data_flow, jv);

int jv_equal(int *data_flow, jv, jv);
int jv_identical(int *data_flow, jv, jv);
int jv_contains(int *data_flow, jv, jv);

jv jv_invalid(void);
jv jv_invalid_with_msg(jv);
jv jv_invalid_get_msg(int *data_flow, jv);
int jv_invalid_has_msg(int *data_flow, jv);


jv jv_null(void);
jv jv_true(int *data_flow);
jv jv_false(int *data_flow);
jv jv_bool(int *data_flow, int);

jv jv_number(double);
double jv_number_value(jv);
int jv_is_integer(int *data_flow, jv);

jv jv_array(void);
jv jv_array_sized(int);
int jv_array_length(jv);
jv jv_array_get(jv, int);
jv jv_array_set(jv, int, jv);
jv jv_array_append(jv, jv);
jv jv_array_concat(int *data_flow, jv, jv);
jv jv_array_slice(int *data_flow, jv, int, int);
jv jv_array_indexes(int *data_flow, jv, jv);
jv jv_string(const char*);
jv jv_string_sized(const char*, int);
jv jv_string_empty(int *data_flow, int len);
int jv_string_length_bytes(jv);
int jv_string_length_codepoints(int *data_flow, jv);
unsigned long jv_string_hash(int *data_flow, jv);
const char* jv_string_value(jv);
jv jv_string_indexes(int *data_flow, jv j, jv k);
jv jv_string_slice(int *data_flow, jv j, int start, int end);
jv jv_string_concat(int *data_flow, jv, jv);
jv jv_string_vfmt(int *data_flow, const char*, va_list);
jv jv_string_fmt(int *data_flow, const char*, ...);
jv jv_string_append_codepoint(int *data_flow, jv a, uint32_t c);
jv jv_string_append_buf(int *data_flow, jv a, const char* buf, int len);
jv jv_string_append_str(int *data_flow, jv a, const char* str);
jv jv_string_split(int *data_flow, jv j, jv sep);
jv jv_string_explode(int *data_flow, jv j);
jv jv_string_implode(int *data_flow, jv j);

jv jv_object(int *data_flow);
jv jv_object_get(jv object, jv key);
int jv_object_has(int *data_flow, jv object, jv key);
jv jv_object_set(int *data_flow, jv object, jv key, jv value);
jv jv_object_delete(int *data_flow, jv object, jv key);
int jv_object_length(jv object);
jv jv_object_merge(int *data_flow, jv, jv);
jv jv_object_merge_recursive(int *data_flow, jv, jv);

int jv_object_iter(jv);
int jv_object_iter_next(jv, int);
int jv_object_iter_valid(jv, int);
jv jv_object_iter_key(jv, int);
jv jv_object_iter_value(jv, int);
int jv_get_refcnt(int *data_flow, jv);

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


void jv_dumpf(int *data_flow, jv, FILE *f, int flags);
void jv_dump(int *data_flow, jv, int flags);
void jv_show(int *data_flow, jv, int flags);
jv jv_dump_string(int *data_flow, jv, int flags);
char *jv_dump_string_trunc(int *data_flow, jv x, char *outbuf, size_t bufsize);

enum {
  JV_PARSE_SEQ = 1,
  JV_PARSE_STREAMING = 2,
  JV_PARSE_STREAM_ERRORS = 4,
};

jv jv_parse(int *data_flow, const char* string);
jv jv_parse_sized(int *data_flow, const char* string, int length);

typedef void (*jv_nomem_handler_f)(void *);
void jv_nomem_handler(int *data_flow, jv_nomem_handler_f, void *);

jv jv_load_file(int *data_flow, const char *, int);

typedef struct jv_parser jv_parser;
jv_parser* jv_parser_new(int *data_flow, int);
void jv_parser_set_buf(int *data_flow, jv_parser*, const char*, int, int);
int jv_parser_remaining(int *data_flow, jv_parser*);
jv jv_parser_next(int *data_flow, jv_parser*);
void jv_parser_free(int *data_flow, jv_parser*);

jv jv_get(int *data_flow, jv, jv);
jv jv_set(int *data_flow, jv, jv, jv);
jv jv_has(int *data_flow, jv, jv);
jv jv_setpath(int *data_flow, jv, jv, jv);
jv jv_getpath(int *data_flow, jv, jv);
jv jv_delpaths(int *data_flow, jv, jv);
jv jv_keys(jv );
jv jv_keys_unsorted(int *data_flow, jv );
int jv_cmp(jv, jv);
jv jv_group(int *data_flow, jv, jv);
jv jv_sort(int *data_flow, jv, jv);


extern volatile char jv_mem_uninitialised;


static void jv_mem_invalidate(int *data_flow, void* mem, size_t n) {

  char* m = mem;
  while (n--) *m++ ^= jv_mem_uninitialised ^ jv_mem_uninitialised;

}

void* jv_mem_alloc(size_t);
void* jv_mem_alloc_unguarded(int *data_flow, size_t);
void* jv_mem_calloc(size_t, size_t);
void* jv_mem_calloc_unguarded(int *data_flow, size_t, size_t);
char* jv_mem_strdup(int *data_flow, const char *);
char* jv_mem_strdup_unguarded(int *data_flow, const char *);
void jv_mem_free(void*);
__attribute__((warn_unused_result)) void* jv_mem_realloc(int *data_flow, void*, size_t);
struct determine_alignment {
  char x;
  union { int i; double d; uint64_t u64; size_t sz; void* ptr; } u;
};
enum {ALIGNMENT = 
                 __builtin_offsetof (
                 struct determine_alignment
                 , 
                 u
                 )
                                                        };

static size_t align_round_up(int *data_flow, size_t sz) {
  return ((sz + (ALIGNMENT - 1)) / ALIGNMENT) * ALIGNMENT;
}

typedef int stack_ptr;

struct stack {
  char* mem_end;
  stack_ptr bound;
  stack_ptr limit;
};

static void stack_init(int *data_flow, struct stack* s) {
  s->mem_end = 0;
  s->bound = ALIGNMENT;
  s->limit = 0;
}

static void stack_reset(int *data_flow, struct stack* s) {
  
 ((
 s->limit == 0 && "stack freed while not empty"
 ) ? (void) (0) : __assert_fail (
 "s->limit == 0 && \"stack freed while not empty\""
 , "exec_stack.h", 63, __PRETTY_FUNCTION__))
                                                       ;
  char* mem_start = s->mem_end - ( -s->bound + ALIGNMENT);
  free(mem_start);
  stack_init(data_flow, s);
}

static int stack_pop_will_free(int *data_flow, struct stack* s, stack_ptr p) {
  return p == s->limit;
}

static void* stack_block(int *data_flow, struct stack* s, stack_ptr p) {
  return (void*)(s->mem_end + p);
}

static stack_ptr* stack_block_next(int *data_flow, struct stack* s, stack_ptr p) {
  return &((stack_ptr*)stack_block(data_flow, s, p))[-1];
}

static void stack_reallocate(int *data_flow, struct stack* s, size_t sz) {
  int old_mem_length = -(s->bound) + ALIGNMENT;
  char* old_mem_start = s->mem_end - old_mem_length;

  int new_mem_length = align_round_up(data_flow, (old_mem_length + sz + 256) * 2);
  char* new_mem_start = jv_mem_realloc(data_flow, old_mem_start, new_mem_length);
  memmove(new_mem_start + (new_mem_length - old_mem_length),
            new_mem_start, old_mem_length);
  s->mem_end = new_mem_start + new_mem_length;
  s->bound = -(new_mem_length - ALIGNMENT);
}

static stack_ptr stack_push_block(int *data_flow, struct stack* s, stack_ptr p, size_t sz) {
  int alloc_sz = align_round_up(data_flow, sz) + ALIGNMENT;
  stack_ptr r = s->limit - alloc_sz;
  if (r < s->bound) {
    stack_reallocate(data_flow, s, alloc_sz);
  }
  s->limit = r;
  *stack_block_next(data_flow, s, r) = p;
  return r;
}

static stack_ptr stack_pop_block(int *data_flow, struct stack* s, stack_ptr p, size_t sz) {
  stack_ptr r = *stack_block_next(data_flow, s, p);
  if (p == s->limit) {
    int alloc_sz = align_round_up(data_flow, sz) + ALIGNMENT;
    s->limit += alloc_sz;
  }
  return r;
}






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

const struct opcode_description* opcode_describe(int *data_flow, opcode op);



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

void dump_disassembly(int *data_flow, int, struct bytecode* code);
void dump_operation(int *data_flow, struct bytecode* bc, uint16_t* op);

int bytecode_operation_length(int *data_flow, uint16_t* codeptr);
void bytecode_free(int *data_flow, struct bytecode* bc);













enum {
  JQ_DEBUG_TRACE = 1,
  JQ_DEBUG_TRACE_DETAIL = 2,
  JQ_DEBUG_TRACE_ALL = JQ_DEBUG_TRACE | JQ_DEBUG_TRACE_DETAIL,
};

typedef struct jq_state jq_state;
typedef void (*jq_msg_cb)(int *data_flow, void *, jv);

jq_state *jq_init(int *data_flow);
void jq_set_error_cb(int *data_flow, jq_state *, jq_msg_cb, void *);
void jq_get_error_cb(int *data_flow, jq_state *, jq_msg_cb *, void **);
void jq_set_nomem_handler(int *data_flow, jq_state *, void (*)(int *data_flow, void *), void *);
jv jq_format_error(int *data_flow, jv msg);
void jq_report_error(int *data_flow, jq_state *, jv);
int jq_compile(int *data_flow, jq_state *, const char*);
int jq_compile_args(int *data_flow, jq_state *, const char*, jv);
void jq_dump_disassembly(int *data_flow, jq_state *, int);
void jq_start(int *data_flow, jq_state *, jv value, int);
jv jq_next(int *data_flow, jq_state *);
void jq_teardown(int *data_flow, jq_state **);

void jq_halt(int *data_flow, jq_state *, jv, jv);
int jq_halted(int *data_flow, jq_state *);
jv jq_get_exit_code(int *data_flow, jq_state *);
jv jq_get_error_message(int *data_flow, jq_state *);

typedef jv (*jq_input_cb)(int *data_flow, jq_state *, void *);
void jq_set_input_cb(int *data_flow, jq_state *, jq_input_cb, void *);
void jq_get_input_cb(int *data_flow, jq_state *, jq_input_cb *, void **);

void jq_set_debug_cb(int *data_flow, jq_state *, jq_msg_cb, void *);
void jq_get_debug_cb(int *data_flow, jq_state *, jq_msg_cb *, void **);

void jq_set_attrs(int *data_flow, jq_state *, jv);
jv jq_get_attrs(jq_state *);
jv jq_get_jq_origin(int *data_flow, jq_state *);
jv jq_get_prog_origin(int *data_flow, jq_state *);
jv jq_get_lib_dirs(int *data_flow, jq_state *);
void jq_set_attr(int *data_flow, jq_state *, jv, jv);
jv jq_get_attr(int *data_flow, jq_state *, jv);







typedef struct jq_util_input_state jq_util_input_state;
typedef void (*jq_util_msg_cb)(int *data_flow, void *, const char *);

jq_util_input_state *jq_util_input_init(int *data_flow, jq_util_msg_cb, void *);
void jq_util_input_set_parser(int *data_flow, jq_util_input_state *, jv_parser *, int);
void jq_util_input_free(int *data_flow, jq_util_input_state **);
void jq_util_input_add_input(int *data_flow, jq_util_input_state *, const char *);
int jq_util_input_errors(int *data_flow, jq_util_input_state *);
jv jq_util_input_next_input(int *data_flow, jq_util_input_state *);
jv jq_util_input_next_input_cb(int *data_flow, jq_state *, void *);
jv jq_util_input_get_position(int *data_flow, jq_state*);
jv jq_util_input_get_current_filename(int *data_flow, jq_state*);
jv jq_util_input_get_current_line(int *data_flow, jq_state*);

int jq_set_colors(int *data_flow, const char *);

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

struct locfile* locfile_init(int *data_flow, jq_state *, const char *, const char *, int);
struct locfile* locfile_retain(int *data_flow, struct locfile *);
int locfile_get_line(int *data_flow, struct locfile *, int);
void locfile_free(int *data_flow, struct locfile *);
void locfile_locate(int *data_flow, struct locfile *, location, const char *, ...);







struct inst;
typedef struct inst inst;


typedef struct block {
  inst* first;
  inst* last;
} block;

block gen_location(int *data_flow, location, struct locfile*, block);

block gen_noop(int *data_flow);
int block_is_noop(int *data_flow, block b);
block gen_op_simple(int *data_flow, opcode op);
block gen_const(int *data_flow, jv constant);
block gen_const_global(int *data_flow, jv constant, const char *name);
int block_is_const(int *data_flow, block b);
int block_is_const_inf(int *data_flow, block b);
jv_kind block_const_kind(int *data_flow, block b);
jv block_const(int *data_flow, block b);
block gen_op_target(int *data_flow, opcode op, block target);
block gen_op_unbound(int *data_flow, opcode op, const char* name);
block gen_op_bound(int *data_flow, opcode op, block binder);
block gen_op_var_fresh(int *data_flow, opcode op, const char* name);
block gen_op_pushk_under(int *data_flow, jv constant);

block gen_module(int *data_flow, block metadata);
jv block_module_meta(int *data_flow, block b);
block gen_import(int *data_flow, const char* name, const char *as, int is_data);
block gen_import_meta(int *data_flow, block import, block metadata);
block gen_function(int *data_flow, const char* name, block formals, block body);
block gen_param_regular(int *data_flow, const char* name);
block gen_param(int *data_flow, const char* name);
block gen_lambda(int *data_flow, block body);
block gen_call(int *data_flow, const char* name, block body);
block gen_subexp(int *data_flow, block a);
block gen_both(int *data_flow, block a, block b);
block gen_const_object(int *data_flow, block expr);
block gen_collect(int *data_flow, block expr);
block gen_reduce(int *data_flow, block source, block matcher, block init, block body);
block gen_foreach(int *data_flow, block source, block matcher, block init, block update, block extract);
block gen_definedor(int *data_flow, block a, block b);
block gen_condbranch(int *data_flow, block iftrue, block iffalse);
block gen_and(int *data_flow, block a, block b);
block gen_or(int *data_flow, block a, block b);
block gen_dictpair(int *data_flow, block k, block v);

block gen_var_binding(int *data_flow, block var, const char* name, block body);
block gen_array_matcher(int *data_flow, block left, block curr);
block gen_object_matcher(int *data_flow, block name, block curr);
block gen_destructure(int *data_flow, block var, block matcher, block body);
block gen_destructure_alt(int *data_flow, block matcher);

block gen_cond(int *data_flow, block cond, block iftrue, block iffalse);
block gen_try_handler(int *data_flow, block handler);
block gen_try(int *data_flow, block exp, block handler);
block gen_label(int *data_flow, const char *label, block exp);

block gen_cbinding(int *data_flow, const struct cfunction* functions, int nfunctions, block b);

void block_append(int *data_flow, block* b, block b2);
block block_join(int *data_flow, block a, block b);
int block_has_only_binders_and_imports(int *data_flow, block, int bindflags);
int block_has_only_binders(int *data_flow, block, int bindflags);
int block_has_main(int *data_flow, block);
int block_is_funcdef(int *data_flow, block b);
int block_is_single(int *data_flow, block b);
block block_bind(int *data_flow, block binder, block body, int bindflags);
block block_bind_library(int *data_flow, block binder, block body, int bindflags, const char* libname);
block block_bind_referenced(int *data_flow, block binder, block body, int bindflags);
block block_drop_unreferenced(int *data_flow, block body);

jv block_take_imports(int *data_flow, block* body);
jv block_list_funcs(int *data_flow, block body, int omit_underscores);

int block_compile(int *data_flow, block, struct bytecode**, struct locfile*, jv);

void block_free(int *data_flow, block);

int jq_parse(int *data_flow, struct locfile* source, block* answer);
int jq_parse_library(int *data_flow, struct locfile* locations, block* answer);





struct lexer_param;




  enum yytokentype
  {
    INVALID_CHARACTER = 258,
    IDENT = 259,
    FIELD = 260,
    LITERAL = 261,
    FORMAT = 262,
    REC = 263,
    SETMOD = 264,
    EQ = 265,
    NEQ = 266,
    DEFINEDOR = 267,
    AS = 268,
    DEF = 269,
    MODULE = 270,
    IMPORT = 271,
    INCLUDE = 272,
    IF = 273,
    THEN = 274,
    ELSE = 275,
    ELSE_IF = 276,
    REDUCE = 277,
    FOREACH = 278,
    END = 279,
    AND = 280,
    OR = 281,
    TRY = 282,
    CATCH = 283,
    LABEL = 284,
    BREAK = 285,
    LOC = 286,
    SETPIPE = 287,
    SETPLUS = 288,
    SETMINUS = 289,
    SETMULT = 290,
    SETDIV = 291,
    SETDEFINEDOR = 292,
    LESSEQ = 293,
    GREATEREQ = 294,
    ALTERNATION = 295,
    QQSTRING_START = 296,
    QQSTRING_TEXT = 297,
    QQSTRING_INTERP_START = 298,
    QQSTRING_INTERP_END = 299,
    QQSTRING_END = 300,
    FUNCDEF = 301,
    NONOPT = 302
  };
union YYSTYPE
{

  jv literal;
  block blk;
};

typedef union YYSTYPE YYSTYPE;
int yyparse (int *data_flow, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr);







int builtins_bind(int *data_flow, jq_state *, block*);
jv expand_path(int *data_flow, jv);
jv get_home(int *data_flow);
jv jq_realpath(int *data_flow, jv);
static void priv_fwrite(int *data_flow, const char *s, size_t len, FILE *fout, int is_tty) {






  fwrite(s, 1, len, fout);

}

const void *_jq_memmem(int *data_flow, const void *haystack, size_t haystacklen,
                       const void *needle, size_t needlelen);



int load_program(int *data_flow, jq_state *jq, struct locfile* src, block *out_block);
jv load_module_meta(int *data_flow, jq_state *jq, jv modname);

struct jq_state {
  void (*nomem_handler)(int *data_flow, void *);
  void *nomem_handler_data;
  struct bytecode* bc;

  jq_msg_cb err_cb;
  void *err_cb_data;
  jv error;

  struct stack stk;
  stack_ptr curr_frame;
  stack_ptr stk_top;
  stack_ptr fork_top;

  jv path;
  jv value_at_path;
  int subexp_nest;
  int debug_trace_enabled;
  int initial_execution;
  unsigned next_label;

  int halted;
  jv exit_code;
  jv error_message;

  jv attrs;
  jq_input_cb input_cb;
  void *input_cb_data;
  jq_msg_cb debug_cb;
  void *debug_cb_data;
};

struct closure {
  struct bytecode* bc;
  stack_ptr env;
};


union frame_entry {
  struct closure closure;
  jv localvar;
};


struct frame {
  struct bytecode* bc;
  stack_ptr env;
  stack_ptr retdata;
  uint16_t* retaddr;
  union frame_entry entries[];
};

static int frame_size(int *data_flow, struct bytecode* bc) {
  return sizeof(struct frame) + sizeof(union frame_entry) * (bc->nclosures + bc->nlocals);
}

static struct frame* frame_current(int *data_flow, struct jq_state* jq) {
  struct frame* fp = stack_block(data_flow, &jq->stk, jq->curr_frame);

  stack_ptr next = *stack_block_next(data_flow, &jq->stk, jq->curr_frame);
  if (next) {
    struct frame* fpnext = stack_block(data_flow, &jq->stk, next);
    struct bytecode* bc = fpnext->bc;
    
   ((
   fp->retaddr >= bc->code && fp->retaddr < bc->code + bc->codelen
   ) ? (void) (0) : __assert_fail (
   "fp->retaddr >= bc->code && fp->retaddr < bc->code + bc->codelen"
   , "execute.c", 85, __PRETTY_FUNCTION__))
                                                                          ;
  } else {
    
   ((
   fp->retaddr == 0
   ) ? (void) (0) : __assert_fail (
   "fp->retaddr == 0"
   , "execute.c", 87, __PRETTY_FUNCTION__))
                           ;
  }
  return fp;
}

static stack_ptr frame_get_level(int *data_flow, struct jq_state* jq, int level) {
  stack_ptr fr = jq->curr_frame;
  for (int i=0; i<level; i++) {
    struct frame* fp = stack_block(data_flow, &jq->stk, fr);
    fr = fp->env;
  }
  return fr;
}

static jv* frame_local_var(int *data_flow, struct jq_state* jq, int var, int level) {
  struct frame* fr = stack_block(data_flow, &jq->stk, frame_get_level(data_flow, jq, level));
  
 ((
 var >= 0
 ) ? (void) (0) : __assert_fail (
 "var >= 0"
 , "execute.c", 103, __PRETTY_FUNCTION__))
                 ;
  
 ((
 var < fr->bc->nlocals
 ) ? (void) (0) : __assert_fail (
 "var < fr->bc->nlocals"
 , "execute.c", 104, __PRETTY_FUNCTION__))
                              ;
  return &fr->entries[fr->bc->nclosures + var].localvar;
}

static struct closure make_closure(int *data_flow, struct jq_state* jq, uint16_t* pc) {
  uint16_t level = *pc++;
  uint16_t idx = *pc++;
  stack_ptr fridx = frame_get_level(data_flow, jq, level);
  struct frame* fr = stack_block(data_flow, &jq->stk, fridx);
  if (idx & 0x1000) {


    int subfn_idx = idx & ~0x1000;
    
   ((
   subfn_idx < fr->bc->nsubfunctions
   ) ? (void) (0) : __assert_fail (
   "subfn_idx < fr->bc->nsubfunctions"
   , "execute.c", 117, __PRETTY_FUNCTION__))
                                            ;
    struct closure cl = {fr->bc->subfunctions[subfn_idx],
                         fridx};
    return cl;
  } else {


    int closure = idx;
    
   ((
   closure >= 0
   ) ? (void) (0) : __assert_fail (
   "closure >= 0"
   , "execute.c", 125, __PRETTY_FUNCTION__))
                       ;
    
   ((
   closure < fr->bc->nclosures
   ) ? (void) (0) : __assert_fail (
   "closure < fr->bc->nclosures"
   , "execute.c", 126, __PRETTY_FUNCTION__))
                                      ;
    return fr->entries[closure].closure;
  }
}

static struct frame* frame_push(int *data_flow, struct jq_state* jq, struct closure callee,
                                uint16_t* argdef, int nargs) {
  stack_ptr new_frame_idx = stack_push_block(data_flow, &jq->stk, jq->curr_frame, frame_size(data_flow, callee.bc));
  struct frame* new_frame = stack_block(data_flow, &jq->stk, new_frame_idx);
  new_frame->bc = callee.bc;
  new_frame->env = callee.env;
  
 ((
 nargs == new_frame->bc->nclosures
 ) ? (void) (0) : __assert_fail (
 "nargs == new_frame->bc->nclosures"
 , "execute.c", 137, __PRETTY_FUNCTION__))
                                          ;
  union frame_entry* entries = new_frame->entries;
  for (int i=0; i<nargs; i++) {
    entries->closure = make_closure(data_flow, jq, argdef + i * 2);
    entries++;
  }
  for (int i=0; i<callee.bc->nlocals; i++) {
    entries->localvar = jv_invalid();
    entries++;
  }
  jq->curr_frame = new_frame_idx;
  return new_frame;
}

static void frame_pop(int *data_flow, struct jq_state* jq) {
  
 ((
 jq->curr_frame
 ) ? (void) (0) : __assert_fail (
 "jq->curr_frame"
 , "execute.c", 152, __PRETTY_FUNCTION__))
                       ;
  struct frame* fp = frame_current(data_flow, jq);
  if (stack_pop_will_free(data_flow, &jq->stk, jq->curr_frame)) {
    int nlocals = fp->bc->nlocals;
    for (int i=0; i<nlocals; i++) {
      jv_free(*frame_local_var(data_flow, jq, i, 0));
    }
  }
  jq->curr_frame = stack_pop_block(data_flow, &jq->stk, jq->curr_frame, frame_size(data_flow, fp->bc));
}

void stack_push(int *data_flow, jq_state *jq, jv val) {
  
 ((
 jv_is_valid(data_flow, val)
 ) ? (void) (0) : __assert_fail (
 "jv_is_valid(val)"
 , "execute.c", 164, __PRETTY_FUNCTION__))
                         ;
  jq->stk_top = stack_push_block(data_flow, &jq->stk, jq->stk_top, sizeof(jv));
  jv* sval = stack_block(data_flow, &jq->stk, jq->stk_top);
  *sval = val;
}

jv stack_pop(int *data_flow, jq_state *jq) {
  jv* sval = stack_block(data_flow, &jq->stk, jq->stk_top);
  jv val = *sval;
  if (!stack_pop_will_free(data_flow, &jq->stk, jq->stk_top)) {
    val = jv_copy(val);
  }
  jq->stk_top = stack_pop_block(data_flow, &jq->stk, jq->stk_top, sizeof(jv));
  
 ((
 jv_is_valid(data_flow, val)
 ) ? (void) (0) : __assert_fail (
 "jv_is_valid(val)"
 , "execute.c", 177, __PRETTY_FUNCTION__))
                         ;
  return val;
}



jv stack_popn(int *data_flow, jq_state *jq) {
  jv* sval = stack_block(data_flow, &jq->stk, jq->stk_top);
  jv val = *sval;
  if (!stack_pop_will_free(data_flow, &jq->stk, jq->stk_top)) {
    *sval = jv_null();
  }
  jq->stk_top = stack_pop_block(data_flow, &jq->stk, jq->stk_top, sizeof(jv));
  
 ((
 jv_is_valid(data_flow, val)
 ) ? (void) (0) : __assert_fail (
 "jv_is_valid(val)"
 , "execute.c", 190, __PRETTY_FUNCTION__))
                         ;
  return val;
}


struct forkpoint {
  stack_ptr saved_data_stack;
  stack_ptr saved_curr_frame;
  int path_len, subexp_nest;
  jv value_at_path;
  uint16_t* return_address;
};

struct stack_pos {
  stack_ptr saved_data_stack, saved_curr_frame;
};

struct stack_pos stack_get_pos(int *data_flow, jq_state* jq) {
  struct stack_pos sp = {jq->stk_top, jq->curr_frame};
  return sp;
}

void stack_save(int *data_flow, jq_state *jq, uint16_t* retaddr, struct stack_pos sp){
  jq->fork_top = stack_push_block(data_flow, &jq->stk, jq->fork_top, sizeof(struct forkpoint));
  struct forkpoint* fork = stack_block(data_flow, &jq->stk, jq->fork_top);
  fork->saved_data_stack = jq->stk_top;
  fork->saved_curr_frame = jq->curr_frame;
  fork->path_len =
    jv_get_kind(jq->path) == JV_KIND_ARRAY ? jv_array_length(jv_copy(jq->path)) : 0;
  fork->value_at_path = jv_copy(jq->value_at_path);
  fork->subexp_nest = jq->subexp_nest;
  fork->return_address = retaddr;
  jq->stk_top = sp.saved_data_stack;
  jq->curr_frame = sp.saved_curr_frame;
}

static int path_intact(int *data_flow, jq_state *jq, jv curr) {
  if (jq->subexp_nest == 0 && jv_get_kind(jq->path) == JV_KIND_ARRAY) {
    return jv_identical(data_flow, curr, jv_copy(jq->value_at_path));
  } else {
    jv_free(curr);
    return 1;
  }
}

static void path_append(int *data_flow, jq_state* jq, jv component, jv value_at_path) {
  if (jq->subexp_nest == 0 && jv_get_kind(jq->path) == JV_KIND_ARRAY) {
    int n1 = jv_array_length(jv_copy(jq->path));
    jq->path = jv_array_append(jq->path, component);
    int n2 = jv_array_length(jv_copy(jq->path));
    
   ((
   n2 == n1 + 1
   ) ? (void) (0) : __assert_fail (
   "n2 == n1 + 1"
   , "execute.c", 240, __PRETTY_FUNCTION__))
                       ;
    jv_free(jq->value_at_path);
    jq->value_at_path = value_at_path;
  } else {
    jv_free(component);
    jv_free(value_at_path);
  }
}


jv
_jq_path_append(int *data_flow, jq_state *jq, jv v, jv p, jv value_at_path) {
  if (jq->subexp_nest != 0 ||
      jv_get_kind(jq->path) != JV_KIND_ARRAY ||
      !jv_is_valid(data_flow, value_at_path)) {
    jv_free(v);
    jv_free(p);
    return value_at_path;
  }
  if (!jv_identical(data_flow, v, jv_copy(jq->value_at_path))) {
    jv_free(p);
    return value_at_path;
  }
  if (jv_get_kind(p) == JV_KIND_ARRAY)
    jq->path = jv_array_concat(data_flow, jq->path, p);
  else
    jq->path = jv_array_append(jq->path, p);
  jv_free(jq->value_at_path);
  return jv_copy(jq->value_at_path = value_at_path);
}

uint16_t* stack_restore(int *data_flow, jq_state *jq){
  while (!stack_pop_will_free(data_flow, &jq->stk, jq->fork_top)) {
    if (stack_pop_will_free(data_flow, &jq->stk, jq->stk_top)) {
      jv_free(stack_pop(data_flow, jq));
    } else if (stack_pop_will_free(data_flow, &jq->stk, jq->curr_frame)) {
      frame_pop(data_flow, jq);
    } else {
      
     ((
     0
     ) ? (void) (0) : __assert_fail (
     "0"
     , "execute.c", 278, __PRETTY_FUNCTION__))
              ;
    }
  }

  if (jq->fork_top == 0) {
    return 0;
  }

  struct forkpoint* fork = stack_block(data_flow, &jq->stk, jq->fork_top);
  uint16_t* retaddr = fork->return_address;
  jq->stk_top = fork->saved_data_stack;
  jq->curr_frame = fork->saved_curr_frame;
  int path_len = fork->path_len;
  if (jv_get_kind(jq->path) == JV_KIND_ARRAY) {
    
   ((
   path_len >= 0
   ) ? (void) (0) : __assert_fail (
   "path_len >= 0"
   , "execute.c", 292, __PRETTY_FUNCTION__))
                        ;
    jq->path = jv_array_slice(data_flow, jq->path, 0, path_len);
  } else {
    
   ((
   path_len == 0
   ) ? (void) (0) : __assert_fail (
   "path_len == 0"
   , "execute.c", 295, __PRETTY_FUNCTION__))
                        ;
  }
  jv_free(jq->value_at_path);
  jq->value_at_path = fork->value_at_path;
  jq->subexp_nest = fork->subexp_nest;
  jq->fork_top = stack_pop_block(data_flow, &jq->stk, jq->fork_top, sizeof(struct forkpoint));
  return retaddr;
}

static void jq_reset(int *data_flow, jq_state *jq) {
  while (stack_restore(data_flow, jq)) {}

  
 ((
 jq->stk_top == 0
 ) ? (void) (0) : __assert_fail (
 "jq->stk_top == 0"
 , "execute.c", 307, __PRETTY_FUNCTION__))
                         ;
  
 ((
 jq->fork_top == 0
 ) ? (void) (0) : __assert_fail (
 "jq->fork_top == 0"
 , "execute.c", 308, __PRETTY_FUNCTION__))
                          ;
  
 ((
 jq->curr_frame == 0
 ) ? (void) (0) : __assert_fail (
 "jq->curr_frame == 0"
 , "execute.c", 309, __PRETTY_FUNCTION__))
                            ;
  stack_reset(data_flow, &jq->stk + (data_flow[21] * (0x57583674 == data_flow[21])));
  jv_free(jq->error);
  jq->error = jv_null();

  jq->halted = 0;
  jv_free(jq->exit_code);
  jv_free(jq->error_message);
  if (jv_get_kind(jq->path) != JV_KIND_INVALID)
    jv_free(jq->path);
  jq->path = jv_null();
  jv_free(jq->value_at_path);
  jq->value_at_path = jv_null();
  jq->subexp_nest = 0;
}

void jq_report_error(int *data_flow, jq_state *jq, jv value) {
  
 ((
 jq->err_cb
 ) ? (void) (0) : __assert_fail (
 "jq->err_cb"
 , "execute.c", 326, __PRETTY_FUNCTION__))
                   ;

  jq->err_cb(data_flow, jq->err_cb_data, value);
}

static void set_error(int *data_flow, jq_state *jq, jv value) {

  jv_free(jq->error);
  jq->error = value;
}



jv jq_next(int *data_flow, jq_state *jq) {
  jv cfunc_input[10];

  jv_nomem_handler(data_flow, jq->nomem_handler, jq->nomem_handler_data);

  uint16_t* pc = stack_restore(data_flow, jq);
  
 ((
 pc
 ) ? (void) (0) : __assert_fail (
 "pc"
 , "execute.c", 345, __PRETTY_FUNCTION__))
           ;

  int raising;
  int backtracking = !jq->initial_execution;
  jq->initial_execution = 0;
  
 ((
 jv_get_kind(jq->error) == JV_KIND_NULL
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(jq->error) == JV_KIND_NULL"
 , "execute.c", 350, __PRETTY_FUNCTION__))
                                               ;
  while (1) {
    if (jq->halted) {
      if (jq->debug_trace_enabled)
        printf("\t<halted>\n");
      return jv_invalid();
    }
    uint16_t opcode = *pc;
    raising = 0;

    if (jq->debug_trace_enabled) {
      dump_operation(data_flow, frame_current(data_flow, jq)->bc, pc);
      printf("\t");
      const struct opcode_description* opdesc = opcode_describe(data_flow, opcode);
      stack_ptr param = 0;
      if (!backtracking) {
        int stack_in = opdesc->stack_in;
        if (stack_in == -1) stack_in = pc[1];
        param = jq->stk_top;
        for (int i=0; i<stack_in; i++) {
          if (i != 0) {
            printf(" | ");
            param = *stack_block_next(data_flow, &jq->stk, param);
          }
          if (!param) break;
          jv_dump(data_flow, jv_copy(*(jv*)stack_block(data_flow, &jq->stk, param)), JV_PRINT_REFCOUNT);



        }
        if (jq->debug_trace_enabled & JQ_DEBUG_TRACE_DETAIL) {
          while ((param = *stack_block_next(data_flow, &jq->stk, param))) {
            printf(" || ");
            jv_dump(data_flow, jv_copy(*(jv*)stack_block(data_flow, &jq->stk, param)), JV_PRINT_REFCOUNT);
          }
        }
      } else {
        printf("\t<backtracking>");
      }

      printf("\n");
    }

    if (backtracking) {
      opcode = ((opcode)+NUM_OPCODES);
      backtracking = 0;
      raising = !jv_is_valid(data_flow, jq->error);
    }
    pc++;

    switch (opcode) {
    default: 
            ((
            0 && "invalid instruction"
            ) ? (void) (0) : __assert_fail (
            "0 && \"invalid instruction\""
            , "execute.c", 401, __PRETTY_FUNCTION__))
                                              ;

    case TOP: break;

    case LOADK: {
      jv v = jv_array_get(jv_copy(frame_current(data_flow, jq)->bc->constants), *pc++);
      
     ((
     jv_is_valid(data_flow, v)
     ) ? (void) (0) : __assert_fail (
     "jv_is_valid(v)"
     , "execute.c", 407, __PRETTY_FUNCTION__))
                           ;
      jv_free(stack_pop(data_flow, jq));
      stack_push(data_flow, jq, v);
      break;
    }

    case GENLABEL: {
      stack_push(data_flow, jq, (jv_object_set(data_flow, jv_object(data_flow),(jv_string("__jq")),(jv_number(jq->next_label++)))));
      break;
    }

    case DUP: {
      jv v = stack_pop(data_flow, jq);
      stack_push(data_flow, jq, jv_copy(v));
      stack_push(data_flow, jq, v);
      break;
    }

    case DUPN: {
      jv v = stack_popn(data_flow, jq);
      stack_push(data_flow, jq, jv_copy(v));
      stack_push(data_flow, jq, v);
      break;
    }

    case DUP2: {
      jv keep = stack_pop(data_flow, jq);
      jv v = stack_pop(data_flow, jq);
      stack_push(data_flow, jq, jv_copy(v));
      stack_push(data_flow, jq, keep);
      stack_push(data_flow, jq, v);
      break;
    }

    case SUBEXP_BEGIN: {
      jv v = stack_pop(data_flow, jq);
      stack_push(data_flow, jq, jv_copy(v));
      stack_push(data_flow, jq, v);
      jq->subexp_nest++;
      break;
    }

    case SUBEXP_END: {
      
     ((
     jq->subexp_nest > 0
     ) ? (void) (0) : __assert_fail (
     "jq->subexp_nest > 0"
     , "execute.c", 450, __PRETTY_FUNCTION__))
                                ;
      jq->subexp_nest--;
      jv a = stack_pop(data_flow, jq);
      jv b = stack_pop(data_flow, jq);
      stack_push(data_flow, jq, a);
      stack_push(data_flow, jq, b);
      break;
    }

    case PUSHK_UNDER: {
      jv v = jv_array_get(jv_copy(frame_current(data_flow, jq)->bc->constants), *pc++);
      
     ((
     jv_is_valid(data_flow, v)
     ) ? (void) (0) : __assert_fail (
     "jv_is_valid(v)"
     , "execute.c", 461, __PRETTY_FUNCTION__))
                           ;
      jv v2 = stack_pop(data_flow, jq);
      stack_push(data_flow, jq, v);
      stack_push(data_flow, jq, v2);
      break;
    }

    case POP: {
      jv_free(stack_pop(data_flow, jq));
      break;
    }

    case APPEND: {
      jv v = stack_pop(data_flow, jq);
      uint16_t level = *pc++;
      uint16_t vidx = *pc++;
      jv* var = frame_local_var(data_flow, jq, vidx, level);
      
     ((
     jv_get_kind(*var) == JV_KIND_ARRAY
     ) ? (void) (0) : __assert_fail (
     "jv_get_kind(*var) == JV_KIND_ARRAY"
     , "execute.c", 478, __PRETTY_FUNCTION__))
                                               ;
      *var = jv_array_append(*var, v);
      break;
    }

    case INSERT: {
      jv stktop = stack_pop(data_flow, jq);
      jv v = stack_pop(data_flow, jq);
      jv k = stack_pop(data_flow, jq);
      jv objv = stack_pop(data_flow, jq);
      
     ((
     jv_get_kind(objv) == JV_KIND_OBJECT
     ) ? (void) (0) : __assert_fail (
     "jv_get_kind(objv) == JV_KIND_OBJECT"
     , "execute.c", 488, __PRETTY_FUNCTION__))
                                                ;
      if (jv_get_kind(k) == JV_KIND_STRING) {
        stack_push(data_flow, jq, jv_object_set(data_flow, objv, k, v));
        stack_push(data_flow, jq, stktop);
      } else {
        char errbuf[15];
        set_error(data_flow, jq, jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot use %s (%s) as object key",
                                                        jv_kind_name(data_flow, jv_get_kind(k)),
                                                        jv_dump_string_trunc(data_flow, jv_copy(k), errbuf, sizeof(errbuf)))));
        jv_free(stktop);
        jv_free(v);
        jv_free(k);
        jv_free(objv);
        goto do_backtrack;
      }
      break;
    }

    case ((RANGE)+NUM_OPCODES):
    case RANGE: {
      uint16_t level = *pc++;
      uint16_t v = *pc++;
      jv* var = frame_local_var(data_flow, jq, v, level);
      jv max = stack_pop(data_flow, jq);
      if (raising) goto do_backtrack;
      if (jv_get_kind(*var) != JV_KIND_NUMBER ||
          jv_get_kind(max) != JV_KIND_NUMBER) {
        set_error(data_flow, jq, jv_invalid_with_msg(jv_string_fmt(data_flow, "Range bounds must be numeric")));
        jv_free(max);
        goto do_backtrack;
      } else if (jv_number_value(jv_copy(*var)) >= jv_number_value(jv_copy(max))) {

        goto do_backtrack;
      } else {
        jv curr = jv_copy(*var);
        *var = jv_number(jv_number_value(*var) + 1);

        struct stack_pos spos = stack_get_pos(data_flow, jq);
        stack_push(data_flow, jq, jv_copy(max));
        stack_save(data_flow, jq, pc - 3, spos);

        stack_push(data_flow, jq, curr);
      }
      break;
    }


    case LOADV: {
      uint16_t level = *pc++;
      uint16_t v = *pc++;
      jv* var = frame_local_var(data_flow, jq, v, level);
      if (jq->debug_trace_enabled) {
        printf("V%d = ", v);
        jv_dump(data_flow, jv_copy(*var), 0);
        printf(" (%d)\n", jv_get_refcnt(data_flow, *var));
      }
      jv_free(stack_pop(data_flow, jq));
      stack_push(data_flow, jq, jv_copy(*var));
      break;
    }


    case LOADVN: {
      uint16_t level = *pc++;
      uint16_t v = *pc++;
      jv* var = frame_local_var(data_flow, jq, v, level);
      if (jq->debug_trace_enabled) {
        printf("V%d = ", v);
        jv_dump(data_flow, jv_copy(*var), 0);
        printf(" (%d)\n", jv_get_refcnt(data_flow, *var));
      }
      jv_free(stack_popn(data_flow, jq));
      stack_push(data_flow, jq, *var);
      *var = jv_null();
      break;
    }

    case STOREVN:
        stack_save(data_flow, jq, pc - 1, stack_get_pos(data_flow, jq));
    case STOREV: {
      uint16_t level = *pc++;
      uint16_t v = *pc++;
      jv* var = frame_local_var(data_flow, jq, v, level);
      jv val = stack_pop(data_flow, jq);
      if (jq->debug_trace_enabled) {
        printf("V%d = ", v);
        jv_dump(data_flow, jv_copy(val), 0);
        printf(" (%d)\n", jv_get_refcnt(data_flow, val));
      }
      jv_free(*var);
      *var = val;
      break;
    }

    case ((STOREVN)+NUM_OPCODES): {
      uint16_t level = *pc++;
      uint16_t v = *pc++;
      jv* var = frame_local_var(data_flow, jq, v, level);
      jv_free(*var);
      *var = jv_null();
      goto do_backtrack;
      break;
    }

    case STORE_GLOBAL: {

      jv val = jv_array_get(jv_copy(frame_current(data_flow, jq)->bc->constants), *pc++);
      
     ((
     jv_is_valid(data_flow, val)
     ) ? (void) (0) : __assert_fail (
     "jv_is_valid(val)"
     , "execute.c", 595, __PRETTY_FUNCTION__))
                             ;


      uint16_t level = *pc++;
      uint16_t v = *pc++;
      jv* var = frame_local_var(data_flow, jq, v, level);
      if (jq->debug_trace_enabled) {
        printf("V%d = ", v);
        jv_dump(data_flow, jv_copy(val), 0);
        printf(" (%d)\n", jv_get_refcnt(data_flow, val));
      }
      jv_free(*var);
      *var = val;
      break;
    }

    case PATH_BEGIN: {
      jv v = stack_pop(data_flow, jq);
      stack_push(data_flow, jq, jq->path);

      stack_save(data_flow, jq, pc - 1, stack_get_pos(data_flow, jq));

      stack_push(data_flow, jq, jv_number(jq->subexp_nest));
      stack_push(data_flow, jq, jq->value_at_path);
      stack_push(data_flow, jq, jv_copy(v));

      jq->path = jv_array();
      jq->value_at_path = v;
      jq->subexp_nest = 0;
      break;
    }

    case PATH_END: {
      jv v = stack_pop(data_flow, jq);

      if (!path_intact(data_flow, jq, jv_copy(v))) {
        char errbuf[30];
        jv msg = jv_string_fmt(data_flow, 
            "Invalid path expression with result %s",
            jv_dump_string_trunc(data_flow, v, errbuf, sizeof(errbuf)));
        set_error(data_flow, jq, jv_invalid_with_msg(msg));
        goto do_backtrack;
      }
      jv_free(v);

      jv old_value_at_path = stack_pop(data_flow, jq);
      int old_subexp_nest = (int)jv_number_value(stack_pop(data_flow, jq));

      jv path = jq->path;
      jq->path = stack_pop(data_flow, jq);

      struct stack_pos spos = stack_get_pos(data_flow, jq);
      stack_push(data_flow, jq, jv_copy(path));
      stack_save(data_flow, jq, pc - 1, spos);

      stack_push(data_flow, jq, path);
      jq->subexp_nest = old_subexp_nest;
      jv_free(jq->value_at_path);
      jq->value_at_path = old_value_at_path;
      break;
    }

    case ((PATH_BEGIN)+NUM_OPCODES):
    case ((PATH_END)+NUM_OPCODES): {
      jv_free(jq->path);
      jq->path = stack_pop(data_flow, jq);
      goto do_backtrack;
    }

    case INDEX:
    case INDEX_OPT: {
      jv t = stack_pop(data_flow, jq);
      jv k = stack_pop(data_flow, jq);

      if (!path_intact(data_flow, jq, jv_copy(t))) {
        char keybuf[15];
        char objbuf[30];
        jv msg = jv_string_fmt(data_flow, 
            "Invalid path expression near attempt to access element %s of %s",
            jv_dump_string_trunc(data_flow, k, keybuf, sizeof(keybuf)),
            jv_dump_string_trunc(data_flow, t, objbuf, sizeof(objbuf)));
        set_error(data_flow, jq, jv_invalid_with_msg(msg));
        goto do_backtrack;
      }
      jv v = jv_get(data_flow, t, jv_copy(k));
      if (jv_is_valid(data_flow, v)) {
        path_append(data_flow, jq, k, jv_copy(v));
        stack_push(data_flow, jq, v);
      } else {
        jv_free(k);
        if (opcode == INDEX)
          set_error(data_flow, jq, v);
        else
          jv_free(v);
        goto do_backtrack;
      }
      break;
    }


    case JUMP: {
      uint16_t offset = *pc++;
      pc += offset;
      break;
    }

    case JUMP_F: {
      uint16_t offset = *pc++;
      jv t = stack_pop(data_flow, jq);
      jv_kind kind = jv_get_kind(t);
      if (kind == JV_KIND_FALSE || kind == JV_KIND_NULL) {
        pc += offset;
      }
      stack_push(data_flow, jq, t);
      break;
    }

    case EACH:
    case EACH_OPT: {
      jv container = stack_pop(data_flow, jq);

      if (!path_intact(data_flow, jq, jv_copy(container))) {
        char errbuf[30];
        jv msg = jv_string_fmt(data_flow, 
            "Invalid path expression near attempt to iterate through %s",
            jv_dump_string_trunc(data_flow, container, errbuf, sizeof(errbuf)));
        set_error(data_flow, jq, jv_invalid_with_msg(msg));
        goto do_backtrack;
      }
      stack_push(data_flow, jq, container);
      stack_push(data_flow, jq, jv_number(-1));

    }
    case ((EACH)+NUM_OPCODES):
    case ((EACH_OPT)+NUM_OPCODES): {
      int idx = jv_number_value(stack_pop(data_flow, jq));
      jv container = stack_pop(data_flow, jq);

      int keep_going, is_last = 0;
      jv key, value;
      if (jv_get_kind(container) == JV_KIND_ARRAY) {
        if (opcode == EACH || opcode == EACH_OPT) idx = 0;
        else idx = idx + 1;
        int len = jv_array_length(jv_copy(container));
        keep_going = idx < len;
        is_last = idx == len - 1;
        if (keep_going) {
          key = jv_number(idx);
          value = jv_array_get(jv_copy(container), idx);
        }
      } else if (jv_get_kind(container) == JV_KIND_OBJECT) {
        if (opcode == EACH || opcode == EACH_OPT) idx = jv_object_iter(container);
        else idx = jv_object_iter_next(container, idx);
        keep_going = jv_object_iter_valid(container, idx);
        if (keep_going) {
          key = jv_object_iter_key(container, idx);
          value = jv_object_iter_value(container, idx);
        }
      } else {
        
       ((
       opcode == EACH || opcode == EACH_OPT
       ) ? (void) (0) : __assert_fail (
       "opcode == EACH || opcode == EACH_OPT"
       , "execute.c", 754, __PRETTY_FUNCTION__))
                                                   ;
        if (opcode == EACH) {
          char errbuf[15];
          set_error(data_flow, jq,
                    jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot iterate over %s (%s)",
                                                      jv_kind_name(data_flow, jv_get_kind(container)),
                                                      jv_dump_string_trunc(data_flow, jv_copy(container), errbuf, sizeof(errbuf)))));
        }
        keep_going = 0;
      }

      if (!keep_going || raising) {
        if (keep_going)
          jv_free(value);
        jv_free(container);
        goto do_backtrack;
      } else if (is_last) {

        jv_free(container);
        path_append(data_flow, jq, key, jv_copy(value));
        stack_push(data_flow, jq, value);
      } else {
        struct stack_pos spos = stack_get_pos(data_flow, jq);
        stack_push(data_flow, jq, container);
        stack_push(data_flow, jq, jv_number(idx));
        stack_save(data_flow, jq, pc - 1, spos);
        path_append(data_flow, jq, key, jv_copy(value));
        stack_push(data_flow, jq, value);
      }
      break;
    }

    do_backtrack:
    case BACKTRACK: {
      pc = stack_restore(data_flow, jq);
      if (!pc) {
        if (!jv_is_valid(data_flow, jq->error)) {
          jv error = jq->error;
          jq->error = jv_null();
          return error;
        }
        return jv_invalid();
      }
      backtracking = 1;
      break;
    }

    case FORK_OPT:
    case DESTRUCTURE_ALT:
    case FORK: {
      stack_save(data_flow, jq, pc - 1, stack_get_pos(data_flow, jq));
      pc++;
      break;
    }

    case ((FORK_OPT)+NUM_OPCODES):
    case ((DESTRUCTURE_ALT)+NUM_OPCODES): {
      if (jv_is_valid(data_flow, jq->error)) {

        jv_free(stack_pop(data_flow, jq));
        goto do_backtrack;
      }



      if (opcode != ((DESTRUCTURE_ALT)+NUM_OPCODES)) {
        jv_free(stack_pop(data_flow, jq));
        stack_push(data_flow, jq, jv_invalid_get_msg(data_flow, jq->error));
      } else {
        jv_free(jq->error);
      }
      jq->error = jv_null();
      uint16_t offset = *pc++;
      pc += offset;
      break;
    }
    case ((FORK)+NUM_OPCODES): {
      if (raising) goto do_backtrack;
      uint16_t offset = *pc++;
      pc += offset;
      break;
    }

    case CALL_BUILTIN: {
      int nargs = *pc++;
      jv top = stack_pop(data_flow, jq);
      jv* in = cfunc_input;
      in[0] = top;
      for (int i = 1; i < nargs; i++) {
        in[i] = stack_pop(data_flow, jq);
      }
      struct cfunction* function = &frame_current(data_flow, jq)->bc->globals->cfunctions[*pc++];
      typedef jv (*func_1)(int *data_flow, jq_state*,jv);
      typedef jv (*func_2)(int *data_flow, jq_state*,jv,jv);
      typedef jv (*func_3)(int *data_flow, jq_state*,jv,jv,jv);
      typedef jv (*func_4)(int *data_flow, jq_state*,jv,jv,jv,jv);
      typedef jv (*func_5)(int *data_flow, jq_state*,jv,jv,jv,jv,jv);
      switch (function->nargs) {
      case 1: top = ((func_1)function->fptr)(data_flow, jq, in[0]); break;
      case 2: top = ((func_2)function->fptr)(data_flow, jq, in[0], in[1]); break;
      case 3: top = ((func_3)function->fptr)(data_flow, jq, in[0], in[1], in[2]); break;
      case 4: top = ((func_4)function->fptr)(data_flow, jq, in[0], in[1], in[2], in[3]); break;
      case 5: top = ((func_5)function->fptr)(data_flow, jq, in[0], in[1], in[2], in[3], in[4]); break;


      default: return jv_invalid_with_msg(jv_string("Function takes too many arguments"));
      }

      if (jv_is_valid(data_flow, top)) {
        stack_push(data_flow, jq, top);
      } else if (jv_invalid_has_msg(data_flow, jv_copy(top))) {
        set_error(data_flow, jq, top);
        goto do_backtrack;
      } else {


        goto do_backtrack;
      }
      break;
    }

    case TAIL_CALL_JQ:
    case CALL_JQ: {
      jv input = stack_pop(data_flow, jq);
      uint16_t nclosures = *pc++;
      uint16_t* retaddr = pc + 2 + nclosures*2;
      stack_ptr retdata = jq->stk_top;
      struct frame* new_frame;
      struct closure cl = make_closure(data_flow, jq, pc);
      if (opcode == TAIL_CALL_JQ) {
        retaddr = frame_current(data_flow, jq)->retaddr;
        retdata = frame_current(data_flow, jq)->retdata;
        frame_pop(data_flow, jq);
      }
      new_frame = frame_push(data_flow, jq, cl, pc + 2, nclosures);
      new_frame->retdata = retdata;
      new_frame->retaddr = retaddr;
      pc = new_frame->bc->code;
      stack_push(data_flow, jq, input);
      break;
    }

    case RET: {
      jv value = stack_pop(data_flow, jq);
      
     ((
     jq->stk_top == frame_current(data_flow, jq)->retdata
     ) ? (void) (0) : __assert_fail (
     "jq->stk_top == frame_current(jq)->retdata"
     , "execute.c", 922, __PRETTY_FUNCTION__))
                                                      ;
      uint16_t* retaddr = frame_current(data_flow, jq)->retaddr;
      if (retaddr) {

        pc = retaddr;
        frame_pop(data_flow, jq);
      } else {

        struct stack_pos spos = stack_get_pos(data_flow, jq);
        stack_push(data_flow, jq, jv_null());
        stack_save(data_flow, jq, pc - 1, spos);
        return value;
      }
      stack_push(data_flow, jq, value);
      break;
    }
    case ((RET)+NUM_OPCODES): {

      goto do_backtrack;
    }
    }
  }
}

jv jq_format_error(int *data_flow, jv msg) {
  if (jv_get_kind(msg) == JV_KIND_NULL ||
      (jv_get_kind(msg) == JV_KIND_INVALID && !jv_invalid_has_msg(data_flow, jv_copy(msg)))) {
    jv_free(msg);
    fprintf(
           stderr
                 , "jq: error: out of memory\n");
    return jv_null();
  }

  if (jv_get_kind(msg) == JV_KIND_STRING)
    return msg;

  if (jv_get_kind(msg) == JV_KIND_INVALID)
    msg = jv_invalid_get_msg(data_flow, msg);

  if (jv_get_kind(msg) == JV_KIND_NULL)
    return jq_format_error(data_flow, msg);



  if (jv_get_kind(msg) != JV_KIND_INVALID) {
    if (jv_get_kind(msg) == JV_KIND_STRING)
      return jv_string_fmt(data_flow, "jq: error: %s", jv_string_value(msg));

    msg = jv_dump_string(data_flow, msg, JV_PRINT_INVALID);
    if (jv_get_kind(msg) == JV_KIND_STRING)
      return jv_string_fmt(data_flow, "jq: error: %s", jv_string_value(msg));
    return jq_format_error(data_flow, jv_null());
  }


  return jq_format_error(data_flow, jv_invalid_get_msg(data_flow, msg));
}




static void default_err_cb(int *data_flow, void *data, jv msg) {
  msg = jq_format_error(data_flow, msg);
  fprintf((FILE *)data, "%s\n", jv_string_value(msg));
  jv_free(msg);
}

jq_state *jq_init(int *data_flow) {
  jq_state *jq;
  jq = jv_mem_alloc_unguarded(data_flow, sizeof(*jq));
  if (jq == 
           ((void *)0)
               )
    return 
          ((void *)0)
              ;

  jq->bc = 0;
  jq->next_label = 0;

  stack_init(data_flow, &jq->stk);
  jq->stk_top = 0;
  jq->fork_top = 0;
  jq->curr_frame = 0;
  jq->error = jv_null();

  jq->halted = 0;
  jq->exit_code = jv_invalid();
  jq->error_message = jv_invalid();

  jq->err_cb = default_err_cb;
  jq->err_cb_data = 
                   stderr
                         ;

  jq->attrs = jv_object(data_flow);
  jq->path = jv_null();
  jq->value_at_path = jv_null();
  return jq;
}

void jq_set_error_cb(int *data_flow, jq_state *jq, jq_msg_cb cb, void *data) {
  if (cb == 
           ((void *)0)
               ) {
    jq->err_cb = default_err_cb;
    jq->err_cb_data = 
                     stderr
                           ;
  } else {
    jq->err_cb = cb;
    jq->err_cb_data = data;
  }
}

void jq_get_error_cb(int *data_flow, jq_state *jq, jq_msg_cb *cb, void **data) {
  *cb = jq->err_cb;
  *data = jq->err_cb_data;
}

void jq_set_nomem_handler(int *data_flow, jq_state *jq, void (*nomem_handler)(int *data_flow, void *), void *data) {
  jv_nomem_handler(data_flow, nomem_handler, data);
  jq->nomem_handler = nomem_handler;
  jq->nomem_handler_data = data;
}


void jq_start(int *data_flow, jq_state *jq, jv input, int flags) {
  jv_nomem_handler(data_flow, jq->nomem_handler, jq->nomem_handler_data);
  jq_reset(data_flow, jq);

  struct closure top = {jq->bc, -1};
  struct frame* top_frame = frame_push(data_flow, jq, top, 0, 0);
  top_frame->retdata = 0;
  top_frame->retaddr = 0;

  stack_push(data_flow, jq, input);
  stack_save(data_flow, jq, jq->bc->code, stack_get_pos(data_flow, jq));
  jq->debug_trace_enabled = flags & JQ_DEBUG_TRACE_ALL;
  jq->initial_execution = 1;
}

void jq_teardown(int *data_flow, jq_state **jq) {
  jq_state *old_jq = *jq;
  if (old_jq == 
               ((void *)0)
                   )
    return;
  *jq = 
       ((void *)0)
           ;

  jq_reset(data_flow, old_jq);
  bytecode_free(data_flow, old_jq->bc);
  old_jq->bc = 0;
  jv_free(old_jq->attrs);

  jv_mem_free(old_jq);
}

static int ret_follows(int *data_flow, uint16_t *pc) {
  if (*pc == RET)
    return 1;
  if (*pc++ != JUMP)
    return 0;
  return ret_follows(data_flow, pc + *pc + 1);
}
static uint16_t tail_call_analyze(int *data_flow, uint16_t *pc) {
  
 ((
 *pc == CALL_JQ
 ) ? (void) (0) : __assert_fail (
 "*pc == CALL_JQ"
 , "execute.c", 1100, __PRETTY_FUNCTION__))
                       ;
  pc++;

  for (uint16_t nclosures = *pc++ + 1; nclosures > 0; pc++, nclosures--) {
    if (*pc++ == 0)
      return CALL_JQ;
  }
  if (ret_follows(data_flow, pc))
    return TAIL_CALL_JQ;
  return CALL_JQ;
}

static struct bytecode *optimize_code(int *data_flow, struct bytecode *bc) {
  uint16_t *pc = bc->code;

  while (pc < bc->code + bc->codelen) {
    switch (*pc) {
    case CALL_JQ:
      *pc = tail_call_analyze(data_flow, pc);
      break;



    default: break;
    }
    pc += bytecode_operation_length(data_flow, pc);
  }
  return bc;
}

static struct bytecode *optimize(int *data_flow, struct bytecode *bc) {
  for (int i=0; i<bc->nsubfunctions; i++) {
    bc->subfunctions[i] = optimize(data_flow, bc->subfunctions[i]);
  }
  return optimize_code(data_flow, bc);
}

static jv
args2obj(int *data_flow, jv args)
{
  if (jv_get_kind(args) == JV_KIND_OBJECT)
    return args;
  
 ((
 jv_get_kind(args) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(args) == JV_KIND_ARRAY"
 , "execute.c", 1142, __PRETTY_FUNCTION__))
                                           ;
  jv r = jv_object(data_flow);
  jv kk = jv_string("name");
  jv vk = jv_string("value");
  for (int jv_len__ = jv_array_length(jv_copy(args)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv v; i < jv_len__ ? (v = jv_array_get(jv_copy(args), i), 1) : 0; i++)
    r = jv_object_set(data_flow, r, jv_object_get(jv_copy(v), kk), jv_object_get(v, vk));
  jv_free(args);
  jv_free(kk);
  jv_free(vk);
  return r;
}

int jq_compile_args(int *data_flow, jq_state *jq, const char* str, jv args) {
  jv_nomem_handler(data_flow, jq->nomem_handler, jq->nomem_handler_data);
  
 ((
 jv_get_kind(args) == JV_KIND_ARRAY || jv_get_kind(args) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(args) == JV_KIND_ARRAY || jv_get_kind(args) == JV_KIND_OBJECT"
 , "execute.c", 1156, __PRETTY_FUNCTION__))
                                                                                  ;
  struct locfile* locations;
  locations = locfile_init(data_flow, jq, "<top-level>", str, strlen(str));
  block program;
  jq_reset(data_flow, jq);
  if (jq->bc) {
    bytecode_free(data_flow, jq->bc);
    jq->bc = 0;
  }
  int nerrors = load_program(data_flow, jq, locations, &program);
  if (nerrors == 0) {
    nerrors = builtins_bind(data_flow, jq, &program);
    if (nerrors == 0) {
      nerrors = block_compile(data_flow, program, &jq->bc, locations, args = args2obj(data_flow, args));
    }
  } else
    jv_free(args);
  if (nerrors)
    jq_report_error(data_flow, jq, jv_string_fmt(data_flow, "jq: %d compile %s", nerrors, nerrors > 1 ? "errors" : "error"));
  if (jq->bc)
    jq->bc = optimize(data_flow, jq->bc);
  locfile_free(data_flow, locations);
  return jq->bc != 
                  ((void *)0)
                      ;
}

int jq_compile(int *data_flow, jq_state *jq, const char* str) {
  return jq_compile_args(data_flow, jq, str, jv_object(data_flow));
}

jv jq_get_jq_origin(int *data_flow, jq_state *jq) {
  return jq_get_attr(data_flow, jq, jv_string("JQ_ORIGIN"));
}

jv jq_get_prog_origin(int *data_flow, jq_state *jq) {
  return jq_get_attr(data_flow, jq, jv_string("PROGRAM_ORIGIN"));
}

jv jq_get_lib_dirs(int *data_flow, jq_state *jq) {
  return jq_get_attr(data_flow, jq, jv_string("JQ_LIBRARY_PATH"));
}

void jq_set_attrs(int *data_flow, jq_state *jq, jv attrs) {
  
 ((
 jv_get_kind(attrs) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(attrs) == JV_KIND_OBJECT"
 , "execute.c", 1198, __PRETTY_FUNCTION__))
                                             ;
  jv_free(jq->attrs);
  jq->attrs = attrs;
}

void jq_set_attr(int *data_flow, jq_state *jq, jv attr, jv val) {
  jq->attrs = jv_object_set(data_flow, jq->attrs, attr, val);
}

jv jq_get_attr(int *data_flow, jq_state *jq, jv attr) {
  return jv_object_get(jv_copy(jq->attrs), attr);
}

void jq_dump_disassembly(int *data_flow, jq_state *jq, int indent) {
  dump_disassembly(data_flow, indent, jq->bc);
}

void jq_set_input_cb(int *data_flow, jq_state *jq, jq_input_cb cb, void *data) {
  jq->input_cb = cb;
  jq->input_cb_data = data;
}

void jq_get_input_cb(int *data_flow, jq_state *jq, jq_input_cb *cb, void **data) {
  *cb = jq->input_cb;
  *data = jq->input_cb_data;
}

void jq_set_debug_cb(int *data_flow, jq_state *jq, jq_msg_cb cb, void *data) {
  jq->debug_cb = cb;
  jq->debug_cb_data = data;
}

void jq_get_debug_cb(int *data_flow, jq_state *jq, jq_msg_cb *cb, void **data) {
  *cb = jq->debug_cb;
  *data = jq->debug_cb_data;
}

void
jq_halt(int *data_flow, jq_state *jq, jv exit_code, jv error_message)
{
  
 ((
 !jq->halted
 ) ? (void) (0) : __assert_fail (
 "!jq->halted"
 , "execute.c", 1238, __PRETTY_FUNCTION__))
                    ;
  jq->halted = 1;
  jq->exit_code = exit_code;
  jq->error_message = error_message;
}

int
jq_halted(int *data_flow, jq_state *jq)
{
  return jq->halted;
}

jv jq_get_exit_code(int *data_flow, jq_state *jq)
{
  return jv_copy(jq->exit_code);
}

jv jq_get_error_message(int *data_flow, jq_state *jq)
{
  return jv_copy(jq->error_message);
}
