#ifdef LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__)), (x);})
#endif
#ifdef FULL_LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__), (!trigger && fprintf(stderr, "\nLAVALOG_MISS: %d: %s:%d\n", bugid, __FILE__, __LINE__))) && fflush(0), (x);})
#endif
#ifndef LAVALOG
#define LAVALOG(y,x,z)  (x)
#endif
#ifdef DUA_LOGGING
#define DFLOG(idx, val)  ({fprintf(stderr, "\nDFLOG:%d=%d: %s:%d\n", idx, val, __FILE__, __LINE__) && fflush(0), data_flow[idx]=val;})
#else
#define DFLOG(idx, val) {data_flow[idx]=val;}
#endif









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








enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));








extern int isblank (int) __attribute__ ((__nothrow__));






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__));






extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));













typedef int ptrdiff_t;
typedef unsigned int size_t;
typedef int wchar_t;




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




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







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
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__)) ;




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






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
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








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));









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

extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
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

extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
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



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));









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

extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;










typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




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



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;








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
typedef long int __fd_mask;
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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
extern int at_quick_exit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void quick_exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







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
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (int *data_flow, __const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (int *data_flow, __const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




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





extern void setkey (__const char *__key) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));















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


extern void *rawmemchr (__const void *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *memrchr (__const void *__s, int __c, size_t __n)
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


extern char *strchrnul (__const char *__s, int __c)
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
extern char *strcasestr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern char *basename (__const char *__filename) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






typedef int BOOL;





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
typedef uint8_t PCRE2_UCHAR8;
typedef uint16_t PCRE2_UCHAR16;
typedef uint32_t PCRE2_UCHAR32;

typedef const PCRE2_UCHAR8 *PCRE2_SPTR8;
typedef const PCRE2_UCHAR16 *PCRE2_SPTR16;
typedef const PCRE2_UCHAR32 *PCRE2_SPTR32;
struct pcre2_real_general_context_8; typedef struct pcre2_real_general_context_8 pcre2_general_context_8; struct pcre2_real_compile_context_8; typedef struct pcre2_real_compile_context_8 pcre2_compile_context_8; struct pcre2_real_match_context_8; typedef struct pcre2_real_match_context_8 pcre2_match_context_8; struct pcre2_real_convert_context_8; typedef struct pcre2_real_convert_context_8 pcre2_convert_context_8; struct pcre2_real_code_8; typedef struct pcre2_real_code_8 pcre2_code_8; struct pcre2_real_match_data_8; typedef struct pcre2_real_match_data_8 pcre2_match_data_8; struct pcre2_real_jit_stack_8; typedef struct pcre2_real_jit_stack_8 pcre2_jit_stack_8; typedef pcre2_jit_stack_8 *(*pcre2_jit_callback_8)(int *data_flow, void *); typedef struct pcre2_callout_block_8 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR8 mark; PCRE2_SPTR8 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; uint32_t callout_flags; } pcre2_callout_block_8; typedef struct pcre2_callout_enumerate_block_8 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; } pcre2_callout_enumerate_block_8; typedef struct pcre2_substitute_callout_block_8 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_8; extern __attribute__ ((visibility ("default"))) int pcre2_config_8(int *data_flow, uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_copy_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_create_8(int *data_flow, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_copy_8(int *data_flow, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_create_8(int *data_flow, pcre2_general_context_8 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_8(int *data_flow, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_8(int *data_flow, pcre2_compile_context_8 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_8(int *data_flow, pcre2_compile_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_8(int *data_flow, pcre2_compile_context_8 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_copy_8(int *data_flow, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_create_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_8(int *data_flow, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_8(int *data_flow, pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_8(int *data_flow, pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_8(int *data_flow, PCRE2_SPTR8, size_t, uint32_t, PCRE2_UCHAR8 **, size_t *, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_8(int *data_flow, PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_copy_8(int *data_flow, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_create_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_8(int *data_flow, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_8(int *data_flow, pcre2_match_context_8 *, int (*)(int *data_flow, pcre2_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_8(int *data_flow, pcre2_match_context_8 *, void (*)(int *data_flow, pcre2_substitute_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_8(int *data_flow, pcre2_match_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_8(int *data_flow, pcre2_match_context_8 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_compile_8(int *data_flow, PCRE2_SPTR8, size_t, uint32_t, int *, size_t *, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_8(int *data_flow, pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_8(int *data_flow, const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_with_tables_8(int *data_flow, const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_8(int *data_flow, const pcre2_code_8 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_8(int *data_flow, const pcre2_code_8 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_8(int *data_flow, uint32_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_from_pattern_8(int *data_flow, const pcre2_code_8 *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR8 pcre2_get_mark_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_8(int *data_flow, PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, PCRE2_SPTR8 *, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_8(int *data_flow, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_8(int *data_flow, pcre2_match_data_8 *, PCRE2_UCHAR8 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_8(int *data_flow, const pcre2_code_8 **, int32_t, uint8_t **, size_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_8(int *data_flow, pcre2_code_8 **, int32_t, const uint8_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_8(int *data_flow, const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_8(int *data_flow, uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, PCRE2_SPTR8, size_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_8(int *data_flow, pcre2_code_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_8 *pcre2_jit_stack_create_8(int *data_flow, size_t, size_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_8(int *data_flow, pcre2_match_context_8 *, pcre2_jit_callback_8, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_8(int *data_flow, pcre2_jit_stack_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_8(int *data_flow, int, PCRE2_UCHAR8 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_8(int *data_flow, pcre2_general_context_8 *);



struct pcre2_real_general_context_16; typedef struct pcre2_real_general_context_16 pcre2_general_context_16; struct pcre2_real_compile_context_16; typedef struct pcre2_real_compile_context_16 pcre2_compile_context_16; struct pcre2_real_match_context_16; typedef struct pcre2_real_match_context_16 pcre2_match_context_16; struct pcre2_real_convert_context_16; typedef struct pcre2_real_convert_context_16 pcre2_convert_context_16; struct pcre2_real_code_16; typedef struct pcre2_real_code_16 pcre2_code_16; struct pcre2_real_match_data_16; typedef struct pcre2_real_match_data_16 pcre2_match_data_16; struct pcre2_real_jit_stack_16; typedef struct pcre2_real_jit_stack_16 pcre2_jit_stack_16; typedef pcre2_jit_stack_16 *(*pcre2_jit_callback_16)(int *data_flow, void *); typedef struct pcre2_callout_block_16 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR16 mark; PCRE2_SPTR16 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; uint32_t callout_flags; } pcre2_callout_block_16; typedef struct pcre2_callout_enumerate_block_16 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; } pcre2_callout_enumerate_block_16; typedef struct pcre2_substitute_callout_block_16 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_16; extern __attribute__ ((visibility ("default"))) int pcre2_config_16(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_copy_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_create_16(void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_copy_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_create_16(pcre2_general_context_16 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_16(pcre2_compile_context_16 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_16(pcre2_compile_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_16(pcre2_compile_context_16 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_copy_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_16(PCRE2_SPTR16, size_t, uint32_t, PCRE2_UCHAR16 **, size_t *, pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_copy_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_16(pcre2_match_context_16 *, int (*)(int *data_flow, pcre2_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_16(pcre2_match_context_16 *, void (*)(int *data_flow, pcre2_substitute_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_16(pcre2_match_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_16(pcre2_match_context_16 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_compile_16(PCRE2_SPTR16, size_t, uint32_t, int *, size_t *, pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_16(pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_with_tables_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_16(const pcre2_code_16 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_16(const pcre2_code_16 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_16(uint32_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_from_pattern_16(const pcre2_code_16 *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR16 pcre2_get_mark_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_16(pcre2_match_data_16 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_16(const pcre2_code_16 *, PCRE2_SPTR16, PCRE2_SPTR16 *, PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_16(const pcre2_code_16 *, PCRE2_SPTR16); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_16(PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_16(pcre2_match_data_16 *, PCRE2_UCHAR16 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_16(const pcre2_code_16 **, int32_t, uint8_t **, size_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_16(pcre2_code_16 **, int32_t, const uint8_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_16(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_16(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, PCRE2_SPTR16, size_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_16(pcre2_code_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_16 *pcre2_jit_stack_create_16(size_t, size_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_16(pcre2_match_context_16 *, pcre2_jit_callback_16, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_16(pcre2_jit_stack_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_16(int, PCRE2_UCHAR16 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_16(pcre2_general_context_16 *);



struct pcre2_real_general_context_32; typedef struct pcre2_real_general_context_32 pcre2_general_context_32; struct pcre2_real_compile_context_32; typedef struct pcre2_real_compile_context_32 pcre2_compile_context_32; struct pcre2_real_match_context_32; typedef struct pcre2_real_match_context_32 pcre2_match_context_32; struct pcre2_real_convert_context_32; typedef struct pcre2_real_convert_context_32 pcre2_convert_context_32; struct pcre2_real_code_32; typedef struct pcre2_real_code_32 pcre2_code_32; struct pcre2_real_match_data_32; typedef struct pcre2_real_match_data_32 pcre2_match_data_32; struct pcre2_real_jit_stack_32; typedef struct pcre2_real_jit_stack_32 pcre2_jit_stack_32; typedef pcre2_jit_stack_32 *(*pcre2_jit_callback_32)(int *data_flow, void *); typedef struct pcre2_callout_block_32 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR32 mark; PCRE2_SPTR32 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; uint32_t callout_flags; } pcre2_callout_block_32; typedef struct pcre2_callout_enumerate_block_32 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; } pcre2_callout_enumerate_block_32; typedef struct pcre2_substitute_callout_block_32 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_32; extern __attribute__ ((visibility ("default"))) int pcre2_config_32(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_copy_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_create_32(void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_copy_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_create_32(pcre2_general_context_32 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_32(pcre2_compile_context_32 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_32(pcre2_compile_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_32(pcre2_compile_context_32 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_copy_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_32(PCRE2_SPTR32, size_t, uint32_t, PCRE2_UCHAR32 **, size_t *, pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_copy_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_32(pcre2_match_context_32 *, int (*)(int *data_flow, pcre2_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_32(pcre2_match_context_32 *, void (*)(int *data_flow, pcre2_substitute_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_32(pcre2_match_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_32(pcre2_match_context_32 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_compile_32(PCRE2_SPTR32, size_t, uint32_t, int *, size_t *, pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_32(pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_with_tables_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_32(const pcre2_code_32 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_32(const pcre2_code_32 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_32(uint32_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_from_pattern_32(const pcre2_code_32 *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR32 pcre2_get_mark_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_32(pcre2_match_data_32 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_32(const pcre2_code_32 *, PCRE2_SPTR32, PCRE2_SPTR32 *, PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_32(const pcre2_code_32 *, PCRE2_SPTR32); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_32(PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_32(pcre2_match_data_32 *, PCRE2_UCHAR32 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_32(const pcre2_code_32 **, int32_t, uint8_t **, size_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_32(pcre2_code_32 **, int32_t, const uint8_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_32(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_32(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, PCRE2_SPTR32, size_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_32(pcre2_code_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_32 *pcre2_jit_stack_create_32(size_t, size_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_32(pcre2_match_context_32 *, pcre2_jit_callback_32, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_32(pcre2_jit_stack_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_32(int, PCRE2_UCHAR32 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_32(pcre2_general_context_32 *);
enum {
  ucp_C,
  ucp_L,
  ucp_M,
  ucp_N,
  ucp_P,
  ucp_S,
  ucp_Z
};



enum {
  ucp_Cc,
  ucp_Cf,
  ucp_Cn,
  ucp_Co,
  ucp_Cs,
  ucp_Ll,
  ucp_Lm,
  ucp_Lo,
  ucp_Lt,
  ucp_Lu,
  ucp_Mc,
  ucp_Me,
  ucp_Mn,
  ucp_Nd,
  ucp_Nl,
  ucp_No,
  ucp_Pc,
  ucp_Pd,
  ucp_Pe,
  ucp_Pf,
  ucp_Pi,
  ucp_Po,
  ucp_Ps,
  ucp_Sc,
  ucp_Sk,
  ucp_Sm,
  ucp_So,
  ucp_Zl,
  ucp_Zp,
  ucp_Zs
};




enum {
  ucp_gbCR,
  ucp_gbLF,
  ucp_gbControl,
  ucp_gbExtend,
  ucp_gbPrepend,
  ucp_gbSpacingMark,
  ucp_gbL,
  ucp_gbV,
  ucp_gbT,
  ucp_gbLV,
  ucp_gbLVT,
  ucp_gbRegionalIndicator,
  ucp_gbOther,
  ucp_gbZWJ,
  ucp_gbExtended_Pictographic
};



enum {
  ucp_Unknown,
  ucp_Arabic,
  ucp_Armenian,
  ucp_Bengali,
  ucp_Bopomofo,
  ucp_Braille,
  ucp_Buginese,
  ucp_Buhid,
  ucp_Canadian_Aboriginal,
  ucp_Cherokee,
  ucp_Common,
  ucp_Coptic,
  ucp_Cypriot,
  ucp_Cyrillic,
  ucp_Deseret,
  ucp_Devanagari,
  ucp_Ethiopic,
  ucp_Georgian,
  ucp_Glagolitic,
  ucp_Gothic,
  ucp_Greek,
  ucp_Gujarati,
  ucp_Gurmukhi,
  ucp_Han,
  ucp_Hangul,
  ucp_Hanunoo,
  ucp_Hebrew,
  ucp_Hiragana,
  ucp_Inherited,
  ucp_Kannada,
  ucp_Katakana,
  ucp_Kharoshthi,
  ucp_Khmer,
  ucp_Lao,
  ucp_Latin,
  ucp_Limbu,
  ucp_Linear_B,
  ucp_Malayalam,
  ucp_Mongolian,
  ucp_Myanmar,
  ucp_New_Tai_Lue,
  ucp_Ogham,
  ucp_Old_Italic,
  ucp_Old_Persian,
  ucp_Oriya,
  ucp_Osmanya,
  ucp_Runic,
  ucp_Shavian,
  ucp_Sinhala,
  ucp_Syloti_Nagri,
  ucp_Syriac,
  ucp_Tagalog,
  ucp_Tagbanwa,
  ucp_Tai_Le,
  ucp_Tamil,
  ucp_Telugu,
  ucp_Thaana,
  ucp_Thai,
  ucp_Tibetan,
  ucp_Tifinagh,
  ucp_Ugaritic,
  ucp_Yi,

  ucp_Balinese,
  ucp_Cuneiform,
  ucp_Nko,
  ucp_Phags_Pa,
  ucp_Phoenician,

  ucp_Carian,
  ucp_Cham,
  ucp_Kayah_Li,
  ucp_Lepcha,
  ucp_Lycian,
  ucp_Lydian,
  ucp_Ol_Chiki,
  ucp_Rejang,
  ucp_Saurashtra,
  ucp_Sundanese,
  ucp_Vai,

  ucp_Avestan,
  ucp_Bamum,
  ucp_Egyptian_Hieroglyphs,
  ucp_Imperial_Aramaic,
  ucp_Inscriptional_Pahlavi,
  ucp_Inscriptional_Parthian,
  ucp_Javanese,
  ucp_Kaithi,
  ucp_Lisu,
  ucp_Meetei_Mayek,
  ucp_Old_South_Arabian,
  ucp_Old_Turkic,
  ucp_Samaritan,
  ucp_Tai_Tham,
  ucp_Tai_Viet,

  ucp_Batak,
  ucp_Brahmi,
  ucp_Mandaic,

  ucp_Chakma,
  ucp_Meroitic_Cursive,
  ucp_Meroitic_Hieroglyphs,
  ucp_Miao,
  ucp_Sharada,
  ucp_Sora_Sompeng,
  ucp_Takri,

  ucp_Bassa_Vah,
  ucp_Caucasian_Albanian,
  ucp_Duployan,
  ucp_Elbasan,
  ucp_Grantha,
  ucp_Khojki,
  ucp_Khudawadi,
  ucp_Linear_A,
  ucp_Mahajani,
  ucp_Manichaean,
  ucp_Mende_Kikakui,
  ucp_Modi,
  ucp_Mro,
  ucp_Nabataean,
  ucp_Old_North_Arabian,
  ucp_Old_Permic,
  ucp_Pahawh_Hmong,
  ucp_Palmyrene,
  ucp_Psalter_Pahlavi,
  ucp_Pau_Cin_Hau,
  ucp_Siddham,
  ucp_Tirhuta,
  ucp_Warang_Citi,

  ucp_Ahom,
  ucp_Anatolian_Hieroglyphs,
  ucp_Hatran,
  ucp_Multani,
  ucp_Old_Hungarian,
  ucp_SignWriting,

  ucp_Adlam,
  ucp_Bhaiksuki,
  ucp_Marchen,
  ucp_Newa,
  ucp_Osage,
  ucp_Tangut,
  ucp_Masaram_Gondi,
  ucp_Nushu,
  ucp_Soyombo,
  ucp_Zanabazar_Square,

  ucp_Dogra,
  ucp_Gunjala_Gondi,
  ucp_Hanifi_Rohingya,
  ucp_Makasar,
  ucp_Medefaidrin,
  ucp_Old_Sogdian,
  ucp_Sogdian
};
enum { PCRE2_MATCHEDBY_INTERPRETER,
       PCRE2_MATCHEDBY_DFA_INTERPRETER,
       PCRE2_MATCHEDBY_JIT };
enum { ESC_A = 1, ESC_G, ESC_K, ESC_B, ESC_b, ESC_D, ESC_d, ESC_S, ESC_s,
       ESC_W, ESC_w, ESC_N, ESC_dum, ESC_C, ESC_P, ESC_p, ESC_R, ESC_H,
       ESC_h, ESC_V, ESC_v, ESC_X, ESC_Z, ESC_z,
       ESC_E, ESC_Q, ESC_g, ESC_k };
enum {
  OP_END,



  OP_SOD,
  OP_SOM,
  OP_SET_SOM,
  OP_NOT_WORD_BOUNDARY,
  OP_WORD_BOUNDARY,
  OP_NOT_DIGIT,
  OP_DIGIT,
  OP_NOT_WHITESPACE,
  OP_WHITESPACE,
  OP_NOT_WORDCHAR,
  OP_WORDCHAR,

  OP_ANY,
  OP_ALLANY,
  OP_ANYBYTE,
  OP_NOTPROP,
  OP_PROP,
  OP_ANYNL,
  OP_NOT_HSPACE,
  OP_HSPACE,
  OP_NOT_VSPACE,
  OP_VSPACE,
  OP_EXTUNI,
  OP_EODN,
  OP_EOD,



  OP_DOLL,
  OP_DOLLM,
  OP_CIRC,
  OP_CIRCM,




  OP_CHAR,
  OP_CHARI,
  OP_NOT,
  OP_NOTI,






  OP_STAR,
  OP_MINSTAR,
  OP_PLUS,
  OP_MINPLUS,
  OP_QUERY,
  OP_MINQUERY,

  OP_UPTO,
  OP_MINUPTO,
  OP_EXACT,

  OP_POSSTAR,
  OP_POSPLUS,
  OP_POSQUERY,
  OP_POSUPTO,



  OP_STARI,
  OP_MINSTARI,
  OP_PLUSI,
  OP_MINPLUSI,
  OP_QUERYI,
  OP_MINQUERYI,

  OP_UPTOI,
  OP_MINUPTOI,
  OP_EXACTI,

  OP_POSSTARI,
  OP_POSPLUSI,
  OP_POSQUERYI,
  OP_POSUPTOI,




  OP_NOTSTAR,
  OP_NOTMINSTAR,
  OP_NOTPLUS,
  OP_NOTMINPLUS,
  OP_NOTQUERY,
  OP_NOTMINQUERY,

  OP_NOTUPTO,
  OP_NOTMINUPTO,
  OP_NOTEXACT,

  OP_NOTPOSSTAR,
  OP_NOTPOSPLUS,
  OP_NOTPOSQUERY,
  OP_NOTPOSUPTO,



  OP_NOTSTARI,
  OP_NOTMINSTARI,
  OP_NOTPLUSI,
  OP_NOTMINPLUSI,
  OP_NOTQUERYI,
  OP_NOTMINQUERYI,

  OP_NOTUPTOI,
  OP_NOTMINUPTOI,
  OP_NOTEXACTI,

  OP_NOTPOSSTARI,
  OP_NOTPOSPLUSI,
  OP_NOTPOSQUERYI,
  OP_NOTPOSUPTOI,



  OP_TYPESTAR,
  OP_TYPEMINSTAR,
  OP_TYPEPLUS,
  OP_TYPEMINPLUS,
  OP_TYPEQUERY,
  OP_TYPEMINQUERY,

  OP_TYPEUPTO,
  OP_TYPEMINUPTO,
  OP_TYPEEXACT,

  OP_TYPEPOSSTAR,
  OP_TYPEPOSPLUS,
  OP_TYPEPOSQUERY,
  OP_TYPEPOSUPTO,




  OP_CRSTAR,
  OP_CRMINSTAR,
  OP_CRPLUS,
  OP_CRMINPLUS,
  OP_CRQUERY,
  OP_CRMINQUERY,

  OP_CRRANGE,
  OP_CRMINRANGE,

  OP_CRPOSSTAR,
  OP_CRPOSPLUS,
  OP_CRPOSQUERY,
  OP_CRPOSRANGE,



  OP_CLASS,
  OP_NCLASS,


  OP_XCLASS,

  OP_REF,
  OP_REFI,
  OP_DNREF,
  OP_DNREFI,
  OP_RECURSE,
  OP_CALLOUT,
  OP_CALLOUT_STR,

  OP_ALT,
  OP_KET,
  OP_KETRMAX,
  OP_KETRMIN,
  OP_KETRPOS,




  OP_REVERSE,
  OP_ASSERT,
  OP_ASSERT_NOT,
  OP_ASSERTBACK,
  OP_ASSERTBACK_NOT,






  OP_ONCE,
  OP_SCRIPT_RUN,
  OP_BRA,
  OP_BRAPOS,
  OP_CBRA,
  OP_CBRAPOS,
  OP_COND,




  OP_SBRA,
  OP_SBRAPOS,
  OP_SCBRA,
  OP_SCBRAPOS,
  OP_SCOND,



  OP_CREF,
  OP_DNCREF,
  OP_RREF,
  OP_DNRREF,
  OP_FALSE,
  OP_TRUE,

  OP_BRAZERO,
  OP_BRAMINZERO,
  OP_BRAPOSZERO,



  OP_MARK,
  OP_PRUNE,
  OP_PRUNE_ARG,
  OP_SKIP,
  OP_SKIP_ARG,
  OP_THEN,
  OP_THEN_ARG,
  OP_COMMIT,
  OP_COMMIT_ARG,





  OP_FAIL,
  OP_ACCEPT,
  OP_ASSERT_ACCEPT,
  OP_CLOSE,



  OP_SKIPZERO,





  OP_DEFINE,





  OP_TABLE_LENGTH

};
typedef struct pcre2_memctl {
  void * (*malloc)(int *data_flow, size_t, void *);
  void (*free)(int *data_flow, void *, void *);
  void *memory_data;
} pcre2_memctl;






typedef struct open_capitem {
  struct open_capitem *next;
  uint16_t number;
  uint16_t flag;
  uint16_t assert_depth;
} open_capitem;






typedef struct {
  uint16_t name_offset;
  uint16_t type;
  uint16_t value;
} ucp_type_table;



typedef struct {
  uint8_t script;
  uint8_t chartype;
  uint8_t gbprop;
  uint8_t caseset;
  int32_t other_case;
} ucd_record;
typedef struct pcre2_serialized_data {
  uint32_t magic;
  uint32_t version;
  uint32_t config;
  int32_t number_of_codes;
} pcre2_serialized_data;
extern const int _pcre2_utf8_table1[];
extern const int _pcre2_utf8_table1_size;
extern const int _pcre2_utf8_table2[];
extern const int _pcre2_utf8_table3[];
extern const uint8_t _pcre2_utf8_table4[];
extern const uint8_t _pcre2_OP_lengths_8[];
extern const uint32_t _pcre2_callout_end_delims_8[];
extern const uint32_t _pcre2_callout_start_delims_8[];
extern const pcre2_compile_context_8 _pcre2_default_compile_context_8;
extern const pcre2_convert_context_8 _pcre2_default_convert_context_8;
extern const pcre2_match_context_8 _pcre2_default_match_context_8;
extern const uint8_t _pcre2_default_tables_8[];
extern const uint32_t _pcre2_hspace_list_8[];
extern const uint32_t _pcre2_vspace_list_8[];
extern const uint32_t _pcre2_ucd_caseless_sets_8[];
extern const uint32_t _pcre2_ucd_digit_sets_8[];
extern const ucd_record _pcre2_ucd_records_8[];



extern const uint16_t _pcre2_ucd_stage1_8[];
extern const uint16_t _pcre2_ucd_stage2_8[];
extern const uint32_t _pcre2_ucp_gbtable_8[];
extern const uint32_t _pcre2_ucp_gentype_8[];



extern const char *_pcre2_unicode_version_8;
extern const ucp_type_table _pcre2_utt_8[];
extern const char _pcre2_utt_names_8[];
extern const size_t _pcre2_utt_size_8;
typedef struct pcre2_real_general_context_8 {
  pcre2_memctl memctl;
} pcre2_real_general_context_8;



typedef struct pcre2_real_compile_context_8 {
  pcre2_memctl memctl;
  int (*stack_guard)(int *data_flow, uint32_t, void *);
  void *stack_guard_data;
  const uint8_t *tables;
  size_t max_pattern_length;
  uint16_t bsr_convention;
  uint16_t newline_convention;
  uint32_t parens_nest_limit;
  uint32_t extra_options;
} pcre2_real_compile_context_8;



typedef struct pcre2_real_match_context_8 {
  pcre2_memctl memctl;




  int (*callout)(int *data_flow, pcre2_callout_block_8 *, void *);
  void *callout_data;
  void (*substitute_callout)(int *data_flow, pcre2_substitute_callout_block_8 *, void *);
  void *substitute_callout_data;
  size_t offset_limit;
  uint32_t heap_limit;
  uint32_t match_limit;
  uint32_t depth_limit;
} pcre2_real_match_context_8;



typedef struct pcre2_real_convert_context_8 {
  pcre2_memctl memctl;
  uint32_t glob_separator;
  uint32_t glob_escape;
} pcre2_real_convert_context_8;
typedef struct pcre2_real_code_8 {
  pcre2_memctl memctl;
  const uint8_t *tables;
  void *executable_jit;
  uint8_t start_bitmap[32];
  size_t blocksize;
  uint32_t magic_number;
  uint32_t compile_options;
  uint32_t overall_options;
  uint32_t extra_options;
  uint32_t flags;
  uint32_t limit_heap;
  uint32_t limit_match;
  uint32_t limit_depth;
  uint32_t first_codeunit;
  uint32_t last_codeunit;
  uint16_t bsr_convention;
  uint16_t newline_convention;
  uint16_t max_lookbehind;
  uint16_t minlength;
  uint16_t top_bracket;
  uint16_t top_backref;
  uint16_t name_entry_size;
  uint16_t name_count;
} pcre2_real_code_8;
typedef struct pcre2_real_match_data_8 {
  pcre2_memctl memctl;
  const pcre2_real_code_8 *code;
  PCRE2_SPTR8 subject;
  PCRE2_SPTR8 mark;
  size_t leftchar;
  size_t rightchar;
  size_t startchar;
  uint16_t matchedby;
  uint16_t oveccount;
  int rc;
  size_t ovector[131072];
} pcre2_real_match_data_8;
typedef struct recurse_check {
  struct recurse_check *prev;
  PCRE2_SPTR8 group;
} recurse_check;

typedef struct parsed_recurse_check {
  struct parsed_recurse_check *prev;
  uint32_t *groupptr;
} parsed_recurse_check;



typedef struct recurse_cache {
  PCRE2_SPTR8 group;
  int groupnumber;
} recurse_cache;




typedef struct branch_chain_8 {
  struct branch_chain_8 *outer;
  PCRE2_UCHAR8 *current_branch;
} branch_chain_8;




typedef struct named_group_8 {
  PCRE2_SPTR8 name;
  uint32_t number;
  uint16_t length;
  uint16_t isdup;
} named_group_8;




typedef struct compile_block_8 {
  pcre2_real_compile_context_8 *cx;
  const uint8_t *lcc;
  const uint8_t *fcc;
  const uint8_t *cbits;
  const uint8_t *ctypes;
  PCRE2_SPTR8 start_workspace;
  PCRE2_SPTR8 start_code;
  PCRE2_SPTR8 start_pattern;
  PCRE2_SPTR8 end_pattern;
  PCRE2_UCHAR8 *name_table;
  size_t workspace_size;
  size_t small_ref_offset[10];
  size_t erroroffset;
  uint16_t names_found;
  uint16_t name_entry_size;
  uint16_t parens_depth;
  uint16_t assert_depth;
  open_capitem *open_caps;
  named_group_8 *named_groups;
  uint32_t named_group_list_size;
  uint32_t external_options;
  uint32_t external_flags;
  uint32_t bracount;
  uint32_t lastcapture;
  uint32_t *parsed_pattern;
  uint32_t *parsed_pattern_end;
  uint32_t *groupinfo;
  uint32_t top_backref;
  uint32_t backref_map;
  uint32_t nltype;
  uint32_t nllen;
  uint32_t class_range_start;
  uint32_t class_range_end;
  PCRE2_UCHAR8 nl[4];
  int max_lookbehind;
  int req_varyopt;
  BOOL had_accept;
  BOOL had_pruneorskip;
  BOOL had_recurse;
  BOOL dupnames;
} compile_block_8;




typedef struct pcre2_real_jit_stack_8 {
  pcre2_memctl memctl;
  void* stack;
} pcre2_real_jit_stack_8;




typedef struct dfa_recursion_info {
  struct dfa_recursion_info *prevrec;
  PCRE2_SPTR8 subject_position;
  uint32_t group_num;
} dfa_recursion_info;
typedef struct heapframe {




  PCRE2_SPTR8 ecode;
  PCRE2_SPTR8 temp_sptr[2];
  size_t length;
  size_t back_frame;
  size_t temp_size;
  uint32_t rdepth;
  uint32_t group_frame_type;
  uint32_t temp_32[4];
  uint8_t return_id;
  uint8_t op;
  PCRE2_UCHAR8 occu[6];
  PCRE2_SPTR8 eptr;
  PCRE2_SPTR8 start_match;
  PCRE2_SPTR8 mark;
  uint32_t current_recurse;
  uint32_t capture_last;
  size_t last_group_offset;
  size_t offset_top;
  size_t ovector[131072];
} heapframe;




typedef char check_heapframe_size[
  ((sizeof(heapframe) % sizeof(size_t)) == 0)? (+1):(-1)];




typedef struct match_block_8 {
  pcre2_memctl memctl;
  size_t frame_vector_size;
  heapframe *match_frames;
  heapframe *match_frames_top;
  heapframe *stack_frames;
  size_t heap_limit;
  uint32_t match_limit;
  uint32_t match_limit_depth;
  uint32_t match_call_count;
  BOOL hitend;
  BOOL hasthen;
  const uint8_t *lcc;
  const uint8_t *fcc;
  const uint8_t *ctypes;
  size_t start_offset;
  size_t end_offset_top;
  uint16_t partial;
  uint16_t bsr_convention;
  uint16_t name_count;
  uint16_t name_entry_size;
  PCRE2_SPTR8 name_table;
  PCRE2_SPTR8 start_code;
  PCRE2_SPTR8 start_subject;
  PCRE2_SPTR8 end_subject;
  PCRE2_SPTR8 end_match_ptr;
  PCRE2_SPTR8 start_used_ptr;
  PCRE2_SPTR8 last_used_ptr;
  PCRE2_SPTR8 mark;
  PCRE2_SPTR8 nomatch_mark;
  PCRE2_SPTR8 verb_ecode_ptr;
  PCRE2_SPTR8 verb_skip_ptr;
  uint32_t verb_current_recurse;
  uint32_t moptions;
  uint32_t poptions;
  uint32_t skip_arg_count;
  uint32_t ignore_skip_arg;
  uint32_t nltype;
  uint32_t nllen;
  PCRE2_UCHAR8 nl[4];
  pcre2_callout_block_8 *cb;
  void *callout_data;
  int (*callout)(int *data_flow, pcre2_callout_block_8 *,void *);
} match_block_8;




typedef struct dfa_match_block_8 {
  pcre2_memctl memctl;
  PCRE2_SPTR8 start_code;
  PCRE2_SPTR8 start_subject ;
  PCRE2_SPTR8 end_subject;
  PCRE2_SPTR8 start_used_ptr;
  PCRE2_SPTR8 last_used_ptr;
  const uint8_t *tables;
  size_t start_offset;
  size_t heap_limit;
  size_t heap_used;
  uint32_t match_limit;
  uint32_t match_limit_depth;
  uint32_t match_call_count;
  uint32_t moptions;
  uint32_t poptions;
  uint32_t nltype;
  uint32_t nllen;
  PCRE2_UCHAR8 nl[4];
  uint16_t bsr_convention;
  pcre2_callout_block_8 *cb;
  void *callout_data;
  int (*callout)(int *data_flow, pcre2_callout_block_8 *,void *);
  dfa_recursion_info *recursive;
} dfa_match_block_8;
extern int _pcre2_auto_possessify_8(int *data_flow, PCRE2_UCHAR8 *, BOOL,
                      const compile_block_8 *);
extern int _pcre2_check_escape_8(int *data_flow, PCRE2_SPTR8 *, PCRE2_SPTR8, uint32_t *,
                      int *, uint32_t, BOOL, compile_block_8 *);
extern PCRE2_SPTR8 _pcre2_extuni_8(int *data_flow, uint32_t, PCRE2_SPTR8, PCRE2_SPTR8, PCRE2_SPTR8,
                      BOOL, int *);
extern PCRE2_SPTR8 _pcre2_find_bracket_8(int *data_flow, PCRE2_SPTR8, BOOL, int);
extern BOOL _pcre2_is_newline_8(int *data_flow, PCRE2_SPTR8, uint32_t, PCRE2_SPTR8,
                      uint32_t *, BOOL);
extern void _pcre2_jit_free_rodata_8(int *data_flow, void *, void *);
extern void _pcre2_jit_free_8(int *data_flow, void *, pcre2_memctl *);
extern size_t _pcre2_jit_get_size_8(int *data_flow, void *);
const char * _pcre2_jit_get_target_8(int *data_flowvoid);
extern void * _pcre2_memctl_malloc_8(int *data_flow, size_t, pcre2_memctl *);
extern unsigned int _pcre2_ord2utf_8(int *data_flow, uint32_t, PCRE2_UCHAR8 *);
extern BOOL _pcre2_script_run_8(int *data_flow, PCRE2_SPTR8, PCRE2_SPTR8, BOOL);
extern int _pcre2_strcmp_8(int *data_flow, PCRE2_SPTR8, PCRE2_SPTR8);
extern int _pcre2_strcmp_c8_8(int *data_flow, PCRE2_SPTR8, const char *);
extern size_t _pcre2_strcpy_c8_8(int *data_flow, PCRE2_UCHAR8 *, const char *);
extern size_t _pcre2_strlen_8(int *data_flow, PCRE2_SPTR8);
extern int _pcre2_strncmp_8(int *data_flow, PCRE2_SPTR8, PCRE2_SPTR8, size_t);
extern int _pcre2_strncmp_c8_8(int *data_flow, PCRE2_SPTR8, const char *, size_t);
extern int _pcre2_study_8(int *data_flow, pcre2_real_code_8 *);
extern int _pcre2_valid_utf_8(int *data_flow, PCRE2_SPTR8, size_t, size_t *);
extern BOOL _pcre2_was_newline_8(int *data_flow, PCRE2_SPTR8, uint32_t, PCRE2_SPTR8,
                      uint32_t *, BOOL);
extern BOOL _pcre2_xclass_8(int *data_flow, uint32_t, PCRE2_SPTR8, BOOL);
PCRE2_SPTR8
_pcre2_find_bracket_8(int *data_flow, PCRE2_SPTR8 code, BOOL utf, int number)
{
for (;;)
  {
  PCRE2_UCHAR8 c = *code;

  if (c == OP_END) return ((void *)0);






  if (c == OP_XCLASS) code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
    else if (c == OP_CALLOUT_STR) code += (unsigned int)(((code)[1 + 2*2] << 8) | (code)[(1 + 2*2)+1]);



  else if (c == OP_REVERSE)
    {
    if (number < 0) return (PCRE2_UCHAR8 *)code;
    code += _pcre2_OP_lengths_8[c];
    }



  else if (c == OP_CBRA || c == OP_SCBRA ||
           c == OP_CBRAPOS || c == OP_SCBRAPOS)
    {
    int n = (int)(unsigned int)(((code)[1+2] << 8) | (code)[(1+2)+1]);
    if (n == number) return (PCRE2_UCHAR8 *)code;
    code += _pcre2_OP_lengths_8[c];
    }






  else
    {
    switch(c)
      {
      case OP_TYPESTAR:
      case OP_TYPEMINSTAR:
      case OP_TYPEPLUS:
      case OP_TYPEMINPLUS:
      case OP_TYPEQUERY:
      case OP_TYPEMINQUERY:
      case OP_TYPEPOSSTAR:
      case OP_TYPEPOSPLUS:
      case OP_TYPEPOSQUERY:
      if (code[1] == OP_PROP || code[1] == OP_NOTPROP) code += 2;
      break;

      case OP_TYPEUPTO:
      case OP_TYPEMINUPTO:
      case OP_TYPEEXACT:
      case OP_TYPEPOSUPTO:
      if (code[1 + 2] == OP_PROP || code[1 + 2] == OP_NOTPROP)
        code += 2;
      break;

      case OP_MARK:
      case OP_COMMIT_ARG:
      case OP_PRUNE_ARG:
      case OP_SKIP_ARG:
      case OP_THEN_ARG:
      code += code[1];
      break;
      }



    code += _pcre2_OP_lengths_8[c];






    if (utf) switch(c)
      {
      case OP_CHAR:
      case OP_CHARI:
      case OP_NOT:
      case OP_NOTI:
      case OP_EXACT:
      case OP_EXACTI:
      case OP_NOTEXACT:
      case OP_NOTEXACTI:
      case OP_UPTO:
      case OP_UPTOI:
      case OP_NOTUPTO:
      case OP_NOTUPTOI:
      case OP_MINUPTO:
      case OP_MINUPTOI:
      case OP_NOTMINUPTO:
      case OP_NOTMINUPTOI:
      case OP_POSUPTO:
      case OP_POSUPTOI:
      case OP_NOTPOSUPTO:
      case OP_NOTPOSUPTOI:
      case OP_STAR:
      case OP_STARI:
      case OP_NOTSTAR:
      case OP_NOTSTARI:
      case OP_MINSTAR:
      case OP_MINSTARI:
      case OP_NOTMINSTAR:
      case OP_NOTMINSTARI:
      case OP_POSSTAR:
      case OP_POSSTARI:
      case OP_NOTPOSSTAR:
      case OP_NOTPOSSTARI:
      case OP_PLUS:
      case OP_PLUSI:
      case OP_NOTPLUS:
      case OP_NOTPLUSI:
      case OP_MINPLUS:
      case OP_MINPLUSI:
      case OP_NOTMINPLUS:
      case OP_NOTMINPLUSI:
      case OP_POSPLUS:
      case OP_POSPLUSI:
      case OP_NOTPOSPLUS:
      case OP_NOTPOSPLUSI:
      case OP_QUERY:
      case OP_QUERYI:
      case OP_NOTQUERY:
      case OP_NOTQUERYI:
      case OP_MINQUERY:
      case OP_MINQUERYI:
      case OP_NOTMINQUERY:
      case OP_NOTMINQUERYI:
      case OP_POSQUERY:
      case OP_POSQUERYI:
      case OP_NOTPOSQUERY:
      case OP_NOTPOSQUERYI:
      if (((code[-1]) >= 0xc0)) code += (_pcre2_utf8_table4[(code[-1]) & 0x3fu]);
      break;
      }



    }
  }
}
