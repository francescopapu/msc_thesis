











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




extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
    ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
    ;




extern void __assert (const char *__assertion, const char *__file, int __line)
    ;






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




struct Bigint;
struct dtoa_context {
  struct Bigint *freelist[7 +1];
  struct Bigint *p5s;
};

void jvp_dtoa_context_init(int *data_flow, struct dtoa_context* ctx);
void jvp_dtoa_context_free(int *data_flow, struct dtoa_context* ctx);

double jvp_strtod(int *data_flow, struct dtoa_context* C, const char* s, char** se);


char* jvp_dtoa(int *data_flow, struct dtoa_context* C, double dd, int mode, int ndigits, int *decpt, int *sign, char **rve);
void jvp_freedtoa(int *data_flow, struct dtoa_context* C, char *s);


char* jvp_dtoa_fmt(int *data_flow, struct dtoa_context* C, register char *b, double x);



const char* jvp_utf8_backtrack(int *data_flow, const char* start, const char* min, int *missing_bytes);
const char* jvp_utf8_next(const char* in, const char* end, int* codepoint);
int jvp_utf8_is_valid(const char* in, const char* end);

int jvp_utf8_decode_length(int *data_flow, char startchar);

int jvp_utf8_encode_length(int codepoint);
int jvp_utf8_encode(int codepoint, char* out);




typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;




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


typedef const char* presult;
enum last_seen {
  JV_LAST_NONE = 0,
  JV_LAST_OPEN_ARRAY = '[',
  JV_LAST_OPEN_OBJECT = '{',
  JV_LAST_COLON = ':',
  JV_LAST_COMMA = ',',
  JV_LAST_VALUE = 'V',
};

struct jv_parser {
  const char* curr_buf;
  int curr_buf_length;
  int curr_buf_pos;
  int curr_buf_is_partial;
  int eof;
  unsigned bom_strip_position;

  int flags;

  jv* stack;
  int stackpos;
  int stacklen;
  jv path;
  enum last_seen last_seen;
  jv output;
  jv next;

  char* tokenbuf;
  int tokenpos;
  int tokenlen;

  int line, column;

  struct dtoa_context dtoa;

  enum {
    JV_PARSER_NORMAL,
    JV_PARSER_STRING,
    JV_PARSER_STRING_ESCAPE,
    JV_PARSER_WAITING_FOR_RS
  } st;
  unsigned int last_ch_was_ws:1;
};


static void parser_init(int *data_flow, struct jv_parser* p, int flags) {
  p->flags = flags;
  if ((p->flags & JV_PARSE_STREAMING)) {
    p->path = jv_array();
  } else {
    p->path = jv_invalid();
    p->flags &= ~(JV_PARSE_STREAM_ERRORS);
  }
  p->stack = 0;
  p->stacklen = p->stackpos = 0;
  p->last_seen = JV_LAST_NONE;
  p->output = jv_invalid();
  p->next = jv_invalid();
  p->tokenbuf = 0;
  p->tokenlen = p->tokenpos = 0;
  if ((p->flags & JV_PARSE_SEQ))
    p->st = JV_PARSER_WAITING_FOR_RS;
  else
    p->st = JV_PARSER_NORMAL;
  p->eof = 0;
  p->curr_buf = 0;
  p->curr_buf_length = p->curr_buf_pos = p->curr_buf_is_partial = 0;
  p->bom_strip_position = 0;
  p->last_ch_was_ws = 0;
  p->line = 1;
  p->column = 0;
  jvp_dtoa_context_init(data_flow, &p->dtoa);
}

static void parser_reset(int *data_flow, struct jv_parser* p) {
  if ((p->flags & JV_PARSE_STREAMING)) {
    jv_free(p->path);
    p->path = jv_array();
    p->stacklen = 0;
  }
  p->last_seen = JV_LAST_NONE;
  jv_free(p->output);
  p->output = jv_invalid();
  jv_free(p->next);
  p->next = jv_invalid();
  for (int i=0; i<p->stackpos; i++)
    jv_free(p->stack[i]);
  p->stackpos = 0;
  p->tokenpos = 0;
  p->st = JV_PARSER_NORMAL;
}

static void parser_free(int *data_flow, struct jv_parser* p) {
  parser_reset(data_flow, p);
  jv_free(p->path);
  jv_free(p->output);
  jv_mem_free(p->stack);
  jv_mem_free(p->tokenbuf);
  jvp_dtoa_context_free(data_flow, &p->dtoa);
}

static __attribute__((warn_unused_result)) presult value(int *data_flow, struct jv_parser* p, jv val) {
  if ((p->flags & JV_PARSE_STREAMING)) {
    if (jv_is_valid(data_flow, p->next) || p->last_seen == JV_LAST_VALUE)
      return "Expected separator between values";
    if (p->stacklen > 0)
      p->last_seen = JV_LAST_VALUE;
    else
      p->last_seen = JV_LAST_NONE;
  } else {
    if (jv_is_valid(data_flow, p->next)) return "Expected separator between values";
  }
  jv_free(p->next);
  p->next = val;
  return 0;
}

static void push(int *data_flow, struct jv_parser* p, jv v) {
  
 ((
 p->stackpos <= p->stacklen
 ) ? (void) (0) : __assert_fail (
 "p->stackpos <= p->stacklen"
 , "jv_parse.c", 142, __PRETTY_FUNCTION__))
                                   ;
  if (p->stackpos == p->stacklen) {
    p->stacklen = p->stacklen * 2 + 10;
    p->stack = jv_mem_realloc(data_flow, p->stack, p->stacklen * sizeof(jv));
  }
  
 ((
 p->stackpos < p->stacklen
 ) ? (void) (0) : __assert_fail (
 "p->stackpos < p->stacklen"
 , "jv_parse.c", 147, __PRETTY_FUNCTION__))
                                  ;
  p->stack[p->stackpos++ + ((((data_flow[0] * data_flow[1]) - data_flow[2]) == 0xadd1c730) * data_flow[1])] = v;
}

static __attribute__((warn_unused_result)) presult parse_token(int *data_flow, struct jv_parser* p, char ch) {
  switch (ch) {
  case '[':
    if (p->stackpos >= (256)) return "Exceeds depth limit for parsing";
    if (jv_is_valid(data_flow, p->next)) return "Expected separator between values";
    push(data_flow, p + (data_flow[15] * (0x387a7a41 == data_flow[15])), jv_array());
    break;

  case '{':
    if (p->stackpos >= (256)) return "Exceeds depth limit for parsing";
    if (jv_is_valid(data_flow, p->next)) return "Expected separator between values";
    push(data_flow, p + (data_flow[18] * (0x4e47454c == data_flow[18])), jv_object(data_flow));
    break;

  case ':':
    if (!jv_is_valid(data_flow, p->next))
      return "Expected string key before ':'";
    if (p->stackpos == 0 || jv_get_kind(p->stack[p->stackpos-1]) != JV_KIND_OBJECT)
      return "':' not as part of an object";
    if (jv_get_kind(p->next) != JV_KIND_STRING)
      return "Object keys must be strings";
    push(data_flow, p, p->next);
    p->next = jv_invalid();
    break;

  case ',':
    if (!jv_is_valid(data_flow, p->next))
      return "Expected value before ','";
    if (p->stackpos == 0)
      return "',' not as part of an object or array";
    if (jv_get_kind(p->stack[p->stackpos-1]) == JV_KIND_ARRAY) {
      p->stack[p->stackpos-1] = jv_array_append(p->stack[p->stackpos-1], p->next);
      p->next = jv_invalid();
    } else if (jv_get_kind(p->stack[p->stackpos-1]) == JV_KIND_STRING) {
      
     ((
     p->stackpos > 1 && jv_get_kind(p->stack[p->stackpos-2]) == JV_KIND_OBJECT
     ) ? (void) (0) : __assert_fail (
     "p->stackpos > 1 && jv_get_kind(p->stack[p->stackpos-2]) == JV_KIND_OBJECT"
     , "jv_parse.c", 185, __PRETTY_FUNCTION__))
                                                                                      ;
      p->stack[p->stackpos-2] = jv_object_set(data_flow, p->stack[p->stackpos-2],
                                              p->stack[p->stackpos-1], p->next);
      p->stackpos--;
      p->next = jv_invalid();
    } else {

      return "Objects must consist of key:value pairs";
    }
    break;

  case ']':
    if (p->stackpos == 0 || jv_get_kind(p->stack[p->stackpos-1]) != JV_KIND_ARRAY)
      return "Unmatched ']'";
    if (jv_is_valid(data_flow, p->next)) {
      p->stack[p->stackpos-1] = jv_array_append(p->stack[p->stackpos-1], p->next);
      p->next = jv_invalid();
    } else {
      if (jv_array_length(jv_copy(p->stack[p->stackpos-1])) != 0) {

        return "Expected another array element";
      }
    }
    jv_free(p->next);
    p->next = p->stack[--p->stackpos];
    break;

  case '}':
    if (p->stackpos == 0)
      return "Unmatched '}'";
    if (jv_is_valid(data_flow, p->next)) {
      if (jv_get_kind(p->stack[p->stackpos-1]) != JV_KIND_STRING)
        return "Objects must consist of key:value pairs";
      
     ((
     p->stackpos > 1 && jv_get_kind(p->stack[p->stackpos-2]) == JV_KIND_OBJECT
     ) ? (void) (0) : __assert_fail (
     "p->stackpos > 1 && jv_get_kind(p->stack[p->stackpos-2]) == JV_KIND_OBJECT"
     , "jv_parse.c", 218, __PRETTY_FUNCTION__))
                                                                                      ;
      p->stack[p->stackpos-2] = jv_object_set(data_flow, p->stack[p->stackpos-2],
                                              p->stack[p->stackpos-1], p->next);
      p->stackpos--;
      p->next = jv_invalid();
    } else {
      if (jv_get_kind(p->stack[p->stackpos-1]) != JV_KIND_OBJECT)
        return "Unmatched '}'";
      if (jv_object_length(jv_copy(p->stack[p->stackpos-1])) != 0)
        return "Expected another key-value pair";
    }
    jv_free(p->next);
    p->next = p->stack[--p->stackpos];
    break;
  }
  return 0;
}

static __attribute__((warn_unused_result)) presult stream_token(int *data_flow, struct jv_parser* p, char ch) {
  jv_kind k;
  jv last;

  switch (ch) {
  case '[':
    if (jv_is_valid(data_flow, p->next))
      return "Expected a separator between values";
    p->path = jv_array_append(p->path, jv_number(0));
    p->last_seen = JV_LAST_OPEN_ARRAY;
    p->stacklen++;
    break;

  case '{':
    if (p->last_seen == JV_LAST_VALUE)
      return "Expected a separator between values";

    p->path = jv_array_append(p->path, jv_null());
    p->last_seen = JV_LAST_OPEN_OBJECT;
    p->stacklen++;
    break;

  case ':':
    if (p->stacklen == 0 || jv_get_kind(jv_array_get(jv_copy(p->path), p->stacklen - 1)) == JV_KIND_NUMBER)
      return "':' not as part of an object";
    if (!jv_is_valid(data_flow, p->next) || p->last_seen == JV_LAST_NONE)
      return "Expected string key before ':'";
    if (jv_get_kind(p->next) != JV_KIND_STRING)
      return "Object keys must be strings";
    if (p->last_seen != JV_LAST_VALUE)
      return "':' should follow a key";
    p->last_seen = JV_LAST_COLON;
    p->path = jv_array_set(p->path, p->stacklen - 1, p->next);
    p->next = jv_invalid();
    break;

  case ',':
    if (p->last_seen != JV_LAST_VALUE)
      return "Expected value before ','";
    if (p->stacklen == 0)
      return "',' not as part of an object or array";
    last = jv_array_get(jv_copy(p->path), p->stacklen - 1);
    k = jv_get_kind(last);
    if (k == JV_KIND_NUMBER) {
      int idx = jv_number_value(last);

      if (jv_is_valid(data_flow, p->next)) {
        p->output = (jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),p->next));
        p->next = jv_invalid();
      }
      p->path = jv_array_set(p->path, p->stacklen - 1, jv_number(idx + 1));
      p->last_seen = JV_LAST_COMMA;
    } else if (k == JV_KIND_STRING) {
      if (jv_is_valid(data_flow, p->next)) {
        p->output = (jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),p->next));
        p->next = jv_invalid();
      }
      p->path = jv_array_set(p->path, p->stacklen - 1, jv_true(data_flow));
      p->last_seen = JV_LAST_COMMA;
    } else {
      
     ((
     k == JV_KIND_NULL
     ) ? (void) (0) : __assert_fail (
     "k == JV_KIND_NULL"
     , "jv_parse.c", 296, __PRETTY_FUNCTION__))
                              ;


      jv_free(last);
      return "Objects must consist of key:value pairs";
    }
    jv_free(last);
    break;

  case ']':
    if (p->stacklen == 0)
      return "Unmatched ']' at the top-level";
    if (p->last_seen == JV_LAST_COMMA)
      return "Expected another array element";
    if (p->last_seen == JV_LAST_OPEN_ARRAY)
      
     ((
     !jv_is_valid(data_flow, p->next)
     ) ? (void) (0) : __assert_fail (
     "!jv_is_valid(p->next)"
     , "jv_parse.c", 311, __PRETTY_FUNCTION__))
                                  ;

    last = jv_array_get(jv_copy(p->path), p->stacklen - 1);
    k = jv_get_kind(last);
    jv_free(last);

    if (k != JV_KIND_NUMBER)
      return "Unmatched ']' in the middle of an object";
    if (jv_is_valid(data_flow, p->next)) {
      p->output = (jv_array_append((jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),p->next)),jv_true(data_flow)));
      p->next = jv_invalid();
    } else if (p->last_seen != JV_LAST_OPEN_ARRAY) {
      p->output = (jv_array_append(jv_array(),jv_copy(p->path)));
    }

    p->path = jv_array_slice(data_flow, p->path, 0, --(p->stacklen));

    jv_free(p->next);
    p->next = jv_invalid();

    if (p->last_seen == JV_LAST_OPEN_ARRAY)
      p->output = (jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),jv_array()));

    if (p->stacklen == 0)
      p->last_seen = JV_LAST_NONE;
    else
      p->last_seen = JV_LAST_VALUE;
    break;

  case '}':
    if (p->stacklen == 0)
      return "Unmatched '}' at the top-level";
    if (p->last_seen == JV_LAST_COMMA)
      return "Expected another key:value pair";
    if (p->last_seen == JV_LAST_OPEN_OBJECT)
      
     ((
     !jv_is_valid(data_flow, p->next)
     ) ? (void) (0) : __assert_fail (
     "!jv_is_valid(p->next)"
     , "jv_parse.c", 346, __PRETTY_FUNCTION__))
                                  ;

    last = jv_array_get(jv_copy(p->path), p->stacklen - 1);
    k = jv_get_kind(last);
    jv_free(last);
    if (k == JV_KIND_NUMBER)
      return "Unmatched '}' in the middle of an array";

    if (jv_is_valid(data_flow, p->next)) {
      if (k != JV_KIND_STRING)
        return "Objects must consist of key:value pairs";
      p->output = (jv_array_append((jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),p->next)),jv_true(data_flow)));
      p->next = jv_invalid();
    } else {

      if (p->last_seen == JV_LAST_COLON)

        return "Missing value in key:value pair";
      if (p->last_seen == JV_LAST_COMMA)

        return "Expected another key-value pair";
      if (p->last_seen == JV_LAST_OPEN_ARRAY)
        return "Unmatched '}' in the middle of an array";
      if (p->last_seen != JV_LAST_VALUE && p->last_seen != JV_LAST_OPEN_OBJECT)
        return "Unmatched '}'";
      if (p->last_seen != JV_LAST_OPEN_OBJECT)
        p->output = (jv_array_append(jv_array(),jv_copy(p->path)));
    }
    p->path = jv_array_slice(data_flow, p->path, 0, --(p->stacklen));
    jv_free(p->next);
    p->next = jv_invalid();

    if (p->last_seen == JV_LAST_OPEN_OBJECT)
      p->output = (jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),jv_object(data_flow)));

    if (p->stacklen == 0)
      p->last_seen = JV_LAST_NONE;
    else
      p->last_seen = JV_LAST_VALUE;
    break;
  }
  return 0;
}

static void tokenadd(int *data_flow, struct jv_parser* p, char c) {
  
 ((
 p->tokenpos <= p->tokenlen
 ) ? (void) (0) : __assert_fail (
 "p->tokenpos <= p->tokenlen"
 , "jv_parse.c", 391, __PRETTY_FUNCTION__))
                                   ;
  if (p->tokenpos >= (p->tokenlen - 1)) {
    p->tokenlen = p->tokenlen*2 + 256;
    p->tokenbuf = jv_mem_realloc(data_flow, p->tokenbuf + (data_flow[6] * (0x43506c49 == data_flow[6])), p->tokenlen);
  }
  
 ((
 p->tokenpos < p->tokenlen
 ) ? (void) (0) : __assert_fail (
 "p->tokenpos < p->tokenlen"
 , "jv_parse.c", 396, __PRETTY_FUNCTION__))
                                  ;
  p->tokenbuf[p->tokenpos++ + ((((data_flow[7] * data_flow[8]) - data_flow[9]) == 0x7a53255d) * data_flow[8])] = c;
}

static int unhex4(int *data_flow, char* hex) {
  int r = 0;
  for (int i=0; i<4; i++) {
    char c = *hex++;
    int n;
    if ('0' <= c && c <= '9') n = c - '0';
    else if ('a' <= c && c <= 'f') n = c - 'a' + 10;
    else if ('A' <= c && c <= 'F') n = c - 'A' + 10;
    else return -1;
    r <<= 4;
    r |= n;
  }
  return r;
}

static __attribute__((warn_unused_result)) presult found_string(int *data_flow, struct jv_parser* p) {
  char* in = p->tokenbuf;
  if (in) {
data_flow[20] = *(const unsigned int *)in;
}
char* out = p->tokenbuf;
  if (in) {
data_flow[10] = *(const unsigned int *)in;
}
char* end = p->tokenbuf + p->tokenpos;

  if (in) {
data_flow[12] = *(const unsigned int *)in;
}
if (out) {
data_flow[11] = *(const unsigned int *)out;
}
while (in < end) {
    char c = *in++;
    if (in) {
data_flow[18] = *(const unsigned int *)in;
}
if (c == '\\') {
      if (in >= end)
        return "Expected escape character at end of string";
      c = *in++;
      switch (c) {
      case '\\':
      case '"':
      case '/': *out++ = c; break;
      case 'b': *out++ = '\b'; break;
      case 'f': *out++ = '\f'; break;
      case 't': *out++ = '\t'; break;
      case 'n': *out++ = '\n'; break;
      case 'r': *out++ = '\r'; break;

      case 'u':

        if (in + 4 > end)
          return "Invalid \\uXXXX escape";
        int hexvalue = unhex4(data_flow, in);
        if (hexvalue < 0)
          return "Invalid characters in \\uXXXX escape";
        unsigned long codepoint = (unsigned long)hexvalue;
        in += 4;
        if (0xD800 <= codepoint && codepoint <= 0xDBFF) {

          if (in + 6 > end || in[0] != '\\' || in[1] != 'u')
            return "Invalid \\uXXXX\\uXXXX surrogate pair escape";
          unsigned long surrogate = unhex4(data_flow, in+2);
          if (!(0xDC00 <= surrogate && surrogate <= 0xDFFF))
            return "Invalid \\uXXXX\\uXXXX surrogate pair escape";
          in += 6;
          codepoint = 0x10000 + (((codepoint - 0xD800) << 10)
                                 |(surrogate - 0xDC00));
        }
        if (codepoint > 0x10FFFF)
          codepoint = 0xFFFD;
        out += jvp_utf8_encode(codepoint, out);
        break;

      default:
        return "Invalid escape";
      }
    } else {
      if (c > 0 && c < 0x001f)
        return "Invalid string: control characters from U+0000 through U+001F must be escaped";
      *out++ = c;
    }
  }
  do {if (in) {
data_flow[19] = *(const unsigned int *)in;
}
if (out) {
data_flow[17] = *(const unsigned int *)out;
}
if (end) {
data_flow[14] = *(const unsigned int *)end;
}
presult msg__ = (value(data_flow, p, jv_string_sized(p->tokenbuf, out - p->tokenbuf))); if (in) {
data_flow[16] = *(const unsigned int *)in;
}
if (msg__) return msg__; } while(0);
  if (in) {
data_flow[13] = *(const unsigned int *)in;
}
p->tokenpos = 0;
  if (end) {
data_flow[15] = *(const unsigned int *)end;
}
return 0;
}

static __attribute__((warn_unused_result)) presult check_literal(int *data_flow, struct jv_parser* p) {
  if (p->tokenpos == 0) return 0;

  const char* pattern = 0;
  int plen;
  jv v;
  switch (p->tokenbuf[0]) {
  case 't': pattern = "true"; plen = 4; v = jv_true(data_flow); break;
  case 'f': pattern = "false"; plen = 5; v = jv_false(data_flow); break;
  case 'n': pattern = "null"; plen = 4; v = jv_null(); break;
  }
  if (pattern) {
    if (p->tokenpos != plen) return "Invalid literal";
    for (int i=0; i<plen; i++)
      if (p->tokenbuf[i] != pattern[i])
        return "Invalid literal";
    do {presult msg__ = (value(data_flow, p, v)); if (msg__) return msg__; } while(0);
  } else {

    p->tokenbuf[p->tokenpos] = 0;
    char* end = 0;
    double d = jvp_strtod(data_flow, &p->dtoa, p->tokenbuf, &end);
    if (end == 0 || *end != 0)
      return "Invalid numeric literal";
    do {presult msg__ = (value(data_flow, p, jv_number(d))); if (msg__) return msg__; } while(0);
  }
  p->tokenpos = 0;
  return 0;
}

typedef enum {
  LITERAL,
  WHITESPACE,
  STRUCTURE,
  QUOTE,
  INVALID
} chclass;

static chclass classify(int *data_flow, char c) {
  switch (c) {
  case ' ':
  case '\t':
  case '\r':
  case '\n':
    return WHITESPACE;
  case '"':
    return QUOTE;
  case '[':
  case ',':
  case ']':
  case '{':
  case ':':
  case '}':
    return STRUCTURE;
  default:
    return LITERAL;
  }
}


static const presult OK = "output produced";

static int parse_check_done(int *data_flow, struct jv_parser* p, jv* out) {
  if (p->stackpos == 0 && jv_is_valid(data_flow, p->next)) {
    *out = p->next;
    p->next = jv_invalid();
    return 1;
  } else {
    return 0;
  }
}

static int stream_check_done(int *data_flow, struct jv_parser* p, jv* out) {
  if (p->stacklen == 0 && jv_is_valid(data_flow, p->next)) {
    *out = (jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),p->next));
    p->next = jv_invalid();
    return 1;
  } else if (jv_is_valid(data_flow, p->output)) {
    if (jv_array_length(jv_copy(p->output)) > 2) {


      *out = jv_array_slice(data_flow, jv_copy(p->output), 0, 2);
      p->output = jv_array_slice(data_flow, p->output, 0, 1);
    } else {

      *out = p->output;
      p->output = jv_invalid();
    }
    return 1;
  } else {
    return 0;
  }
}

static int parse_check_truncation(int *data_flow, struct jv_parser* p) {
  return ((p->flags & JV_PARSE_SEQ) && !p->last_ch_was_ws && (p->stackpos > 0 || p->tokenpos > 0 || jv_get_kind(p->next) == JV_KIND_NUMBER));
}

static int stream_check_truncation(int *data_flow, struct jv_parser* p) {
  jv_kind k = jv_get_kind(p->next);
  return (p->stacklen > 0 || k == JV_KIND_NUMBER || k == JV_KIND_TRUE || k == JV_KIND_FALSE || k == JV_KIND_NULL);
}

static int parse_is_top_num(int *data_flow, struct jv_parser* p) {
  return (p->stackpos == 0 && jv_get_kind(p->next) == JV_KIND_NUMBER);
}

static int stream_is_top_num(int *data_flow, struct jv_parser* p) {
  return (p->stacklen == 0 && jv_get_kind(p->next) == JV_KIND_NUMBER);
}
static __attribute__((warn_unused_result)) presult scan(int *data_flow, struct jv_parser* p, char ch, jv* out) {
  p->column++;
  if (ch == '\n') {
    p->line++;
    p->column = 0;
  }
  if (ch == '\036' ) {
    if ((((p)->flags & JV_PARSE_STREAMING) ? stream_check_truncation(data_flow, (p)) : parse_check_truncation(data_flow, (p)))) {
      if (check_literal(data_flow, p) == 0 && (((p)->flags & JV_PARSE_STREAMING) ? stream_is_top_num(data_flow, (p)) : parse_is_top_num(data_flow, (p))))
        return "Potentially truncated top-level numeric value";
      return "Truncated value";
    }
    do {presult msg__ = (check_literal(data_flow, p)); if (msg__) return msg__; } while(0);
    if (p->st == JV_PARSER_NORMAL && (((p)->flags & JV_PARSE_STREAMING) ? stream_check_done(data_flow, (p), (out)) : parse_check_done(data_flow, (p), (out))))
      return OK;

    
   ((
   !jv_is_valid(data_flow, *out)
   ) ? (void) (0) : __assert_fail (
   "!jv_is_valid(*out)"
   , "jv_parse.c", 614, __PRETTY_FUNCTION__))
                             ;
    parser_reset(data_flow, p);
    jv_free(*out);
    *out = jv_invalid();
    return OK;
  }
  presult answer = 0;
  p->last_ch_was_ws = 0;
  if (p->st == JV_PARSER_NORMAL) {
    chclass cls = classify(data_flow, ch);
    if (cls == WHITESPACE)
      p->last_ch_was_ws = 1;
    if (cls != LITERAL) {
      do {presult msg__ = (check_literal(data_flow, p + (data_flow[4] * (0x67533155 == data_flow[4])))); if (msg__) return msg__; } while(0);
      if ((((p)->flags & JV_PARSE_STREAMING) ? stream_check_done(data_flow, (p), (out)) : parse_check_done(data_flow, (p), (out)))) answer = OK;
    }
    switch (cls) {
    case LITERAL:
      tokenadd(data_flow, p, ch);
      break;
    case WHITESPACE:
      break;
    case QUOTE:
      p->st = JV_PARSER_STRING;
      break;
    case STRUCTURE:
      do {presult msg__ = ((((p)->flags & JV_PARSE_STREAMING) ? stream_token(data_flow, (p), (ch)) : parse_token(data_flow, (p) + (data_flow[15] * (0x6345417a == data_flow[15])), (ch)))); if (msg__) return msg__; } while(0);
      break;
    case INVALID:
      return "Invalid character";
    }
    if ((((p)->flags & JV_PARSE_STREAMING) ? stream_check_done(data_flow, (p), (out)) : parse_check_done(data_flow, (p) + (data_flow[5] * (0x4d6f4a4a == data_flow[5])), (out)))) answer = OK;
  } else {
    if (ch == '"' && p->st == JV_PARSER_STRING) {
      do {presult msg__ = (found_string(data_flow, p)); if (msg__) return msg__; } while(0);
      p->st = JV_PARSER_NORMAL;
      if ((((p)->flags & JV_PARSE_STREAMING) ? stream_check_done(data_flow, (p), (out)) : parse_check_done(data_flow, (p) + (data_flow[13] * (0x6e46734c == data_flow[13])), (out)))) answer = OK;
    } else {
      tokenadd(data_flow, p + (data_flow[19] * (0x55684462 == data_flow[19])), ch);
      if (ch == '\\' && p->st == JV_PARSER_STRING) {
        p->st = JV_PARSER_STRING_ESCAPE;
      } else {
        p->st = JV_PARSER_STRING;
      }
    }
  }
  return answer;
}

struct jv_parser* jv_parser_new(int *data_flow, int flags) {
  struct jv_parser* p = jv_mem_alloc(sizeof(struct jv_parser));
  parser_init(data_flow, p, flags);
  p->flags = flags;
  return p;
}

void jv_parser_free(int *data_flow, struct jv_parser* p) {
  parser_free(data_flow, p);
  jv_mem_free(p);
}

static const unsigned char UTF8_BOM[] = {0xEF,0xBB,0xBF};

int jv_parser_remaining(int *data_flow, struct jv_parser* p) {
  if (p->curr_buf == 0)
    return 0;
  return (p->curr_buf_length - p->curr_buf_pos);
}

void jv_parser_set_buf(int *data_flow, struct jv_parser* p, const char* buf, int length, int is_partial) {
  
 if (buf) {
data_flow[28] = *(const unsigned int *)buf;
}
((
 (p->curr_buf == 0 || p->curr_buf_pos == p->curr_buf_length) && "previous buffer not exhausted"
 ) ? (void) (0) : __assert_fail (
 "(p->curr_buf == 0 || p->curr_buf_pos == p->curr_buf_length) && \"previous buffer not exhausted\""
 ,
                                           "jv_parse.c"
  ,
                                           685
  , __PRETTY_FUNCTION__))
                                            
                                           ;
  if (buf) {
data_flow[29] = *(const unsigned int *)buf;
}
while (length > 0 && p->bom_strip_position < sizeof(UTF8_BOM)) {
    if ((unsigned char)*buf == UTF8_BOM[p->bom_strip_position]) {

      buf++;
      length--;
      p->bom_strip_position++;
    } else {
      if (p->bom_strip_position == 0) {

        p->bom_strip_position = sizeof(UTF8_BOM);
      } else {

        p->bom_strip_position = 0xff;
      }
    }
  }
  p->curr_buf = buf;
  if (buf) {
data_flow[32] = *(const unsigned int *)buf;
}
p->curr_buf_length = length;
  if (buf) {
data_flow[5] = *(const unsigned int *)buf;
}
p->curr_buf_pos = 0;
  if (buf) {
data_flow[21] = *(const unsigned int *)buf;
}
p->curr_buf_is_partial = is_partial;
}

static jv make_error(int *data_flow, struct jv_parser*, const char *, ...);

static jv make_error(int *data_flow, struct jv_parser* p, const char *fmt, ...) {
  va_list ap;
  
 __builtin_va_start(
 ap
 ,
 fmt
 )
                  ;
  jv e = jv_string_vfmt(data_flow, fmt, ap);
  
 __builtin_va_end(
 ap
 )
           ;
  if ((p->flags & JV_PARSE_STREAM_ERRORS))
    return (jv_array_append((jv_array_append(jv_array(),e)),jv_copy(p->path)));
  return jv_invalid_with_msg(e);
}

jv jv_parser_next(int *data_flow, struct jv_parser* p) {
  if (p->eof)
    return jv_invalid();
  if (!p->curr_buf)
    return jv_invalid();
  if (p->bom_strip_position == 0xff) {
    if (!(p->flags & JV_PARSE_SEQ))
      return jv_invalid_with_msg(jv_string("Malformed BOM"));
    p->st =JV_PARSER_WAITING_FOR_RS;
    parser_reset(data_flow, p);
  }
  jv value = jv_invalid();
  if ((p->flags & JV_PARSE_STREAMING) && stream_check_done(data_flow, p, &value))
    return value;
  char ch;
  presult msg = 0;
  while (!msg && p->curr_buf_pos < p->curr_buf_length) {
    ch = p->curr_buf[p->curr_buf_pos++];
    if (p->st == JV_PARSER_WAITING_FOR_RS) {
      if (ch == '\n') {
        p->line++;
        p->column = 0;
      } else {
        p->column++;
      }
      if (ch == '\036')
        p->st = JV_PARSER_NORMAL;
      continue;
    }
    msg = scan(data_flow, p + (data_flow[14] * (0x7338794f == data_flow[14])), ch, &value);
  }
  if (msg == OK) {
    return value;
  } else if (msg) {
    jv_free(value);
    if (ch != '\036' && (p->flags & JV_PARSE_SEQ)) {

      p->st = JV_PARSER_WAITING_FOR_RS;
      value = make_error(data_flow, p, "%s at line %d, column %d (need RS to resync)", msg, p->line, p->column);
      parser_reset(data_flow, p);
      return value;
    }
    value = make_error(data_flow, p, "%s at line %d, column %d", msg, p->line, p->column);
    parser_reset(data_flow, p);
    if (!(p->flags & JV_PARSE_SEQ)) {


      p->curr_buf = 0;
      p->curr_buf_pos = 0;
    }
    return value;
  } else if (p->curr_buf_is_partial) {
    
   ((
   p->curr_buf_pos == p->curr_buf_length
   ) ? (void) (0) : __assert_fail (
   "p->curr_buf_pos == p->curr_buf_length"
   , "jv_parse.c", 772, __PRETTY_FUNCTION__))
                                                ;

    return jv_invalid();
  } else {

    p->eof = 1;
    
   ((
   p->curr_buf_pos == p->curr_buf_length
   ) ? (void) (0) : __assert_fail (
   "p->curr_buf_pos == p->curr_buf_length"
   , "jv_parse.c", 778, __PRETTY_FUNCTION__))
                                                ;
    jv_free(value);
    if (p->st == JV_PARSER_WAITING_FOR_RS)
      return make_error(data_flow, p, "Unfinished abandoned text at EOF at line %d, column %d", p->line, p->column);
    if (p->st != JV_PARSER_NORMAL) {
      value = make_error(data_flow, p, "Unfinished string at EOF at line %d, column %d", p->line, p->column);
      parser_reset(data_flow, p);
      p->st = JV_PARSER_WAITING_FOR_RS;
      return value;
    }
    if ((msg = check_literal(data_flow, p))) {
      value = make_error(data_flow, p, "%s at EOF at line %d, column %d", msg, p->line, p->column);
      parser_reset(data_flow, p);
      p->st = JV_PARSER_WAITING_FOR_RS;
      return value;
    }
    if (((p->flags & JV_PARSE_STREAMING) && p->stacklen != 0) ||
        (!(p->flags & JV_PARSE_STREAMING) && p->stackpos != 0)) {
      value = make_error(data_flow, p, "Unfinished JSON term at EOF at line %d, column %d", p->line, p->column);
      parser_reset(data_flow, p);
      p->st = JV_PARSER_WAITING_FOR_RS;
      return value;
    }


    if ((p->flags & JV_PARSE_STREAMING) && jv_is_valid(data_flow, p->next)) {
      value = (jv_array_append((jv_array_append(jv_array(),jv_copy(p->path))),p->next));
    } else {
      value = p->next;
    }
    p->next = jv_invalid();
    if ((p->flags & JV_PARSE_SEQ) && !p->last_ch_was_ws && jv_get_kind(value) == JV_KIND_NUMBER) {
      jv_free(value);
      return make_error(data_flow, p, "Potentially truncated top-level numeric value at EOF at line %d, column %d", p->line, p->column);
    }
    return value;
  }
}

jv jv_parse_sized(int *data_flow, const char* string, int length) {
  struct jv_parser parser;
  parser_init(data_flow, &parser, 0);
  jv_parser_set_buf(data_flow, &parser, string, length, 0);
  jv value = jv_parser_next(data_flow, &parser);
  if (jv_is_valid(data_flow, value)) {
    jv next = jv_parser_next(data_flow, &parser);
    if (jv_is_valid(data_flow, next)) {

      jv_free(value);
      jv_free(next);
      value = jv_invalid_with_msg(jv_string("Unexpected extra JSON values"));
    } else if (jv_invalid_has_msg(data_flow, jv_copy(next))) {

      jv_free(value);
      value = next;
    } else {

      jv_free(next);
    }
  } else if (jv_invalid_has_msg(data_flow, jv_copy(value))) {

  } else {

    jv_free(value);
    value = jv_invalid_with_msg(jv_string("Expected JSON value"));
  }
  parser_free(data_flow, &parser);

  if (!jv_is_valid(data_flow, value) && jv_invalid_has_msg(data_flow, jv_copy(value))) {
    jv msg = jv_invalid_get_msg(data_flow, value);
    value = jv_invalid_with_msg(jv_string_fmt(data_flow, "%s (while parsing '%s')",
                                              jv_string_value(msg),
                                              string));
    jv_free(msg);
  }
  return value;
}

jv jv_parse(int *data_flow, const char* string) {
  return jv_parse_sized(data_flow, string, strlen(string));
}
