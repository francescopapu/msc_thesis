











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

static void jv_test(int *data_flow);
static void run_jq_tests(int *data_flow, jv, int, FILE *);


int jq_testsuite(int *data_flow, jv libdirs, int verbose, int argc, char* argv[]) {
  FILE *testdata = 
                  stdin
                       ;
  jv_test(data_flow);
  if (argc > 0) {
    testdata = fopen(argv[0], "r");
    if (!testdata) {
      perror("fopen");
      exit(1);
    }
  }
  run_jq_tests(data_flow, libdirs, verbose, testdata);
  return 0;
}

static int skipline(int *data_flow, const char* buf) {
  int p = 0;
  while (buf[p] == ' ' || buf[p] == '\t') p++;
  if (buf[p] == '#' || buf[p] == '\n' || buf[p] == 0) return 1;
  return 0;
}

static int checkerrormsg(int *data_flow, const char* buf) {
  return strcmp(buf, "%%FAIL\n") == 0;
}

static int checkfail(int *data_flow, const char* buf) {
  return strcmp(buf, "%%FAIL\n") == 0 || strcmp(buf, "%%FAIL IGNORE MSG\n") == 0;
}

struct err_data {
  char buf[4096];
};

static void test_err_cb(int *data_flow, void *data, jv e) {
  struct err_data *err_data = data;
  if (jv_get_kind(e) != JV_KIND_STRING)
    e = jv_dump_string(data_flow, e, JV_PRINT_INVALID);
  if (!strncmp(jv_string_value(e), "jq: error", sizeof("jq: error") - 1))
    snprintf(err_data->buf, sizeof(err_data->buf), "%s", jv_string_value(e));
  if (strchr(err_data->buf, '\n'))
    *(strchr(err_data->buf, '\n')) = '\0';
  jv_free(e);
}

static void run_jq_tests(int *data_flow, jv lib_dirs, int verbose, FILE *testdata) {
  char prog[4096];
  char buf[4096];
  struct err_data err_msg;
  int tests = 0, passed = 0, invalid = 0;
  unsigned int lineno = 0;
  int must_fail = 0;
  int check_msg = 0;
  jq_state *jq = 
                ((void *)0)
                    ;

  jq = jq_init(data_flow);
  
 ((
 jq
 ) ? (void) (0) : __assert_fail (
 "jq"
 , "jq_test.c", 67, __PRETTY_FUNCTION__))
           ;
  if (jv_get_kind(lib_dirs) == JV_KIND_NULL)
    lib_dirs = jv_array();
  jq_set_attr(data_flow, jq, jv_string("JQ_LIBRARY_PATH"), lib_dirs);

  while (1) {
    if (!fgets(prog, sizeof(prog), testdata)) break;
    lineno++;
    if (skipline(data_flow, prog)) continue;
    if (checkfail(data_flow, prog)) {
      must_fail = 1;
      check_msg = checkerrormsg(data_flow, prog);
      jq_set_error_cb(data_flow, jq, test_err_cb, &err_msg);
      continue;
    }
    if (prog[strlen(prog)-1] == '\n') prog[strlen(prog)-1] = 0;
    printf("Testing '%s' at line number %u\n", prog, lineno);
    int pass = 1;
    tests++;
    int compiled = jq_compile(data_flow, jq, prog);

    if (must_fail) {
      jq_set_error_cb(data_flow, jq, 
                         ((void *)0)
                             , 
                               ((void *)0)
                                   );
      if (!fgets(buf, sizeof(buf), testdata)) { invalid++; break; }
      lineno++;
      if (buf[strlen(buf)-1] == '\n') buf[strlen(buf)-1] = 0;
      if (compiled) {
        printf("*** Test program compiled that should not have at line %u: %s\n", lineno, prog);
        must_fail = 0;
        check_msg = 0;
        invalid++;
        continue;
      }
      if (check_msg && strcmp(buf, err_msg.buf) != 0) {
        printf("*** Erroneous test program failed with wrong message (%s) at line %u: %s\n", err_msg.buf, lineno, prog);
        invalid++;
      } else {
        passed++;
      }
      must_fail = 0;
      check_msg = 0;
      continue;
    }

    if (!compiled) {
      printf("*** Test program failed to compile at line %u: %s\n", lineno, prog);
      invalid++;

      while (fgets(buf, sizeof(buf), testdata)) {
        lineno++;
        if (buf[0] == '\n' || (buf[0] == '\r' && buf[1] == '\n'))
          break;
      }
      continue;
    }
    if (verbose) {
      printf("Disassembly:\n");
      jq_dump_disassembly(data_flow, jq, 2);
      printf("\n");
    }
    if (!fgets(buf, sizeof(buf), testdata)) { invalid++; break; }
    lineno++;
    jv input = jv_parse(data_flow, buf);
    if (!jv_is_valid(data_flow, input)) {
      printf("*** Input is invalid on line %u: %s\n", lineno, buf);
      invalid++;
      continue;
    }
    jq_start(data_flow, jq, input, verbose ? JQ_DEBUG_TRACE : 0);

    while (fgets(buf, sizeof(buf), testdata)) {
      lineno++;
      if (skipline(data_flow, buf)) break;
      jv expected = jv_parse(data_flow, buf);
      if (!jv_is_valid(data_flow, expected)) {
        printf("*** Expected result is invalid on line %u: %s\n", lineno, buf);
        invalid++;
        continue;
      }
      jv actual = jq_next(data_flow, jq);
      if (!jv_is_valid(data_flow, actual)) {
        jv_free(actual);
        printf("*** Insufficient results for test at line number %u: %s\n", lineno, prog);
        pass = 0;
        break;
      } else if (!jv_equal(data_flow, jv_copy(expected), jv_copy(actual))) {
        printf("*** Expected ");
        jv_dump(data_flow, jv_copy(expected), 0);
        printf(", but got ");
        jv_dump(data_flow, jv_copy(actual), 0);
        printf(" for test at line number %u: %s\n", lineno, prog);
        pass = 0;
      }
      jv as_string = jv_dump_string(data_flow, jv_copy(expected), rand() & ~(JV_PRINT_COLOR|JV_PRINT_REFCOUNT));
      jv reparsed = jv_parse_sized(data_flow, jv_string_value(as_string), jv_string_length_bytes(jv_copy(as_string)));
      
     ((
     jv_equal(data_flow, jv_copy(expected), jv_copy(reparsed))
     ) ? (void) (0) : __assert_fail (
     "jv_equal(jv_copy(expected), jv_copy(reparsed))"
     , "jq_test.c", 162, __PRETTY_FUNCTION__))
                                                           ;
      jv_free(as_string);
      jv_free(reparsed);
      jv_free(expected);
      jv_free(actual);
    }
    if (pass) {
      jv extra = jq_next(data_flow, jq);
      if (jv_is_valid(data_flow, extra)) {
        printf("*** Superfluous result: ");
        jv_dump(data_flow, extra, 0);
        printf(" for test at line number %u, %s\n", lineno, prog);
        pass = 0;
      } else {
        jv_free(extra);
      }
    }
    passed+=pass;
  }
  jq_teardown(data_flow, &jq);
  printf("%d of %d tests passed (%d malformed)\n", passed,tests,invalid);
  if (passed != tests) exit(1);
}


static void jv_test(int *data_flow) {

  {
    jv v = jv_parse(data_flow, "{\"a':\"12\"}");
    
   ((
   jv_get_kind(v) == JV_KIND_INVALID
   ) ? (void) (0) : __assert_fail (
   "jv_get_kind(v) == JV_KIND_INVALID"
   , "jq_test.c", 191, __PRETTY_FUNCTION__))
                                            ;
    v = jv_invalid_get_msg(data_flow, v);
    
   ((
   strcmp(jv_string_value(v), "Expected separator between values at line 1, column 9 (while parsing '{\"a':\"12\"}')") == 0
   ) ? (void) (0) : __assert_fail (
   "strcmp(jv_string_value(v), \"Expected separator between values at line 1, column 9 (while parsing '{\\\"a':\\\"12\\\"}')\") == 0"
   , "jq_test.c", 193, __PRETTY_FUNCTION__))
                                                                                                                                   ;
    jv_free(v);
  }

  {
    jv a = jv_array();
    
   ((
   jv_get_kind(a) == JV_KIND_ARRAY
   ) ? (void) (0) : __assert_fail (
   "jv_get_kind(a) == JV_KIND_ARRAY"
   , "jq_test.c", 199, __PRETTY_FUNCTION__))
                                          ;
    
   ((
   jv_array_length(jv_copy(a)) == 0
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a)) == 0"
   , "jq_test.c", 200, __PRETTY_FUNCTION__))
                                           ;
    
   ((
   jv_array_length(jv_copy(a)) == 0
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a)) == 0"
   , "jq_test.c", 201, __PRETTY_FUNCTION__))
                                           ;

    a = jv_array_append(a, jv_number(42));
    
   ((
   jv_array_length(jv_copy(a)) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a)) == 1"
   , "jq_test.c", 204, __PRETTY_FUNCTION__))
                                           ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(a), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(a), 0)) == 42"
   , "jq_test.c", 205, __PRETTY_FUNCTION__))
                                                             ;

    jv a2 = jv_array_append(jv_array(), jv_number(42));
    
   ((
   jv_equal(data_flow, jv_copy(a), jv_copy(a))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_copy(a), jv_copy(a))"
   , "jq_test.c", 208, __PRETTY_FUNCTION__))
                                           ;
    
   ((
   jv_equal(data_flow, jv_copy(a2), jv_copy(a2))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_copy(a2), jv_copy(a2))"
   , "jq_test.c", 209, __PRETTY_FUNCTION__))
                                             ;
    
   ((
   jv_equal(data_flow, jv_copy(a), jv_copy(a2))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_copy(a), jv_copy(a2))"
   , "jq_test.c", 210, __PRETTY_FUNCTION__))
                                            ;
    
   ((
   jv_equal(data_flow, jv_copy(a2), jv_copy(a))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_copy(a2), jv_copy(a))"
   , "jq_test.c", 211, __PRETTY_FUNCTION__))
                                            ;
    jv_free(a2);

    a2 = jv_array_append(jv_array(), jv_number(19));
    
   ((
   !jv_equal(data_flow, jv_copy(a), jv_copy(a2))
   ) ? (void) (0) : __assert_fail (
   "!jv_equal(jv_copy(a), jv_copy(a2))"
   , "jq_test.c", 215, __PRETTY_FUNCTION__))
                                             ;
    
   ((
   !jv_equal(data_flow, jv_copy(a2), jv_copy(a))
   ) ? (void) (0) : __assert_fail (
   "!jv_equal(jv_copy(a2), jv_copy(a))"
   , "jq_test.c", 216, __PRETTY_FUNCTION__))
                                             ;
    jv_free(a2);


    
   ((
   jv_get_refcnt(data_flow, a) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_get_refcnt(a) == 1"
   , "jq_test.c", 220, __PRETTY_FUNCTION__))
                                ;
    a = jv_array_append(a, jv_copy(a));
    
   ((
   jv_get_refcnt(data_flow, a) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_get_refcnt(a) == 1"
   , "jq_test.c", 222, __PRETTY_FUNCTION__))
                                ;

    
   ((
   jv_array_length(jv_copy(a)) == 2
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a)) == 2"
   , "jq_test.c", 224, __PRETTY_FUNCTION__))
                                           ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(a), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(a), 0)) == 42"
   , "jq_test.c", 225, __PRETTY_FUNCTION__))
                                                             ;

    for (int i=0; i<10; i++) {
      jv subarray = jv_array_get(jv_copy(a), 1);
      
     ((
     jv_get_kind(subarray) == JV_KIND_ARRAY
     ) ? (void) (0) : __assert_fail (
     "jv_get_kind(subarray) == JV_KIND_ARRAY"
     , "jq_test.c", 229, __PRETTY_FUNCTION__))
                                                   ;
      
     ((
     jv_array_length(jv_copy(subarray)) == 1
     ) ? (void) (0) : __assert_fail (
     "jv_array_length(jv_copy(subarray)) == 1"
     , "jq_test.c", 230, __PRETTY_FUNCTION__))
                                                    ;
      
     ((
     jv_number_value(jv_array_get(jv_copy(subarray), 0)) == 42
     ) ? (void) (0) : __assert_fail (
     "jv_number_value(jv_array_get(jv_copy(subarray), 0)) == 42"
     , "jq_test.c", 231, __PRETTY_FUNCTION__))
                                                                      ;
      jv_free(subarray);
    }


    jv subarray = jv_array_get(jv_copy(a), 1);
    
   ((
   jv_get_kind(subarray) == JV_KIND_ARRAY
   ) ? (void) (0) : __assert_fail (
   "jv_get_kind(subarray) == JV_KIND_ARRAY"
   , "jq_test.c", 237, __PRETTY_FUNCTION__))
                                                 ;
    
   ((
   jv_array_length(jv_copy(subarray)) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(subarray)) == 1"
   , "jq_test.c", 238, __PRETTY_FUNCTION__))
                                                  ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(subarray), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(subarray), 0)) == 42"
   , "jq_test.c", 239, __PRETTY_FUNCTION__))
                                                                    ;

    jv sub2 = jv_copy(subarray);
    sub2 = jv_array_append(sub2, jv_number(19));

    
   ((
   jv_get_kind(sub2) == JV_KIND_ARRAY
   ) ? (void) (0) : __assert_fail (
   "jv_get_kind(sub2) == JV_KIND_ARRAY"
   , "jq_test.c", 244, __PRETTY_FUNCTION__))
                                             ;
    
   ((
   jv_array_length(jv_copy(sub2)) == 2
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(sub2)) == 2"
   , "jq_test.c", 245, __PRETTY_FUNCTION__))
                                              ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(sub2), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(sub2), 0)) == 42"
   , "jq_test.c", 246, __PRETTY_FUNCTION__))
                                                                ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(sub2), 1)) == 19
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(sub2), 1)) == 19"
   , "jq_test.c", 247, __PRETTY_FUNCTION__))
                                                                ;

    
   ((
   jv_get_kind(subarray) == JV_KIND_ARRAY
   ) ? (void) (0) : __assert_fail (
   "jv_get_kind(subarray) == JV_KIND_ARRAY"
   , "jq_test.c", 249, __PRETTY_FUNCTION__))
                                                 ;
    
   ((
   jv_array_length(jv_copy(subarray)) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(subarray)) == 1"
   , "jq_test.c", 250, __PRETTY_FUNCTION__))
                                                  ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(subarray), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(subarray), 0)) == 42"
   , "jq_test.c", 251, __PRETTY_FUNCTION__))
                                                                    ;

    jv_free(subarray);

    void* before = sub2.u.ptr;
    sub2 = jv_array_append(sub2, jv_number(200));
    void* after = sub2.u.ptr;
    
   ((
   before == after
   ) ? (void) (0) : __assert_fail (
   "before == after"
   , "jq_test.c", 258, __PRETTY_FUNCTION__))
                          ;
    jv_free(sub2);

    jv a3 = jv_array_append(jv_copy(a), jv_number(19));
    
   ((
   jv_array_length(jv_copy(a3)) == 3
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a3)) == 3"
   , "jq_test.c", 262, __PRETTY_FUNCTION__))
                                            ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(a3), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(a3), 0)) == 42"
   , "jq_test.c", 263, __PRETTY_FUNCTION__))
                                                              ;
    
   ((
   jv_array_length(jv_array_get(jv_copy(a3), 1)) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_array_get(jv_copy(a3), 1)) == 1"
   , "jq_test.c", 264, __PRETTY_FUNCTION__))
                                                             ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(a3), 2)) == 19
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(a3), 2)) == 19"
   , "jq_test.c", 265, __PRETTY_FUNCTION__))
                                                              ;
    jv_free(a3);


    jv a4 = jv_array();
    a4 = jv_array_append(a4, jv_number(1));
    a4 = jv_array_append(a4, jv_number(2));
    jv a5 = jv_copy(a4);
    a4 = jv_array_append(a4, jv_number(3));
    a4 = jv_array_slice(data_flow, a4, 0, 1);
    
   ((
   jv_array_length(jv_copy(a4)) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a4)) == 1"
   , "jq_test.c", 275, __PRETTY_FUNCTION__))
                                            ;
    a4 = jv_array_append(a4, jv_number(4));
    
   ((
   jv_array_length(jv_copy(a4)) == 2
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a4)) == 2"
   , "jq_test.c", 277, __PRETTY_FUNCTION__))
                                            ;
    
   ((
   jv_array_length(jv_copy(a5)) == 2
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a5)) == 2"
   , "jq_test.c", 278, __PRETTY_FUNCTION__))
                                            ;
    jv_free(a4);
    jv_free(a5);


    
   ((
   jv_array_length(jv_copy(a)) == 2
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_copy(a)) == 2"
   , "jq_test.c", 283, __PRETTY_FUNCTION__))
                                           ;
    
   ((
   jv_number_value(jv_array_get(jv_copy(a), 0)) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_array_get(jv_copy(a), 0)) == 42"
   , "jq_test.c", 284, __PRETTY_FUNCTION__))
                                                             ;
    
   ((
   jv_array_length(jv_array_get(jv_copy(a), 1)) == 1
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_array_get(jv_copy(a), 1)) == 1"
   , "jq_test.c", 285, __PRETTY_FUNCTION__))
                                                            ;



    jv_free(a);
  }



  {
    
   ((
   jv_equal(data_flow, jv_string("foo"), jv_string_sized("foo", 3))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_string(\"foo\"), jv_string_sized(\"foo\", 3))"
   , "jq_test.c", 295, __PRETTY_FUNCTION__))
                                                                ;
    char nasty[] = "foo\0";
    jv shortstr = jv_string(nasty), longstr = jv_string_sized(nasty, sizeof(nasty));
    
   ((
   jv_string_length_bytes(jv_copy(shortstr)) == (int)strlen(nasty)
   ) ? (void) (0) : __assert_fail (
   "jv_string_length_bytes(jv_copy(shortstr)) == (int)strlen(nasty)"
   , "jq_test.c", 298, __PRETTY_FUNCTION__))
                                                                          ;
    
   ((
   jv_string_length_bytes(jv_copy(longstr)) == (int)sizeof(nasty)
   ) ? (void) (0) : __assert_fail (
   "jv_string_length_bytes(jv_copy(longstr)) == (int)sizeof(nasty)"
   , "jq_test.c", 299, __PRETTY_FUNCTION__))
                                                                         ;
    jv_free(shortstr);
    jv_free(longstr);


    char a1s[] = "hello", a2s[] = "hello", bs[] = "goodbye";
    jv a1 = jv_string(a1s), a2 = jv_string(a2s), b = jv_string(bs);
    
   ((
   jv_equal(data_flow, jv_copy(a1), jv_copy(a2))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_copy(a1), jv_copy(a2))"
   , "jq_test.c", 306, __PRETTY_FUNCTION__))
                                             ;
    
   ((
   jv_equal(data_flow, jv_copy(a2), jv_copy(a1))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_copy(a2), jv_copy(a1))"
   , "jq_test.c", 307, __PRETTY_FUNCTION__))
                                             ;
    
   ((
   !jv_equal(data_flow, jv_copy(a1), jv_copy(b))
   ) ? (void) (0) : __assert_fail (
   "!jv_equal(jv_copy(a1), jv_copy(b))"
   , "jq_test.c", 308, __PRETTY_FUNCTION__))
                                             ;

    
   ((
   jv_string_hash(data_flow, jv_copy(a1)) == jv_string_hash(data_flow, jv_copy(a1))
   ) ? (void) (0) : __assert_fail (
   "jv_string_hash(jv_copy(a1)) == jv_string_hash(jv_copy(a1))"
   , "jq_test.c", 310, __PRETTY_FUNCTION__))
                                                                     ;
    
   ((
   jv_string_hash(data_flow, jv_copy(a1)) == jv_string_hash(data_flow, jv_copy(a2))
   ) ? (void) (0) : __assert_fail (
   "jv_string_hash(jv_copy(a1)) == jv_string_hash(jv_copy(a2))"
   , "jq_test.c", 311, __PRETTY_FUNCTION__))
                                                                     ;
    
   ((
   jv_string_hash(data_flow, jv_copy(b)) != jv_string_hash(data_flow, jv_copy(a1))
   ) ? (void) (0) : __assert_fail (
   "jv_string_hash(jv_copy(b)) != jv_string_hash(jv_copy(a1))"
   , "jq_test.c", 312, __PRETTY_FUNCTION__))
                                                                    ;
    jv_free(a1);
    jv_free(a2);
    jv_free(b);

    
   ((
   jv_equal(data_flow, jv_string("hello42!"), jv_string_fmt(data_flow, "hello%d%s", 42, "!"))
   ) ? (void) (0) : __assert_fail (
   "jv_equal(jv_string(\"hello42!\"), jv_string_fmt(\"hello%d%s\", 42, \"!\"))"
   , "jq_test.c", 317, __PRETTY_FUNCTION__))
                                                                               ;
    char big[20000];
    for (int i=0; i<(int)sizeof(big); i++) big[i] = 'a';
    big[sizeof(big)-1] = 0;
    jv str = jv_string_fmt(data_flow, "%s", big);
    
   ((
   jv_string_length_bytes(jv_copy(str)) == sizeof(big) - 1
   ) ? (void) (0) : __assert_fail (
   "jv_string_length_bytes(jv_copy(str)) == sizeof(big) - 1"
   , "jq_test.c", 322, __PRETTY_FUNCTION__))
                                                                  ;
    
   ((
   !strcmp(big, jv_string_value(str))
   ) ? (void) (0) : __assert_fail (
   "!strcmp(big, jv_string_value(str))"
   , "jq_test.c", 323, __PRETTY_FUNCTION__))
                                             ;
    jv_free(str);
  }


  {
    jv o1 = jv_object(data_flow);
    o1 = jv_object_set(data_flow, o1, jv_string("foo"), jv_number(42));
    o1 = jv_object_set(data_flow, o1, jv_string("bar"), jv_number(24));
    
   ((
   jv_number_value(jv_object_get(jv_copy(o1), jv_string("foo"))) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_object_get(jv_copy(o1), jv_string(\"foo\"))) == 42"
   , "jq_test.c", 332, __PRETTY_FUNCTION__))
                                                                              ;
    
   ((
   jv_number_value(jv_object_get(jv_copy(o1), jv_string("bar"))) == 24
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_object_get(jv_copy(o1), jv_string(\"bar\"))) == 24"
   , "jq_test.c", 333, __PRETTY_FUNCTION__))
                                                                              ;

    jv o2 = jv_object_set(data_flow, jv_copy(o1), jv_string("foo"), jv_number(420));
    o2 = jv_object_set(data_flow, o2, jv_string("bar"), jv_number(240));
    
   ((
   jv_number_value(jv_object_get(jv_copy(o1), jv_string("foo"))) == 42
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_object_get(jv_copy(o1), jv_string(\"foo\"))) == 42"
   , "jq_test.c", 337, __PRETTY_FUNCTION__))
                                                                              ;
    
   ((
   jv_number_value(jv_object_get(jv_copy(o1), jv_string("bar"))) == 24
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_object_get(jv_copy(o1), jv_string(\"bar\"))) == 24"
   , "jq_test.c", 338, __PRETTY_FUNCTION__))
                                                                              ;
    
   ((
   jv_number_value(jv_object_get(jv_copy(o2), jv_string("foo"))) == 420
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_object_get(jv_copy(o2), jv_string(\"foo\"))) == 420"
   , "jq_test.c", 339, __PRETTY_FUNCTION__))
                                                                               ;
    jv_free(o1);
    
   ((
   jv_number_value(jv_object_get(jv_copy(o2), jv_string("bar"))) == 240
   ) ? (void) (0) : __assert_fail (
   "jv_number_value(jv_object_get(jv_copy(o2), jv_string(\"bar\"))) == 240"
   , "jq_test.c", 341, __PRETTY_FUNCTION__))
                                                                               ;


    jv_free(o2);
  }
}
