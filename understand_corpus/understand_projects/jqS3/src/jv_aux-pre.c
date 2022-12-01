











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

static int parse_slice(int *data_flow, jv j, jv slice, int* pstart, int* pend) {

  jv start_jv = jv_object_get(jv_copy(slice), jv_string("start"));
  jv end_jv = jv_object_get(slice, jv_string("end"));
  if (jv_get_kind(start_jv) == JV_KIND_NULL) {
    jv_free(start_jv);
    start_jv = jv_number(0);
  }
  int len;
  if (jv_get_kind(j) == JV_KIND_ARRAY) {
    len = jv_array_length(j);
  } else if (jv_get_kind(j) == JV_KIND_STRING) {
    len = jv_string_length_codepoints(data_flow, j);
  } else {
    jv_free(j);
    return 0;
  }
  if (jv_get_kind(end_jv) == JV_KIND_NULL) {
    jv_free(end_jv);
    end_jv = jv_number(len);
  }
  if (jv_get_kind(start_jv) != JV_KIND_NUMBER ||
      jv_get_kind(end_jv) != JV_KIND_NUMBER) {
    jv_free(start_jv);
    jv_free(end_jv);
    return 0;
  } else {
    double dstart = jv_number_value(start_jv);
    double dend = jv_number_value(end_jv);
    if (dstart < 0) dstart += len;
    if (dend < 0) dend += len;
    if (dstart < 0) dstart = 0;
    if (dstart > len) dstart = len;

    int start = (int)dstart;
    int end = (dend > len) ? len : (int)dend;

    if(end < dend) end += 1;

    if (end > len) end = len;
    if (end < start) end = start;
    
   ((
   0 <= start && start <= end && end <= len
   ) ? (void) (0) : __assert_fail (
   "0 <= start && start <= end && end <= len"
   , "jv_aux.c", 47, __PRETTY_FUNCTION__))
                                                   ;
    *pstart = start;
    *pend = end;
    return 1;
  }
}

jv jv_get(int *data_flow, jv t, jv k) {
  jv v;
  if (jv_get_kind(t) == JV_KIND_OBJECT && jv_get_kind(k) == JV_KIND_STRING) {
    v = jv_object_get(t, k);
    if (!jv_is_valid(data_flow, v)) {
      jv_free(v);
      v = jv_null();
    }
  } else if (jv_get_kind(t) == JV_KIND_ARRAY && jv_get_kind(k) == JV_KIND_NUMBER) {
    if(jv_is_integer(data_flow, k)){
      int idx = (int)jv_number_value(k);
      if (idx < 0)
        idx += jv_array_length(jv_copy(t));
      v = jv_array_get(t, idx);
      if (!jv_is_valid(data_flow, v)) {
        jv_free(v);
        v = jv_null();
      }
    } else {
      jv_free(t);
      jv_free(k);
      v = jv_null();
    }
  } else if (jv_get_kind(t) == JV_KIND_ARRAY && jv_get_kind(k) == JV_KIND_OBJECT) {
    int start, end;
    if (parse_slice(data_flow, jv_copy(t), k, &start, &end)) {
      v = jv_array_slice(data_flow, t, start, end);
    } else {
      jv_free(t);
      v = jv_invalid_with_msg(jv_string_fmt(data_flow, "Start and end indices of an array slice must be numbers"));
    }
  } else if (jv_get_kind(t) == JV_KIND_STRING && jv_get_kind(k) == JV_KIND_OBJECT) {
    int start, end;
    if (parse_slice(data_flow, jv_copy(t), k, &start, &end)) {
      v = jv_string_slice(data_flow, t, start, end);
    } else {
      v = jv_invalid_with_msg(jv_string_fmt(data_flow, "Start and end indices of an string slice must be numbers"));
      jv_free(t);
    }
  } else if (jv_get_kind(t) == JV_KIND_ARRAY && jv_get_kind(k) == JV_KIND_ARRAY) {
    v = jv_array_indexes(data_flow, t, k);
  } else if (jv_get_kind(t) == JV_KIND_NULL &&
             (jv_get_kind(k) == JV_KIND_STRING ||
              jv_get_kind(k) == JV_KIND_NUMBER ||
              jv_get_kind(k) == JV_KIND_OBJECT)) {
    jv_free(t);
    jv_free(k);
    v = jv_null();
  } else {





    if (jv_get_kind(k) == JV_KIND_STRING && jv_string_length_bytes(jv_copy(k)) < 30) {
      v = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot index %s with string \"%s\"",
                                            jv_kind_name(data_flow, jv_get_kind(t)),
                                            jv_string_value(k)));
    } else {
      v = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot index %s with %s",
                                            jv_kind_name(data_flow, jv_get_kind(t)),
                                            jv_kind_name(data_flow, jv_get_kind(k))));
    }
    jv_free(t);
    jv_free(k);
  }
  return v;
}

jv jv_set(int *data_flow, jv t, jv k, jv v) {
  if (!jv_is_valid(data_flow, v)) {
    jv_free(t);
    jv_free(k);
    return v;
  }
  int isnull = jv_get_kind(t) == JV_KIND_NULL;
  if (jv_get_kind(k) == JV_KIND_STRING &&
      (jv_get_kind(t) == JV_KIND_OBJECT || isnull)) {
    if (isnull) t = jv_object(data_flow);
    t = jv_object_set(data_flow, t, k, v);
  } else if (jv_get_kind(k) == JV_KIND_NUMBER &&
             (jv_get_kind(t) == JV_KIND_ARRAY || isnull)) {
    if (isnull) t = jv_array();
    t = jv_array_set(t, (int)jv_number_value(k), v);
  } else if (jv_get_kind(k) == JV_KIND_OBJECT &&
             (jv_get_kind(t) == JV_KIND_ARRAY || isnull)) {
    if (isnull) t = jv_array();
    int start, end;
    if (parse_slice(data_flow, jv_copy(t), k, &start, &end)) {
      if (jv_get_kind(v) == JV_KIND_ARRAY) {
        int array_len = jv_array_length(jv_copy(t));
        
       ((
       0 <= start && start <= end && end <= array_len
       ) ? (void) (0) : __assert_fail (
       "0 <= start && start <= end && end <= array_len"
       , "jv_aux.c", 145, __PRETTY_FUNCTION__))
                                                             ;
        int slice_len = end - start;
        int insert_len = jv_array_length(jv_copy(v));
        if (slice_len < insert_len) {

          int shift = insert_len - slice_len;
          for (int i = array_len - 1; i >= end; i--) {
            t = jv_array_set(t, i + shift, jv_array_get(jv_copy(t), i));
          }
        } else if (slice_len > insert_len) {

          int shift = slice_len - insert_len;
          for (int i = end; i < array_len; i++) {
            t = jv_array_set(t, i - shift, jv_array_get(jv_copy(t), i));
          }
          t = jv_array_slice(data_flow, t, 0, array_len - shift);
        }
        for (int i=0; i < insert_len; i++) {
          t = jv_array_set(t, start + i, jv_array_get(jv_copy(v), i));
        }
        jv_free(v);
      } else {
        jv_free(t);
        jv_free(v);
        t = jv_invalid_with_msg(jv_string_fmt(data_flow, "A slice of an array can only be assigned another array"));
      }
    } else {
      jv_free(t);
      jv_free(v);
      t = jv_invalid_with_msg(jv_string_fmt(data_flow, "Start and end indices of an array slice must be numbers"));
    }
  } else {
    jv err = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot update field at %s index of %s",
                                               jv_kind_name(data_flow, jv_get_kind(k)),
                                               jv_kind_name(data_flow, jv_get_kind(t))));
    jv_free(t);
    jv_free(k);
    jv_free(v);
    t = err;
  }
  return t;
}

jv jv_has(int *data_flow, jv t, jv k) {
  
 ((
 jv_is_valid(data_flow, t)
 ) ? (void) (0) : __assert_fail (
 "jv_is_valid(t)"
 , "jv_aux.c", 189, __PRETTY_FUNCTION__))
                       ;
  
 ((
 jv_is_valid(data_flow, k)
 ) ? (void) (0) : __assert_fail (
 "jv_is_valid(k)"
 , "jv_aux.c", 190, __PRETTY_FUNCTION__))
                       ;
  jv ret;
  if (jv_get_kind(t) == JV_KIND_NULL) {
    jv_free(t);
    jv_free(k);
    ret = jv_false(data_flow);
  } else if (jv_get_kind(t) == JV_KIND_OBJECT &&
             jv_get_kind(k) == JV_KIND_STRING) {
    jv elem = jv_object_get(t, k);
    ret = jv_bool(data_flow, jv_is_valid(data_flow, elem));
    jv_free(elem);
  } else if (jv_get_kind(t) == JV_KIND_ARRAY &&
             jv_get_kind(k) == JV_KIND_NUMBER) {
    jv elem = jv_array_get(t, (int)jv_number_value(k));
    ret = jv_bool(data_flow, jv_is_valid(data_flow, elem));
    jv_free(elem);
  } else {
    ret = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot check whether %s has a %s key",
                                            jv_kind_name(data_flow, jv_get_kind(t)),
                                            jv_kind_name(data_flow, jv_get_kind(k))));
    jv_free(t);
    jv_free(k);
  }
  return ret;
}


static jv jv_dels(int *data_flow, jv t, jv keys) {
  
 ((
 jv_get_kind(keys) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(keys) == JV_KIND_ARRAY"
 , "jv_aux.c", 218, __PRETTY_FUNCTION__))
                                           ;
  
 ((
 jv_is_valid(data_flow, t)
 ) ? (void) (0) : __assert_fail (
 "jv_is_valid(t)"
 , "jv_aux.c", 219, __PRETTY_FUNCTION__))
                       ;

  if (jv_get_kind(t) == JV_KIND_NULL || jv_array_length(jv_copy(keys)) == 0) {

  } else if (jv_get_kind(t) == JV_KIND_ARRAY) {

    jv neg_keys = jv_array();
    jv nonneg_keys = jv_array();
    jv new_array = jv_array();
    jv starts = jv_array(), ends = jv_array();
    for (int jv_len__ = jv_array_length(jv_copy(keys)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key; i < jv_len__ ? (key = jv_array_get(jv_copy(keys), i), 1) : 0; i++) {
      if (jv_get_kind(key) == JV_KIND_NUMBER) {
        if (jv_number_value(key) < 0) {
          neg_keys = jv_array_append(neg_keys, key);
        } else {
          nonneg_keys = jv_array_append(nonneg_keys, key);
        }
      } else if (jv_get_kind(key) == JV_KIND_OBJECT) {
        int start, end;
        if (parse_slice(data_flow, jv_copy(t), key, &start, &end)) {
          starts = jv_array_append(starts, jv_number(start));
          ends = jv_array_append(ends, jv_number(end));
        } else {
          jv_free(new_array);
          new_array = jv_invalid_with_msg(jv_string_fmt(data_flow, "Start and end indices of an array slice must be numbers"));
          goto arr_out;
        }
      } else {
        jv_free(new_array);
        new_array = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot delete %s element of array",
                                                      jv_kind_name(data_flow, jv_get_kind(key))));
        jv_free(key);
        goto arr_out;
      }
    }

    int neg_idx = 0;
    int nonneg_idx = 0;
    int len = jv_array_length(jv_copy(t));
    for (int jv_len__ = jv_array_length(jv_copy(t)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv elem; i < jv_len__ ? (elem = jv_array_get(jv_copy(t), i), 1) : 0; i++) {
      int del = 0;
      while (neg_idx < jv_array_length(jv_copy(neg_keys))) {
        int delidx = len + (int)jv_number_value(jv_array_get(jv_copy(neg_keys), neg_idx));
        if (i == delidx) {
          del = 1;
        }
        if (i < delidx) {
          break;
        }
        neg_idx++;
      }
      while (nonneg_idx < jv_array_length(jv_copy(nonneg_keys))) {
        int delidx = (int)jv_number_value(jv_array_get(jv_copy(nonneg_keys), nonneg_idx));
        if (i == delidx) {
          del = 1;
        }
        if (i < delidx) {
          break;
        }
        nonneg_idx++;
      }
      for (int sidx=0; !del && sidx<jv_array_length(jv_copy(starts)); sidx++) {
        if ((int)jv_number_value(jv_array_get(jv_copy(starts), sidx)) <= i &&
            i < (int)jv_number_value(jv_array_get(jv_copy(ends), sidx))) {
          del = 1;
        }
      }
      if (!del)
        new_array = jv_array_append(new_array, elem);
      else
        jv_free(elem);
    }
  arr_out:
    jv_free(neg_keys);
    jv_free(nonneg_keys);
    jv_free(starts);
    jv_free(ends);
    jv_free(t);
    t = new_array;
  } else if (jv_get_kind(t) == JV_KIND_OBJECT) {
    for (int jv_len__ = jv_array_length(jv_copy(keys)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv k; i < jv_len__ ? (k = jv_array_get(jv_copy(keys), i), 1) : 0; i++) {
      if (jv_get_kind(k) != JV_KIND_STRING) {
        jv_free(t);
        t = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot delete %s field of object",
                                              jv_kind_name(data_flow, jv_get_kind(k))));
        jv_free(k);
        break;
      }
      t = jv_object_delete(data_flow, t, k);
    }
  } else {
    jv err = jv_invalid_with_msg(jv_string_fmt(data_flow, "Cannot delete fields from %s",
                                               jv_kind_name(data_flow, jv_get_kind(t))));
    jv_free(t);
    t = err;
  }
  jv_free(keys);
  return t;
}

jv jv_setpath(int *data_flow, jv root, jv path, jv value) {
  if (jv_get_kind(path) != JV_KIND_ARRAY) {
    jv_free(value);
    jv_free(root);
    jv_free(path);
    return jv_invalid_with_msg(jv_string("Path must be specified as an array"));
  }
  if (!jv_is_valid(data_flow, root)){
    jv_free(value);
    jv_free(path);
    return root;
  }
  if (jv_array_length(jv_copy(path)) == 0) {
    jv_free(path);
    jv_free(root);
    return value;
  }
  jv pathcurr = jv_array_get(jv_copy(path), 0);
  jv pathrest = jv_array_slice(data_flow, path, 1, jv_array_length(jv_copy(path)));
  return jv_set(data_flow, root, pathcurr,
                jv_setpath(data_flow, jv_get(data_flow, jv_copy(root), jv_copy(pathcurr)), pathrest, value));
}

jv jv_getpath(int *data_flow, jv root, jv path) {
  if (jv_get_kind(path) != JV_KIND_ARRAY) {
    jv_free(root);
    jv_free(path);
    return jv_invalid_with_msg(jv_string("Path must be specified as an array"));
  }
  if (!jv_is_valid(data_flow, root)) {
    jv_free(path);
    return root;
  }
  if (jv_array_length(jv_copy(path)) == 0) {
    jv_free(path);
    return root;
  }
  jv pathcurr = jv_array_get(jv_copy(path), 0);
  jv pathrest = jv_array_slice(data_flow, path, 1, jv_array_length(jv_copy(path)));
  return jv_getpath(data_flow, jv_get(data_flow, root, pathcurr), pathrest);
}


static jv delpaths_sorted(int *data_flow, jv object, jv paths, int start) {
  jv delkeys = jv_array();
  for (int i=0; i<jv_array_length(jv_copy(paths));) {
    int j = i;
    
   ((
   jv_array_length(jv_array_get(jv_copy(paths), i)) > start
   ) ? (void) (0) : __assert_fail (
   "jv_array_length(jv_array_get(jv_copy(paths), i)) > start"
   , "jv_aux.c", 366, __PRETTY_FUNCTION__))
                                                                   ;
    int delkey = jv_array_length(jv_array_get(jv_copy(paths), i)) == start + 1;
    jv key = jv_array_get(jv_array_get(jv_copy(paths), i), start);
    while (j < jv_array_length(jv_copy(paths)) &&
           jv_equal(data_flow, jv_copy(key), jv_array_get(jv_array_get(jv_copy(paths), j), start)))
      j++;

    if (delkey) {

      delkeys = jv_array_append(delkeys, key);
    } else {

      jv subobject = jv_get(data_flow, jv_copy(object), jv_copy(key));
      if (!jv_is_valid(data_flow, subobject)) {
        jv_free(key);
        jv_free(object);
        object = subobject;
        break;
      } else if (jv_get_kind(subobject) == JV_KIND_NULL) {
        jv_free(key);
        jv_free(subobject);
      } else {
        jv newsubobject = delpaths_sorted(data_flow, subobject, jv_array_slice(data_flow, jv_copy(paths), i, j), start+1);
        if (!jv_is_valid(data_flow, newsubobject)) {
          jv_free(key);
          jv_free(object);
          object = newsubobject;
          break;
        }
        object = jv_set(data_flow, object, key, newsubobject);
      }
      if (!jv_is_valid(data_flow, object)) break;
    }
    i = j;
  }
  jv_free(paths);
  if (jv_is_valid(data_flow, object))
    object = jv_dels(data_flow, object, delkeys);
  else
    jv_free(delkeys);
  return object;
}

jv jv_delpaths(int *data_flow, jv object, jv paths) {
  if (jv_get_kind(paths) != JV_KIND_ARRAY) {
    jv_free(object);
    jv_free(paths);
    return jv_invalid_with_msg(jv_string("Paths must be specified as an array"));
  }
  paths = jv_sort(data_flow, paths, jv_copy(paths));
  for (int jv_len__ = jv_array_length(jv_copy(paths)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv elem; i < jv_len__ ? (elem = jv_array_get(jv_copy(paths), i), 1) : 0; i++) {
    if (jv_get_kind(elem) != JV_KIND_ARRAY) {
      jv_free(object);
      jv_free(paths);
      jv err = jv_invalid_with_msg(jv_string_fmt(data_flow, "Path must be specified as array, not %s",
                                                 jv_kind_name(data_flow, jv_get_kind(elem))));
      jv_free(elem);
      return err;
    }
    jv_free(elem);
  }
  if (jv_array_length(jv_copy(paths)) == 0) {

    jv_free(paths);
    return object;
  }
  if (jv_array_length(jv_array_get(jv_copy(paths), 0)) == 0) {

    jv_free(paths);
    jv_free(object);
    return jv_null();
  }
  return delpaths_sorted(data_flow, object, paths, 0);
}


static int string_cmp(const void* pa, const void* pb){
  const jv* a = pa;
  const jv* b = pb;
  int lena = jv_string_length_bytes(jv_copy(*a));
  int lenb = jv_string_length_bytes(jv_copy(*b));
  int minlen = lena < lenb ? lena : lenb;
  int r = memcmp(jv_string_value(*a), jv_string_value(*b), minlen);
  if (r == 0) r = lena - lenb;
  return r;
}

jv jv_keys_unsorted(int *data_flow, jv x) {
  if (jv_get_kind(x) != JV_KIND_OBJECT)
    return jv_keys(x);
  jv answer = jv_array_sized(jv_object_length(jv_copy(x)));
  for (int jv_i__ = jv_object_iter(x), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key, value; jv_object_iter_valid((x), jv_i__) ? (key = jv_object_iter_key(x, jv_i__), value = jv_object_iter_value(x, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(x, jv_i__)) {
    answer = jv_array_append(answer, key);
    jv_free(value);
  }
  jv_free(x);
  return answer;
}

jv jv_keys(jv x) {
  if (jv_get_kind(x) == JV_KIND_OBJECT) {
    int nkeys = jv_object_length(jv_copy(x));
    jv* keys = jv_mem_calloc(sizeof(jv), nkeys);
    int kidx = 0;
    for (int jv_i__ = jv_object_iter(x), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key, value; jv_object_iter_valid((x), jv_i__) ? (key = jv_object_iter_key(x, jv_i__), value = jv_object_iter_value(x, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(x, jv_i__)) {
      keys[kidx++] = key;
      jv_free(value);
    }
    qsort(keys, nkeys, sizeof(jv), string_cmp);
    jv answer = jv_array_sized(nkeys);
    for (int i = 0; i<nkeys; i++) {
      answer = jv_array_append(answer, keys[i]);
    }
    jv_mem_free(keys);
    jv_free(x);
    return answer;
  } else if (jv_get_kind(x) == JV_KIND_ARRAY) {
    int n = jv_array_length(x);
    jv answer = jv_array();
    for (int i=0; i<n; i++){
      answer = jv_array_set(answer, i, jv_number(i));
    }
    return answer;
  } else {
    
   ((
   0 && "jv_keys passed something neither object nor array"
   ) ? (void) (0) : __assert_fail (
   "0 && \"jv_keys passed something neither object nor array\""
   , "jv_aux.c", 490, __PRETTY_FUNCTION__))
                                                                   ;
    return jv_invalid();
  }
}

int jv_cmp(jv a, jv b) {
  if (jv_get_kind(a) != jv_get_kind(b)) {
    int r = (int)jv_get_kind(a) - (int)jv_get_kind(b);
    jv_free(a);
    jv_free(b);
    return r;
  }
  int r = 0;
  switch (jv_get_kind(a)) {
  default:
    
   ((
   0 && "invalid kind passed to jv_cmp"
   ) ? (void) (0) : __assert_fail (
   "0 && \"invalid kind passed to jv_cmp\""
   , "jv_aux.c", 505, __PRETTY_FUNCTION__))
                                               ;
  case JV_KIND_NULL:
  case JV_KIND_FALSE:
  case JV_KIND_TRUE:

    r = 0;
    break;

  case JV_KIND_NUMBER: {
    double da = jv_number_value(a), db = jv_number_value(b);


    if (da != da) r = jv_cmp(jv_null(), jv_number(db));
    else if (db != db) r = jv_cmp(jv_number(da), jv_null());
    else if (da < db) r = -1;
    else if (da == db) r = 0;
    else r = 1;
    break;
  }

  case JV_KIND_STRING: {
    r = string_cmp(&a, &b);
    break;
  }

  case JV_KIND_ARRAY: {

    int i = 0;
    while (r == 0) {
      int a_done = i >= jv_array_length(jv_copy(a));
      int b_done = i >= jv_array_length(jv_copy(b));
      if (a_done || b_done) {
        r = b_done - a_done;
        break;
      }
      jv xa = jv_array_get(jv_copy(a), i);
      jv xb = jv_array_get(jv_copy(b), i);
      r = jv_cmp(xa, xb);
      i++;
    }
    break;
  }

  case JV_KIND_OBJECT: {
    jv keys_a = jv_keys(jv_copy(a));
    jv keys_b = jv_keys(jv_copy(b));
    r = jv_cmp(jv_copy(keys_a), keys_b);
    if (r == 0) {
      for (int jv_len__ = jv_array_length(jv_copy(keys_a)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key; i < jv_len__ ? (key = jv_array_get(jv_copy(keys_a), i), 1) : 0; i++) {
        jv xa = jv_object_get(jv_copy(a), jv_copy(key));
        jv xb = jv_object_get(jv_copy(b), key);
        r = jv_cmp(xa, xb);
        if (r) break;
      }
    }
    jv_free(keys_a);
    break;
  }
  }

  jv_free(a);
  jv_free(b);
  return r;
}


struct sort_entry {
  jv object;
  jv key;
  int index;
};

static int sort_cmp(const void* pa, const void* pb) {
  const struct sort_entry* a = pa;
  const struct sort_entry* b = pb;
  int r = jv_cmp(jv_copy(a->key), jv_copy(b->key));

  return r ? r : (a->index - b->index);
}

static struct sort_entry* sort_items(int *data_flow, jv objects, jv keys) {
  
 ((
 jv_get_kind(objects) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(objects) == JV_KIND_ARRAY"
 , "jv_aux.c", 586, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(keys) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(keys) == JV_KIND_ARRAY"
 , "jv_aux.c", 587, __PRETTY_FUNCTION__))
                                           ;
  
 ((
 jv_array_length(jv_copy(objects)) == jv_array_length(jv_copy(keys))
 ) ? (void) (0) : __assert_fail (
 "jv_array_length(jv_copy(objects)) == jv_array_length(jv_copy(keys))"
 , "jv_aux.c", 588, __PRETTY_FUNCTION__))
                                                                            ;
  int n = jv_array_length(jv_copy(objects));
  struct sort_entry* entries = jv_mem_calloc(sizeof(struct sort_entry), n);
  for (int i=0; i<n; i++) {
    entries[i].object = jv_array_get(jv_copy(objects), i);
    entries[i].key = jv_array_get(jv_copy(keys), i);
    entries[i].index = i;
  }
  jv_free(objects);
  jv_free(keys);
  qsort(entries, n, sizeof(struct sort_entry), sort_cmp);
  return entries;
}

jv jv_sort(int *data_flow, jv objects, jv keys) {
  
 ((
 jv_get_kind(objects) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(objects) == JV_KIND_ARRAY"
 , "jv_aux.c", 603, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(keys) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(keys) == JV_KIND_ARRAY"
 , "jv_aux.c", 604, __PRETTY_FUNCTION__))
                                           ;
  
 ((
 jv_array_length(jv_copy(objects)) == jv_array_length(jv_copy(keys))
 ) ? (void) (0) : __assert_fail (
 "jv_array_length(jv_copy(objects)) == jv_array_length(jv_copy(keys))"
 , "jv_aux.c", 605, __PRETTY_FUNCTION__))
                                                                            ;
  int n = jv_array_length(jv_copy(objects));
  struct sort_entry* entries = sort_items(data_flow, objects, keys);
  jv ret = jv_array();
  for (int i=0; i<n; i++) {
    jv_free(entries[i].key);
    ret = jv_array_set(ret, i, entries[i].object);
  }
  jv_mem_free(entries);
  return ret;
}

jv jv_group(int *data_flow, jv objects, jv keys) {
  
 ((
 jv_get_kind(objects) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(objects) == JV_KIND_ARRAY"
 , "jv_aux.c", 618, __PRETTY_FUNCTION__))
                                              ;
  
 ((
 jv_get_kind(keys) == JV_KIND_ARRAY
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(keys) == JV_KIND_ARRAY"
 , "jv_aux.c", 619, __PRETTY_FUNCTION__))
                                           ;
  
 ((
 jv_array_length(jv_copy(objects)) == jv_array_length(jv_copy(keys))
 ) ? (void) (0) : __assert_fail (
 "jv_array_length(jv_copy(objects)) == jv_array_length(jv_copy(keys))"
 , "jv_aux.c", 620, __PRETTY_FUNCTION__))
                                                                            ;
  int n = jv_array_length(jv_copy(objects));
  struct sort_entry* entries = sort_items(data_flow, objects, keys);
  jv ret = jv_array();
  if (n > 0) {
    jv curr_key = entries[0].key;
    jv group = jv_array_append(jv_array(), entries[0].object);
    for (int i = 1; i < n; i++) {
      if (jv_equal(data_flow, jv_copy(curr_key), jv_copy(entries[i].key))) {
        jv_free(entries[i].key);
      } else {
        jv_free(curr_key);
        curr_key = entries[i].key;
        ret = jv_array_append(ret, group);
        group = jv_array();
      }
      group = jv_array_append(group, entries[i].object);
    }
    jv_free(curr_key);
    ret = jv_array_append(ret, group);
  }
  jv_mem_free(entries);
  return ret;
}
