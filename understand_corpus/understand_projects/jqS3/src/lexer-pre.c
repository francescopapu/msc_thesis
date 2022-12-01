











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






typedef long int __gwchar_t;

typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n);


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
     ;


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base);


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base);


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
    ;


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
    ;


typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
typedef void* yyscan_t;
typedef struct yy_buffer_state *YY_BUFFER_STATE;




typedef size_t yy_size_t;
struct yy_buffer_state
 {
 FILE *yy_input_file;

 char *yy_ch_buf;
 char *yy_buf_pos;




 yy_size_t yy_buf_size;




 int yy_n_chars;





 int yy_is_our_buffer;






 int yy_is_interactive;





 int yy_at_bol;

    int yy_bs_lineno;
    int yy_bs_column;




 int yy_fill_buffer;

 int yy_buffer_status;
 };
void jq_yyrestart (int *data_flow, FILE *input_file ,yyscan_t yyscanner );
void jq_yy_switch_to_buffer (int *data_flow, YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
YY_BUFFER_STATE jq_yy_create_buffer (int *data_flow, FILE *file,int size ,yyscan_t yyscanner );
void jq_yy_delete_buffer (int *data_flow, YY_BUFFER_STATE b ,yyscan_t yyscanner );
void jq_yy_flush_buffer (int *data_flow, YY_BUFFER_STATE b ,yyscan_t yyscanner );
void jq_yypush_buffer_state (int *data_flow, YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
void jq_yypop_buffer_state (int *data_flow, yyscan_t yyscanner );

static void jq_yyensure_buffer_stack (int *data_flow, yyscan_t yyscanner );
static void jq_yy_load_buffer_state (int *data_flow, yyscan_t yyscanner );
static void jq_yy_init_buffer (int *data_flow, YY_BUFFER_STATE b,FILE *file ,yyscan_t yyscanner );



YY_BUFFER_STATE jq_yy_scan_buffer (int *data_flow, char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE jq_yy_scan_string (int *data_flow, const char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE jq_yy_scan_bytes (int *data_flow, const char *bytes,yy_size_t len ,yyscan_t yyscanner );

void *jq_yyalloc (int *data_flow, yy_size_t ,yyscan_t yyscanner );
void *jq_yyrealloc (int *data_flow, void *,yy_size_t ,yyscan_t yyscanner );
void jq_yyfree (int *data_flow, void * ,yyscan_t yyscanner );
typedef unsigned char YY_CHAR;

typedef int yy_state_type;



static yy_state_type yy_get_previous_state (int *data_flow, yyscan_t yyscanner );
static yy_state_type yy_try_NUL_trans (int *data_flow, yy_state_type current_state ,yyscan_t yyscanner);
static int yy_get_next_buffer (int *data_flow, yyscan_t yyscanner );

__attribute__((__noreturn__))

static void yy_fatal_error (int *data_flow, const char msg[] ,yyscan_t yyscanner );
struct yy_trans_info
 {
 flex_int32_t yy_verify;
 flex_int32_t yy_nxt;
 };
static const flex_int16_t yy_accept[157] =
    { 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 51, 49, 48, 48, 49, 40, 1, 35,
       35, 36, 37, 35, 35, 35, 35, 35, 39, 35,
       35, 35, 35, 49, 46, 46, 46, 46, 46, 46,
       46, 46, 46, 46, 46, 46, 46, 46, 35, 44,
       44, 42, 45, 48, 2, 1, 29, 27, 25, 26,
       33, 39, 47, 47, 18, 28, 0, 31, 3, 32,
        0, 38, 46, 0, 46, 46, 4, 46, 46, 46,
       46, 46, 46, 9, 46, 46, 46, 46, 14, 46,
       46, 46, 24, 44, 43, 41, 43, 47, 0, 39,

       30, 39, 34, 0, 46, 13, 46, 46, 8, 46,
       46, 15, 46, 46, 46, 46, 46, 46, 46, 19,
        0, 43, 46, 46, 46, 46, 12, 11, 46, 46,
       46, 46, 46, 46, 10, 43, 46, 22, 20, 46,
       46, 46, 21, 46, 46, 43, 46, 46, 5, 46,
        7, 16, 23, 17, 6, 0
    } ;

static const YY_CHAR yy_ec[256] =
    { 0,
        1, 1, 1, 1, 1, 1, 1, 1, 2, 3,
        1, 1, 4, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 2, 5, 6, 7, 8, 9, 1, 1, 10,
       11, 12, 13, 14, 15, 16, 17, 18, 18, 18,
       18, 18, 18, 18, 18, 18, 18, 19, 20, 21,
       22, 23, 24, 25, 26, 26, 26, 26, 27, 26,
       26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
       26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
       28, 29, 30, 1, 31, 1, 32, 33, 34, 35,

       36, 37, 26, 38, 39, 26, 40, 41, 42, 43,
       44, 45, 26, 46, 47, 48, 49, 26, 26, 26,
       50, 26, 51, 52, 53, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,

        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1
    } ;

static const YY_CHAR yy_meta[54] =
    { 0,
        1, 1, 2, 2, 1, 3, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 4, 1, 5, 6, 1,
        1, 1, 1, 1, 1, 7, 7, 1, 8, 1,
        9, 7, 7, 7, 7, 7, 7, 7, 7, 7,
        7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
        1, 1, 1
    } ;

static const flex_uint16_t yy_base[170] =
    { 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       51, 52, 320, 321, 57, 59, 297, 321, 0, 321,
      296, 321, 321, 295, 294, 293, 47, 47, 50, 292,
      291, 290, 294, 0, 291, 48, 51, 53, 52, 37,
       59, 57, 66, 56, 63, 68, 70, 72, 287, 0,
        0, 321, 80, 90, 321, 0, 321, 321, 321, 321,
       95, 99, 0, 106, 286, 321, 110, 321, 321, 321,
      290, 0, 285, 281, 86, 77, 277, 97, 101, 111,
      113, 115, 117, 274, 119, 120, 118, 121, 270, 122,
      123, 124, 321, 0, 257, 321, 255, 0, 254, 249,

      321, 245, 321, 0, 125, 239, 126, 127, 237, 128,
      134, 234, 136, 143, 147, 148, 149, 152, 154, 232,
      165, 212, 210, 157, 159, 158, 209, 208, 160, 161,
      162, 163, 164, 166, 207, 196, 171, 205, 204, 174,
      167, 175, 201, 170, 176, 190, 190, 184, 199, 194,
      198, 197, 85, 78, 76, 321, 230, 239, 245, 250,
      255, 264, 273, 278, 283, 285, 290, 294, 298
    } ;

static const flex_int16_t yy_def[170] =
    { 0,
      156, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      157, 157, 156, 156, 156, 156, 156, 156, 158, 156,
      156, 156, 156, 156, 156, 156, 159, 156, 156, 156,
      156, 156, 156, 160, 161, 161, 161, 161, 161, 161,
      161, 161, 161, 161, 161, 161, 161, 161, 156, 162,
      162, 156, 163, 156, 156, 158, 156, 156, 156, 156,
      156, 156, 164, 164, 156, 156, 156, 156, 156, 156,
      156, 160, 161, 156, 161, 161, 161, 161, 161, 161,
      161, 161, 161, 161, 161, 161, 161, 161, 161, 161,
      161, 161, 156, 162, 156, 156, 165, 164, 156, 164,

      156, 156, 156, 166, 161, 161, 161, 161, 161, 161,
      161, 161, 161, 161, 161, 161, 161, 161, 161, 161,
      163, 167, 161, 161, 161, 161, 161, 161, 161, 161,
      161, 161, 161, 161, 161, 168, 161, 161, 161, 161,
      161, 161, 161, 161, 161, 169, 161, 161, 161, 161,
      161, 161, 161, 161, 161, 0, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156
    } ;

static const flex_uint16_t yy_nxt[375] =
    { 0,
       14, 15, 16, 14, 17, 18, 19, 20, 21, 22,
       23, 24, 25, 20, 26, 27, 28, 29, 20, 20,
       30, 31, 32, 33, 34, 35, 35, 22, 14, 23,
       36, 37, 38, 39, 40, 41, 42, 35, 43, 35,
       44, 45, 35, 46, 35, 47, 35, 48, 35, 35,
       22, 49, 23, 51, 51, 74, 52, 52, 54, 54,
       54, 54, 61, 65, 62, 62, 74, 62, 66, 74,
       74, 74, 80, 64, 74, 74, 67, 74, 75, 53,
       53, 74, 64, 79, 74, 67, 74, 87, 74, 96,
       74, 54, 54, 76, 74, 74, 74, 77, 78, 81,

       83, 82, 84, 74, 74, 90, 88, 85, 86, 91,
       62, 106, 62, 89, 62, 74, 62, 92, 99, 74,
       99, 67, 99, 100, 99, 67, 105, 102, 97, 74,
       67, 74, 107, 74, 67, 74, 74, 74, 74, 74,
       74, 74, 74, 74, 74, 74, 74, 109, 108, 112,
      116, 110, 74, 115, 74, 117, 118, 125, 119, 111,
      126, 74, 113, 114, 127, 74, 74, 74, 124, 128,
       74, 129, 74, 120, 156, 74, 74, 74, 74, 74,
       74, 74, 74, 132, 74, 74, 130, 131, 74, 74,
      137, 140, 74, 74, 74, 139, 135, 133, 138, 145,

      134, 147, 74, 143, 144, 151, 141, 148, 74, 150,
      142, 152, 74, 97, 149, 74, 74, 74, 121, 74,
      153, 154, 74, 74, 121, 74, 74, 74, 74, 155,
       50, 50, 50, 50, 50, 50, 50, 50, 50, 56,
      121, 56, 56, 56, 56, 56, 56, 56, 63, 63,
       74, 63, 74, 63, 72, 74, 72, 74, 72, 73,
       73, 73, 102, 73, 94, 94, 100, 94, 94, 94,
       94, 102, 94, 95, 95, 95, 95, 95, 95, 95,
       95, 95, 98, 121, 98, 121, 98, 122, 74, 122,
      122, 123, 74, 123, 136, 74, 136, 136, 146, 104,

      146, 146, 95, 74, 95, 95, 103, 101, 93, 74,
       71, 70, 69, 68, 60, 59, 58, 57, 55, 156,
       13, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156
    } ;

static const flex_int16_t yy_chk[375] =
    { 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 11, 12, 40, 11, 12, 15, 15,
       16, 16, 27, 28, 27, 29, 36, 29, 28, 37,
       39, 38, 40, 27, 44, 42, 29, 41, 36, 11,
       12, 45, 27, 39, 43, 29, 46, 44, 47, 53,
       48, 54, 54, 37, 155, 76, 154, 37, 38, 41,

       42, 41, 43, 153, 75, 47, 45, 43, 43, 48,
       61, 76, 61, 46, 62, 78, 62, 48, 64, 79,
       64, 61, 67, 64, 67, 62, 75, 67, 53, 80,
       61, 81, 78, 82, 62, 83, 87, 85, 86, 88,
       90, 91, 92, 105, 107, 108, 110, 80, 79, 82,
       87, 81, 111, 86, 113, 88, 90, 107, 91, 81,
      108, 114, 83, 85, 110, 115, 116, 117, 105, 111,
      118, 113, 119, 92, 121, 124, 126, 125, 129, 130,
      131, 132, 133, 116, 134, 141, 114, 115, 144, 137,
      124, 129, 140, 142, 145, 126, 119, 117, 125, 134,

      118, 137, 148, 132, 133, 144, 130, 140, 147, 142,
      131, 145, 150, 121, 141, 152, 151, 149, 146, 143,
      147, 148, 139, 138, 136, 135, 128, 127, 123, 150,
      157, 157, 157, 157, 157, 157, 157, 157, 157, 158,
      122, 158, 158, 158, 158, 158, 158, 158, 159, 159,
      120, 159, 112, 159, 160, 109, 160, 106, 160, 161,
      161, 161, 102, 161, 162, 162, 100, 162, 162, 162,
      162, 99, 162, 163, 163, 163, 163, 163, 163, 163,
      163, 163, 164, 97, 164, 95, 164, 165, 89, 165,
      165, 166, 84, 166, 167, 77, 167, 167, 168, 74,

      168, 168, 169, 73, 169, 169, 71, 65, 49, 35,
       33, 32, 31, 30, 26, 25, 24, 21, 17, 13,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
      156, 156, 156, 156
    } ;




extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
    ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
    ;




extern void __assert (const char *__assertion, const char *__file, int __line)
    ;






typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;







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

struct lexer_param;



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
  static int enter(int *data_flow, int opening, int state, yyscan_t yyscanner);
  static int try_exit(int *data_flow, int closing, int state, yyscan_t yyscanner);





typedef __useconds_t useconds_t;
typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence);
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) ;
extern unsigned int alarm (unsigned int __seconds);
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
    ;






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) ;
extern char *getcwd (char *__buf, size_t __size) ;
extern char *getwd (char *__buf)
     __attribute__ ((__nonnull__ (1))) ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2);
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) ;




extern void _exit (int __status);





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name);


extern long int sysconf (int __name);



extern size_t confstr (int __name, char *__buf, size_t __len);




extern __pid_t getpid (void);


extern __pid_t getppid (void);


extern __pid_t getpgrp (void);


extern __pid_t __getpgid (__pid_t __pid);

extern __pid_t getpgid (__pid_t __pid);






extern int setpgid (__pid_t __pid, __pid_t __pgid);
extern int setpgrp (void);






extern __pid_t setsid (void);



extern __pid_t getsid (__pid_t __pid);



extern __uid_t getuid (void);


extern __uid_t geteuid (void);


extern __gid_t getgid (void);


extern __gid_t getegid (void);




extern int getgroups (int __size, __gid_t __list[]) ;
extern int setuid (__uid_t __uid) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) ;




extern int seteuid (__uid_t __uid) ;






extern int setgid (__gid_t __gid) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) ;




extern int setegid (__gid_t __gid) ;
extern __pid_t fork (void);







extern __pid_t vfork (void);





extern char *ttyname (int __fd);



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd);




extern int ttyslot (void);




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd);


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id);






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nonnull__ (1)));
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
      ;







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void);


extern int revoke (const char *__file) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name);



extern char *getusershell (void);
extern void endusershell (void);
extern void setusershell (void);





extern int daemon (int __nochdir, int __noclose) ;






extern int chroot (const char *__path) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void);





extern int getpagesize (void);




extern int getdtablesize (void);
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) ;
extern int brk (void *__addr) ;





extern void *sbrk (intptr_t __delta);
extern long int syscall (long int __sysno, ...);
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int fdatasync (int __fildes);







struct yyguts_t
    {


    int yyextra_r;


    FILE *yyin_r, *yyout_r;
    size_t yy_buffer_stack_top;
    size_t yy_buffer_stack_max;
    YY_BUFFER_STATE * yy_buffer_stack;
    char yy_hold_char;
    int yy_n_chars;
    yy_size_t yyleng_r;
    char *yy_c_buf_p;
    int yy_init;
    int yy_start;
    int yy_did_buffer_switch_on_eof;
    int yy_start_stack_ptr;
    int yy_start_stack_depth;
    int *yy_start_stack;
    yy_state_type yy_last_accepting_state;
    char* yy_last_accepting_cpos;

    int yylineno_r;
    int yy_flex_debug_r;

    char *yytext_r;
    int yy_more_flag;
    int yy_more_len;

    YYSTYPE * yylval_r;

    location * yylloc_r;

    };

static int yy_init_globals (int *data_flow, yyscan_t yyscanner );







int jq_yylex_init (int *data_flow, yyscan_t* scanner);

int jq_yylex_init_extra (int *data_flow, int user_defined,yyscan_t* scanner);




int jq_yylex_destroy (int *data_flow, yyscan_t yyscanner );

int jq_yyget_debug (int *data_flow, yyscan_t yyscanner );

void jq_yyset_debug (int *data_flow, int debug_flag ,yyscan_t yyscanner );

int jq_yyget_extra (int *data_flow, yyscan_t yyscanner );

void jq_yyset_extra (int *data_flow, int user_defined ,yyscan_t yyscanner );

FILE *jq_yyget_in (int *data_flow, yyscan_t yyscanner );

void jq_yyset_in (int *data_flow, FILE * _in_str ,yyscan_t yyscanner );

FILE *jq_yyget_out (int *data_flow, yyscan_t yyscanner );

void jq_yyset_out (int *data_flow, FILE * _out_str ,yyscan_t yyscanner );

yy_size_t jq_yyget_leng (int *data_flow, yyscan_t yyscanner );

char *jq_yyget_text (int *data_flow, yyscan_t yyscanner );

int jq_yyget_lineno (int *data_flow, yyscan_t yyscanner );

void jq_yyset_lineno (int *data_flow, int _line_number ,yyscan_t yyscanner );

int jq_yyget_column (int *data_flow, yyscan_t yyscanner );

void jq_yyset_column (int *data_flow, int _column_no ,yyscan_t yyscanner );

YYSTYPE * jq_yyget_lval (int *data_flow, yyscan_t yyscanner );

void jq_yyset_lval (int *data_flow, YYSTYPE * yylval_param ,yyscan_t yyscanner );

       location *jq_yyget_lloc (int *data_flow, yyscan_t yyscanner );

        void jq_yyset_lloc (int *data_flow, location * yylloc_param ,yyscan_t yyscanner );
    static void yy_push_state (int *data_flow, int _new_state ,yyscan_t yyscanner);

    static void yy_pop_state (int *data_flow, yyscan_t yyscanner );

    static int yy_top_state (int *data_flow, yyscan_t yyscanner );
extern int jq_yylex
               (int *data_flow, YYSTYPE * yylval_param,location * yylloc_param ,yyscan_t yyscanner);
int jq_yylex (int *data_flow, YYSTYPE * yylval_param, location * yylloc_param , yyscan_t yyscanner)
{
 yy_state_type yy_current_state;
 char *yy_cp, *yy_bp;
 int yy_act;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

    yyg->yylval_r = yylval_param;

    yyg->yylloc_r = yylloc_param;

 if ( !yyg->yy_init )
  {
  yyg->yy_init = 1;





  if ( ! yyg->yy_start )
   yyg->yy_start = 1;

  if ( ! yyg->yyin_r )
   yyg->yyin_r = 
         stdin
              ;

  if ( ! yyg->yyout_r )
   yyg->yyout_r = 
          stdout
                ;

  if ( ! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
        ((void *)0)
        ) ) {
   jq_yyensure_buffer_stack (data_flow, yyscanner);
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] =
    jq_yy_create_buffer(data_flow, yyg->yyin_r,16384 ,yyscanner);
  }

  jq_yy_load_buffer_state(data_flow, yyscanner );
  }

 {

 while ( 1 )
  {
  yy_cp = yyg->yy_c_buf_p;


  *yy_cp = yyg->yy_hold_char;




  yy_bp = yy_cp;

  yy_current_state = yyg->yy_start;
yy_match:
  do
   {
   YY_CHAR yy_c = yy_ec[((unsigned int) (unsigned char) *yy_cp)] ;
   if ( yy_accept[yy_current_state] )
    {
    yyg->yy_last_accepting_state = yy_current_state;
    yyg->yy_last_accepting_cpos = yy_cp;
    }
   while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
    {
    yy_current_state = (int) yy_def[yy_current_state];
    if ( yy_current_state >= 157 )
     yy_c = yy_meta[(unsigned int) yy_c];
    }
   yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
   ++yy_cp;
   }
  while ( yy_base[yy_current_state] != 321 );

yy_find_action:
  yy_act = yy_accept[yy_current_state];
  if ( yy_act == 0 )
   {
   yy_cp = yyg->yy_last_accepting_cpos;
   yy_current_state = yyg->yy_last_accepting_state;
   yy_act = yy_accept[yy_current_state];
   }

  yyg->yytext_r = yy_bp; yyg->yyleng_r = (size_t) (yy_cp - yy_bp); yyg->yy_hold_char = *yy_cp; *yy_cp = '\0'; yyg->yy_c_buf_p = yy_cp;;

do_action:

  switch ( yy_act )
 {
   case 0:

   *yy_cp = yyg->yy_hold_char;
   yy_cp = yyg->yy_last_accepting_cpos;
   yy_current_state = yyg->yy_last_accepting_state;
   goto yy_find_action;

case 1:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ }
 break;
case 2:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 266; }
 break;
case 3:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 265; }
 break;
case 4:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 268; }
 break;
case 5:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 271; }
 break;
case 6:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 272; }
 break;
case 7:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 270; }
 break;
case 8:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 269; }
 break;
case 9:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 273; }
 break;
case 10:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 274; }
 break;
case 11:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 275; }
 break;
case 12:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 276; }
 break;
case 13:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 280; }
 break;
case 14:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 281; }
 break;
case 15:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 279; }
 break;
case 16:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 277; }
 break;
case 17:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 278; }
 break;
case 18:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 267; }
 break;
case 19:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 282; }
 break;
case 20:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 283; }
 break;
case 21:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 284; }
 break;
case 22:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 285; }
 break;
case 23:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 286; }
 break;
case 24:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 287; }
 break;
case 25:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 288; }
 break;
case 26:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 289; }
 break;
case 27:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 290; }
 break;
case 28:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 291; }
 break;
case 29:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 264; }
 break;
case 30:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 292; }
 break;
case 31:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 293; }
 break;
case 32:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 294; }
 break;
case 33:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 263; }
 break;
case 34:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 295; }
 break;
case 35:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return yyg->yytext_r[0];}
 break;
case 36:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
  return enter(data_flow, yyg->yytext_r[0], ((yyg->yy_start - 1) / 2), yyscanner);
}
 break;
case 37:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
  return try_exit(data_flow, yyg->yytext_r[0], ((yyg->yy_start - 1) / 2), yyscanner);
}
 break;
case 38:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
  yyg->yylval_r->literal = jv_string_sized(yyg->yytext_r + 1, yyg->yyleng_r - 1); return 262;
}
 break;
case 39:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
   yyg->yylval_r->literal = jv_parse_sized(data_flow, yyg->yytext_r, yyg->yyleng_r); return 261;
}
 break;
case 40:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
  yy_push_state(data_flow, 5, yyscanner);
  return 296;
}
 break;

case 41:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
    return enter(data_flow, 298, ((yyg->yy_start - 1) / 2), yyscanner);
  }
 break;
case 42:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
    yy_pop_state(data_flow, yyscanner);
    return 300;
  }
 break;
case 43:

do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{

    jv escapes = jv_string_fmt(data_flow, "\"%.*s\"", (int)yyg->yyleng_r, yyg->yytext_r);
    yyg->yylval_r->literal = jv_parse_sized(data_flow, jv_string_value(escapes), jv_string_length_bytes(jv_copy(escapes)));
    jv_free(escapes);
    return 297;
  }
 break;
case 44:

do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
    yyg->yylval_r->literal = jv_string_sized(yyg->yytext_r, yyg->yyleng_r);
    return 297;
  }
 break;
case 45:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{
    return 258;
  }
 break;

case 46:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ yyg->yylval_r->literal = jv_string(yyg->yytext_r); return 259;}
 break;
case 47:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ yyg->yylval_r->literal = jv_string(yyg->yytext_r+1); return 260;}
 break;
case 48:

do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{}
 break;
case 49:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
{ return 258; }
 break;
case 50:
do { yyg->yylloc_r->start = jq_yyget_extra(data_flow, yyscanner); yyg->yylloc_r->end = yyg->yylloc_r->start + yyg->yyleng_r; jq_yyset_extra(data_flow, yyg->yylloc_r->end,yyscanner); } while (0);
yy_fatal_error(data_flow,  "flex scanner jammed" , yyscanner);
 break;
case (51 + 0 + 1):
case (51 + 1 + 1):
case (51 + 2 + 1):
case (51 + 3 + 1):
case (51 + 4 + 1):
case (51 + 5 + 1):
 return 0;

 case 51:
  {

  int yy_amount_of_matched_text = (int) (yy_cp - yyg->yytext_r) - 1;


  *yy_cp = yyg->yy_hold_char;
 

  if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status == 0 )
   {
   yyg->yy_n_chars = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars;
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_input_file = yyg->yyin_r;
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status = 1;
   }
  if ( yyg->yy_c_buf_p <= &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars] )
   {
   yy_state_type yy_next_state;

   yyg->yy_c_buf_p = yyg->yytext_r + yy_amount_of_matched_text;

   yy_current_state = yy_get_previous_state(data_flow,  yyscanner );
   yy_next_state = yy_try_NUL_trans(data_flow,  yy_current_state , yyscanner);

   yy_bp = yyg->yytext_r + 0;

   if ( yy_next_state )
    {

    yy_cp = ++yyg->yy_c_buf_p;
    yy_current_state = yy_next_state;
    goto yy_match;
    }

   else
    {
    yy_cp = yyg->yy_c_buf_p;
    goto yy_find_action;
    }
   }

  else switch ( yy_get_next_buffer(data_flow,  yyscanner ) )
   {
   case 1:
    {
    yyg->yy_did_buffer_switch_on_eof = 0;

    if ( ( 1) )
     {
     yyg->yy_c_buf_p = yyg->yytext_r + 0;

     yy_act = (51 + ((yyg->yy_start - 1) / 2) + 1);
     goto do_action;
     }

    else
     {
     if ( ! yyg->yy_did_buffer_switch_on_eof )
      jq_yyrestart(data_flow, yyg->yyin_r ,yyscanner );
     }
    break;
    }

   case 0:
    yyg->yy_c_buf_p =
     yyg->yytext_r + yy_amount_of_matched_text;

    yy_current_state = yy_get_previous_state(data_flow,  yyscanner );

    yy_cp = yyg->yy_c_buf_p;
    yy_bp = yyg->yytext_r + 0;
    goto yy_match;

   case 2:
    yyg->yy_c_buf_p =
    &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars];

    yy_current_state = yy_get_previous_state(data_flow,  yyscanner );

    yy_cp = yyg->yy_c_buf_p;
    yy_bp = yyg->yytext_r + 0;
    goto yy_find_action;
   }
  break;
  }

 default:
  yy_fatal_error(data_flow,  "fatal flex scanner internal error--no action found" , yyscanner)
                                                         ;
 }
  }
 }
}
static int yy_get_next_buffer (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 char *dest = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf;
 char *source = yyg->yytext_r;
 yy_size_t number_to_move, i;
 int ret_val;

 if ( yyg->yy_c_buf_p > &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars + 1] )
  yy_fatal_error(data_flow,  "fatal flex scanner internal error--end of buffer missed" , yyscanner)
                                                             ;

 if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_fill_buffer == 0 )
  {
  if ( yyg->yy_c_buf_p - yyg->yytext_r - 0 == 1 )
   {



   return 1;
   }

  else
   {



   return 2;
   }
  }




 number_to_move = (yy_size_t) (yyg->yy_c_buf_p - yyg->yytext_r) - 1;

 for ( i = 0; i < number_to_move; ++i )
  *(dest++) = *(source++);

 if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status == 2 )



  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars = 0;

 else
  {
   yy_size_t num_to_read =
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size - number_to_move - 1;

  while ( num_to_read <= 0 )
   {


   YY_BUFFER_STATE b = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top];

   int yy_c_buf_p_offset =
    (int) (yyg->yy_c_buf_p - b->yy_ch_buf);

   if ( b->yy_is_our_buffer )
    {
    yy_size_t new_size = b->yy_buf_size * 2;

    if ( new_size <= 0 )
     b->yy_buf_size += b->yy_buf_size / 8;
    else
     b->yy_buf_size *= 2;

    b->yy_ch_buf = (char *)

     jq_yyrealloc(data_flow, (void *) b->yy_ch_buf,b->yy_buf_size + 2 ,yyscanner );
    }
   else

    b->yy_ch_buf = 0;

   if ( ! b->yy_ch_buf )
    yy_fatal_error(data_flow,  "fatal error - scanner input buffer overflow" , yyscanner)
                                                   ;

   yyg->yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

   num_to_read = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size -
      number_to_move - 1;

   }

  if ( num_to_read > 8192 )
   num_to_read = 8192;


  if ( yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_is_interactive ) { int c = '*'; size_t n; for ( n = 0; n < num_to_read && (c = 
 _IO_getc (
 yyg->yyin_r
 )
 ) != 
 (-1) 
 && c != '\n'; ++n ) (&yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[number_to_move])[n] = (char) c; if ( c == '\n' ) (&yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[number_to_move])[n++] = (char) c; if ( c == 
 (-1) 
 && ferror( yyg->yyin_r ) ) yy_fatal_error(data_flow,  "input in flex scanner failed" , yyscanner); yyg->yy_n_chars = n; } else { 
 (*__errno_location ())
 =0; while ( (yyg->yy_n_chars = fread((&yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[number_to_move]), 1, num_to_read, yyg->yyin_r))==0 && ferror(yyg->yyin_r)) { if( 
 (*__errno_location ()) 
 != 
 4
 ) { yy_fatal_error(data_flow,  "input in flex scanner failed" , yyscanner); break; } 
 (*__errno_location ())
 =0; clearerr(yyg->yyin_r); } }
                                 ;

  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars;
  }

 if ( yyg->yy_n_chars == 0 )
  {
  if ( number_to_move == 0 )
   {
   ret_val = 1;
   jq_yyrestart(data_flow, yyg->yyin_r ,yyscanner);
   }

  else
   {
   ret_val = 2;
   yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buffer_status =
    2;
   }
  }

 else
  ret_val = 0;

 if ((int) (yyg->yy_n_chars + number_to_move) > yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_size) {

  int new_size = yyg->yy_n_chars + number_to_move + (yyg->yy_n_chars >> 1);
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf = (char *) jq_yyrealloc(data_flow, (void *) yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf,new_size ,yyscanner );
  if ( ! yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf )
   yy_fatal_error(data_flow,  "out of dynamic memory in yy_get_next_buffer()" , yyscanner);
 }

 yyg->yy_n_chars += number_to_move;
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars] = 0;
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[yyg->yy_n_chars + 1] = 0;

 yyg->yytext_r = &yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf[0];

 return ret_val;
}



    static yy_state_type yy_get_previous_state (int *data_flow, yyscan_t yyscanner)
{
 yy_state_type yy_current_state;
 char *yy_cp;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 yy_current_state = yyg->yy_start;

 for ( yy_cp = yyg->yytext_r + 0; yy_cp < yyg->yy_c_buf_p; ++yy_cp )
  {
  YY_CHAR yy_c = (*yy_cp ? yy_ec[((unsigned int) (unsigned char) *yy_cp)] : 1);
  if ( yy_accept[yy_current_state] )
   {
   yyg->yy_last_accepting_state = yy_current_state;
   yyg->yy_last_accepting_cpos = yy_cp;
   }
  while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
   {
   yy_current_state = (int) yy_def[yy_current_state];
   if ( yy_current_state >= 157 )
    yy_c = yy_meta[(unsigned int) yy_c];
   }
  yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
  }

 return yy_current_state;
}






    static yy_state_type yy_try_NUL_trans (int *data_flow, yy_state_type yy_current_state , yyscan_t yyscanner)
{
 int yy_is_jam;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 char *yy_cp = yyg->yy_c_buf_p;

 YY_CHAR yy_c = 1;
 if ( yy_accept[yy_current_state] )
  {
  yyg->yy_last_accepting_state = yy_current_state;
  yyg->yy_last_accepting_cpos = yy_cp;
  }
 while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
  {
  yy_current_state = (int) yy_def[yy_current_state];
  if ( yy_current_state >= 157 )
   yy_c = yy_meta[(unsigned int) yy_c];
  }
 yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
 yy_is_jam = (yy_current_state == 156);

 (void)yyg;
 return yy_is_jam ? 0 : yy_current_state;
}
    void jq_yyrestart (int *data_flow, FILE * input_file , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if ( ! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
       ((void *)0)
       ) ){
        jq_yyensure_buffer_stack (data_flow, yyscanner);
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] =
            jq_yy_create_buffer(data_flow, yyg->yyin_r,16384 ,yyscanner);
 }

 jq_yy_init_buffer(data_flow, ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
                  ((void *)0)
                  ),input_file ,yyscanner);
 jq_yy_load_buffer_state(data_flow, yyscanner );
}





    void jq_yy_switch_to_buffer (int *data_flow, YY_BUFFER_STATE new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;






 jq_yyensure_buffer_stack (data_flow, yyscanner);
 if ( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
     ((void *)0)
     ) == new_buffer )
  return;

 if ( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
     ((void *)0)
     ) )
  {

  *yyg->yy_c_buf_p = yyg->yy_hold_char;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_pos = yyg->yy_c_buf_p;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars;
  }

 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = new_buffer;
 jq_yy_load_buffer_state(data_flow, yyscanner );






 yyg->yy_did_buffer_switch_on_eof = 1;
}

static void jq_yy_load_buffer_state (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 yyg->yy_n_chars = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars;
 yyg->yytext_r = yyg->yy_c_buf_p = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_pos;
 yyg->yyin_r = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_input_file;
 yyg->yy_hold_char = *yyg->yy_c_buf_p;
}







    YY_BUFFER_STATE jq_yy_create_buffer (int *data_flow, FILE * file, int size , yyscan_t yyscanner)
{
 YY_BUFFER_STATE b;

 b = (YY_BUFFER_STATE) jq_yyalloc(data_flow, sizeof( struct yy_buffer_state ) ,yyscanner );
 if ( ! b )
  yy_fatal_error(data_flow,  "out of dynamic memory in jq_yy_create_buffer()" , yyscanner);

 b->yy_buf_size = (yy_size_t)size;




 b->yy_ch_buf = (char *) jq_yyalloc(data_flow, b->yy_buf_size + 2 ,yyscanner );
 if ( ! b->yy_ch_buf )
  yy_fatal_error(data_flow,  "out of dynamic memory in jq_yy_create_buffer()" , yyscanner);

 b->yy_is_our_buffer = 1;

 jq_yy_init_buffer(data_flow, b,file ,yyscanner);

 return b;
}





    void jq_yy_delete_buffer (int *data_flow, YY_BUFFER_STATE b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if ( ! b )
  return;

 if ( b == ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
          ((void *)0)
          ) )
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = (YY_BUFFER_STATE) 0;

 if ( b->yy_is_our_buffer )
  jq_yyfree(data_flow, (void *) b->yy_ch_buf ,yyscanner );

 jq_yyfree(data_flow, (void *) b ,yyscanner );
}





    static void jq_yy_init_buffer (int *data_flow, YY_BUFFER_STATE b, FILE * file , yyscan_t yyscanner)

{
 int oerrno = 
             (*__errno_location ())
                  ;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 jq_yy_flush_buffer(data_flow, b ,yyscanner);

 b->yy_input_file = file;
 b->yy_fill_buffer = 1;





    if (b != ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
            ((void *)0)
            )){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;

 
(*__errno_location ()) 
      = oerrno;
}





    void jq_yy_flush_buffer (int *data_flow, YY_BUFFER_STATE b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if ( ! b )
  return;

 b->yy_n_chars = 0;





 b->yy_ch_buf[0] = 0;
 b->yy_ch_buf[1] = 0;

 b->yy_buf_pos = &b->yy_ch_buf[0];

 b->yy_at_bol = 1;
 b->yy_buffer_status = 0;

 if ( b == ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
          ((void *)0)
          ) )
  jq_yy_load_buffer_state(data_flow, yyscanner );
}







void jq_yypush_buffer_state (int *data_flow, YY_BUFFER_STATE new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if (new_buffer == 
                  ((void *)0)
                      )
  return;

 jq_yyensure_buffer_stack(data_flow, yyscanner);


 if ( ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
     ((void *)0)
     ) )
  {

  *yyg->yy_c_buf_p = yyg->yy_hold_char;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_buf_pos = yyg->yy_c_buf_p;
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_n_chars = yyg->yy_n_chars;
  }


 if (( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
    ((void *)0)
    ))
  yyg->yy_buffer_stack_top++;
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = new_buffer;


 jq_yy_load_buffer_state(data_flow, yyscanner );
 yyg->yy_did_buffer_switch_on_eof = 1;
}





void jq_yypop_buffer_state (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if (!( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
     ((void *)0)
     ))
  return;

 jq_yy_delete_buffer(data_flow, ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
                    ((void *)0)
                    ) ,yyscanner);
 yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = 
                           ((void *)0)
                               ;
 if (yyg->yy_buffer_stack_top > 0)
  --yyg->yy_buffer_stack_top;

 if (( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
    ((void *)0)
    )) {
  jq_yy_load_buffer_state(data_flow, yyscanner );
  yyg->yy_did_buffer_switch_on_eof = 1;
 }
}




static void jq_yyensure_buffer_stack (int *data_flow, yyscan_t yyscanner)
{
 yy_size_t num_to_alloc;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

 if (!yyg->yy_buffer_stack) {





  num_to_alloc = 1;
  yyg->yy_buffer_stack = (struct yy_buffer_state**)jq_yyalloc
        (data_flow, num_to_alloc * sizeof(struct yy_buffer_state*)
        , yyscanner);
  if ( ! yyg->yy_buffer_stack )
   yy_fatal_error(data_flow,  "out of dynamic memory in jq_yyensure_buffer_stack()" , yyscanner);

  memset(yyg->yy_buffer_stack, 0, num_to_alloc * sizeof(struct yy_buffer_state*));

  yyg->yy_buffer_stack_max = num_to_alloc;
  yyg->yy_buffer_stack_top = 0;
  return;
 }

 if (yyg->yy_buffer_stack_top >= (yyg->yy_buffer_stack_max) - 1){


  yy_size_t grow_size = 8 ;

  num_to_alloc = yyg->yy_buffer_stack_max + grow_size;
  yyg->yy_buffer_stack = (struct yy_buffer_state**)jq_yyrealloc
        (data_flow, yyg->yy_buffer_stack,
        num_to_alloc * sizeof(struct yy_buffer_state*)
        , yyscanner);
  if ( ! yyg->yy_buffer_stack )
   yy_fatal_error(data_flow,  "out of dynamic memory in jq_yyensure_buffer_stack()" , yyscanner);


  memset(yyg->yy_buffer_stack + yyg->yy_buffer_stack_max, 0, grow_size * sizeof(struct yy_buffer_state*));
  yyg->yy_buffer_stack_max = num_to_alloc;
 }
}







YY_BUFFER_STATE jq_yy_scan_buffer (int *data_flow, char * base, yy_size_t size , yyscan_t yyscanner)
{
 YY_BUFFER_STATE b;

 if ( size < 2 ||
      base[size-2] != 0 ||
      base[size-1] != 0 )

  return 0;

 b = (YY_BUFFER_STATE) jq_yyalloc(data_flow, sizeof( struct yy_buffer_state ) ,yyscanner );
 if ( ! b )
  yy_fatal_error(data_flow,  "out of dynamic memory in jq_yy_scan_buffer()" , yyscanner);

 b->yy_buf_size = size - 2;
 b->yy_buf_pos = b->yy_ch_buf = base;
 b->yy_is_our_buffer = 0;
 b->yy_input_file = 0;
 b->yy_n_chars = b->yy_buf_size;
 b->yy_is_interactive = 0;
 b->yy_at_bol = 1;
 b->yy_fill_buffer = 0;
 b->yy_buffer_status = 0;

 jq_yy_switch_to_buffer(data_flow, b ,yyscanner );

 return b;
}
YY_BUFFER_STATE jq_yy_scan_string (int *data_flow, const char * yystr , yyscan_t yyscanner)
{

 return jq_yy_scan_bytes(data_flow, yystr,strlen(yystr) ,yyscanner);
}
YY_BUFFER_STATE jq_yy_scan_bytes (int *data_flow, const char * yybytes, yy_size_t _yybytes_len , yyscan_t yyscanner)
{
 YY_BUFFER_STATE b;
 char *buf;
 yy_size_t n;
 yy_size_t i;


 n = _yybytes_len + 2;
 buf = (char *) jq_yyalloc(data_flow, n ,yyscanner );
 if ( ! buf )
  yy_fatal_error(data_flow,  "out of dynamic memory in jq_yy_scan_bytes()" , yyscanner);

 for ( i = 0; i < _yybytes_len; ++i )
  buf[i] = yybytes[i];

 buf[_yybytes_len] = buf[_yybytes_len+1] = 0;

 b = jq_yy_scan_buffer(data_flow, buf,n ,yyscanner);
 if ( ! b )
  yy_fatal_error(data_flow,  "bad buffer in jq_yy_scan_bytes()" , yyscanner);




 b->yy_is_our_buffer = 1;

 return b;
}

    static void yy_push_state (int *data_flow, int _new_state , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if ( yyg->yy_start_stack_ptr >= yyg->yy_start_stack_depth )
  {
  yy_size_t new_size;

  yyg->yy_start_stack_depth += 25;
  new_size = yyg->yy_start_stack_depth * sizeof( int );

  if ( ! yyg->yy_start_stack )
   yyg->yy_start_stack = (int *) jq_yyalloc(data_flow, new_size ,yyscanner );

  else
   yyg->yy_start_stack = (int *) jq_yyrealloc(data_flow, (void *) yyg->yy_start_stack,new_size ,yyscanner );

  if ( ! yyg->yy_start_stack )
   yy_fatal_error(data_flow,  "out of memory expanding start-condition stack" , yyscanner);
  }

 yyg->yy_start_stack[yyg->yy_start_stack_ptr++] = ((yyg->yy_start - 1) / 2);

 yyg->yy_start = 1 + 2 *(_new_state);
}

    static void yy_pop_state (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 if ( --yyg->yy_start_stack_ptr < 0 )
  yy_fatal_error(data_flow,  "start-condition stack underflow" , yyscanner);

 yyg->yy_start = 1 + 2 *(yyg->yy_start_stack[yyg->yy_start_stack_ptr]);
}

    static int yy_top_state (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 return yyg->yy_start_stack[yyg->yy_start_stack_ptr - 1];
}





static void yy_fatal_error (int *data_flow, const char* msg , yyscan_t yyscanner)
{
 struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 (void)yyg;
 (void) fprintf( 
                stderr
                      , "%s\n", msg );
 exit( 2 );
}
int jq_yyget_extra (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yyextra_r;
}




int jq_yyget_lineno (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        if (! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
             ((void *)0)
             ))
            return 0;

    return (yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_bs_lineno);
}




int jq_yyget_column (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        if (! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
             ((void *)0)
             ))
            return 0;

    return (yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_bs_column);
}




FILE *jq_yyget_in (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yyin_r;
}




FILE *jq_yyget_out (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yyout_r;
}




yy_size_t jq_yyget_leng (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yyleng_r;
}





char *jq_yyget_text (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yytext_r;
}





void jq_yyset_extra (int *data_flow, int user_defined , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yyextra_r = user_defined ;
}





void jq_yyset_lineno (int *data_flow, int _line_number , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;


        if (! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
             ((void *)0)
             ) )
           yy_fatal_error(data_flow,  "jq_yyset_lineno called with no buffer" , yyscanner);

    (yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_bs_lineno) = _line_number;
}





void jq_yyset_column (int *data_flow, int _column_no , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;


        if (! ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
             ((void *)0)
             ) )
           yy_fatal_error(data_flow,  "jq_yyset_column called with no buffer" , yyscanner);

    (yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_bs_column) = _column_no;
}







void jq_yyset_in (int *data_flow, FILE * _in_str , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yyin_r = _in_str ;
}

void jq_yyset_out (int *data_flow, FILE * _out_str , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yyout_r = _out_str ;
}

int jq_yyget_debug (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yy_flex_debug_r;
}

void jq_yyset_debug (int *data_flow, int _bdebug , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yy_flex_debug_r = _bdebug ;
}



YYSTYPE * jq_yyget_lval (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yylval_r;
}

void jq_yyset_lval (int *data_flow, YYSTYPE * yylval_param , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yylval_r = yylval_param;
}

location *jq_yyget_lloc (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyg->yylloc_r;
}

void jq_yyset_lloc (int *data_flow, location * yylloc_param , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyg->yylloc_r = yylloc_param;
}
int jq_yylex_init(int *data_flow, yyscan_t* ptr_yy_globals)

{
    if (ptr_yy_globals == 
                         ((void *)0)
                             ){
        
       (*__errno_location ()) 
             = 
               22
                     ;
        return 1;
    }

    *ptr_yy_globals = (yyscan_t) jq_yyalloc (data_flow,  sizeof( struct yyguts_t ), 
                                                                        ((void *)0) 
                                                                             );

    if (*ptr_yy_globals == 
                          ((void *)0)
                              ){
        
       (*__errno_location ()) 
             = 
               12
                     ;
        return 1;
    }


    memset(*ptr_yy_globals,0x00,sizeof(struct yyguts_t));

    return yy_init_globals (data_flow,  *ptr_yy_globals );
}
int jq_yylex_init_extra(int *data_flow, int yy_user_defined,yyscan_t* ptr_yy_globals )

{
    struct yyguts_t dummy_yyguts;

    jq_yyset_extra (data_flow, yy_user_defined, &dummy_yyguts);

    if (ptr_yy_globals == 
                         ((void *)0)
                             ){
        
       (*__errno_location ()) 
             = 
               22
                     ;
        return 1;
    }

    *ptr_yy_globals = (yyscan_t) jq_yyalloc (data_flow,  sizeof( struct yyguts_t ), &dummy_yyguts );

    if (*ptr_yy_globals == 
                          ((void *)0)
                              ){
        
       (*__errno_location ()) 
             = 
               12
                     ;
        return 1;
    }



    memset(*ptr_yy_globals,0x00,sizeof(struct yyguts_t));

    jq_yyset_extra (data_flow, yy_user_defined, *ptr_yy_globals);

    return yy_init_globals (data_flow,  *ptr_yy_globals );
}

static int yy_init_globals (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;




    yyg->yy_buffer_stack = 0;
    yyg->yy_buffer_stack_top = 0;
    yyg->yy_buffer_stack_max = 0;
    yyg->yy_c_buf_p = (char *) 0;
    yyg->yy_init = 0;
    yyg->yy_start = 0;

    yyg->yy_start_stack_ptr = 0;
    yyg->yy_start_stack_depth = 0;
    yyg->yy_start_stack = 
                          ((void *)0)
                              ;






    yyg->yyin_r = (FILE *) 0;
    yyg->yyout_r = (FILE *) 0;





    return 0;
}


int jq_yylex_destroy (int *data_flow, yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;


 while(( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
      ((void *)0)
      )){
  jq_yy_delete_buffer(data_flow, ( yyg->yy_buffer_stack ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] : 
                     ((void *)0)
                     ) ,yyscanner );
  yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] = 
                            ((void *)0)
                                ;
  jq_yypop_buffer_state(data_flow, yyscanner);
 }


 jq_yyfree(data_flow, yyg->yy_buffer_stack ,yyscanner);
 yyg->yy_buffer_stack = 
                       ((void *)0)
                           ;


        jq_yyfree(data_flow, yyg->yy_start_stack ,yyscanner );
        yyg->yy_start_stack = 
                             ((void *)0)
                                 ;



    yy_init_globals(data_flow,  yyscanner);


    jq_yyfree (data_flow,  yyscanner , yyscanner );
    yyscanner = 
               ((void *)0)
                   ;
    return 0;
}
static int try_exit(int *data_flow, int c, int state, yyscan_t yyscanner) {
  char match = 0;
  int ret;
  switch (state) {
  case 1: match = ret = ')'; break;
  case 2: match = ret = ']'; break;
  case 3: match = ret = '}'; break;

  case 4:
    match = ')';
    ret = 299;
    break;

  default:

    return 258;
  }
  
 ((
 match
 ) ? (void) (0) : __assert_fail (
 "match"
 , "src/lexer.l", 155, __PRETTY_FUNCTION__))
              ;
  if (match == c) {
    yy_pop_state(data_flow, yyscanner);
    return ret;
  } else {

    return 258;
  }
}

static int enter(int *data_flow, int c, int currstate, yyscan_t yyscanner) {
  int state = 0;
  switch (c) {
  case '(': state = 1; break;
  case '[': state = 2; break;
  case '{': state = 3; break;
  case 298: state = 4; break;
  }
  
 ((
 state
 ) ? (void) (0) : __assert_fail (
 "state"
 , "src/lexer.l", 173, __PRETTY_FUNCTION__))
              ;
  yy_push_state(data_flow, state, yyscanner);
  return c;
}

void* jq_yyalloc(int *data_flow, size_t sz,void* extra) {
  return jv_mem_alloc(sz);
}
void* jq_yyrealloc(int *data_flow, void* p,size_t sz,void* extra) {
  return jv_mem_realloc(data_flow, p, sz);
}
void jq_yyfree(int *data_flow, void* p,void* extra) {
  jv_mem_free(p);
}
