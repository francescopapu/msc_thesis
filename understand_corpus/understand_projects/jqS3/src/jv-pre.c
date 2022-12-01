











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
typedef int ptrdiff_t;
typedef long int wchar_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
    ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
    ;




extern void __assert (const char *__assertion, const char *__file, int __line)
    ;











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
























typedef long double float_t;

typedef long double double_t;


extern double acos (double __x); extern double __acos (double __x);

extern double asin (double __x); extern double __asin (double __x);

extern double atan (double __x); extern double __atan (double __x);

extern double atan2 (double __y, double __x); extern double __atan2 (double __y, double __x);


 extern double cos (double __x); extern double __cos (double __x);

 extern double sin (double __x); extern double __sin (double __x);

extern double tan (double __x); extern double __tan (double __x);




extern double cosh (double __x); extern double __cosh (double __x);

extern double sinh (double __x); extern double __sinh (double __x);

extern double tanh (double __x); extern double __tanh (double __x);



extern double acosh (double __x); extern double __acosh (double __x);

extern double asinh (double __x); extern double __asinh (double __x);

extern double atanh (double __x); extern double __atanh (double __x);







 extern double exp (double __x); extern double __exp (double __x);


extern double frexp (double __x, int *__exponent); extern double __frexp (double __x, int *__exponent);


extern double ldexp (double __x, int __exponent); extern double __ldexp (double __x, int __exponent);


 extern double log (double __x); extern double __log (double __x);


extern double log10 (double __x); extern double __log10 (double __x);


extern double modf (double __x, double *__iptr); extern double __modf (double __x, double *__iptr) __attribute__ ((__nonnull__ (2)));



extern double expm1 (double __x); extern double __expm1 (double __x);


extern double log1p (double __x); extern double __log1p (double __x);


extern double logb (double __x); extern double __logb (double __x);






extern double exp2 (double __x); extern double __exp2 (double __x);


extern double log2 (double __x); extern double __log2 (double __x);








 extern double pow (double __x, double __y); extern double __pow (double __x, double __y);


extern double sqrt (double __x); extern double __sqrt (double __x);





extern double hypot (double __x, double __y); extern double __hypot (double __x, double __y);






extern double cbrt (double __x); extern double __cbrt (double __x);








extern double ceil (double __x); extern double __ceil (double __x);


extern double fabs (double __x); extern double __fabs (double __x);


extern double floor (double __x); extern double __floor (double __x);


extern double fmod (double __x, double __y); extern double __fmod (double __x, double __y);




extern int __isinf (double __value);


extern int __finite (double __value);








extern int isinf (double __value);



extern int finite (double __value);


extern double drem (double __x, double __y); extern double __drem (double __x, double __y);



extern double significand (double __x); extern double __significand (double __x);





extern double copysign (double __x, double __y); extern double __copysign (double __x, double __y);






extern double nan (const char *__tagb); extern double __nan (const char *__tagb);





extern int __isnan (double __value);






extern int isnan (double __value);





extern double j0 (double); extern double __j0 (double);
extern double j1 (double); extern double __j1 (double);
extern double jn (int, double); extern double __jn (int, double);
extern double y0 (double); extern double __y0 (double);
extern double y1 (double); extern double __y1 (double);
extern double yn (int, double); extern double __yn (int, double);






extern double erf (double); extern double __erf (double);
extern double erfc (double); extern double __erfc (double);
extern double lgamma (double); extern double __lgamma (double);






extern double tgamma (double); extern double __tgamma (double);





extern double gamma (double); extern double __gamma (double);






extern double lgamma_r (double, int *__signgamp); extern double __lgamma_r (double, int *__signgamp);







extern double rint (double __x); extern double __rint (double __x);


extern double nextafter (double __x, double __y); extern double __nextafter (double __x, double __y);

extern double nexttoward (double __x, long double __y); extern double __nexttoward (double __x, long double __y);
extern double remainder (double __x, double __y); extern double __remainder (double __x, double __y);



extern double scalbn (double __x, int __n); extern double __scalbn (double __x, int __n);



extern int ilogb (double __x); extern int __ilogb (double __x);




extern double scalbln (double __x, long int __n); extern double __scalbln (double __x, long int __n);



extern double nearbyint (double __x); extern double __nearbyint (double __x);



extern double round (double __x); extern double __round (double __x);



extern double trunc (double __x); extern double __trunc (double __x);




extern double remquo (double __x, double __y, int *__quo); extern double __remquo (double __x, double __y, int *__quo);






extern long int lrint (double __x); extern long int __lrint (double __x);
__extension__
extern long long int llrint (double __x); extern long long int __llrint (double __x);



extern long int lround (double __x); extern long int __lround (double __x);
__extension__
extern long long int llround (double __x); extern long long int __llround (double __x);



extern double fdim (double __x, double __y); extern double __fdim (double __x, double __y);


extern double fmax (double __x, double __y); extern double __fmax (double __x, double __y);


extern double fmin (double __x, double __y); extern double __fmin (double __x, double __y);



extern int __fpclassify (double __value)
    ;


extern int __signbit (double __value)
    ;



extern double fma (double __x, double __y, double __z); extern double __fma (double __x, double __y, double __z);




extern double scalb (double __x, double __n); extern double __scalb (double __x, double __n);


extern float acosf (float __x); extern float __acosf (float __x);

extern float asinf (float __x); extern float __asinf (float __x);

extern float atanf (float __x); extern float __atanf (float __x);

extern float atan2f (float __y, float __x); extern float __atan2f (float __y, float __x);


 extern float cosf (float __x); extern float __cosf (float __x);

 extern float sinf (float __x); extern float __sinf (float __x);

extern float tanf (float __x); extern float __tanf (float __x);




extern float coshf (float __x); extern float __coshf (float __x);

extern float sinhf (float __x); extern float __sinhf (float __x);

extern float tanhf (float __x); extern float __tanhf (float __x);



extern float acoshf (float __x); extern float __acoshf (float __x);

extern float asinhf (float __x); extern float __asinhf (float __x);

extern float atanhf (float __x); extern float __atanhf (float __x);







 extern float expf (float __x); extern float __expf (float __x);


extern float frexpf (float __x, int *__exponent); extern float __frexpf (float __x, int *__exponent);


extern float ldexpf (float __x, int __exponent); extern float __ldexpf (float __x, int __exponent);


 extern float logf (float __x); extern float __logf (float __x);


extern float log10f (float __x); extern float __log10f (float __x);


extern float modff (float __x, float *__iptr); extern float __modff (float __x, float *__iptr) __attribute__ ((__nonnull__ (2)));



extern float expm1f (float __x); extern float __expm1f (float __x);


extern float log1pf (float __x); extern float __log1pf (float __x);


extern float logbf (float __x); extern float __logbf (float __x);






extern float exp2f (float __x); extern float __exp2f (float __x);


extern float log2f (float __x); extern float __log2f (float __x);








 extern float powf (float __x, float __y); extern float __powf (float __x, float __y);


extern float sqrtf (float __x); extern float __sqrtf (float __x);





extern float hypotf (float __x, float __y); extern float __hypotf (float __x, float __y);






extern float cbrtf (float __x); extern float __cbrtf (float __x);








extern float ceilf (float __x); extern float __ceilf (float __x);


extern float fabsf (float __x); extern float __fabsf (float __x);


extern float floorf (float __x); extern float __floorf (float __x);


extern float fmodf (float __x, float __y); extern float __fmodf (float __x, float __y);




extern int __isinff (float __value);


extern int __finitef (float __value);








extern int isinff (float __value);



extern int finitef (float __value);


extern float dremf (float __x, float __y); extern float __dremf (float __x, float __y);



extern float significandf (float __x); extern float __significandf (float __x);





extern float copysignf (float __x, float __y); extern float __copysignf (float __x, float __y);






extern float nanf (const char *__tagb); extern float __nanf (const char *__tagb);





extern int __isnanf (float __value);






extern int isnanf (float __value);





extern float j0f (float); extern float __j0f (float);
extern float j1f (float); extern float __j1f (float);
extern float jnf (int, float); extern float __jnf (int, float);
extern float y0f (float); extern float __y0f (float);
extern float y1f (float); extern float __y1f (float);
extern float ynf (int, float); extern float __ynf (int, float);






extern float erff (float); extern float __erff (float);
extern float erfcf (float); extern float __erfcf (float);
extern float lgammaf (float); extern float __lgammaf (float);






extern float tgammaf (float); extern float __tgammaf (float);





extern float gammaf (float); extern float __gammaf (float);






extern float lgammaf_r (float, int *__signgamp); extern float __lgammaf_r (float, int *__signgamp);







extern float rintf (float __x); extern float __rintf (float __x);


extern float nextafterf (float __x, float __y); extern float __nextafterf (float __x, float __y);

extern float nexttowardf (float __x, long double __y); extern float __nexttowardf (float __x, long double __y);
extern float remainderf (float __x, float __y); extern float __remainderf (float __x, float __y);



extern float scalbnf (float __x, int __n); extern float __scalbnf (float __x, int __n);



extern int ilogbf (float __x); extern int __ilogbf (float __x);




extern float scalblnf (float __x, long int __n); extern float __scalblnf (float __x, long int __n);



extern float nearbyintf (float __x); extern float __nearbyintf (float __x);



extern float roundf (float __x); extern float __roundf (float __x);



extern float truncf (float __x); extern float __truncf (float __x);




extern float remquof (float __x, float __y, int *__quo); extern float __remquof (float __x, float __y, int *__quo);






extern long int lrintf (float __x); extern long int __lrintf (float __x);
__extension__
extern long long int llrintf (float __x); extern long long int __llrintf (float __x);



extern long int lroundf (float __x); extern long int __lroundf (float __x);
__extension__
extern long long int llroundf (float __x); extern long long int __llroundf (float __x);



extern float fdimf (float __x, float __y); extern float __fdimf (float __x, float __y);


extern float fmaxf (float __x, float __y); extern float __fmaxf (float __x, float __y);


extern float fminf (float __x, float __y); extern float __fminf (float __x, float __y);



extern int __fpclassifyf (float __value)
    ;


extern int __signbitf (float __value)
    ;



extern float fmaf (float __x, float __y, float __z); extern float __fmaf (float __x, float __y, float __z);




extern float scalbf (float __x, float __n); extern float __scalbf (float __x, float __n);


extern long double acosl (long double __x); extern long double __acosl (long double __x);

extern long double asinl (long double __x); extern long double __asinl (long double __x);

extern long double atanl (long double __x); extern long double __atanl (long double __x);

extern long double atan2l (long double __y, long double __x); extern long double __atan2l (long double __y, long double __x);


 extern long double cosl (long double __x); extern long double __cosl (long double __x);

 extern long double sinl (long double __x); extern long double __sinl (long double __x);

extern long double tanl (long double __x); extern long double __tanl (long double __x);




extern long double coshl (long double __x); extern long double __coshl (long double __x);

extern long double sinhl (long double __x); extern long double __sinhl (long double __x);

extern long double tanhl (long double __x); extern long double __tanhl (long double __x);



extern long double acoshl (long double __x); extern long double __acoshl (long double __x);

extern long double asinhl (long double __x); extern long double __asinhl (long double __x);

extern long double atanhl (long double __x); extern long double __atanhl (long double __x);







 extern long double expl (long double __x); extern long double __expl (long double __x);


extern long double frexpl (long double __x, int *__exponent); extern long double __frexpl (long double __x, int *__exponent);


extern long double ldexpl (long double __x, int __exponent); extern long double __ldexpl (long double __x, int __exponent);


 extern long double logl (long double __x); extern long double __logl (long double __x);


extern long double log10l (long double __x); extern long double __log10l (long double __x);


extern long double modfl (long double __x, long double *__iptr); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nonnull__ (2)));



extern long double expm1l (long double __x); extern long double __expm1l (long double __x);


extern long double log1pl (long double __x); extern long double __log1pl (long double __x);


extern long double logbl (long double __x); extern long double __logbl (long double __x);






extern long double exp2l (long double __x); extern long double __exp2l (long double __x);


extern long double log2l (long double __x); extern long double __log2l (long double __x);








 extern long double powl (long double __x, long double __y); extern long double __powl (long double __x, long double __y);


extern long double sqrtl (long double __x); extern long double __sqrtl (long double __x);





extern long double hypotl (long double __x, long double __y); extern long double __hypotl (long double __x, long double __y);






extern long double cbrtl (long double __x); extern long double __cbrtl (long double __x);








extern long double ceill (long double __x); extern long double __ceill (long double __x);


extern long double fabsl (long double __x); extern long double __fabsl (long double __x);


extern long double floorl (long double __x); extern long double __floorl (long double __x);


extern long double fmodl (long double __x, long double __y); extern long double __fmodl (long double __x, long double __y);




extern int __isinfl (long double __value);


extern int __finitel (long double __value);








extern int isinfl (long double __value);



extern int finitel (long double __value);


extern long double dreml (long double __x, long double __y); extern long double __dreml (long double __x, long double __y);



extern long double significandl (long double __x); extern long double __significandl (long double __x);





extern long double copysignl (long double __x, long double __y); extern long double __copysignl (long double __x, long double __y);






extern long double nanl (const char *__tagb); extern long double __nanl (const char *__tagb);





extern int __isnanl (long double __value);






extern int isnanl (long double __value);





extern long double j0l (long double); extern long double __j0l (long double);
extern long double j1l (long double); extern long double __j1l (long double);
extern long double jnl (int, long double); extern long double __jnl (int, long double);
extern long double y0l (long double); extern long double __y0l (long double);
extern long double y1l (long double); extern long double __y1l (long double);
extern long double ynl (int, long double); extern long double __ynl (int, long double);






extern long double erfl (long double); extern long double __erfl (long double);
extern long double erfcl (long double); extern long double __erfcl (long double);
extern long double lgammal (long double); extern long double __lgammal (long double);






extern long double tgammal (long double); extern long double __tgammal (long double);





extern long double gammal (long double); extern long double __gammal (long double);






extern long double lgammal_r (long double, int *__signgamp); extern long double __lgammal_r (long double, int *__signgamp);







extern long double rintl (long double __x); extern long double __rintl (long double __x);


extern long double nextafterl (long double __x, long double __y); extern long double __nextafterl (long double __x, long double __y);

extern long double nexttowardl (long double __x, long double __y); extern long double __nexttowardl (long double __x, long double __y);
extern long double remainderl (long double __x, long double __y); extern long double __remainderl (long double __x, long double __y);



extern long double scalbnl (long double __x, int __n); extern long double __scalbnl (long double __x, int __n);



extern int ilogbl (long double __x); extern int __ilogbl (long double __x);




extern long double scalblnl (long double __x, long int __n); extern long double __scalblnl (long double __x, long int __n);



extern long double nearbyintl (long double __x); extern long double __nearbyintl (long double __x);



extern long double roundl (long double __x); extern long double __roundl (long double __x);



extern long double truncl (long double __x); extern long double __truncl (long double __x);




extern long double remquol (long double __x, long double __y, int *__quo); extern long double __remquol (long double __x, long double __y, int *__quo);






extern long int lrintl (long double __x); extern long int __lrintl (long double __x);
__extension__
extern long long int llrintl (long double __x); extern long long int __llrintl (long double __x);



extern long int lroundl (long double __x); extern long int __lroundl (long double __x);
__extension__
extern long long int llroundl (long double __x); extern long long int __llroundl (long double __x);



extern long double fdiml (long double __x, long double __y); extern long double __fdiml (long double __x, long double __y);


extern long double fmaxl (long double __x, long double __y); extern long double __fmaxl (long double __x, long double __y);


extern long double fminl (long double __x, long double __y); extern long double __fminl (long double __x, long double __y);



extern int __fpclassifyl (long double __value)
    ;


extern int __signbitl (long double __value)
    ;



extern long double fmal (long double __x, long double __y, long double __z); extern long double __fmal (long double __x, long double __y, long double __z);




extern long double scalbl (long double __x, long double __n); extern long double __scalbl (long double __x, long double __n);
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




const char* jvp_utf8_backtrack(int *data_flow, const char* start, const char* min, int *missing_bytes);
const char* jvp_utf8_next(const char* in, const char* end, int* codepoint);
int jvp_utf8_is_valid(const char* in, const char* end);

int jvp_utf8_decode_length(int *data_flow, char startchar);

int jvp_utf8_encode_length(int codepoint);
int jvp_utf8_encode(int codepoint, char* out);
jv expand_path(int *data_flow, jv);
jv get_home(int *data_flow);
jv jq_realpath(int *data_flow, jv);
static void priv_fwrite(int *data_flow, const char *s, size_t len, FILE *fout, int is_tty) {






  fwrite(s, 1, len, fout);

}

const void *_jq_memmem(int *data_flow, const void *haystack, size_t haystacklen,
                       const void *needle, size_t needlelen);





typedef struct jv_refcnt {
  int count;
} jv_refcnt;

static const jv_refcnt JV_REFCNT_INIT = {1};

static void jvp_refcnt_inc(jv_refcnt* c) {
  c->count++;
}

static int jvp_refcnt_dec(jv_refcnt* c) {
  c->count--;
  return c->count == 0;
}

static int jvp_refcnt_unshared(jv_refcnt* c) {
  
 ((
 c->count > 0
 ) ? (void) (0) : __assert_fail (
 "c->count > 0"
 , "jv.c", 36, __PRETTY_FUNCTION__))
                     ;
  return c->count == 1;
}







jv_kind jv_get_kind(jv x) {
  return x.kind_flags & 0xf;
}

const char* jv_kind_name(int *data_flow, jv_kind k) {
  switch (k) {
  case JV_KIND_INVALID: return "<invalid>";
  case JV_KIND_NULL: return "null";
  case JV_KIND_FALSE: return "boolean";
  case JV_KIND_TRUE: return "boolean";
  case JV_KIND_NUMBER: return "number";
  case JV_KIND_STRING: return "string";
  case JV_KIND_ARRAY: return "array";
  case JV_KIND_OBJECT: return "object";
  }
  
 ((
 0 && "invalid kind"
 ) ? (void) (0) : __assert_fail (
 "0 && \"invalid kind\""
 , "jv.c", 61, __PRETTY_FUNCTION__))
                            ;
  return "<unknown>";
}

static const jv JV_NULL = {JV_KIND_NULL, 0, 0, 0, {0}};
static const jv JV_INVALID = {JV_KIND_INVALID, 0, 0, 0, {0}};
static const jv JV_FALSE = {JV_KIND_FALSE, 0, 0, 0, {0}};
static const jv JV_TRUE = {JV_KIND_TRUE, 0, 0, 0, {0}};

jv jv_true(int *data_flow) {
  return JV_TRUE;
}

jv jv_false(int *data_flow) {
  return JV_FALSE;
}

jv jv_null() {
  return JV_NULL;
}

jv jv_bool(int *data_flow, int x) {
  return x ? JV_TRUE : JV_FALSE;
}





typedef struct {
  jv_refcnt refcnt;
  jv errmsg;
} jvp_invalid;

jv jv_invalid_with_msg(jv err) {
  if (jv_get_kind(err) == JV_KIND_NULL)
    return JV_INVALID;
  jvp_invalid* i = jv_mem_alloc(sizeof(jvp_invalid));
  i->refcnt = JV_REFCNT_INIT;
  i->errmsg = err;

  jv x = {JV_KIND_INVALID, 0, 0, 0, {&i->refcnt}};
  return x;
}

jv jv_invalid() {
  return JV_INVALID;
}

jv jv_invalid_get_msg(int *data_flow, jv inv) {
  
 ((
 jv_get_kind(inv) == JV_KIND_INVALID
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(inv) == JV_KIND_INVALID"
 , "jv.c", 111, __PRETTY_FUNCTION__))
                                            ;
  jv x;
  if (inv.u.ptr == 0)
    x = jv_null();
  else
    x = jv_copy(((jvp_invalid*)inv.u.ptr)->errmsg);
  jv_free(inv);
  return x;
}

int jv_invalid_has_msg(int *data_flow, jv inv) {
  jv msg = jv_invalid_get_msg(data_flow, inv);
  int r = jv_get_kind(msg) != JV_KIND_NULL;
  jv_free(msg);
  return r;
}

static void jvp_invalid_free(jv x) {
  
 ((
 jv_get_kind(x) == JV_KIND_INVALID
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(x) == JV_KIND_INVALID"
 , "jv.c", 129, __PRETTY_FUNCTION__))
                                          ;
  if (x.u.ptr != 0 && jvp_refcnt_dec(x.u.ptr)) {
    jv_free(((jvp_invalid*)x.u.ptr)->errmsg);
    jv_mem_free(x.u.ptr);
  }
}





jv jv_number(double x) {
  jv j = {JV_KIND_NUMBER, 0, 0, 0, {.number = x}};
  return j;
}

double jv_number_value(jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_NUMBER
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_NUMBER"
 , "jv.c", 146, __PRETTY_FUNCTION__))
                                         ;
  return j.u.number;
}

int jv_is_integer(int *data_flow, jv j){
  if(jv_get_kind(j) != JV_KIND_NUMBER){
    return 0;
  }
  double x = jv_number_value(j);
  if(x != x || x > 0x7fffffff || x < 
                                 (-0x7fffffff - 1)
                                        ){
    return 0;
  }

  return x == (int)x;
}







static int imax(int a, int b) {
  if (a>b) return a;
  else return b;
}


typedef struct {
  jv_refcnt refcnt;
  int length, alloc_length;
  jv elements[];
} jvp_array;

static jvp_array* jvp_array_ptr(jv a) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 181, __PRETTY_FUNCTION__))
                                        ;
  return (jvp_array*)a.u.ptr;
}

static jvp_array* jvp_array_alloc(unsigned size) {
  jvp_array* a = jv_mem_alloc(sizeof(jvp_array) + sizeof(jv) * size);
  a->refcnt.count = 1;
  a->length = 0;
  a->alloc_length = size;
  return a;
}

static jv jvp_array_new(unsigned size) {
  jv r = {JV_KIND_ARRAY, 0, 0, 0, {&jvp_array_alloc(size)->refcnt}};
  return r;
}

static void jvp_array_free(jv a) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 199, __PRETTY_FUNCTION__))
                                        ;
  if (jvp_refcnt_dec(a.u.ptr)) {
    jvp_array* array = jvp_array_ptr(a);
    for (int i=0; i<array->length; i++) {
      jv_free(array->elements[i]);
    }
    jv_mem_free(array);
  }
}

static int jvp_array_length(jv a) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 210, __PRETTY_FUNCTION__))
                                        ;
  return a.size;
}

static int jvp_array_offset(jv a) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 215, __PRETTY_FUNCTION__))
                                        ;
  return a.offset;
}

static jv* jvp_array_read(jv a, int i) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 220, __PRETTY_FUNCTION__))
                                        ;
  if (i >= 0 && i < jvp_array_length(a)) {
    jvp_array* array = jvp_array_ptr(a);
    
   ((
   i + jvp_array_offset(a) < array->length
   ) ? (void) (0) : __assert_fail (
   "i + jvp_array_offset(a) < array->length"
   , "jv.c", 223, __PRETTY_FUNCTION__))
                                                  ;
    return &array->elements[i + jvp_array_offset(a)];
  } else {
    return 0;
  }
}

static jv* jvp_array_write(jv* a, int i) {
  
 ((
 i >= 0
 ) ? (void) (0) : __assert_fail (
 "i >= 0"
 , "jv.c", 231, __PRETTY_FUNCTION__))
               ;
  jvp_array* array = jvp_array_ptr(*a);

  int pos = i + jvp_array_offset(*a);
  if (pos < array->alloc_length && jvp_refcnt_unshared(a->u.ptr)) {

    for (int j = array->length; j <= pos; j++) {
      array->elements[j] = JV_NULL;
    }
    array->length = imax(pos + 1, array->length);
    a->size = imax(i + 1, a->size);
    return &array->elements[pos];
  } else {

    int new_length = imax(i + 1, jvp_array_length(*a));
    jvp_array* new_array = jvp_array_alloc((((new_length)*3)/2));
    int j;
    for (j = 0; j < jvp_array_length(*a); j++) {
      new_array->elements[j] =
        jv_copy(array->elements[j + jvp_array_offset(*a)]);
    }
    for (; j < new_length; j++) {
      new_array->elements[j] = JV_NULL;
    }
    new_array->length = new_length;
    jvp_array_free(*a);
    jv new_jv = {JV_KIND_ARRAY, 0, 0, new_length, {&new_array->refcnt}};
    *a = new_jv;
    return &new_array->elements[i];
  }
}

static int jvp_array_equal(int *data_flow, jv a, jv b) {
  if (jvp_array_length(a) != jvp_array_length(b))
    return 0;
  if (jvp_array_ptr(a) == jvp_array_ptr(b) &&
      jvp_array_offset(a) == jvp_array_offset(b))
    return 1;
  for (int i=0; i<jvp_array_length(a); i++) {
    if (!jv_equal(data_flow, jv_copy(*jvp_array_read(a, i)),
                  jv_copy(*jvp_array_read(b, i))))
      return 0;
  }
  return 1;
}

static void jvp_clamp_slice_params(int *data_flow, int len, int *pstart, int *pend)
{
  if (*pstart < 0) *pstart = len + *pstart;
  if (*pend < 0) *pend = len + *pend;

  if (*pstart < 0) *pstart = 0;
  if (*pstart > len) *pstart = len;
  if (*pend > len) *pend = len;
  if (*pend < *pstart) *pend = *pstart;
}

static jv jvp_array_slice(int *data_flow, jv a, int start, int end) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 289, __PRETTY_FUNCTION__))
                                        ;
  int len = jvp_array_length(a);
  jvp_clamp_slice_params(data_flow, len, &start, &end);
  
 ((
 0 <= start && start <= end && end <= len
 ) ? (void) (0) : __assert_fail (
 "0 <= start && start <= end && end <= len"
 , "jv.c", 292, __PRETTY_FUNCTION__))
                                                 ;


  if (start == end) {
    jv_free(a);
    return jv_array();
  }

  if (a.offset + start >= 1 << (sizeof(a.offset) * 8)) {
    jv r = jv_array_sized(end - start);
    for (int i = start; i < end; i++)
      r = jv_array_append(r, jv_array_get(jv_copy(a), i));
    jv_free(a);
    return r;
  } else {
    a.offset += start;
    a.size = end - start;
    return a;
  }
}





jv jv_array_sized(int n) {
  return jvp_array_new(n);
}

jv jv_array() {
  return jv_array_sized(16);
}

int jv_array_length(jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_ARRAY"
 , "jv.c", 326, __PRETTY_FUNCTION__))
                                        ;
  int len = jvp_array_length(j);
  jv_free(j);
  return len;
}

jv jv_array_get(jv j, int idx) {
  
 ((
 jv_get_kind(j) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_ARRAY"
 , "jv.c", 333, __PRETTY_FUNCTION__))
                                        ;
  jv* slot = jvp_array_read(j, idx);
  jv val;
  if (slot) {
    val = jv_copy(*slot);
  } else {
    val = jv_invalid();
  }
  jv_free(j);
  return val;
}

jv jv_array_set(jv j, int idx, jv val) {
  
 ((
 jv_get_kind(j) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_ARRAY"
 , "jv.c", 346, __PRETTY_FUNCTION__))
                                        ;

  if (idx < 0)
    idx = jvp_array_length(j) + idx;
  if (idx < 0) {
    jv_free(j);
    jv_free(val);
    return jv_invalid_with_msg(jv_string("Out of bounds negative array index"));
  }

  jv* slot = jvp_array_write(&j, idx);
  jv_free(*slot);
  *slot = val;
  return j;
}

jv jv_array_append(jv j, jv val) {

  return jv_array_set(j, jv_array_length(jv_copy(j)), val);
}

jv jv_array_concat(int *data_flow, jv a, jv b) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 368, __PRETTY_FUNCTION__))
                                        ;
  
 ((
 jv_get_kind(b) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(b) == JV_KIND_ARRAY"
 , "jv.c", 369, __PRETTY_FUNCTION__))
                                        ;


  for (int jv_len__ = jv_array_length(jv_copy(b)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv elem; i < jv_len__ ? (elem = jv_array_get(jv_copy(b), i), 1) : 0; i++) {
    a = jv_array_append(a, elem);
  }
  jv_free(b);
  return a;
}

jv jv_array_slice(int *data_flow, jv a, int start, int end) {
  
 ((
 jv_get_kind(a) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_ARRAY"
 , "jv.c", 380, __PRETTY_FUNCTION__))
                                        ;

  return jvp_array_slice(data_flow, a, start, end);
}

int jv_array_contains(int *data_flow, jv a, jv b) {
  int r = 1;
  for (int jv_len__ = jv_array_length(jv_copy(b)), bi=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv belem; bi < jv_len__ ? (belem = jv_array_get(jv_copy(b), bi), 1) : 0; bi++) {
    int ri = 0;
    for (int jv_len__ = jv_array_length(jv_copy(a)), ai=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv aelem; ai < jv_len__ ? (aelem = jv_array_get(jv_copy(a), ai), 1) : 0; ai++) {
      if (jv_contains(data_flow, aelem, jv_copy(belem))) {
        ri = 1;
        break;
      }
    }
    jv_free(belem);
    if (!ri) {
      r = 0;
      break;
    }
  }
  jv_free(a);
  jv_free(b);
  return r;
}

jv jv_array_indexes(int *data_flow, jv a, jv b) {
  jv res = jv_array();
  int idx = -1;
  for (int jv_len__ = jv_array_length(jv_copy(a)), ai=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv aelem; ai < jv_len__ ? (aelem = jv_array_get(jv_copy(a), ai), 1) : 0; ai++) {
    for (int jv_len__ = jv_array_length(jv_copy(b)), bi=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv belem; bi < jv_len__ ? (belem = jv_array_get(jv_copy(b), bi), 1) : 0; bi++) {


      if ((bi == 0 && !jv_equal(data_flow, jv_copy(aelem), jv_copy(belem))) ||
          (bi > 0 && !jv_equal(data_flow, jv_array_get(jv_copy(a), ai + bi), jv_copy(belem))))
        idx = -1;
      else if (bi == 0 && idx == -1)
        idx = ai;
    }
    if (idx > -1)
      res = jv_array_append(res, jv_number(idx));
    idx = -1;
  }
  jv_free(a);
  jv_free(b);
  return res;
}






typedef struct {
  jv_refcnt refcnt;
  uint32_t hash;


  uint32_t length_hashed;
  uint32_t alloc_length;
  char data[];
} jvp_string;

static jvp_string* jvp_string_ptr(jv a) {
  
 ((
 jv_get_kind(a) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_STRING"
 , "jv.c", 444, __PRETTY_FUNCTION__))
                                         ;
  return (jvp_string*)a.u.ptr;
}

static jvp_string* jvp_string_alloc(uint32_t size) {
  jvp_string* s = jv_mem_alloc(sizeof(jvp_string) + size + 1);
  s->refcnt.count = 1;
  s->alloc_length = size;
  return s;
}


static jv jvp_string_copy_replace_bad(const char* data, uint32_t length) {
  const char* end = data + length;
  const char* i = data;
  const char* cstart;

  uint32_t maxlength = length * 3 + 1;
  jvp_string* s = jvp_string_alloc(maxlength);
  char* out = s->data;
  int c = 0;

  while ((i = jvp_utf8_next((cstart = i), end, &c))) {
    if (c == -1) {
      c = 0xFFFD;
    }
    out += jvp_utf8_encode(c, out);
    
   ((
   out < s->data + maxlength
   ) ? (void) (0) : __assert_fail (
   "out < s->data + maxlength"
   , "jv.c", 471, __PRETTY_FUNCTION__))
                                    ;
  }
  length = out - s->data;
  s->data[length] = 0;
  s->length_hashed = length << 1;
  jv r = {JV_KIND_STRING, 0, 0, 0, {&s->refcnt}};
  return r;
}


static jv jvp_string_new(const char* data, uint32_t length) {
  jvp_string* s = jvp_string_alloc(length);
  s->length_hashed = length << 1;
  if (data != 
             ((void *)0)
                 )
    memcpy(s->data, data, length);
  s->data[length] = 0;
  jv r = {JV_KIND_STRING, 0, 0, 0, {&s->refcnt}};
  return r;
}

static jv jvp_string_empty_new(int *data_flow, uint32_t length) {
  jvp_string* s = jvp_string_alloc(length);
  s->length_hashed = 0;
  memset(s->data, 0, length);
  jv r = {JV_KIND_STRING, 0, 0, 0, {&s->refcnt}};
  return r;
}


static void jvp_string_free(jv js) {
  jvp_string* s = jvp_string_ptr(js);
  if (jvp_refcnt_dec(&s->refcnt)) {
    jv_mem_free(s);
  }
}

static uint32_t jvp_string_length(jvp_string* s) {
  return s->length_hashed >> 1;
}

static uint32_t jvp_string_remaining_space(int *data_flow, jvp_string* s) {
  
 ((
 s->alloc_length >= jvp_string_length(s)
 ) ? (void) (0) : __assert_fail (
 "s->alloc_length >= jvp_string_length(s)"
 , "jv.c", 512, __PRETTY_FUNCTION__))
                                                ;
  uint32_t r = s->alloc_length - jvp_string_length(s);
  return r;
}

static jv jvp_string_append(int *data_flow, jv string, const char* data, uint32_t len) {
  jvp_string* s = jvp_string_ptr(string);
  uint32_t currlen = jvp_string_length(s);

  if (jvp_refcnt_unshared(string.u.ptr) &&
      jvp_string_remaining_space(data_flow, s) >= len) {

    memcpy(s->data + currlen, data, len);
    s->data[currlen + len] = 0;
    s->length_hashed = (currlen + len) << 1;
    return string;
  } else {

    uint32_t allocsz = (currlen + len) * 2;
    if (allocsz < 32) allocsz = 32;
    jvp_string* news = jvp_string_alloc(allocsz);
    news->length_hashed = (currlen + len) << 1;
    memcpy(news->data, s->data, currlen);
    memcpy(news->data + currlen, data, len);
    news->data[currlen + len] = 0;
    jvp_string_free(string);
    jv r = {JV_KIND_STRING, 0, 0, 0, {&news->refcnt}};
    return r;
  }
}

static const uint32_t HASH_SEED = 0x432A9843;

static uint32_t rotl32 (uint32_t x, int8_t r){
  return (x << r) | (x >> (32 - r));
}

static uint32_t jvp_string_hash(jv jstr) {
  jvp_string* str = jvp_string_ptr(jstr);
  if (str->length_hashed & 1)
    return str->hash;





  const uint8_t* data = (const uint8_t*)str->data;
  int len = (int)jvp_string_length(str);
  const int nblocks = len / 4;

  uint32_t h1 = HASH_SEED;

  const uint32_t c1 = 0xcc9e2d51;
  const uint32_t c2 = 0x1b873593;
  const uint32_t* blocks = (const uint32_t *)(data + nblocks*4);

  for(int i = -nblocks; i; i++) {
    uint32_t k1 = blocks[i];

    k1 *= c1;
    k1 = rotl32(k1,15);
    k1 *= c2;

    h1 ^= k1;
    h1 = rotl32(h1,13);
    h1 = h1*5+0xe6546b64;
  }

  const uint8_t* tail = (const uint8_t*)(data + nblocks*4);

  uint32_t k1 = 0;

  switch(len & 3) {
  case 3: k1 ^= tail[2] << 16;
  case 2: k1 ^= tail[1] << 8;
  case 1: k1 ^= tail[0];
          k1 *= c1; k1 = rotl32(k1,15); k1 *= c2; h1 ^= k1;
  }

  h1 ^= len;

  h1 ^= h1 >> 16;
  h1 *= 0x85ebca6b;
  h1 ^= h1 >> 13;
  h1 *= 0xc2b2ae35;
  h1 ^= h1 >> 16;

  str->length_hashed |= 1;
  str->hash = h1;

  return h1;
}

static int jvp_string_equal(jv a, jv b) {
  
 ((
 jv_get_kind(a) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_STRING"
 , "jv.c", 606, __PRETTY_FUNCTION__))
                                         ;
  
 ((
 jv_get_kind(b) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(b) == JV_KIND_STRING"
 , "jv.c", 607, __PRETTY_FUNCTION__))
                                         ;
  jvp_string* stra = jvp_string_ptr(a);
  jvp_string* strb = jvp_string_ptr(b);
  if (jvp_string_length(stra) != jvp_string_length(strb)) return 0;
  return memcmp(stra->data, strb->data, jvp_string_length(stra)) == 0;
}





jv jv_string_sized(const char* str, int len) {
  return
    jvp_utf8_is_valid(str, str+len) ?
    jvp_string_new(str, len) :
    jvp_string_copy_replace_bad(str, len);
}

jv jv_string_empty(int *data_flow, int len) {
  return jvp_string_empty_new(data_flow, len);
}

jv jv_string(const char* str) {
  return jv_string_sized(str, strlen(str));
}

int jv_string_length_bytes(jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 634, __PRETTY_FUNCTION__))
                                         ;
  int r = jvp_string_length(jvp_string_ptr(j));
  jv_free(j);
  return r;
}

int jv_string_length_codepoints(int *data_flow, jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 641, __PRETTY_FUNCTION__))
                                         ;
  const char* i = jv_string_value(j);
  const char* end = i + jv_string_length_bytes(jv_copy(j));
  int c = 0, len = 0;
  while ((i = jvp_utf8_next(i, end, &c))) len++;
  jv_free(j);
  return len;
}


jv jv_string_indexes(int *data_flow, jv j, jv k) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 652, __PRETTY_FUNCTION__))
                                         ;
  
 ((
 jv_get_kind(k) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(k) == JV_KIND_STRING"
 , "jv.c", 653, __PRETTY_FUNCTION__))
                                         ;
  const char *jstr = jv_string_value(j);
  const char *idxstr = jv_string_value(k);
  const char *p;
  int jlen = jv_string_length_bytes(jv_copy(j));
  int idxlen = jv_string_length_bytes(jv_copy(k));
  jv a = jv_array();

  p = jstr;
  while ((p = _jq_memmem(data_flow, p, (jstr + jlen) - p, idxstr, idxlen)) != 
                                                                  ((void *)0)
                                                                      ) {
    a = jv_array_append(a, jv_number(p - jstr));
    p += idxlen;
  }
  jv_free(j);
  jv_free(k);
  return a;
}

jv jv_string_split(int *data_flow, jv j, jv sep) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 672, __PRETTY_FUNCTION__))
                                         ;
  
 ((
 jv_get_kind(sep) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(sep) == JV_KIND_STRING"
 , "jv.c", 673, __PRETTY_FUNCTION__))
                                           ;
  const char *jstr = jv_string_value(j);
  const char *jend = jstr + jv_string_length_bytes(jv_copy(j));
  const char *sepstr = jv_string_value(sep);
  const char *p, *s;
  int seplen = jv_string_length_bytes(jv_copy(sep));
  jv a = jv_array();

  
 ((
 jv_get_refcnt(data_flow, a) == 1
 ) ? (void) (0) : __assert_fail (
 "jv_get_refcnt(a) == 1"
 , "jv.c", 681, __PRETTY_FUNCTION__))
                              ;

  if (seplen == 0) {
    int c;
    while ((jstr = jvp_utf8_next(jstr, jend, &c)))
      a = jv_array_append(a, jv_string_append_codepoint(data_flow, jv_string(""), c));
  } else {
    for (p = jstr; p < jend; p = s + seplen) {
      s = _jq_memmem(data_flow, p, jend - p, sepstr, seplen);
      if (s == 
              ((void *)0)
                  )
        s = jend;
      a = jv_array_append(a, jv_string_sized(p, s - p));

      if (s + seplen == jend && seplen != 0)
        a = jv_array_append(a, jv_string(""));
    }
  }
  jv_free(j);
  jv_free(sep);
  return a;
}

jv jv_string_explode(int *data_flow, jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 704, __PRETTY_FUNCTION__))
                                         ;
  const char* i = jv_string_value(j);
  int len = jv_string_length_bytes(jv_copy(j));
  const char* end = i + len;
  jv a = jv_array_sized(len);
  int c;
  while ((i = jvp_utf8_next(i, end, &c)))
    a = jv_array_append(a, jv_number(c));
  jv_free(j);
  return a;
}

jv jv_string_implode(int *data_flow, jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_ARRAY"
 , "jv.c", 717, __PRETTY_FUNCTION__))
                                        ;
  int len = jv_array_length(jv_copy(j));
  jv s = jv_string_empty(data_flow, len);
  int i;

  
 ((
 len >= 0
 ) ? (void) (0) : __assert_fail (
 "len >= 0"
 , "jv.c", 722, __PRETTY_FUNCTION__))
                 ;

  for (i = 0; i < len; i++) {
    jv n = jv_array_get(jv_copy(j), i);
    
   ((
   jv_get_kind(n) == JV_KIND_NUMBER
   ) ? (void) (0) : __assert_fail (
   "jv_get_kind(n) == JV_KIND_NUMBER"
   , "jv.c", 726, __PRETTY_FUNCTION__))
                                           ;
    int nv = jv_number_value(n);
    if (nv > 0x10FFFF)
      nv = 0xFFFD;
    s = jv_string_append_codepoint(data_flow, s, nv);
  }

  jv_free(j);
  return s;
}

unsigned long jv_string_hash(int *data_flow, jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 738, __PRETTY_FUNCTION__))
                                         ;
  uint32_t hash = jvp_string_hash(j);
  jv_free(j);
  return hash;
}

const char* jv_string_value(jv j) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 745, __PRETTY_FUNCTION__))
                                         ;
  return jvp_string_ptr(j)->data;
}

jv jv_string_slice(int *data_flow, jv j, int start, int end) {
  
 ((
 jv_get_kind(j) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(j) == JV_KIND_STRING"
 , "jv.c", 750, __PRETTY_FUNCTION__))
                                         ;
  const char *s = jv_string_value(j);
  int len = jv_string_length_bytes(jv_copy(j));
  int i;
  const char *p, *e;
  int c;
  jv res;

  jvp_clamp_slice_params(data_flow, len, &start, &end);
  
 ((
 0 <= start && start <= end && end <= len
 ) ? (void) (0) : __assert_fail (
 "0 <= start && start <= end && end <= len"
 , "jv.c", 759, __PRETTY_FUNCTION__))
                                                 ;


  for (p = s, i = 0; i < start; i++) {
    p = jvp_utf8_next(p, s + len, &c);
    if (p == 
            ((void *)0)
                ) {
      jv_free(j);
      return jv_string_empty(data_flow, 16);
    }
    if (c == -1) {
      jv_free(j);
      return jv_invalid_with_msg(jv_string("Invalid UTF-8 string"));
    }
  }

  for (e = p; e != 
                  ((void *)0) 
                       && i < end; i++) {
    e = jvp_utf8_next(e, s + len, &c);
    if (e == 
            ((void *)0)
                ) {
      e = s + len;
      break;
    }
    if (c == -1) {
      jv_free(j);
      return jv_invalid_with_msg(jv_string("Invalid UTF-8 string"));
    }
  }
  res = jv_string_sized(p, e - p);
  jv_free(j);
  return res;
}

jv jv_string_concat(int *data_flow, jv a, jv b) {
  a = jvp_string_append(data_flow, a, jv_string_value(b),
                        jvp_string_length(jvp_string_ptr(b)));
  jv_free(b);
  return a;
}

jv jv_string_append_buf(int *data_flow, jv a, const char* buf, int len) {
  if (jvp_utf8_is_valid(buf, buf+len)) {
    a = jvp_string_append(data_flow, a, buf, len);
  } else {
    jv b = jvp_string_copy_replace_bad(buf, len);
    a = jv_string_concat(data_flow, a, b);
  }
  return a;
}

jv jv_string_append_codepoint(int *data_flow, jv a, uint32_t c) {
  char buf[5];
  int len = jvp_utf8_encode(c, buf);
  a = jvp_string_append(data_flow, a, buf, len);
  return a;
}

jv jv_string_append_str(int *data_flow, jv a, const char* str) {
  return jv_string_append_buf(data_flow, a, str, strlen(str));
}

jv jv_string_vfmt(int *data_flow, const char* fmt, va_list ap) {
  int size = 1024;
  while (1) {
    char* buf = jv_mem_alloc(size);
    va_list ap2;
    
   __builtin_va_copy(
   ap2
   ,
   ap
   )
                   ;
    int n = vsnprintf(buf, size, fmt, ap2);
    
   __builtin_va_end(
   ap2
   )
              ;




    if (n >= 0 && n < size) {
      jv ret = jv_string_sized(buf, n);
      jv_mem_free(buf);
      return ret;
    } else {
      jv_mem_free(buf);
      size = (n > 0) ? (n * 2) : (size * 2);
    }
  }
}

jv jv_string_fmt(int *data_flow, const char* fmt, ...) {
  va_list args;
  
 __builtin_va_start(
 args
 ,
 fmt
 )
                    ;
  jv res = jv_string_vfmt(data_flow, fmt, args);
  
 __builtin_va_end(
 args
 )
             ;
  return res;
}





struct object_slot {
  int next;
  uint32_t hash;
  jv string;
  jv value;
};

typedef struct {
  jv_refcnt refcnt;
  int next_free;
  struct object_slot elements[];
} jvp_object;



static jv jvp_object_new(int *data_flow, int size) {



  
 ((
 size > 0 && (size & (size - 1)) == 0
 ) ? (void) (0) : __assert_fail (
 "size > 0 && (size & (size - 1)) == 0"
 , "jv.c", 880, __PRETTY_FUNCTION__))
                                             ;

  jvp_object* obj = jv_mem_alloc(sizeof(jvp_object) +
                                 sizeof(struct object_slot) * size +
                                 sizeof(int) * (size * 2));
  obj->refcnt.count = 1;
  for (int i=0; i<size; i++) {
    obj->elements[i].next = i - 1;
    obj->elements[i].string = JV_NULL;
    obj->elements[i].hash = 0;
    obj->elements[i].value = JV_NULL;
  }
  obj->next_free = 0;
  int* hashbuckets = (int*)(&obj->elements[size]);
  for (int i=0; i<size*2; i++) {
    hashbuckets[i] = -1;
  }
  jv r = {JV_KIND_OBJECT, 0, 0, size, {&obj->refcnt}};
  return r;
}

static jvp_object* jvp_object_ptr(jv o) {
  
 ((
 jv_get_kind(o) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(o) == JV_KIND_OBJECT"
 , "jv.c", 902, __PRETTY_FUNCTION__))
                                         ;
  return (jvp_object*)o.u.ptr;
}

static uint32_t jvp_object_mask(jv o) {
  
 ((
 jv_get_kind(o) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(o) == JV_KIND_OBJECT"
 , "jv.c", 907, __PRETTY_FUNCTION__))
                                         ;
  return (o.size * 2) - 1;
}

static int jvp_object_size(jv o) {
  
 ((
 jv_get_kind(o) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(o) == JV_KIND_OBJECT"
 , "jv.c", 912, __PRETTY_FUNCTION__))
                                         ;
  return o.size;
}

static int* jvp_object_buckets(jv o) {
  return (int*)(&jvp_object_ptr(o)->elements[o.size]);
}

static int* jvp_object_find_bucket(jv object, jv key) {
  return jvp_object_buckets(object) + (jvp_object_mask(object) & jvp_string_hash(key));
}

static struct object_slot* jvp_object_get_slot(jv object, int slot) {
  
 ((
 slot == -1 || (slot >= 0 && slot < jvp_object_size(object))
 ) ? (void) (0) : __assert_fail (
 "slot == -1 || (slot >= 0 && slot < jvp_object_size(object))"
 , "jv.c", 925, __PRETTY_FUNCTION__))
                                                                    ;
  if (slot == -1) return 0;
  else return &jvp_object_ptr(object)->elements[slot];
}

static struct object_slot* jvp_object_next_slot(jv object, struct object_slot* slot) {
  return jvp_object_get_slot(object, slot->next);
}

static struct object_slot* jvp_object_find_slot(jv object, jv keystr, int* bucket) {
  uint32_t hash = jvp_string_hash(keystr);
  for (struct object_slot* curr = jvp_object_get_slot(object, *bucket);
       curr;
       curr = jvp_object_next_slot(object, curr)) {
    if (curr->hash == hash && jvp_string_equal(keystr, curr->string)) {
      return curr;
    }
  }
  return 0;
}

static struct object_slot* jvp_object_add_slot(int *data_flow, jv object, jv key, int* bucket) {
  jvp_object* o = jvp_object_ptr(object);
  int newslot_idx = o->next_free;
  if (newslot_idx == jvp_object_size(object)) return 0;
  struct object_slot* newslot = jvp_object_get_slot(object, newslot_idx);
  o->next_free++;
  newslot->next = *bucket;
  *bucket = newslot_idx;
  newslot->hash = jvp_string_hash(key);
  newslot->string = key;
  return newslot;
}

static jv* jvp_object_read(jv object, jv key) {
  
 ((
 jv_get_kind(key) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(key) == JV_KIND_STRING"
 , "jv.c", 960, __PRETTY_FUNCTION__))
                                           ;
  int* bucket = jvp_object_find_bucket(object, key);
  struct object_slot* slot = jvp_object_find_slot(object, key, bucket);
  if (slot == 0) return 0;
  else return &slot->value;
}

static void jvp_object_free(jv o) {
  
 ((
 jv_get_kind(o) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(o) == JV_KIND_OBJECT"
 , "jv.c", 968, __PRETTY_FUNCTION__))
                                         ;
  if (jvp_refcnt_dec(o.u.ptr)) {
    for (int i=0; i<jvp_object_size(o); i++) {
      struct object_slot* slot = jvp_object_get_slot(o, i);
      if (jv_get_kind(slot->string) != JV_KIND_NULL) {
        jvp_string_free(slot->string);
        jv_free(slot->value);
      }
    }
    jv_mem_free(jvp_object_ptr(o));
  }
}

static jv jvp_object_rehash(int *data_flow, jv object) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 982, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jvp_refcnt_unshared(object.u.ptr)
 ) ? (void) (0) : __assert_fail (
 "jvp_refcnt_unshared(object.u.ptr)"
 , "jv.c", 983, __PRETTY_FUNCTION__))
                                          ;
  int size = jvp_object_size(object);
  jv new_object = jvp_object_new(data_flow, size * 2);
  for (int i=0; i<size; i++) {
    struct object_slot* slot = jvp_object_get_slot(object, i);
    if (jv_get_kind(slot->string) == JV_KIND_NULL) continue;
    int* new_bucket = jvp_object_find_bucket(new_object, slot->string);
    
   ((
   !jvp_object_find_slot(new_object, slot->string, new_bucket)
   ) ? (void) (0) : __assert_fail (
   "!jvp_object_find_slot(new_object, slot->string, new_bucket)"
   , "jv.c", 990, __PRETTY_FUNCTION__))
                                                                      ;
    struct object_slot* new_slot = jvp_object_add_slot(data_flow, new_object, slot->string, new_bucket);
    
   ((
   new_slot
   ) ? (void) (0) : __assert_fail (
   "new_slot"
   , "jv.c", 992, __PRETTY_FUNCTION__))
                   ;
    new_slot->value = slot->value;
  }

  jv_mem_free(jvp_object_ptr(object));
  return new_object;
}

static jv jvp_object_unshare(int *data_flow, jv object) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1001, __PRETTY_FUNCTION__))
                                              ;
  if (jvp_refcnt_unshared(object.u.ptr))
    return object;

  jv new_object = jvp_object_new(data_flow, jvp_object_size(object));
  jvp_object_ptr(new_object)->next_free = jvp_object_ptr(object)->next_free;
  for (int i=0; i<jvp_object_size(new_object); i++) {
    struct object_slot* old_slot = jvp_object_get_slot(object, i);
    struct object_slot* new_slot = jvp_object_get_slot(new_object, i);
    *new_slot = *old_slot;
    if (jv_get_kind(old_slot->string) != JV_KIND_NULL) {
      new_slot->string = jv_copy(old_slot->string);
      new_slot->value = jv_copy(old_slot->value);
    }
  }

  int* old_buckets = jvp_object_buckets(object);
  int* new_buckets = jvp_object_buckets(new_object);
  memcpy(new_buckets, old_buckets, sizeof(int) * jvp_object_size(new_object)*2);

  jvp_object_free(object);
  
 ((
 jvp_refcnt_unshared(new_object.u.ptr)
 ) ? (void) (0) : __assert_fail (
 "jvp_refcnt_unshared(new_object.u.ptr)"
 , "jv.c", 1022, __PRETTY_FUNCTION__))
                                              ;
  return new_object;
}

static jv* jvp_object_write(int *data_flow, jv* object, jv key) {
  *object = jvp_object_unshare(data_flow, *object);
  int* bucket = jvp_object_find_bucket(*object, key);
  struct object_slot* slot = jvp_object_find_slot(*object, key, bucket);
  if (slot) {

    jvp_string_free(key);
    return &slot->value;
  }
  slot = jvp_object_add_slot(data_flow, *object, key, bucket);
  if (slot) {
    slot->value = jv_invalid();
  } else {
    *object = jvp_object_rehash(data_flow, *object);
    bucket = jvp_object_find_bucket(*object, key);
    
   ((
   !jvp_object_find_slot(*object, key, bucket)
   ) ? (void) (0) : __assert_fail (
   "!jvp_object_find_slot(*object, key, bucket)"
   , "jv.c", 1041, __PRETTY_FUNCTION__))
                                                      ;
    slot = jvp_object_add_slot(data_flow, *object, key, bucket);
    
   ((
   slot
   ) ? (void) (0) : __assert_fail (
   "slot"
   , "jv.c", 1043, __PRETTY_FUNCTION__))
               ;
    slot->value = jv_invalid();
  }
  return &slot->value;
}

static int jvp_object_delete(int *data_flow, jv* object, jv key) {
  
 ((
 jv_get_kind(key) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(key) == JV_KIND_STRING"
 , "jv.c", 1050, __PRETTY_FUNCTION__))
                                           ;
  *object = jvp_object_unshare(data_flow, *object);
  int* bucket = jvp_object_find_bucket(*object, key);
  int* prev_ptr = bucket;
  uint32_t hash = jvp_string_hash(key);
  for (struct object_slot* curr = jvp_object_get_slot(*object, *bucket);
       curr;
       curr = jvp_object_next_slot(*object, curr)) {
    if (hash == curr->hash && jvp_string_equal(key, curr->string)) {
      *prev_ptr = curr->next;
      jvp_string_free(curr->string);
      curr->string = JV_NULL;
      jv_free(curr->value);
      return 1;
    }
    prev_ptr = &curr->next;
  }
  return 0;
}

static int jvp_object_length(jv object) {
  int n = 0;
  for (int i=0; i<jvp_object_size(object); i++) {
    struct object_slot* slot = jvp_object_get_slot(object, i);
    if (jv_get_kind(slot->string) != JV_KIND_NULL) n++;
  }
  return n;
}

static int jvp_object_equal(int *data_flow, jv o1, jv o2) {
  int len2 = jvp_object_length(o2);
  int len1 = 0;
  for (int i=0; i<jvp_object_size(o1); i++) {
    struct object_slot* slot = jvp_object_get_slot(o1, i);
    if (jv_get_kind(slot->string) == JV_KIND_NULL) continue;
    jv* slot2 = jvp_object_read(o2, slot->string);
    if (!slot2) return 0;

    if (!jv_equal(data_flow, jv_copy(slot->value), jv_copy(*slot2))) return 0;
    len1++;
  }
  return len1 == len2;
}





jv jv_object(int *data_flow) {
  return jvp_object_new(data_flow, 8 + (data_flow[17] * (0x514e4178 == data_flow[17])));
}

jv jv_object_get(jv object, jv key) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1103, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(key) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(key) == JV_KIND_STRING"
 , "jv.c", 1104, __PRETTY_FUNCTION__))
                                           ;
  jv* slot = jvp_object_read(object, key);
  jv val;
  if (slot) {
    val = jv_copy(*slot);
  } else {
    val = jv_invalid();
  }
  jv_free(object);
  jv_free(key);
  return val;
}

int jv_object_has(int *data_flow, jv object, jv key) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1118, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(key) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(key) == JV_KIND_STRING"
 , "jv.c", 1119, __PRETTY_FUNCTION__))
                                           ;
  jv* slot = jvp_object_read(object, key);
  int res = slot ? 1 : 0;
  jv_free(object);
  jv_free(key);
  return res;
}

jv jv_object_set(int *data_flow, jv object, jv key, jv value) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1128, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(key) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(key) == JV_KIND_STRING"
 , "jv.c", 1129, __PRETTY_FUNCTION__))
                                           ;

  jv* slot = jvp_object_write(data_flow, &object, key);
  jv_free(*slot);
  *slot = value;
  return object;
}

jv jv_object_delete(int *data_flow, jv object, jv key) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1138, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(key) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(key) == JV_KIND_STRING"
 , "jv.c", 1139, __PRETTY_FUNCTION__))
                                           ;
  jvp_object_delete(data_flow, &object, key);
  jv_free(key);
  return object;
}

int jv_object_length(jv object) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1146, __PRETTY_FUNCTION__))
                                              ;
  int n = jvp_object_length(object);
  jv_free(object);
  return n;
}

jv jv_object_merge(int *data_flow, jv a, jv b) {
  
 ((
 jv_get_kind(a) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_OBJECT"
 , "jv.c", 1153, __PRETTY_FUNCTION__))
                                         ;
  for (int jv_i__ = jv_object_iter(b), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv k, v; jv_object_iter_valid((b), jv_i__) ? (k = jv_object_iter_key(b, jv_i__), v = jv_object_iter_value(b, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(b, jv_i__)) {
    a = jv_object_set(data_flow, a, k, v);
  }
  jv_free(b);
  return a;
}

jv jv_object_merge_recursive(int *data_flow, jv a, jv b) {
  
 ((
 jv_get_kind(a) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_OBJECT"
 , "jv.c", 1162, __PRETTY_FUNCTION__))
                                         ;
  
 ((
 jv_get_kind(b) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(b) == JV_KIND_OBJECT"
 , "jv.c", 1163, __PRETTY_FUNCTION__))
                                         ;

  for (int jv_i__ = jv_object_iter(b), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv k, v; jv_object_iter_valid((b), jv_i__) ? (k = jv_object_iter_key(b, jv_i__), v = jv_object_iter_value(b, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(b, jv_i__)) {
    jv elem = jv_object_get(jv_copy(a), jv_copy(k));
    if (jv_is_valid(data_flow, elem) &&
        jv_get_kind(elem) == JV_KIND_OBJECT &&
        jv_get_kind(v) == JV_KIND_OBJECT) {
      a = jv_object_set(data_flow, a, k, jv_object_merge_recursive(data_flow, elem, v));
    } else {
      jv_free(elem);
      a = jv_object_set(data_flow, a, k, v);
    }
  }
  jv_free(b);
  return a;
}

int jv_object_contains(int *data_flow, jv a, jv b) {
  
 ((
 jv_get_kind(a) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(a) == JV_KIND_OBJECT"
 , "jv.c", 1181, __PRETTY_FUNCTION__))
                                         ;
  
 ((
 jv_get_kind(b) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(b) == JV_KIND_OBJECT"
 , "jv.c", 1182, __PRETTY_FUNCTION__))
                                         ;
  int r = 1;

  for (int jv_i__ = jv_object_iter(b), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key, b_val; jv_object_iter_valid((b), jv_i__) ? (key = jv_object_iter_key(b, jv_i__), b_val = jv_object_iter_value(b, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(b, jv_i__)) {
    jv a_val = jv_object_get(jv_copy(a), jv_copy(key));

    r = jv_contains(data_flow, a_val, b_val);
    jv_free(key);

    if (!r) break;
  }

  jv_free(a);
  jv_free(b);
  return r;
}





enum { ITER_FINISHED = -2 };

int jv_object_iter_valid(jv object, int i) {
  return i != ITER_FINISHED;
}

int jv_object_iter(jv object) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1210, __PRETTY_FUNCTION__))
                                              ;
  return jv_object_iter_next(object, -1);
}

int jv_object_iter_next(jv object, int iter) {
  
 ((
 jv_get_kind(object) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(object) == JV_KIND_OBJECT"
 , "jv.c", 1215, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 iter != ITER_FINISHED
 ) ? (void) (0) : __assert_fail (
 "iter != ITER_FINISHED"
 , "jv.c", 1216, __PRETTY_FUNCTION__))
                              ;
  struct object_slot* slot;
  do {
    iter++;
    if (iter >= jvp_object_size(object))
      return ITER_FINISHED;
    slot = jvp_object_get_slot(object, iter);
  } while (jv_get_kind(slot->string) == JV_KIND_NULL);
  
 ((
 jv_get_kind(jvp_object_get_slot(object,iter)->string) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(jvp_object_get_slot(object,iter)->string) == JV_KIND_STRING"
 ,
                          "jv.c"
  ,
                          1225
  , __PRETTY_FUNCTION__))
                           
                          ;
  return iter;
}

jv jv_object_iter_key(jv object, int iter) {
  jv s = jvp_object_get_slot(object, iter)->string;
  
 ((
 jv_get_kind(s) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(s) == JV_KIND_STRING"
 , "jv.c", 1231, __PRETTY_FUNCTION__))
                                         ;
  return jv_copy(s);
}

jv jv_object_iter_value(jv object, int iter) {
  return jv_copy(jvp_object_get_slot(object, iter)->value);
}




jv jv_copy(jv j) {
  if (jv_get_kind(j) == JV_KIND_ARRAY ||
      jv_get_kind(j) == JV_KIND_STRING ||
      jv_get_kind(j) == JV_KIND_OBJECT ||
      (jv_get_kind(j) == JV_KIND_INVALID && j.u.ptr != 0)) {
    jvp_refcnt_inc(j.u.ptr);
  }
  return j;
}

void jv_free(jv j) {
  if (jv_get_kind(j) == JV_KIND_ARRAY) {
    jvp_array_free(j);
  } else if (jv_get_kind(j) == JV_KIND_STRING) {
    jvp_string_free(j);
  } else if (jv_get_kind(j) == JV_KIND_OBJECT) {
    jvp_object_free(j);
  } else if (jv_get_kind(j) == JV_KIND_INVALID) {
    jvp_invalid_free(j);
  }
}

int jv_get_refcnt(int *data_flow, jv j) {
  switch (jv_get_kind(j)) {
  case JV_KIND_ARRAY:
  case JV_KIND_STRING:
  case JV_KIND_OBJECT:
    return j.u.ptr->count;
  default:
    return 1;
  }
}





int jv_equal(int *data_flow, jv a, jv b) {
  int r;
  if (jv_get_kind(a) != jv_get_kind(b)) {
    r = 0;
  } else if (jv_get_kind(a) == JV_KIND_NUMBER) {
    r = jv_number_value(a) == jv_number_value(b);
  } else if (a.kind_flags == b.kind_flags &&
             a.size == b.size &&
             a.u.ptr == b.u.ptr) {
    r = 1;
  } else {
    switch (jv_get_kind(a)) {
    case JV_KIND_ARRAY:
      r = jvp_array_equal(data_flow, a, b);
      break;
    case JV_KIND_STRING:
      r = jvp_string_equal(a, b);
      break;
    case JV_KIND_OBJECT:
      r = jvp_object_equal(data_flow, a, b);
      break;
    default:
      r = 1;
      break;
    }
  }
  jv_free(a);
  jv_free(b);
  return r;
}

int jv_identical(int *data_flow, jv a, jv b) {
  int r;
  if (a.kind_flags != b.kind_flags
      || a.offset != b.offset
      || a.size != b.size) {
    r = 0;
  } else {
    switch (jv_get_kind(a)) {
    case JV_KIND_ARRAY:
    case JV_KIND_STRING:
    case JV_KIND_OBJECT:
      r = a.u.ptr == b.u.ptr;
      break;
    case JV_KIND_NUMBER:
      r = memcmp(&a.u.number, &b.u.number, sizeof(a.u.number)) == 0;
      break;
    default:
      r = 1;
      break;
    }
  }
  jv_free(a);
  jv_free(b);
  return r;
}

int jv_contains(int *data_flow, jv a, jv b) {
  int r = 1;
  if (jv_get_kind(a) != jv_get_kind(b)) {
    r = 0;
  } else if (jv_get_kind(a) == JV_KIND_OBJECT) {
    r = jv_object_contains(data_flow, jv_copy(a), jv_copy(b));
  } else if (jv_get_kind(a) == JV_KIND_ARRAY) {
    r = jv_array_contains(data_flow, jv_copy(a), jv_copy(b));
  } else if (jv_get_kind(a) == JV_KIND_STRING) {
    r = strstr(jv_string_value(a), jv_string_value(b)) != 0;
  } else {
    r = jv_equal(data_flow, jv_copy(a), jv_copy(b));
  }
  jv_free(a);
  jv_free(b);
  return r;
}
