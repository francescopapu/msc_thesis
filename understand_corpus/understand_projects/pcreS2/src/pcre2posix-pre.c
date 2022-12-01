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
  REG_ASSERT = 1,
  REG_BADBR,
  REG_BADPAT,
  REG_BADRPT,
  REG_EBRACE,
  REG_EBRACK,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_EMPTY,
  REG_EPAREN,
  REG_ERANGE,
  REG_ESIZE,
  REG_ESPACE,
  REG_ESUBREG,
  REG_INVARG,
  REG_NOMATCH
};





typedef struct {
  void *re_pcre2_code;
  void *re_match_data;
  const char *re_endp;
  size_t re_nsub;
  size_t re_erroffset;
  int re_cflags;
} regex_t;



typedef int regoff_t;

typedef struct {
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;
extern __attribute__ ((visibility ("default"))) int pcre2_regcomp(int *data_flow, regex_t *, const char *, int);
extern __attribute__ ((visibility ("default"))) int regcomp(int *data_flow, regex_t *, const char *, int);

extern __attribute__ ((visibility ("default"))) int pcre2_regexec(int *data_flow, const regex_t *, const char *, size_t,
                     regmatch_t *, int);
extern __attribute__ ((visibility ("default"))) int regexec(int *data_flow, const regex_t *, const char *, size_t,
                     regmatch_t *, int);

extern __attribute__ ((visibility ("default"))) size_t pcre2_regerror(int *data_flow, int, const regex_t *, char *, size_t);
extern __attribute__ ((visibility ("default"))) size_t regerror(int *data_flow, int, const regex_t *, char *, size_t);

extern __attribute__ ((visibility ("default"))) void pcre2_regfree(int *data_flow, regex_t *);
extern __attribute__ ((visibility ("default"))) void regfree(int *data_flow, regex_t *);
static const int eint1[] = {
  0,
  REG_EESCAPE,
  REG_EESCAPE,
  REG_EESCAPE,
  REG_BADBR,

  REG_BADBR,
  REG_EBRACK,
  REG_ECTYPE,
  REG_ERANGE,
  REG_BADRPT,

  REG_ASSERT,
  REG_BADPAT,
  REG_BADPAT,
  REG_BADPAT,
  REG_EPAREN,

  REG_ESUBREG,
  REG_INVARG,
  REG_INVARG,
  REG_EPAREN,
  REG_ESIZE,

  REG_ESIZE,
  REG_ESPACE,
  REG_EPAREN,
  REG_ASSERT
  };

static const int eint2[] = {
  30, REG_ECTYPE,
  32, REG_INVARG,
  37, REG_EESCAPE,
  56, REG_INVARG,
  92, REG_INVARG,
};



static const char *const pstring[] = {
  "",
  "internal error",
  "invalid repeat counts in {}",
  "pattern error",
  "? * + invalid",
  "unbalanced {}",
  "unbalanced []",
  "collation error - not relevant",
  "bad class",
  "bad escape sequence",
  "empty expression",
  "unbalanced ()",
  "bad range inside []",
  "expression too big",
  "failed to get memory",
  "bad back reference",
  "bad argument",
  "match failed"
};







extern __attribute__ ((visibility ("default"))) size_t
regerror(int *data_flow, int errcode, const regex_t *preg, char *errbuf, size_t errbuf_size)
{
return pcre2_regerror(data_flow, errcode, preg, errbuf, errbuf_size);
}

extern __attribute__ ((visibility ("default"))) void
regfree(int *data_flow, regex_t *preg)
{
pcre2_regfree(data_flow, preg);
}

extern __attribute__ ((visibility ("default"))) int
regcomp(int *data_flow, regex_t *preg, const char *pattern, int cflags)
{
return pcre2_regcomp(data_flow, preg, pattern, cflags);
}

extern __attribute__ ((visibility ("default"))) int
regexec(int *data_flow, const regex_t *preg, const char *string, size_t nmatch,
  regmatch_t pmatch[], int eflags)
{
return pcre2_regexec(data_flow, preg, string, nmatch, pmatch, eflags);
}







extern __attribute__ ((visibility ("default"))) size_t
pcre2_regerror(int *data_flow, int errcode, const regex_t *preg, char *errbuf,
  size_t errbuf_size)
{
int used;
const char *message;

message = (errcode <= 0 || errcode >= (int)(sizeof(pstring)/sizeof(char *)))?
  "unknown error code" : pstring[errcode];

if (preg != ((void *)0) && (int)preg->re_erroffset != -1)
  {
  used = snprintf(errbuf, errbuf_size, "%s at offset %-6d", message,
    (int)preg->re_erroffset);
  }
else
  {
  used = snprintf(errbuf, errbuf_size, "%s", message);
  }

return used + 1;
}







extern __attribute__ ((visibility ("default"))) void
pcre2_regfree(int *data_flow, regex_t *preg)
{
pcre2_match_data_free_8(data_flow, preg->re_match_data);
pcre2_code_free_8(data_flow, preg->re_pcre2_code);
}
extern __attribute__ ((visibility ("default"))) int
pcre2_regcomp(int *data_flow, regex_t *preg, const char *pattern, int cflags)
{
size_t erroffset;
size_t patlen;
int errorcode;
int options = 0;
int re_nsub = 0;

patlen = ((cflags & 0x0800) != 0)? (size_t)(preg->re_endp - pattern) :
  (~(size_t)0);

if ((cflags & 0x0001) != 0) options |= 0x00000008u;
if ((cflags & 0x0002) != 0) options |= 0x00000400u;
if ((cflags & 0x0010) != 0) options |= 0x00000020u;
if ((cflags & 0x1000) != 0) options |= 0x02000000u;
if ((cflags & 0x0040) != 0) options |= 0x00080000u;
if ((cflags & 0x0400) != 0) options |= 0x00020000u;
if ((cflags & 0x0200) != 0) options |= 0x00040000u;

preg->re_cflags = cflags;
preg->re_pcre2_code = pcre2_compile_8(data_flow, (PCRE2_SPTR8)pattern, patlen, options,
  &errorcode, &erroffset, ((void *)0));
preg->re_erroffset = erroffset;

if (preg->re_pcre2_code == ((void *)0))
  {
  unsigned int i;




  if (errorcode < 100) return REG_BADPAT;
  errorcode -= 100;

  if (errorcode < (int)(sizeof(eint1)/sizeof(const int)))
    return eint1[errorcode];
  for (i = 0; i < sizeof(eint2)/sizeof(const int); i += 2)
    if (errorcode == eint2[i]) return eint2[i+1];
  return REG_BADPAT;
  }

(void)pcre2_pattern_info_8(data_flow, (const pcre2_code_8 *)preg->re_pcre2_code,
  4, &re_nsub);
preg->re_nsub = (size_t)re_nsub;
preg->re_match_data = pcre2_match_data_create_8(data_flow, re_nsub + 1, ((void *)0));

if (preg->re_match_data == ((void *)0))
  {
  pcre2_code_free_8(data_flow, preg->re_pcre2_code);
  return REG_ESPACE;
  }

return 0;
}
extern __attribute__ ((visibility ("default"))) int
pcre2_regexec(int *data_flow, const regex_t *preg, const char *string, size_t nmatch,
  regmatch_t pmatch[], int eflags)
{
int rc, so, eo;
int options = 0;
pcre2_match_data_8 *md = (pcre2_match_data_8 *)preg->re_match_data;

if ((eflags & 0x0004) != 0) options |= 0x00000001u;
if ((eflags & 0x0008) != 0) options |= 0x00000002u;
if ((eflags & 0x0100) != 0) options |= 0x00000004u;

((regex_t *)preg)->re_erroffset = (size_t)(-1);





if ((preg->re_cflags & 0x0020) != 0 || pmatch == ((void *)0)) nmatch = 0;






if ((eflags & 0x0080) != 0)
  {
  if (pmatch == ((void *)0)) return REG_INVARG;
  so = pmatch[0].rm_so;
  eo = pmatch[0].rm_eo;
  }
else
  {
  so = 0;
  eo = (int)strlen(string);
  }

rc = pcre2_match_8(data_flow, (const pcre2_code_8 *)preg->re_pcre2_code,
  (PCRE2_SPTR8)string + so, (eo - so), 0, options, md, ((void *)0));



if (rc >= 0)
  {
  size_t i;
  size_t *ovector = pcre2_get_ovector_pointer_8(data_flow, md);
  if ((size_t)rc > nmatch) rc = (int)nmatch;
  for (i = 0; i < (size_t)rc; i++)
    {
    pmatch[i].rm_so = (ovector[i*2] == (~(size_t)0))? -1 :
      (int)(ovector[i*2] + so);
    pmatch[i].rm_eo = (ovector[i*2+1] == (~(size_t)0))? -1 :
      (int)(ovector[i*2+1] + so);
    }
  for (; i < nmatch; i++) pmatch[i].rm_so = pmatch[i].rm_eo = -1;
  return 0;
  }



if (rc <= (-3) && rc >= (-23))
  return REG_INVARG;

switch(rc)
  {
  default: return REG_ASSERT;
  case (-32): return REG_INVARG;
  case (-31): return REG_INVARG;
  case (-34): return REG_INVARG;
  case (-36): return REG_INVARG;
  case (-47): return REG_ESPACE;
  case (-1): return REG_NOMATCH;
  case (-48): return REG_ESPACE;
  case (-51): return REG_INVARG;
  }
}
