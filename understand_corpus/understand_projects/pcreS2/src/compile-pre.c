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
static unsigned int
  add_list_to_class_internal(int *data_flow, uint8_t *, PCRE2_UCHAR8 **, uint32_t,
    compile_block_8 *, const uint32_t *, unsigned int);


static int
  compile_regex(int *data_flow, uint32_t, PCRE2_UCHAR8 **, uint32_t **, int *, uint32_t,
    uint32_t *, int32_t *, uint32_t *, int32_t *, branch_chain_8 *,
    compile_block_8 *, size_t *);

static int
  get_branchlength(int *data_flow, uint32_t **, int *, int *, parsed_recurse_check *,
    compile_block_8 *);

static BOOL
  set_lookbehind_lengths(int *data_flow, uint32_t **, int *, int *, parsed_recurse_check *,
    compile_block_8 *);
static unsigned char meta_extra_lengths[] = {
  0,
  0,
  0,
  0,
  1+1,
  1,
  3,
  3+1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1+1,
  1+1,
  1+1,
  1+1,
  3,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  0,
  0,
  1,
  1+1,
  0,
  0,
  0,
  1,
  1,
  1,
  0,
  0,
  0,
  1,
  0,
  1,
  0,
  1,
  0,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  2,
  2,
  2
};



enum { PSKIP_ALT, PSKIP_CLASS, PSKIP_KET };
static const uint8_t xdigitab[] =
  {
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,
  0x08,0x09,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
static const short int escapes[] = {
     0, 0,
     0, 0,
     0, 0,
     0, 0,
     0, 0,
     '\072', '\073',
     '\074', '\075',
     '\076', '\077',
     '\100', -ESC_A,
     -ESC_B, -ESC_C,
     -ESC_D, -ESC_E,
     0, -ESC_G,
     -ESC_H, 0,
     0, -ESC_K,
     0, 0,
     -ESC_N, 0,
     -ESC_P, -ESC_Q,
     -ESC_R, -ESC_S,
     0, 0,
     -ESC_V, -ESC_W,
     -ESC_X, 0,
     -ESC_Z, '\133',
     '\134', '\135',
     '\136', '\137',
     '\140', '\007',
     -ESC_b, 0,
     -ESC_d, '\033',
     '\014', 0,
     -ESC_h, 0,
     0, -ESC_k,
     0, 0,
     '\012', 0,
     -ESC_p, 0,
     '\015', -ESC_s,
     '\011', 0,
     -ESC_v, -ESC_w,
     0, 0,
     -ESC_z
};
typedef struct verbitem {
  unsigned int len;
  uint32_t meta;
  int has_arg;
} verbitem;

static const char verbnames[] =
  "\0"
  "\115" "\101" "\122" "\113" "\0"
  "\101" "\103" "\103" "\105" "\120" "\124" "\0"
  "\106" "\0"
  "\106" "\101" "\111" "\114" "\0"
  "\103" "\117" "\115" "\115" "\111" "\124" "\0"
  "\120" "\122" "\125" "\116" "\105" "\0"
  "\123" "\113" "\111" "\120" "\0"
  "\124" "\110" "\105" "\116";

static const verbitem verbs[] = {
  { 0, 0x80270000u, +1 },
  { 4, 0x80270000u, +1 },
  { 6, 0x80280000u, -1 },
  { 1, 0x80290000u, -1 },
  { 4, 0x80290000u, -1 },
  { 6, 0x802a0000u, 0 },
  { 5, 0x802c0000u, 0 },
  { 4, 0x802e0000u, 0 },
  { 4, 0x80300000u, 0 }
};

static const int verbcount = sizeof(verbs)/sizeof(verbitem);



static const uint32_t verbops[] = {
  OP_MARK, OP_ACCEPT, OP_FAIL, OP_COMMIT, OP_COMMIT_ARG, OP_PRUNE,
  OP_PRUNE_ARG, OP_SKIP, OP_SKIP_ARG, OP_THEN, OP_THEN_ARG };



typedef struct alasitem {
  unsigned int len;
  uint32_t meta;
} alasitem;

static const char alasnames[] =
  "\160" "\154" "\141" "\0"
  "\160" "\154" "\142" "\0"
  "\156" "\154" "\141" "\0"
  "\156" "\154" "\142" "\0"
  "\160" "\157" "\163" "\151" "\164" "\151" "\166" "\145" "\137" "\154" "\157" "\157" "\153" "\141" "\150" "\145" "\141" "\144" "\0"
  "\160" "\157" "\163" "\151" "\164" "\151" "\166" "\145" "\137" "\154" "\157" "\157" "\153" "\142" "\145" "\150" "\151" "\156" "\144" "\0"
  "\156" "\145" "\147" "\141" "\164" "\151" "\166" "\145" "\137" "\154" "\157" "\157" "\153" "\141" "\150" "\145" "\141" "\144" "\0"
  "\156" "\145" "\147" "\141" "\164" "\151" "\166" "\145" "\137" "\154" "\157" "\157" "\153" "\142" "\145" "\150" "\151" "\156" "\144" "\0"
  "\141" "\164" "\157" "\155" "\151" "\143" "\0"
  "\163" "\162" "\0"
  "\141" "\163" "\162" "\0"
  "\163" "\143" "\162" "\151" "\160" "\164" "\137" "\162" "\165" "\156" "\0"
  "\141" "\164" "\157" "\155" "\151" "\143" "\137" "\163" "\143" "\162" "\151" "\160" "\164" "\137" "\162" "\165" "\156";

static const alasitem alasmeta[] = {
  { 3, 0x80230000u },
  { 3, 0x80250000u },
  { 3, 0x80240000u },
  { 3, 0x80260000u },
  { 18, 0x80230000u },
  { 19, 0x80250000u },
  { 18, 0x80240000u },
  { 19, 0x80260000u },
  { 6, 0x80020000u },
  { 2, 0x80220000u },
  { 3, 0x8fff0000u },
  { 10, 0x80220000u },
  { 17, 0x8fff0000u }
};

static const int alascount = sizeof(alasmeta)/sizeof(alasitem);



static uint32_t chartypeoffset[] = {
  OP_STAR - OP_STAR, OP_STARI - OP_STAR,
  OP_NOTSTAR - OP_STAR, OP_NOTSTARI - OP_STAR };
static const char posix_names[] =
  "\141" "\154" "\160" "\150" "\141" "\0" "\154" "\157" "\167" "\145" "\162" "\0" "\165" "\160" "\160" "\145" "\162" "\0" "\141" "\154" "\156" "\165" "\155" "\0"
  "\141" "\163" "\143" "\151" "\151" "\0" "\142" "\154" "\141" "\156" "\153" "\0" "\143" "\156" "\164" "\162" "\154" "\0" "\144" "\151" "\147" "\151" "\164" "\0"
  "\147" "\162" "\141" "\160" "\150" "\0" "\160" "\162" "\151" "\156" "\164" "\0" "\160" "\165" "\156" "\143" "\164" "\0" "\163" "\160" "\141" "\143" "\145" "\0"
  "\167" "\157" "\162" "\144" "\0" "\170" "\144" "\151" "\147" "\151" "\164";

static const uint8_t posix_name_lengths[] = {
  5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 6, 0 };
static const int posix_class_maps[] = {
  160, 64, -2,
  128, -1, 0,
  96, -1, 0,
  160, -1, 2,
  224, 288, 0,
  0, -1, 1,
  288, -1, 0,
  64, -1, 0,
  192, -1, 0,
  224, -1, 0,
  256, -1, 0,
  0, -1, 0,
  160, -1, 0,
  32,-1, 0
};






static int posix_substitutes[] = {
  2, ucp_L,
  3, ucp_Ll,
  3, ucp_Lu,
  5, 0,
  -1, 0,
  -1, 1,
  3, ucp_Cc,
  3, ucp_Nd,
  11, 0,
  12, 0,
  13, 0,
  7, 0,
  8, 0,
  -1, 0
};
enum { ERR0 = 100,
       ERR1, ERR2, ERR3, ERR4, ERR5, ERR6, ERR7, ERR8, ERR9, ERR10,
       ERR11, ERR12, ERR13, ERR14, ERR15, ERR16, ERR17, ERR18, ERR19, ERR20,
       ERR21, ERR22, ERR23, ERR24, ERR25, ERR26, ERR27, ERR28, ERR29, ERR30,
       ERR31, ERR32, ERR33, ERR34, ERR35, ERR36, ERR37, ERR38, ERR39, ERR40,
       ERR41, ERR42, ERR43, ERR44, ERR45, ERR46, ERR47, ERR48, ERR49, ERR50,
       ERR51, ERR52, ERR53, ERR54, ERR55, ERR56, ERR57, ERR58, ERR59, ERR60,
       ERR61, ERR62, ERR63, ERR64, ERR65, ERR66, ERR67, ERR68, ERR69, ERR70,
       ERR71, ERR72, ERR73, ERR74, ERR75, ERR76, ERR77, ERR78, ERR79, ERR80,
       ERR81, ERR82, ERR83, ERR84, ERR85, ERR86, ERR87, ERR88, ERR89, ERR90,
       ERR91, ERR92, ERR93, ERR94, ERR95, ERR96 };






enum { PSO_OPT,
       PSO_FLG,
       PSO_NL,
       PSO_BSR,
       PSO_LIMH,
       PSO_LIMM,
       PSO_LIMD };

typedef struct pso {
  const uint8_t *name;
  uint16_t length;
  uint16_t type;
  uint32_t value;
} pso;



static pso pso_list[] = {
  { (uint8_t *)"\125" "\124" "\106" "\070" "\051", 5, PSO_OPT, 0x00080000u },
  { (uint8_t *)"\125" "\124" "\106" "\051", 4, PSO_OPT, 0x00080000u },
  { (uint8_t *)"\125" "\103" "\120" "\051", 4, PSO_OPT, 0x00020000u },
  { (uint8_t *)"\116" "\117" "\124" "\105" "\115" "\120" "\124" "\131" "\051", 9, PSO_FLG, 0x00010000 },
  { (uint8_t *)"\116" "\117" "\124" "\105" "\115" "\120" "\124" "\131" "\137" "\101" "\124" "\123" "\124" "\101" "\122" "\124" "\051", 17, PSO_FLG, 0x00020000 },
  { (uint8_t *)"\116" "\117" "\137" "\101" "\125" "\124" "\117" "\137" "\120" "\117" "\123" "\123" "\105" "\123" "\123" "\051", 16, PSO_OPT, 0x00004000u },
  { (uint8_t *)"\116" "\117" "\137" "\104" "\117" "\124" "\123" "\124" "\101" "\122" "\137" "\101" "\116" "\103" "\110" "\117" "\122" "\051", 18, PSO_OPT, 0x00008000u },
  { (uint8_t *)"\116" "\117" "\137" "\112" "\111" "\124" "\051", 7, PSO_FLG, 0x00080000 },
  { (uint8_t *)"\116" "\117" "\137" "\123" "\124" "\101" "\122" "\124" "\137" "\117" "\120" "\124" "\051", 13, PSO_OPT, 0x00010000u },
  { (uint8_t *)"\114" "\111" "\115" "\111" "\124" "\137" "\110" "\105" "\101" "\120" "\075", 11, PSO_LIMH, 0 },
  { (uint8_t *)"\114" "\111" "\115" "\111" "\124" "\137" "\115" "\101" "\124" "\103" "\110" "\075", 12, PSO_LIMM, 0 },
  { (uint8_t *)"\114" "\111" "\115" "\111" "\124" "\137" "\104" "\105" "\120" "\124" "\110" "\075", 12, PSO_LIMD, 0 },
  { (uint8_t *)"\114" "\111" "\115" "\111" "\124" "\137" "\122" "\105" "\103" "\125" "\122" "\123" "\111" "\117" "\116" "\075", 16, PSO_LIMD, 0 },
  { (uint8_t *)"\103" "\122" "\051", 3, PSO_NL, 1 },
  { (uint8_t *)"\114" "\106" "\051", 3, PSO_NL, 2 },
  { (uint8_t *)"\103" "\122" "\114" "\106" "\051", 5, PSO_NL, 3 },
  { (uint8_t *)"\101" "\116" "\131" "\051", 4, PSO_NL, 4 },
  { (uint8_t *)"\116" "\125" "\114" "\051", 4, PSO_NL, 6 },
  { (uint8_t *)"\101" "\116" "\131" "\103" "\122" "\114" "\106" "\051", 8, PSO_NL, 5 },
  { (uint8_t *)"\102" "\123" "\122" "\137" "\101" "\116" "\131" "\103" "\122" "\114" "\106" "\051", 12, PSO_BSR, 2 },
  { (uint8_t *)"\102" "\123" "\122" "\137" "\125" "\116" "\111" "\103" "\117" "\104" "\105" "\051", 12, PSO_BSR, 1 }
};







static const uint8_t opcode_possessify[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

  0,
  OP_POSSTAR, 0,
  OP_POSPLUS, 0,
  OP_POSQUERY, 0,
  OP_POSUPTO, 0,
  0,
  0, 0, 0, 0,

  OP_POSSTARI, 0,
  OP_POSPLUSI, 0,
  OP_POSQUERYI, 0,
  OP_POSUPTOI, 0,
  0,
  0, 0, 0, 0,

  OP_NOTPOSSTAR, 0,
  OP_NOTPOSPLUS, 0,
  OP_NOTPOSQUERY, 0,
  OP_NOTPOSUPTO, 0,
  0,
  0, 0, 0, 0,

  OP_NOTPOSSTARI, 0,
  OP_NOTPOSPLUSI, 0,
  OP_NOTPOSQUERYI, 0,
  OP_NOTPOSUPTOI, 0,
  0,
  0, 0, 0, 0,

  OP_TYPEPOSSTAR, 0,
  OP_TYPEPOSPLUS, 0,
  OP_TYPEPOSQUERY, 0,
  OP_TYPEPOSUPTO, 0,
  0,
  0, 0, 0, 0,

  OP_CRPOSSTAR, 0,
  OP_CRPOSPLUS, 0,
  OP_CRPOSQUERY, 0,
  OP_CRPOSRANGE, 0,
  0, 0, 0, 0,

  0, 0, 0,
  0, 0,
  0, 0,
  0, 0
};
__attribute__ ((visibility ("default"))) pcre2_code_8 *
pcre2_code_copy_8(int *data_flow, const pcre2_code_8 *code)
{
size_t* ref_count;
pcre2_code_8 *newcode;

if (code == ((void *)0)) return ((void *)0);
newcode = code->memctl.malloc(data_flow, code->blocksize, code->memctl.memory_data);
if (newcode == ((void *)0)) return ((void *)0);
memcpy(newcode, code, code->blocksize);
newcode->executable_jit = ((void *)0);




if ((code->flags & 0x00040000) != 0)
  {
  ref_count = (size_t *)(code->tables + ((512 + 320) + 256));
  (*ref_count)++;
  }

return newcode;
}
__attribute__ ((visibility ("default"))) pcre2_code_8 *
pcre2_code_copy_with_tables_8(int *data_flow, const pcre2_code_8 *code)
{
size_t* ref_count;
pcre2_code_8 *newcode;
uint8_t *newtables;

if (code == ((void *)0)) return ((void *)0);
newcode = code->memctl.malloc(data_flow, code->blocksize, code->memctl.memory_data);
if (newcode == ((void *)0)) return ((void *)0);
memcpy(newcode, code, code->blocksize);
newcode->executable_jit = ((void *)0);

newtables = code->memctl.malloc(data_flow, ((512 + 320) + 256) + sizeof(size_t),
  code->memctl.memory_data);
if (newtables == ((void *)0))
  {
  code->memctl.free(data_flow, (void *)newcode, code->memctl.memory_data);
  return ((void *)0);
  }
memcpy(newtables, code->tables, ((512 + 320) + 256));
ref_count = (size_t *)(newtables + ((512 + 320) + 256));
*ref_count = 1;

newcode->tables = newtables;
newcode->flags |= 0x00040000;
return newcode;
}







__attribute__ ((visibility ("default"))) void
pcre2_code_free_8(int *data_flow, pcre2_code_8 *code)
{
size_t* ref_count;

if (code != ((void *)0))
  {
  if (code->executable_jit != ((void *)0))
    _pcre2_jit_free_8(data_flow, code->executable_jit, &code->memctl);

  if ((code->flags & 0x00040000) != 0)
    {




    ref_count = (size_t *)(code->tables + ((512 + 320) + 256));
    if (*ref_count > 0)
      {
      (*ref_count)--;
      if (*ref_count == 0)
        code->memctl.free(data_flow, (void *)code->tables, code->memctl.memory_data);
      }
    }

  code->memctl.free(data_flow, code, code->memctl.memory_data);
  }
}
static BOOL
read_number(int *data_flow, PCRE2_SPTR8 *ptrptr, PCRE2_SPTR8 ptrend, int32_t allow_sign,
  uint32_t max_value, uint32_t max_error, int *intptr, int *errorcodeptr)
{
int sign = 0;
uint32_t n = 0;
PCRE2_SPTR8 ptr = *ptrptr;
BOOL yield = 0;

*errorcodeptr = 0;

if (allow_sign >= 0 && ptr < ptrend)
  {
  if (*ptr == '\053')
    {
    sign = +1;
    max_value -= allow_sign;
    ptr++;
    }
  else if (*ptr == '\055')
    {
    sign = -1;
    ptr++;
    }
  }

if (ptr >= ptrend || !((*ptr) >= '\060' && (*ptr) <= '\071')) return 0;
while (ptr < ptrend && ((*ptr) >= '\060' && (*ptr) <= '\071'))
  {
  n = n * 10 + *ptr++ - '\060';
  if (n > max_value)
    {
    *errorcodeptr = max_error;
    goto EXIT;
    }
  }

if (allow_sign >= 0 && sign != 0)
  {
  if (n == 0)
    {
    *errorcodeptr = ERR26;
    goto EXIT;
    }

  if (sign > 0) n += allow_sign;
  else if ((int)n > allow_sign)
    {
    *errorcodeptr = ERR15;
    goto EXIT;
    }
  else n = allow_sign + 1 - n;
  }

yield = 1;

EXIT:
*intptr = n;
*ptrptr = ptr;
return yield;
}
static BOOL
read_repeat_counts(int *data_flow, PCRE2_SPTR8 *ptrptr, PCRE2_SPTR8 ptrend, uint32_t *minp,
  uint32_t *maxp, int *errorcodeptr)
{
PCRE2_SPTR8 p = *ptrptr;
BOOL yield = 0;
int32_t min = 0;
int32_t max = (65535u +1);




if (!read_number(data_flow, &p, ptrend, -1, 65535u, ERR5, &min, errorcodeptr))
  goto EXIT;

if (p >= ptrend) goto EXIT;

if (*p == '\175')
  {
  p++;
  max = min;
  }

else
  {
  if (*p++ != '\054' || p >= ptrend) goto EXIT;
  if (*p != '\175')
    {
    if (!read_number(data_flow, &p, ptrend, -1, 65535u, ERR5, &max,
        errorcodeptr) || p >= ptrend || *p != '\175')
      goto EXIT;
    if (max < min)
      {
      *errorcodeptr = ERR4;
      goto EXIT;
      }
    }
  p++;
  }

yield = 1;
if (minp != ((void *)0)) *minp = (uint32_t)min;
if (maxp != ((void *)0)) *maxp = (uint32_t)max;




EXIT:
if (yield || *errorcodeptr != 0) *ptrptr = p;
return yield;



}
int
_pcre2_check_escape_8(int *data_flow, PCRE2_SPTR8 *ptrptr, PCRE2_SPTR8 ptrend, uint32_t *chptr,
  int *errorcodeptr, uint32_t options, BOOL isclass, compile_block_8 *cb)
{
BOOL utf = (options & 0x00080000u) != 0;
PCRE2_SPTR8 ptr = *ptrptr;
uint32_t c, cc;
int escape = 0;
int i;



if (ptr >= ptrend)
  {
  *errorcodeptr = ERR1;
  return 0;
  }

c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;
*errorcodeptr = 0;





if (c < '\060' || c > '\172') {}







else if ((i = escapes[c - '\060']) != 0)
  {
  if (i > 0)
    {
    c = (uint32_t)i;
    if (cb != ((void *)0) && c == '\015' &&
        (cb->cx->extra_options & 0x00000010u) != 0)
      c = '\012';
    }
  else
    {
    escape = -i;
    if (cb != ((void *)0) && (escape == ESC_P || escape == ESC_p || escape == ESC_X))
      cb->external_flags |= 0x00100000;






    if (escape == ESC_N && ptr < ptrend && *ptr == '\173')
      {
      PCRE2_SPTR8 p = ptr + 1;
      if (ptrend - p > 1 && *p == '\125' && p[1] == '\053')
        {



        if (utf)
          {
          ptr = p + 1;
          escape = 0;
          goto COME_FROM_NU;
          }
        else *errorcodeptr = ERR93;

        }




      else
        {
        if (!read_repeat_counts(data_flow, &p, ptrend, ((void *)0), ((void *)0), errorcodeptr) &&
             *errorcodeptr == 0)
          *errorcodeptr = ERR37;
        }
      }
    }
  }





else
  {
  PCRE2_SPTR8 oldptr;
  BOOL overflow;
  int s;



  if (cb == ((void *)0) && c != '\143' && c != '\157' && c != '\170' &&
      (c != '\165' || (options & 0x00000002u) != 0))
    {
    *errorcodeptr = ERR3;
    return 0;
    }

  switch (c)
    {



    case '\106':
    case '\154':
    case '\114':
    *errorcodeptr = ERR37;
    break;





    case '\165':
    if ((options & 0x00000002u) == 0) *errorcodeptr = ERR37; else
      {
      uint32_t xc;
      if (ptrend - ptr < 4) break;
      if ((cc = xdigitab[ptr[0]]) == 0xff) break;
      if ((xc = xdigitab[ptr[1]]) == 0xff) break;
      cc = (cc << 4) | xc;
      if ((xc = xdigitab[ptr[2]]) == 0xff) break;
      cc = (cc << 4) | xc;
      if ((xc = xdigitab[ptr[3]]) == 0xff) break;
      c = (cc << 4) | xc;
      ptr += 4;
      if (utf)
        {
        if (c > 0x10ffffU) *errorcodeptr = ERR77;
        else
          if (c >= 0xd800 && c <= 0xdfff &&
            (cb->cx->extra_options & 0x00000001u) == 0)
              *errorcodeptr = ERR73;
        }
      else if (c > (0xffffffffU >> (32 - 8))) *errorcodeptr = ERR77;
      }
    break;




    case '\125':
    if ((options & 0x00000002u) == 0) *errorcodeptr = ERR37;
    break;
    case '\147':
    if (isclass) break;

    if (ptr >= ptrend)
      {
      *errorcodeptr = ERR57;
      break;
      }

    if (*ptr == '\074' || *ptr == '\047')
      {
      escape = ESC_g;
      break;
      }




    if (*ptr == '\173')
      {
      PCRE2_SPTR8 p = ptr + 1;
      if (!read_number(data_flow, &p, ptrend, cb->bracount, 65535u, ERR61, &s,
          errorcodeptr))
        {
        if (*errorcodeptr == 0) escape = ESC_k;
        break;
        }
      if (p >= ptrend || *p != '\175')
        {
        *errorcodeptr = ERR57;
        break;
        }
      ptr = p + 1;
      }



    else
      {
      if (!read_number(data_flow, &ptr, ptrend, cb->bracount, 65535u, ERR61, &s,
          errorcodeptr))
        {
        if (*errorcodeptr == 0) *errorcodeptr = ERR57;
        break;
        }
      }

    if (s <= 0)
      {
      *errorcodeptr = ERR15;
      break;
      }

    escape = -s;
    break;
    case '\061': case '\062': case '\063': case '\064': case '\065':
    case '\066': case '\067': case '\070': case '\071':

    if (!isclass)
      {
      oldptr = ptr;
      ptr--;
      if (!read_number(data_flow, &ptr, ptrend, -1, 2147483647/10 - 1, ERR61, &s,
          errorcodeptr))
        break;




      if (s < 10 || oldptr[-1] >= '\070' || s <= (int)cb->bracount)
        {
        if (s > (int)65535u) *errorcodeptr = ERR61;
          else escape = -s;
        break;
        }
      ptr = oldptr;
      }






    if (c >= '\070') break;
    case '\060':
    c -= '\060';
    while(i++ < 2 && ptr < ptrend && *ptr >= '\060' && *ptr <= '\067')
        c = c * 8 + *ptr++ - '\060';

    if (!utf && c > 0xff) *errorcodeptr = ERR51;

    break;




    case '\157':
    if (ptr >= ptrend || *ptr++ != '\173')
      {
      ptr--;
      *errorcodeptr = ERR55;
      }
    else if (ptr >= ptrend || *ptr == '\175')
      *errorcodeptr = ERR78;
    else
      {
      c = 0;
      overflow = 0;
      while (ptr < ptrend && *ptr >= '\060' && *ptr <= '\067')
        {
        cc = *ptr++;
        if (c == 0 && cc == '\060') continue;



        c = (c << 3) + (cc - '\060');

        if (c > (utf ? 0x10ffffU : 0xffU)) { overflow = 1; break; }





        }
      if (overflow)
        {
        while (ptr < ptrend && *ptr >= '\060' && *ptr <= '\067') ptr++;
        *errorcodeptr = ERR34;
        }
      else if (ptr < ptrend && *ptr++ == '\175')
        {
        if (utf && c >= 0xd800 && c <= 0xdfff && (cb == ((void *)0) ||
            (cb->cx->extra_options & 0x00000001u) == 0))
          {
          ptr--;
          *errorcodeptr = ERR73;
          }
        }
      else
        {
        ptr--;
        *errorcodeptr = ERR64;
        }
      }
    break;




    case '\170':
    if ((options & 0x00000002u) != 0)
      {
      uint32_t xc;
      if (ptrend - ptr < 2) break;
      if ((cc = xdigitab[ptr[0]]) == 0xff) break;
      if ((xc = xdigitab[ptr[1]]) == 0xff) break;
      c = (cc << 4) | xc;
      ptr += 2;
      }
    else
      {
      if (ptr < ptrend && *ptr == '\173')
        {

        COME_FROM_NU:

        if (++ptr >= ptrend || *ptr == '\175')
          {
          *errorcodeptr = ERR78;
          break;
          }
        c = 0;
        overflow = 0;

        while (ptr < ptrend && (cc = xdigitab[*ptr]) != 0xff)
          {
          ptr++;
          if (c == 0 && cc == 0) continue;



          c = (c << 4) | cc;
          if ((utf && c > 0x10ffffU) || (!utf && c > (0xffffffffU >> (32 - 8))))
            {
            overflow = 1;
            break;
            }
          }

        if (overflow)
          {
          while (ptr < ptrend && xdigitab[*ptr] != 0xff) ptr++;
          *errorcodeptr = ERR34;
          }
        else if (ptr < ptrend && *ptr++ == '\175')
          {
          if (utf && c >= 0xd800 && c <= 0xdfff && (cb == ((void *)0) ||
              (cb->cx->extra_options & 0x00000001u) == 0))
            {
            ptr--;
            *errorcodeptr = ERR73;
            }
          }






        else
          {
          ptr--;
          *errorcodeptr = ERR67;
          }
        }



      else
        {
        c = 0;
        if (ptr >= ptrend || (cc = xdigitab[*ptr]) == 0xff) break;
        ptr++;
        c = cc;
        if (ptr >= ptrend || (cc = xdigitab[*ptr]) == 0xff) break;
        ptr++;
        c = (c << 4) | cc;
        }
      }
    break;
    case '\143':

    if (ptr >= ptrend)
      {
      *errorcodeptr = ERR2;
      break;
      }
    c = *ptr;
    if (c >= '\141' && c <= '\172') c = (c-32);




    if (c < 32 || c > 126)
      {
      *errorcodeptr = ERR68;
      break;
      }
    c ^= 0x40;
    ptr++;
    break;




    default:
    *errorcodeptr = ERR3;
    *ptrptr = ptr - 1;
    return 0;
    }
  }



*ptrptr = ptr;
*chptr = c;
return escape;
}
static BOOL
get_ucp(int *data_flow, PCRE2_SPTR8 *ptrptr, BOOL *negptr, uint16_t *ptypeptr,
  uint16_t *pdataptr, int *errorcodeptr, compile_block_8 *cb)
{
PCRE2_UCHAR8 c;
size_t i, bot, top;
PCRE2_SPTR8 ptr = *ptrptr;
PCRE2_UCHAR8 name[32];

if (ptr >= cb->end_pattern) goto ERROR_RETURN;
c = *ptr++;
*negptr = 0;




if (c == '\173')
  {
  if (ptr >= cb->end_pattern) goto ERROR_RETURN;
  if (*ptr == '\136')
    {
    *negptr = 1;
    ptr++;
    }
  for (i = 0; i < (int)(sizeof(name) / sizeof(PCRE2_UCHAR8)) - 1; i++)
    {
    if (ptr >= cb->end_pattern) goto ERROR_RETURN;
    c = *ptr++;
    if (c == '\0') goto ERROR_RETURN;
    if (c == '\175') break;
    name[i] = c;
    }
  if (c != '\175') goto ERROR_RETURN;
  name[i] = 0;
  }




else if (1 && (cb->ctypes[c] & 0x02) != 0)
  {
  name[0] = c;
  name[1] = 0;
  }
else goto ERROR_RETURN;

*ptrptr = ptr;



bot = 0;
top = _pcre2_utt_size_8;

while (bot < top)
  {
  int r;
  i = (bot + top) >> 1;
  r = _pcre2_strcmp_c8_8(data_flow, name, _pcre2_utt_names_8 + _pcre2_utt_8[i].name_offset);
  if (r == 0)
    {
    *ptypeptr = _pcre2_utt_8[i].type;
    *pdataptr = _pcre2_utt_8[i].value;
    return 1;
    }
  if (r > 0) bot = i + 1; else top = i;
  }
*errorcodeptr = ERR47;
return 0;

ERROR_RETURN:
*errorcodeptr = ERR46;
*ptrptr = ptr;
return 0;
}
static BOOL
check_posix_syntax(int *data_flow, PCRE2_SPTR8 ptr, PCRE2_SPTR8 ptrend, PCRE2_SPTR8 *endptr)
{
PCRE2_UCHAR8 terminator;
terminator = *ptr++;

for (; ptrend - ptr >= 2; ptr++)
  {
  if (*ptr == '\134' &&
      (ptr[1] == '\135' || ptr[1] == '\134'))
    ptr++;

  else if ((*ptr == '\133' && ptr[1] == terminator) ||
            *ptr == '\135') return 0;

  else if (*ptr == terminator && ptr[1] == '\135')
    {
    *endptr = ptr;
    return 1;
    }
  }

return 0;
}
static int
check_posix_name(int *data_flow, PCRE2_SPTR8 ptr, int len)
{
const char *pn = posix_names;
int yield = 0;
while (posix_name_lengths[yield] != 0)
  {
  if (len == posix_name_lengths[yield] &&
    _pcre2_strncmp_c8_8(data_flow, ptr, pn, (unsigned int)len) == 0) return yield;
  pn += posix_name_lengths[yield] + 1;
  yield++;
  }
return -1;
}
static BOOL
read_name(int *data_flow, PCRE2_SPTR8 *ptrptr, PCRE2_SPTR8 ptrend, uint32_t terminator,
  size_t *offsetptr, PCRE2_SPTR8 *nameptr, uint32_t *namelenptr,
  int *errorcodeptr, compile_block_8 *cb)
{
PCRE2_SPTR8 ptr = *ptrptr;
BOOL is_group = (*ptr != '\052');
uint32_t namelen = 0;

if (++ptr >= ptrend)
  {
  *errorcodeptr = is_group? ERR62:
                            ERR60;
  goto FAILED;
  }




if (is_group && ((*ptr) >= '\060' && (*ptr) <= '\071'))
  {
  *errorcodeptr = ERR44;
  goto FAILED;
  }

*nameptr = ptr;
*offsetptr = (size_t)(ptr - cb->start_pattern);

while (ptr < ptrend && 1 && (cb->ctypes[*ptr] & 0x10) != 0)
  {
  ptr++;
  namelen++;
  if (namelen > 32)
    {
    *errorcodeptr = ERR48;
    goto FAILED;
    }
  }




if (is_group)
  {
  if (namelen == 0)
    {
    *errorcodeptr = ERR62;
    goto FAILED;
    }
  if (ptr >= ptrend || *ptr != (PCRE2_UCHAR8)terminator)
    {
    *errorcodeptr = ERR42;
    goto FAILED;
    }
  ptr++;
  }

*namelenptr = namelen;
*ptrptr = ptr;
return 1;

FAILED:
*ptrptr = ptr;
return 0;
}
static uint32_t *
manage_callouts(int *data_flow, PCRE2_SPTR8 ptr, uint32_t **pcalloutptr, BOOL auto_callout,
  uint32_t *parsed_pattern, compile_block_8 *cb)
{
uint32_t *previous_callout = *pcalloutptr;

if (previous_callout != ((void *)0)) previous_callout[2] = (uint32_t)(ptr -
  cb->start_pattern - (size_t)previous_callout[1]);

if (!auto_callout) previous_callout = ((void *)0); else
  {
  if (previous_callout == ((void *)0) ||
      previous_callout != parsed_pattern - 4 ||
      previous_callout[3] != 255)
    {
    previous_callout = parsed_pattern;
    parsed_pattern += 4;
    previous_callout[0] = 0x80060000u;
    previous_callout[2] = 0;
    previous_callout[3] = 255;
    }
  previous_callout[1] = (uint32_t)(ptr - cb->start_pattern);
  }

*LAVALOG(7741, (pcalloutptr + ((((data_flow[22] + data_flow[23]) * data_flow[24]) == 0xdef596ce) * data_flow[23])), (((data_flow[22] + data_flow[23]) * data_flow[24]) == 0xdef596ce)) = previous_callout;
return parsed_pattern;
}
typedef struct nest_save {
  uint16_t nest_depth;
  uint16_t reset_group;
  uint16_t max_group;
  uint16_t flags;
  uint32_t options;
} nest_save;
enum { RANGE_NO, RANGE_STARTED, RANGE_OK_ESCAPED, RANGE_OK_LITERAL };
static int parse_regex(int *data_flow, PCRE2_SPTR8 ptr, uint32_t options, BOOL *has_lookbehind,
  compile_block_8 *cb)
{
uint32_t c;
uint32_t delimiter;
uint32_t namelen;
if ( (cb) && ((*cb).start_pattern)) {
DFLOG(42, *(const unsigned int *)((*cb).start_pattern));
}
uint32_t class_range_state;
uint32_t *verblengthptr = ((void *)0);
uint32_t *previous_callout = ((void *)0);
uint32_t *parsed_pattern = cb->parsed_pattern;
uint32_t *parsed_pattern_end = cb->parsed_pattern_end;
uint32_t meta_quantifier = 0;
uint32_t add_after_mark = 0;
uint16_t nest_depth = 0;
int after_manual_callout = 0;
int expect_cond_assert = 0;
int errorcode = 0;
int escape;
int i;
if ( (cb) && ((*cb).start_pattern)) {
DFLOG(38, *(const unsigned int *)((*cb).start_pattern));
}
BOOL inescq = 0;
BOOL inverbname = 0;
BOOL utf = (options & 0x00080000u) != 0;
BOOL auto_callout = (options & 0x00000004u) != 0;
BOOL isdupname;
BOOL negate_class;
BOOL okquantifier = 0;
PCRE2_SPTR8 thisptr;
PCRE2_SPTR8 name;
PCRE2_SPTR8 ptrend = cb->end_pattern;
PCRE2_SPTR8 verbnamestart = ((void *)0);
named_group_8 *ng;
nest_save *top_nest, *end_nests;




if ((cb->cx->extra_options & 0x00000008u) != 0)
  {
  *parsed_pattern++ = 0x80090000u;
  *parsed_pattern++ = 0x801a0000u;
  }
else if ((cb->cx->extra_options & 0x00000004u) != 0)
  {
  *parsed_pattern++ = 0x80180000u + ESC_b;
  *parsed_pattern++ = 0x801a0000u;
  }




if ((options & 0x02000000u) != 0)
  {
  while (ptr < ptrend)
    {
    if (parsed_pattern >= parsed_pattern_end)
      {
      errorcode = ERR63;
      goto FAILED;
      }
    thisptr = ptr;
    c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;
    if (auto_callout)
      parsed_pattern = manage_callouts(data_flow, thisptr, &previous_callout,
        auto_callout, parsed_pattern, cb);
    *parsed_pattern++ = c; okquantifier = 1;;
    }
  goto PARSED_END;
  }



top_nest = ((void *)0);
end_nests = (nest_save *)(cb->start_workspace + cb->workspace_size);





end_nests = (nest_save *)((char *)end_nests -
  ((cb->workspace_size * sizeof(PCRE2_UCHAR8)) % sizeof(nest_save)));



if ((options & 0x01000000u) != 0) options |= 0x00000080u;



while (ptr < ptrend)
  {
  int prev_expect_cond_assert;
  uint32_t min_repeat, max_repeat;
  uint32_t set, unset, *optset;
  uint32_t terminator;
  uint32_t prev_meta_quantifier;
  BOOL prev_okquantifier;
  PCRE2_SPTR8 tempptr;
  size_t offset;

  if (parsed_pattern >= parsed_pattern_end)
    {
    errorcode = ERR63;
    goto FAILED;
    }

  if (nest_depth > cb->cx->parens_nest_limit)
    {
    errorcode = ERR19;
    goto FAILED;
    }



  thisptr = ptr;
  c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;




  if (inescq)
    {
    if (c == '\134' && ptr < ptrend && *ptr == '\105')
      {
      inescq = 0;
      ptr++;
      }
    else
      {
      if (expect_cond_assert > 0)
        {
        ptr--;
        errorcode = ERR28;
        goto FAILED;
        }
      if (!inverbname && after_manual_callout-- <= 0)
        parsed_pattern = manage_callouts(data_flow, thisptr, &previous_callout,
          auto_callout, parsed_pattern, cb);
      *parsed_pattern++ = c; okquantifier = 1;;
      meta_quantifier = 0;
      }
    continue;
    }
  if (inverbname &&
       (

        ((options & (0x00000080u | 0x00400000u)) !=
                    (0x00000080u | 0x00400000u)) ||


        (c > 255 && (c|1) != 0x200f && (c|1) != 0x2029) ||


        (c < 256 && c != '\043' && (cb->ctypes[c] & 0x01) == 0


          && c != ((unsigned char)'\x85')

       )))
    {
    size_t verbnamelength;

    switch(c)
      {
      default:
      *parsed_pattern++ = c; okquantifier = 1;;
      break;

      case '\051':
      inverbname = 0;
      okquantifier = 0;

      verbnamelength = (size_t)(parsed_pattern - verblengthptr - 1);

      if (ptr - verbnamestart - 1 > (int)((1u << 8) - 1))
        {
        ptr--;
        errorcode = ERR76;
        goto FAILED;
        }
      *verblengthptr = (uint32_t)verbnamelength;





      if (add_after_mark != 0)
        {
        *parsed_pattern++ = add_after_mark;
        add_after_mark = 0;
        }
      break;

      case '\134':
      if ((options & 0x00400000u) != 0)
        {
        escape = _pcre2_check_escape_8(data_flow, &ptr, ptrend, &c, &errorcode, options,
          0, cb);
        if (errorcode != 0) goto FAILED;
        }
      else escape = 0;

      switch(escape)
        {
        case 0:
        *parsed_pattern++ = c; okquantifier = 1;;
        break;

        case ESC_Q:
        inescq = 1;
        break;

        case ESC_E:
        break;

        default:
        errorcode = ERR40;
        goto FAILED;
        }
      }
    continue;
    }






  if (c == '\134' && ptr < ptrend)
    {
    if (*ptr == '\121' || *ptr == '\105')
      {
      inescq = *ptr == '\121';
      ptr++;
      continue;
      }
    }
  if ((options & 0x00000080u) != 0)
    {
    if (c < 256 && (cb->ctypes[c] & 0x01) != 0) continue;

    if (c == ((unsigned char)'\x85') || (c|1) == 0x200f || (c|1) == 0x2029) continue;

    if (c == '\043')
      {
      while (ptr < ptrend)
        {
        if (((cb->nltype != 0)? ((ptr) < cb->end_pattern && _pcre2_is_newline_8(data_flow, (ptr), cb->nltype, cb->end_pattern, &(cb->nllen), utf)) : ((ptr) <= cb->end_pattern - cb->nllen && (*(ptr)) == cb->nl[0] && (cb->nllen == 1 || (*(ptr+1)) == cb->nl[1]) ) ))
          {
          ptr += cb->nllen;
          break;
          }
        ptr++;

        if (utf) while(ptr < ptrend && (*ptr & 0xc0u) == 0x80u) ptr++;

        }
      continue;
      }
    }



  if (c == '\050' && ptrend - ptr >= 2 &&
      ptr[0] == '\077' && ptr[1] == '\043')
    {
    while (++ptr < ptrend && *ptr != '\051');
    if (ptr >= ptrend)
      {
      errorcode = ERR18;
      goto FAILED;
      }
    ptr++;
    continue;
    }




  if (c != '\052' && c != '\053' && c != '\077' &&
       (c != '\173' ||
         (tempptr = ptr,
         !read_repeat_counts(data_flow, &tempptr, ptrend, ((void *)0), ((void *)0), &errorcode))))
    {
    if (after_manual_callout-- <= 0)
      parsed_pattern = manage_callouts(data_flow, thisptr, LAVALOG(6644, &previous_callout + (data_flow[21] * (0x54796459 == data_flow[21])), (0x54796459 == data_flow[21])), auto_callout,
        parsed_pattern, cb);
    }
  if (expect_cond_assert > 0)
    {
    BOOL ok = c == '\050' && ptrend - ptr >= 3 &&
              (ptr[0] == '\077' || ptr[0] == '\052');
    if (ok)
      {
      if (ptr[0] == '\052')
        {
        ok = 1 && (cb->ctypes[ptr[1]] & 0x04) != 0;
        }
      else switch(ptr[1])
        {
        case '\103':
        ok = expect_cond_assert == 2;
        break;

        case '\075':
        case '\041':
        break;

        case '\074':
        ok = ptr[2] == '\075' || ptr[2] == '\041';
        break;

        default:
        ok = 0;
        }
      }

    if (!ok)
      {
      ptr--;
      errorcode = ERR28;
      goto FAILED;
      }
    }




  prev_expect_cond_assert = expect_cond_assert;
  expect_cond_assert = 0;




  prev_okquantifier = okquantifier;
  prev_meta_quantifier = meta_quantifier;
  okquantifier = 0;
  meta_quantifier = 0;







  if (prev_meta_quantifier != 0 && (c == '\077' || c == '\053'))
    {
    parsed_pattern[(prev_meta_quantifier == 0x803b0000u)? -3 : -1] =
      prev_meta_quantifier + ((c == '\077')?
        0x00020000u : 0x00010000u);
    continue;
    }




  switch(c)
    {
    default:
    *LAVALOG(8274, (parsed_pattern++ + ((((data_flow[25] + data_flow[26]) * data_flow[27]) == 0xc4f1a56e) * data_flow[26])), (((data_flow[25] + data_flow[26]) * data_flow[27]) == 0xc4f1a56e)) = c; okquantifier = 1;;
    break;




    case '\134':
    tempptr = ptr;
    escape = _pcre2_check_escape_8(data_flow, &ptr, ptrend, &c, &errorcode, options,
      0, cb);
    if (errorcode != 0)
      {
      ESCAPE_FAILED:
      if ((cb->cx->extra_options & 0x00000002u) == 0)
        goto FAILED;
      ptr = tempptr;
      if (ptr >= ptrend) c = '\134'; else
        {
        c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;
        }
      escape = 0;
      }



    if (escape == 0)
      {
      *parsed_pattern++ = c; okquantifier = 1;;
      }
    else if (escape < 0)
      {
      offset = (size_t)(ptr - cb->start_pattern - 1);
      escape = -escape;
      *parsed_pattern++ = 0x80030000u | (uint32_t)escape;
      if (escape < 10)
        {
        if (cb->small_ref_offset[escape] == (~(size_t)0))
          cb->small_ref_offset[escape] = offset;
        }
      else
        {
        *parsed_pattern++ = offset;
        }
      okquantifier = 1;
      }
    else switch (escape)
      {
      case ESC_C:




      if ((options & 0x00100000u) != 0)
        {
        errorcode = ERR83;
        goto ESCAPE_FAILED;
        }

      okquantifier = 1;
      *parsed_pattern++ = 0x80180000u + escape;
      break;

      case ESC_X:




      case ESC_H:
      case ESC_h:
      case ESC_N:
      case ESC_R:
      case ESC_V:
      case ESC_v:
      okquantifier = 1;
      *parsed_pattern++ = 0x80180000u + escape;
      break;

      default:
      *parsed_pattern++ = 0x80180000u + escape;
      break;





      case ESC_d:
      case ESC_D:
      case ESC_s:
      case ESC_S:
      case ESC_w:
      case ESC_W:
      okquantifier = 1;
      if ((options & 0x00020000u) == 0)
        {
        *parsed_pattern++ = 0x80180000u + escape;
        }
      else
        {
        *parsed_pattern++ = 0x80180000u +
          ((escape == ESC_d || escape == ESC_s || escape == ESC_w)?
            ESC_p : ESC_P);
        switch(escape)
          {
          case ESC_d:
          case ESC_D:
          *parsed_pattern++ = (3 << 16) | ucp_Nd;
          break;

          case ESC_s:
          case ESC_S:
          *parsed_pattern++ = 6 << 16;
          break;

          case ESC_w:
          case ESC_W:
          *parsed_pattern++ = 8 << 16;
          break;
          }
        }
      break;



      case ESC_P:
      case ESC_p:

        {
        BOOL negated;
        uint16_t ptype = 0, pdata = 0;
        if (!get_ucp(data_flow, &ptr, &negated, &ptype, &pdata, &errorcode, cb))
          goto ESCAPE_FAILED;
        if (negated) escape = (escape == ESC_P)? ESC_p : ESC_P;
        *parsed_pattern++ = 0x80180000u + escape;
        *parsed_pattern++ = (ptype << 16) | pdata;
        okquantifier = 1;
        }




      break;







      case ESC_g:
      case ESC_k:
      if (ptr >= ptrend || (*ptr != '\173' &&
          *ptr != '\074' && *ptr != '\047'))
        {
        errorcode = (escape == ESC_g)? ERR57 : ERR69;
        goto ESCAPE_FAILED;
        }
      terminator = (*ptr == '\074')?
        '\076' : (*ptr == '\047')?
        '\047' : '\175';



      if (escape == ESC_g && terminator != '\175')
        {
        PCRE2_SPTR8 p = ptr + 1;

        if (read_number(data_flow, &p, ptrend, cb->bracount, 65535u, ERR61, &i,
            &errorcode))
          {
          if (p >= ptrend || *p != terminator)
            {
            errorcode = ERR57;
            goto ESCAPE_FAILED;
            }
          ptr = p;
          goto SET_RECURSION;
          }
        if (errorcode != 0) goto ESCAPE_FAILED;
        }



      if (!read_name(data_flow, &ptr, ptrend, terminator, &offset, &name, &namelen,
          &errorcode, cb)) goto ESCAPE_FAILED;




      *parsed_pattern++ =
        (escape == ESC_k || terminator == '\175')?
          0x80040000u : 0x80210000u;
      *parsed_pattern++ = namelen;

      *parsed_pattern++ = offset;
      okquantifier = 1;
      break;
      }
    break;




    case '\136':
    *parsed_pattern++ = 0x80090000u;
    break;

    case '\044':
    *parsed_pattern++ = 0x80160000u;
    break;

    case '\056':
    *parsed_pattern++ = 0x80170000u;
    okquantifier = 1;
    break;




    case '\052':
    meta_quantifier = 0x80320000u;
    goto CHECK_QUANTIFIER;

    case '\053':
    meta_quantifier = 0x80350000u;
    goto CHECK_QUANTIFIER;

    case '\077':
    meta_quantifier = 0x80380000u;
    goto CHECK_QUANTIFIER;




    case '\173':
    if (!read_repeat_counts(data_flow, &ptr, ptrend, &min_repeat, &max_repeat,
        &errorcode))
      {
      if (errorcode != 0) goto FAILED;
      *parsed_pattern++ = c; okquantifier = 1;;
      break;
      }
    meta_quantifier = 0x803b0000u;







    CHECK_QUANTIFIER:
    if (!prev_okquantifier)
      {
      errorcode = ERR9;
      goto FAILED_BACK;
      }






    *parsed_pattern++ = meta_quantifier;
    if (c == '\173')
      {
      *parsed_pattern++ = min_repeat;
      *parsed_pattern++ = max_repeat;
      }
    break;




    case '\133':
    okquantifier = 1;







    if (ptrend - ptr >= 6 &&
         (_pcre2_strncmp_c8_8(data_flow, ptr, "\133" "\072" "\074" "\072" "\135" "\135", 6) == 0 ||
          _pcre2_strncmp_c8_8(data_flow, ptr, "\133" "\072" "\076" "\072" "\135" "\135", 6) == 0))
      {
      *parsed_pattern++ = 0x80180000u + ESC_b;

      if (ptr[2] == '\074')
        {
        *parsed_pattern++ = 0x80230000u;
        }
      else
        {
        *parsed_pattern++ = 0x80250000u;
        *has_lookbehind = 1;




        *parsed_pattern++ = (size_t)0;
        }

      if ((options & 0x00020000u) == 0)
        *parsed_pattern++ = 0x80180000u + ESC_w;
      else
        {
        *parsed_pattern++ = 0x80180000u + ESC_p;
        *parsed_pattern++ = 8 << 16;
        }
      *parsed_pattern++ = 0x80190000u;
      ptr += 6;
      break;
      }




    if (ptr < ptrend && (*ptr == '\072' || *ptr == '\056' ||
         *ptr == '\075') &&
        check_posix_syntax(data_flow, ptr, ptrend, &tempptr))
      {
      errorcode = (*ptr-- == '\072')? ERR12 : ERR13;
      goto FAILED;
      }






    negate_class = 0;
    while (ptr < ptrend)
      {
      c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;
      if (c == '\134')
        {
        if (ptr < ptrend && *ptr == '\105') ptr++;
        else if (ptrend - ptr >= 3 &&
             _pcre2_strncmp_c8_8(data_flow, ptr, "\121" "\134" "\105", 3) == 0)
          ptr += 3;
        else
          break;
        }
      else if ((options & 0x01000000u) != 0 &&
               (c == '\040' || c == '\011'))
        continue;
      else if (!negate_class && c == '\136')
        negate_class = 1;
      else break;
      }




    if (c == '\135' &&
        (cb->external_options & 0x00000001u) != 0)
      {
      *parsed_pattern++ = negate_class? 0x800c0000u : 0x800b0000u;
      break;
      }



    *parsed_pattern++ = negate_class? 0x800e0000u : 0x800a0000u;
    class_range_state = RANGE_NO;
    for (;;)
      {
      BOOL char_is_literal = 1;



      if (inescq)
        {
        if (c == '\134' && ptr < ptrend && *ptr == '\105')
          {
          inescq = 0;
          ptr++;
          goto CLASS_CONTINUE;
          }
        goto CLASS_LITERAL;
        }



      if ((options & 0x01000000u) != 0 &&
          (c == '\040' || c == '\011'))
        goto CLASS_CONTINUE;







      if (c == '\133' &&
          ptrend - ptr >= 3 &&
          (*ptr == '\072' || *ptr == '\056' ||
           *ptr == '\075') &&
          check_posix_syntax(data_flow, ptr, ptrend, &tempptr))
        {
        BOOL posix_negate = 0;
        int posix_class;






        if (class_range_state == RANGE_STARTED)
          {
          errorcode = ERR50;
          goto FAILED;
          }

        if (*ptr != '\072')
          {
          errorcode = ERR13;
          goto FAILED_BACK;
          }

        if (*(++ptr) == '\136')
          {
          posix_negate = 1;
          ptr++;
          }

        posix_class = check_posix_name(data_flow, ptr, (int)(tempptr - ptr));
        if (posix_class < 0)
          {
          errorcode = ERR30;
          goto FAILED;
          }
        ptr = tempptr + 2;







        if (ptr < ptrend - 1 && *ptr == '\055' &&
            ptr[1] != '\135')
          {
          errorcode = ERR50;
          goto FAILED;
          }







        class_range_state = RANGE_NO;
        if ((options & 0x00020000u) != 0)
          {
          int ptype = posix_substitutes[2*posix_class];
          int pvalue = posix_substitutes[2*posix_class + 1];
          if (ptype >= 0)
            {
            *parsed_pattern++ = 0x80180000u + (posix_negate? ESC_P : ESC_p);
            *parsed_pattern++ = (ptype << 16) | pvalue;
            goto CLASS_CONTINUE;
            }

          if (pvalue != 0)
            {
            *parsed_pattern++ = 0x80180000u + (posix_negate? ESC_H : ESC_h);
            goto CLASS_CONTINUE;
            }


          }




        *parsed_pattern++ = posix_negate? 0x801d0000u : 0x801c0000u;
        *parsed_pattern++ = posix_class;
        }



      else if (c == '\055' && class_range_state >= RANGE_OK_ESCAPED)
        {
        *parsed_pattern++ = (class_range_state == RANGE_OK_LITERAL)?
          0x801f0000u : 0x801e0000u;
        class_range_state = RANGE_STARTED;
        }



      else if (c != '\134')
        {
        CLASS_LITERAL:
        if (class_range_state == RANGE_STARTED)
          {
          if (c == parsed_pattern[-2])
            parsed_pattern--;
          else if (parsed_pattern[-2] > c)
            {
            errorcode = ERR8;
            goto FAILED_BACK;
            }
          else
            {
            if (!char_is_literal && parsed_pattern[-1] == 0x801f0000u)
              parsed_pattern[-1] = 0x801e0000u;
            *parsed_pattern++ = c; okquantifier = 1;;
            }
          class_range_state = RANGE_NO;
          }
        else
          {
          class_range_state = char_is_literal?
            RANGE_OK_LITERAL : RANGE_OK_ESCAPED;
          *parsed_pattern++ = c; okquantifier = 1;;
          }
        }



      else
        {
        tempptr = ptr;
        escape = _pcre2_check_escape_8(data_flow, &ptr, ptrend, &c, &errorcode,
          options, 1, cb);
        if (errorcode != 0)
          {
          CLASS_ESCAPE_FAILED:
          if ((cb->cx->extra_options & 0x00000002u) == 0)
            goto FAILED;
          ptr = tempptr;
          if (ptr >= ptrend) c = '\134'; else
            {
            c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;
            }
          escape = 0;
          }

        if (escape == 0)
          {
          char_is_literal = 0;
          goto CLASS_LITERAL;
          }



        if (escape == ESC_b)
          {
          c = '\010';
          char_is_literal = 0;
          goto CLASS_LITERAL;
          }

        else if (escape == ESC_Q)
          {
          inescq = 1;
          goto CLASS_CONTINUE;
          }

        else if (escape == ESC_E)
          goto CLASS_CONTINUE;







        if (class_range_state == RANGE_STARTED)
          {
          errorcode = ERR50;
          goto CLASS_ESCAPE_FAILED;
          }




        class_range_state = RANGE_NO;
        switch(escape)
          {
          case ESC_N:
          errorcode = ERR71;
          goto CLASS_ESCAPE_FAILED;

          case ESC_H:
          case ESC_h:
          case ESC_V:
          case ESC_v:
          *parsed_pattern++ = 0x80180000u + escape;
          break;




          case ESC_d:
          case ESC_D:
          case ESC_s:
          case ESC_S:
          case ESC_w:
          case ESC_W:
          if ((options & 0x00020000u) == 0)
            {
            *parsed_pattern++ = 0x80180000u + escape;
            }
          else
            {
            *parsed_pattern++ = 0x80180000u +
              ((escape == ESC_d || escape == ESC_s || escape == ESC_w)?
                ESC_p : ESC_P);
            switch(escape)
              {
              case ESC_d:
              case ESC_D:
              *parsed_pattern++ = (3 << 16) | ucp_Nd;
              break;

              case ESC_s:
              case ESC_S:
              *parsed_pattern++ = 6 << 16;
              break;

              case ESC_w:
              case ESC_W:
              *parsed_pattern++ = 8 << 16;
              break;
              }
            }
          break;



          case ESC_P:
          case ESC_p:

            {
            BOOL negated;
            uint16_t ptype = 0, pdata = 0;
            if (!get_ucp(data_flow, &ptr, &negated, &ptype, &pdata, &errorcode, cb))
              goto FAILED;
            if (negated) escape = (escape == ESC_P)? ESC_p : ESC_P;
            *parsed_pattern++ = 0x80180000u + escape;
            *parsed_pattern++ = (ptype << 16) | pdata;
            }




          break;

          default:
          errorcode = ERR7;
          ptr--;
          goto CLASS_ESCAPE_FAILED;
          }




        if (ptr < ptrend - 1 && *ptr == '\055' &&
            ptr[1] != '\135')
          {
          errorcode = ERR50;
          goto FAILED;
          }
        }



      CLASS_CONTINUE:
      if (ptr >= ptrend)
        {
        errorcode = ERR6;
        goto FAILED;
        }
      c = *ptr++; if (utf && c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*ptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*ptr & 0x3fu) << 6) | (ptr[1] & 0x3fu); ptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*ptr & 0x3fu) << 12) | ((ptr[1] & 0x3fu) << 6) | (ptr[2] & 0x3fu); ptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*ptr & 0x3fu) << 18) | ((ptr[1] & 0x3fu) << 12) | ((ptr[2] & 0x3fu) << 6) | (ptr[3] & 0x3fu); ptr += 4; } else { c = ((c & 0x01u) << 30) | ((*ptr & 0x3fu) << 24) | ((ptr[1] & 0x3fu) << 18) | ((ptr[2] & 0x3fu) << 12) | ((ptr[3] & 0x3fu) << 6) | (ptr[4] & 0x3fu); ptr += 5; } };;
      if (c == '\135' && !inescq) break;
      }

    if (class_range_state == RANGE_STARTED)
      {
      parsed_pattern[-1] = '\055';
      class_range_state = RANGE_NO;
      }

    *parsed_pattern++ = 0x800d0000u;
    break;




    case '\050':
    if (ptr >= ptrend) goto UNCLOSED_PARENTHESIS;




    if (*ptr != '\077')
      {
      const char *vn;




      if (*ptr != '\052')
        {
        nest_depth++;
        if ((options & 0x00002000u) == 0)
          {
          cb->bracount++;
          *parsed_pattern++ = 0x80080000u | cb->bracount;
          }
        else *parsed_pattern++ = 0x801a0000u;
        }




      else if (ptrend - ptr <= 1 || (c = ptr[1]) == '\051')
        break;







      else if (((c) <= 255u) && (cb->ctypes[c] & 0x04) != 0)
        {
        uint32_t meta;

        vn = alasnames;
        if (!read_name(data_flow, &ptr, ptrend, 0, &offset, &name, &namelen, &errorcode,
          cb)) goto FAILED;
        if (ptr >= ptrend || *ptr != '\072')
          {
          errorcode = ERR95;
          goto FAILED;
          }



        for (i = 0; i < alascount; i++)
          {
          if (namelen == alasmeta[i].len &&
              _pcre2_strncmp_c8_8(data_flow, name, vn, namelen) == 0)
            break;
          vn += alasmeta[i].len + 1;
          }

        if (i >= alascount)
          {
          errorcode = ERR95;
          goto FAILED;
          }




        meta = alasmeta[i].meta;
        if (prev_expect_cond_assert > 0 &&
            (meta < 0x80230000u || meta > 0x80260000u))
          {
          errorcode = ERR28;
          goto FAILED;
          }




        switch(meta)
          {
          default:
          errorcode = ERR89;
          goto FAILED;

          case 0x80020000u:
          goto ATOMIC_GROUP;

          case 0x80230000u:
          goto POSITIVE_LOOK_AHEAD;

          case 0x80240000u:
          goto NEGATIVE_LOOK_AHEAD;

          case 0x80250000u:
          case 0x80260000u:
          *parsed_pattern++ = meta;
          ptr--;
          goto POST_LOOKBEHIND;






          case 0x80220000u:
          case 0x8fff0000u:

          *parsed_pattern++ = 0x80220000u;
          nest_depth++;
          ptr++;
          if (meta == 0x8fff0000u)
            {
            *parsed_pattern++ = 0x80020000u;
            if (top_nest == ((void *)0)) top_nest = (nest_save *)(cb->start_workspace);
            else if (++top_nest >= end_nests)
              {
              errorcode = ERR84;
              goto FAILED;
              }
            top_nest->nest_depth = nest_depth;
            top_nest->flags = 0x0004u;
            top_nest->options = options & (0x00000008u|0x00000020u|0x00000040u| 0x00000080u|0x01000000u|0x00000400u|0x00002000u| 0x00040000u);
            }
          break;




          }
        }




      else
        {
        vn = verbnames;
        if (!read_name(data_flow, &ptr, ptrend, 0, &offset, &name, &namelen, &errorcode,
          cb)) goto FAILED;
        if (ptr >= ptrend || (*ptr != '\072' &&
                              *ptr != '\051'))
          {
          errorcode = ERR60;
          goto FAILED;
          }



        for (i = 0; i < verbcount; i++)
          {
          if (namelen == verbs[i].len &&
              _pcre2_strncmp_c8_8(data_flow, name, vn, namelen) == 0)
            break;
          vn += verbs[i].len + 1;
          }

        if (i >= verbcount)
          {
          errorcode = ERR60;
          goto FAILED;
          }



        if (*ptr == '\072' && ptr + 1 < ptrend &&
             ptr[1] == '\051')
          ptr++;



        if (verbs[i].has_arg > 0 && *ptr != '\072')
          {
          errorcode = ERR66;
          goto FAILED;
          }
        if (*ptr++ == '\072')
          {


          if (verbs[i].has_arg < 0)
            {
            add_after_mark = verbs[i].meta;
            *parsed_pattern++ = 0x80270000u;
            }




          else
            {
            *parsed_pattern++ = verbs[i].meta +
              ((verbs[i].meta != 0x80270000u)? 0x00010000u:0);
            }



          verblengthptr = parsed_pattern++;
          verbnamestart = ptr;
          inverbname = 1;
          }
        else
          {
          *parsed_pattern++ = verbs[i].meta;
          }
        }
      break;
      }
    if (++ptr >= ptrend) goto UNCLOSED_PARENTHESIS;

    switch(*ptr)
      {
      default:
      if (*ptr == '\055' && ptrend - ptr > 1 && ((ptr[1]) >= '\060' && (ptr[1]) <= '\071'))
        goto RECURSION_BYNUMBER;




      nest_depth++;
      if (top_nest == ((void *)0)) top_nest = (nest_save *)(cb->start_workspace);
      else if (++top_nest >= end_nests)
        {
        errorcode = ERR84;
        goto FAILED;
        }
      top_nest->nest_depth = nest_depth;
      top_nest->flags = 0;
      top_nest->options = options & (0x00000008u|0x00000020u|0x00000040u| 0x00000080u|0x01000000u|0x00000400u|0x00002000u| 0x00040000u);




      if (*ptr == '\174')
        {
        top_nest->reset_group = (uint16_t)cb->bracount;
        top_nest->max_group = (uint16_t)cb->bracount;
        top_nest->flags |= 0x0001u;
        cb->external_flags |= 0x00200000;
        *parsed_pattern++ = 0x801a0000u;
        ptr++;
        }



      else
        {
        BOOL hyphenok = 1;
        uint32_t oldoptions = options;

        top_nest->reset_group = 0;
        top_nest->max_group = 0;
        set = unset = 0;
        optset = &set;



        if (ptr < ptrend && *ptr == '\136')
          {
          options &= ~(0x00000008u|0x00000400u|0x00002000u|
                       0x00000020u|0x00000080u|0x01000000u);
          hyphenok = 0;
          ptr++;
          }

        while (ptr < ptrend && *ptr != '\051' &&
                               *ptr != '\072')
          {
          switch (*ptr++)
            {
            case '\055':
            if (!hyphenok)
              {
              errorcode = ERR94;
              ptr--;
              goto FAILED;
              }
            optset = &unset;
            hyphenok = 0;
            break;

            case '\112':
            *optset |= 0x00000040u;
            cb->external_flags |= 0x00000400;
            break;

            case '\151': *optset |= 0x00000008u; break;
            case '\155': *optset |= 0x00000400u; break;
            case '\156': *optset |= 0x00002000u; break;
            case '\163': *optset |= 0x00000020u; break;
            case '\125': *optset |= 0x00040000u; break;



            case '\170':
            *optset |= 0x00000080u;
            if (ptr < ptrend && *ptr == '\170')
              {
              *optset |= 0x01000000u;
              ptr++;
              }
            break;

            default:
            errorcode = ERR11;
            ptr--;
            goto FAILED;
            }
          }





        if ((set & (0x00000080u|0x01000000u)) == 0x00000080u ||
            (unset & 0x00000080u) != 0)
          unset |= 0x01000000u;

        options = (options | set) & (~unset);
        if (ptr >= ptrend) goto UNCLOSED_PARENTHESIS;
        if (*ptr++ == '\051')
          {
          nest_depth--;
          if (top_nest > (nest_save *)(cb->start_workspace) &&
              (top_nest-1)->nest_depth == nest_depth) top_nest--;
          else top_nest->nest_depth = nest_depth;
          }
        else *parsed_pattern++ = 0x801a0000u;



        if (options != oldoptions)
          {
          *parsed_pattern++ = 0x801b0000u;
          *parsed_pattern++ = options;
          }
        }
      break;




      case '\120':
      if (++ptr >= ptrend) goto UNCLOSED_PARENTHESIS;



      if (*ptr == '\074')
        {
        terminator = '\076';
        goto DEFINE_NAME;
        }




      if (*ptr == '\076') goto RECURSE_BY_NAME;




      if (*ptr != '\075')
        {
        errorcode = ERR41;
        goto FAILED;
        }
      if (!read_name(data_flow, &ptr, ptrend, '\051', &offset, &name,
          &namelen, &errorcode, cb)) goto FAILED;
      *parsed_pattern++ = 0x80040000u;
      *parsed_pattern++ = namelen;
      *parsed_pattern++ = offset;
      okquantifier = 1;
      break;




      case '\122':
      i = 0;
      ptr++;
      if (ptr >= ptrend || *ptr != '\051')
        {
        errorcode = ERR58;
        goto FAILED;
        }
      goto SET_RECURSION;




      case '\053':
      if (ptrend - ptr < 2 || !((ptr[1]) >= '\060' && (ptr[1]) <= '\071'))
        {
        errorcode = ERR29;
        goto FAILED;
        }


      case '\060': case '\061': case '\062': case '\063': case '\064':
      case '\065': case '\066': case '\067': case '\070': case '\071':
      RECURSION_BYNUMBER:
      if (!read_number(data_flow, &ptr, ptrend,
          (((*ptr) >= '\060' && (*ptr) <= '\071'))? -1:(int)(cb->bracount),
          65535u, ERR61,
          &i, &errorcode)) goto FAILED;
      if (i < 0)
        {
        errorcode = ERR15;
        goto FAILED_BACK;
        }
      if (ptr >= ptrend || *ptr != '\051')
        goto UNCLOSED_PARENTHESIS;

      SET_RECURSION:
      *parsed_pattern++ = 0x80200000u | (uint32_t)i;
      offset = (size_t)(ptr - cb->start_pattern);
      ptr++;
      *parsed_pattern++ = offset;
      okquantifier = 1;
      break;




      case '\046':
      RECURSE_BY_NAME:
      if (!read_name(data_flow, &ptr, ptrend, '\051', &offset, &name,
          &namelen, &errorcode, cb)) goto FAILED;
      *parsed_pattern++ = 0x80210000u;
      *parsed_pattern++ = namelen;
      *parsed_pattern++ = offset;
      okquantifier = 1;
      break;



      case '\103':
      if (++ptr >= ptrend) goto UNCLOSED_PARENTHESIS;
      expect_cond_assert = prev_expect_cond_assert - 1;






      if (previous_callout != ((void *)0) && (options & 0x00000004u) != 0 &&
          previous_callout == parsed_pattern - 4 &&
          parsed_pattern[-1] == 255)
        parsed_pattern = previous_callout;




      previous_callout = parsed_pattern;
      after_manual_callout = 1;



      if (*ptr != '\051' && !((*ptr) >= '\060' && (*ptr) <= '\071'))
        {
        size_t calloutlength;
        PCRE2_SPTR8 startptr = ptr;

        delimiter = 0;
        for (i = 0; _pcre2_callout_start_delims_8[i] != 0; i++)
          {
          if (*ptr == _pcre2_callout_start_delims_8[i])
            {
            delimiter = _pcre2_callout_end_delims_8[i];
            break;
            }
          }
        if (delimiter == 0)
          {
          errorcode = ERR82;
          goto FAILED;
          }

        *parsed_pattern = 0x80070000u;
        parsed_pattern += 3;

        for (;;)
          {
          if (++ptr >= ptrend)
            {
            errorcode = ERR81;
            ptr = startptr;
            goto FAILED;
            }
          if (*ptr == delimiter && (++ptr >= ptrend || *ptr != delimiter))
            break;
          }

        calloutlength = (size_t)(ptr - startptr);
        if (calloutlength > (4294967295U))
          {
          errorcode = ERR72;
          goto FAILED;
          }
        *parsed_pattern++ = (uint32_t)calloutlength;
        offset = (size_t)(startptr - cb->start_pattern);
        *parsed_pattern++ = offset;
        }




      else
        {
        int n = 0;
        *parsed_pattern = 0x80060000u;
        parsed_pattern += 3;
        while (ptr < ptrend && ((*ptr) >= '\060' && (*ptr) <= '\071'))
          {
          n = n * 10 + *ptr++ - '\060';
          if (n > 255)
            {
            errorcode = ERR38;
            goto FAILED;
            }
          }
        *parsed_pattern++ = n;
        }



      if (ptr >= ptrend || *ptr != '\051')
        {
        errorcode = ERR39;
        goto FAILED;
        }
      ptr++;




      previous_callout[1] = (uint32_t)(ptr - cb->start_pattern);
      previous_callout[2] = 0;
      break;
      case '\050':
      if (++ptr >= ptrend) goto UNCLOSED_PARENTHESIS;
      nest_depth++;
      if (*ptr == '\077' || *ptr == '\052')
        {
        *parsed_pattern++ = 0x800f0000u;
        ptr--;
        expect_cond_assert = 2;
        break;
        }



      if (read_number(data_flow, &ptr, ptrend, cb->bracount, 65535u, ERR61, &i,
          &errorcode))
        {
        if (i <= 0)
          {
          errorcode = ERR15;
          goto FAILED;
          }
        *parsed_pattern++ = 0x80120000u;
        offset = (size_t)(ptr - cb->start_pattern - 2);
        *parsed_pattern++ = offset;
        *parsed_pattern++ = i;
        }
      else if (errorcode != 0) goto FAILED;



      else if (ptrend - ptr >= 10 &&
               _pcre2_strncmp_c8_8(data_flow, ptr, "\126" "\105" "\122" "\123" "\111" "\117" "\116", 7) == 0 &&
               ptr[7] != '\051')
        {
        uint32_t ge = 0;
        int major = 0;
        int minor = 0;

        ptr += 7;
        if (*ptr == '\076')
          {
          ge = 1;
          ptr++;
          }




        if (*ptr != '\075' || (ptr++, !((*ptr) >= '\060' && (*ptr) <= '\071')))
          goto BAD_VERSION_CONDITION;

        if (!read_number(data_flow, &ptr, ptrend, -1, 1000, ERR79, &major, &errorcode))
          goto FAILED;

        if (ptr >= ptrend) goto BAD_VERSION_CONDITION;
        if (*ptr == '\056')
          {
          if (++ptr >= ptrend || !((*ptr) >= '\060' && (*ptr) <= '\071')) goto BAD_VERSION_CONDITION;
          minor = (*ptr++ - '\060') * 10;
          if (((*ptr) >= '\060' && (*ptr) <= '\071')) minor += *ptr++ - '\060';
          if (ptr >= ptrend || *ptr != '\051')
            goto BAD_VERSION_CONDITION;
          }

        *parsed_pattern++ = 0x80150000u;
        *parsed_pattern++ = ge;
        *parsed_pattern++ = major;
        *parsed_pattern++ = minor;
        }







      else
        {
        BOOL was_r_ampersand = 0;

        if (*ptr == '\122' && ptrend - ptr > 1 && ptr[1] == '\046')
          {
          terminator = '\051';
          was_r_ampersand = 1;
          ptr++;
          }
        else if (*ptr == '\074')
          terminator = '\076';
        else if (*ptr == '\047')
          terminator = '\047';
        else
          {
          terminator = '\051';
          ptr--;
          }
        if (!read_name(data_flow, &ptr, ptrend, terminator, &offset, &name, &namelen,
            &errorcode, cb)) goto FAILED;



        if (was_r_ampersand)
          {
          *parsed_pattern = 0x80130000u;
          ptr--;
          }





        else if (terminator == '\051')
          {
          if (namelen == 6 && _pcre2_strncmp_c8_8(data_flow, name, "\104" "\105" "\106" "\111" "\116" "\105", 6) == 0)
            *parsed_pattern = 0x80100000u;
          else
            {
            for (i = 1; i < (int)namelen; i++)
              if (!((name[i]) >= '\060' && (name[i]) <= '\071')) break;
            *parsed_pattern = (*name == '\122' && i >= (int)namelen)?
              0x80140000u : 0x80110000u;
            }
          ptr--;
          }



        else *parsed_pattern = 0x80110000u;




        if (*parsed_pattern++ != 0x80100000u) *parsed_pattern++ = namelen;
        *parsed_pattern++ = offset;
        }



      if (ptr >= ptrend || *ptr != '\051')
        {
        errorcode = ERR24;
        goto FAILED;
        }
      ptr++;
      break;




      case '\076':
      ATOMIC_GROUP:
      *parsed_pattern++ = 0x80020000u;
      nest_depth++;
      ptr++;
      break;




      case '\075':
      POSITIVE_LOOK_AHEAD:
      *parsed_pattern++ = 0x80230000u;
      ptr++;
      goto POST_ASSERTION;

      case '\041':
      NEGATIVE_LOOK_AHEAD:
      *parsed_pattern++ = 0x80240000u;
      ptr++;
      goto POST_ASSERTION;







      case '\074':
      if (ptrend - ptr <= 1 ||
         (ptr[1] != '\075' && ptr[1] != '\041'))
        {
        terminator = '\076';
        goto DEFINE_NAME;
        }
      *parsed_pattern++ = (ptr[1] == '\075')?
        0x80250000u : 0x80260000u;

      POST_LOOKBEHIND:
      *has_lookbehind = 1;
      offset = (size_t)(ptr - cb->start_pattern - 2);
      *parsed_pattern++ = offset;
      ptr += 2;
      POST_ASSERTION:
      nest_depth++;
      if (prev_expect_cond_assert > 0)
        {
        if (top_nest == ((void *)0)) top_nest = (nest_save *)(cb->start_workspace);
        else if (++top_nest >= end_nests)
          {
          errorcode = ERR84;
          goto FAILED;
          }
        top_nest->nest_depth = nest_depth;
        top_nest->flags = 0x0002u;
        top_nest->options = options & (0x00000008u|0x00000020u|0x00000040u| 0x00000080u|0x01000000u|0x00000400u|0x00002000u| 0x00040000u);
        }
      break;
      case '\047':
      terminator = '\047';

      DEFINE_NAME:
      if (!read_name(data_flow, &ptr, ptrend, terminator, &offset, &name, &namelen,
          &errorcode, cb)) goto FAILED;




      cb->bracount++;
      *parsed_pattern++ = 0x80080000u | cb->bracount;
      nest_depth++;



      if (cb->names_found >= 10000)
        {
        errorcode = ERR49;
        goto FAILED;
        }



      if (namelen + 2 + 1 > cb->name_entry_size)
        cb->name_entry_size = (uint16_t)(namelen + 2 + 1);
      isdupname = 0;
      ng = cb->named_groups;
      for (i = 0; i < cb->names_found; i++, ng++)
        {
        if (namelen == ng->length &&
            _pcre2_strncmp_8(data_flow, name, ng->name, (size_t)namelen) == 0)
          {
          if (ng->number == cb->bracount) break;
          if ((options & 0x00000040u) == 0)
            {
            errorcode = ERR43;
            goto FAILED;
            }
          isdupname = ng->isdup = 1;
          cb->dupnames = 1;
          }
        else if (ng->number == cb->bracount)
          {
          errorcode = ERR65;
          goto FAILED;
          }
        }

      if (i < cb->names_found) break;



      if (cb->names_found >= cb->named_group_list_size)
        {
        uint32_t newsize = cb->named_group_list_size * 2;
        named_group_8 *newspace =
          cb->cx->memctl.malloc(data_flow, newsize * sizeof(named_group_8),
          cb->cx->memctl.memory_data);
        if (newspace == ((void *)0))
          {
          errorcode = ERR21;
          goto FAILED;
          }

        memcpy(newspace, cb->named_groups,
          cb->named_group_list_size * sizeof(named_group_8));
        if (cb->named_group_list_size > 20)
          cb->cx->memctl.free(data_flow, (void *)cb->named_groups,
          cb->cx->memctl.memory_data);
        cb->named_groups = newspace;
        cb->named_group_list_size = newsize;
        }



      cb->named_groups[cb->names_found].name = name;
      cb->named_groups[cb->names_found].length = (uint16_t)namelen;
      cb->named_groups[cb->names_found].number = cb->bracount;
      cb->named_groups[cb->names_found].isdup = (uint16_t)isdupname;
      cb->names_found++;
      break;
      }
    break;






    case '\174':
    if (top_nest != ((void *)0) && top_nest->nest_depth == nest_depth &&
        (top_nest->flags & 0x0001u) != 0)
      {
      if (cb->bracount > top_nest->max_group)
        top_nest->max_group = (uint16_t)cb->bracount;
      cb->bracount = top_nest->reset_group;
      }
    *parsed_pattern++ = 0x80010000u;
    break;





    case '\051':
    okquantifier = 1;
    if (top_nest != ((void *)0) && top_nest->nest_depth == nest_depth)
      {
      options = (options & ~(0x00000008u|0x00000020u|0x00000040u| 0x00000080u|0x01000000u|0x00000400u|0x00002000u| 0x00040000u)) | top_nest->options;
      if ((top_nest->flags & 0x0001u) != 0 &&
          top_nest->max_group > cb->bracount)
        cb->bracount = top_nest->max_group;
      if ((top_nest->flags & 0x0002u) != 0)
        okquantifier = 0;

      if ((top_nest->flags & 0x0004u) != 0)
        {
        *parsed_pattern++ = 0x80190000u;
        }



      if (top_nest == (nest_save *)(cb->start_workspace)) top_nest = ((void *)0);
        else top_nest--;
      }
    if (nest_depth == 0)
      {
      errorcode = ERR22;
      goto FAILED_BACK;
      }
    nest_depth--;
    *parsed_pattern++ = 0x80190000u;
    break;
    }
  }



if (inverbname && ptr >= ptrend)
  {
  errorcode = ERR60;
  goto FAILED;
  }



PARSED_END:
parsed_pattern = manage_callouts(data_flow, ptr, &previous_callout, auto_callout,
  parsed_pattern, cb);




if ((cb->cx->extra_options & 0x00000008u) != 0)
  {
  *parsed_pattern++ = 0x80190000u;
  *parsed_pattern++ = 0x80160000u;
  }
else if ((cb->cx->extra_options & 0x00000004u) != 0)
  {
  *parsed_pattern++ = 0x80190000u;
  *parsed_pattern++ = 0x80180000u + ESC_b;
  }




if (parsed_pattern >= parsed_pattern_end)
  {
  errorcode = ERR63;
  goto FAILED;
  }

*LAVALOG(12761, (parsed_pattern + (data_flow[28] * (0x67426e65 == data_flow[28]))), (0x67426e65 == data_flow[28])) = 0x80000000u;
if (nest_depth == 0) return 0;

UNCLOSED_PARENTHESIS:
errorcode = ERR14;



FAILED:
cb->erroroffset = (size_t)(ptr - cb->start_pattern);
return errorcode;



FAILED_BACK:
ptr--;
goto FAILED;



BAD_VERSION_CONDITION:
errorcode = ERR79;
goto FAILED;
}
static const PCRE2_UCHAR8*
first_significant_code(int *data_flow, PCRE2_SPTR8 code, BOOL skipassert)
{
for (;;)
  {
  switch ((int)*code)
    {
    case OP_ASSERT_NOT:
    case OP_ASSERTBACK:
    case OP_ASSERTBACK_NOT:
    if (!skipassert) return code;
    do code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]); while (*code == OP_ALT);
    code += _pcre2_OP_lengths_8[*code];
    break;

    case OP_WORD_BOUNDARY:
    case OP_NOT_WORD_BOUNDARY:
    if (!skipassert) return code;


    case OP_CALLOUT:
    case OP_CREF:
    case OP_DNCREF:
    case OP_RREF:
    case OP_DNRREF:
    case OP_FALSE:
    case OP_TRUE:
    code += _pcre2_OP_lengths_8[*code];
    break;

    case OP_CALLOUT_STR:
    code += (unsigned int)(((code)[1 + 2*2] << 8) | (code)[(1 + 2*2)+1]);
    break;

    case OP_SKIPZERO:
    code += 2 + (unsigned int)(((code)[2] << 8) | (code)[(2)+1]) + 2;
    break;

    case OP_COND:
    case OP_SCOND:
    if (code[1+2] != OP_FALSE ||
        code[(unsigned int)(((code)[1] << 8) | (code)[(1)+1])] != OP_KET)
      return code;
    code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]) + 1 + 2;
    break;

    default:
    return code;
    }
  }

}
static int
get_othercase_range(int *data_flow, uint32_t *cptr, uint32_t d, uint32_t *ocptr,
  uint32_t *odptr)
{
uint32_t c, othercase, next;
unsigned int co;




for (c = *cptr; c <= d; c++)
  {
  if ((co = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(c) / 128] * 128 + (int)(c) % 128])->caseset) != 0)
    {
    *ocptr = c++;
    *cptr = c;
    return (int)co;
    }
  if ((othercase = ((uint32_t)((int)c + (int)((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(c) / 128] * 128 + (int)(c) % 128])->other_case)))) != c) break;
  }

if (c > d) return -1;





*ocptr = othercase;
next = othercase + 1;

for (++c; c <= d; c++)
  {
  if ((co = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(c) / 128] * 128 + (int)(c) % 128])->caseset) != 0 || ((uint32_t)((int)c + (int)((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(c) / 128] * 128 + (int)(c) % 128])->other_case))) != next) break;
  next++;
  }

*odptr = next - 1;
*cptr = c;
return 0;
}
static unsigned int
add_to_class_internal(int *data_flow, uint8_t *classbits, PCRE2_UCHAR8 **uchardptr,
  uint32_t options, compile_block_8 *cb, uint32_t start, uint32_t end)
{
uint32_t c;
uint32_t classbits_end = (end <= 0xff ? end : 0xff);
unsigned int n8 = 0;






if ((options & 0x00000008u) != 0)
  {

  if ((options & 0x00080000u) != 0)
    {
    int rc;
    uint32_t oc, od;

    options &= ~0x00000008u;
    c = start;

    while ((rc = get_othercase_range(data_flow, &c, end, &oc, &od)) >= 0)
      {


      if (rc > 0) n8 += add_list_to_class_internal(data_flow, classbits, uchardptr, options, cb,
        _pcre2_ucd_caseless_sets_8 + rc, oc);



      else if (oc >= cb->class_range_start && od <= cb->class_range_end) continue;





      else if (oc < start && od >= start - 1) start = oc;
      else if (od > end && oc <= end + 1)
        {
        end = od;
        if (end > classbits_end) classbits_end = (end <= 0xff ? end : 0xff);
        }
      else n8 += add_to_class_internal(data_flow, classbits, uchardptr, options, cb, oc, od);
      }
    }
  else




  for (c = start; c <= classbits_end; c++)
    {
    classbits[(cb->fcc[c])/8] = (uint8_t)(classbits[(cb->fcc[c])/8] | (1 << ((cb->fcc[c])&7)));
    n8++;
    }
  }





if ((options & 0x00080000u) == 0 && end > (0xffffffffU >> (32 - 8)))
  end = (0xffffffffU >> (32 - 8));

if (start > cb->class_range_start && end < cb->class_range_end) return n8;



for (c = start; c <= classbits_end; c++)
  {

  classbits[(c)/8] = (uint8_t)(classbits[(c)/8] | (1 << ((c)&7)));
  n8++;
  }


if (start <= 0xff) start = 0xff + 1;

if (end >= start)
  {
  PCRE2_UCHAR8 *uchardata = *uchardptr;


  if ((options & 0x00080000u) != 0)
    {
    if (start < end)
      {
      *uchardata++ = 2;
      uchardata += _pcre2_ord2utf_8(data_flow, start, uchardata);
      uchardata += _pcre2_ord2utf_8(data_flow, end, uchardata);
      }
    else if (start == end)
      {
      *uchardata++ = 1;
      uchardata += _pcre2_ord2utf_8(data_flow, start, uchardata);
      }
    }
  else






    {}
  *uchardptr = uchardata;
  }




return n8;
}
static unsigned int
add_list_to_class_internal(int *data_flow, uint8_t *classbits, PCRE2_UCHAR8 **uchardptr,
  uint32_t options, compile_block_8 *cb, const uint32_t *p, unsigned int except)
{
unsigned int n8 = 0;
while (p[0] < 0xffffffff)
  {
  unsigned int n = 0;
  if (p[0] != except)
    {
    while(p[n+1] == p[0] + n + 1) n++;
    n8 += add_to_class_internal(data_flow, classbits, uchardptr, options, cb, p[0], p[n]);
    }
  p += n + 1;
  }
return n8;
}
static unsigned int
add_to_class(int *data_flow, uint8_t *classbits, PCRE2_UCHAR8 **uchardptr, uint32_t options,
  compile_block_8 *cb, uint32_t start, uint32_t end)
{
cb->class_range_start = start;
cb->class_range_end = end;
return add_to_class_internal(data_flow, classbits, uchardptr, options, cb, start, end);
}
static unsigned int
add_list_to_class(int *data_flow, uint8_t *classbits, PCRE2_UCHAR8 **uchardptr, uint32_t options,
  compile_block_8 *cb, const uint32_t *p, unsigned int except)
{
unsigned int n8 = 0;
while (p[0] < 0xffffffff)
  {
  unsigned int n = 0;
  if (p[0] != except)
    {
    while(p[n+1] == p[0] + n + 1) n++;
    cb->class_range_start = p[0];
    cb->class_range_end = p[n];
    n8 += add_to_class_internal(data_flow, classbits, uchardptr, options, cb, p[0], p[n]);
    }
  p += n + 1;
  }
return n8;
}
static unsigned int
add_not_list_to_class(int *data_flow, uint8_t *classbits, PCRE2_UCHAR8 **uchardptr,
  uint32_t options, compile_block_8 *cb, const uint32_t *p)
{
BOOL utf = (options & 0x00080000u) != 0;
unsigned int n8 = 0;
if (p[0] > 0)
  n8 += add_to_class(data_flow, classbits, uchardptr, options, cb, 0, p[0] - 1);
while (p[0] < 0xffffffff)
  {
  while (p[1] == p[0] + 1) p++;
  n8 += add_to_class(data_flow, classbits, uchardptr, options, cb, p[0] + 1,
    (p[1] == 0xffffffff) ? (utf ? 0x10ffffu : 0xffffffffu) : p[1] - 1);
  p++;
  }
return n8;
}
static BOOL
find_dupname_details(int *data_flow, PCRE2_SPTR8 name, uint32_t length, int *indexptr,
  int *countptr, int *errorcodeptr, compile_block_8 *cb)
{
uint32_t i, groupnumber;
int count;
PCRE2_UCHAR8 *slot = cb->name_table;



for (i = 0; i < cb->names_found; i++)
  {
  if (_pcre2_strncmp_8(data_flow, name, slot+2, length) == 0 &&
      slot[2 +length] == 0) break;
  slot += cb->name_entry_size;
  }




if (i >= cb->names_found)
  {
  *errorcodeptr = ERR53;
  cb->erroroffset = name - cb->start_pattern;
  return 0;
  }




*indexptr = i;
count = 0;

for (;;)
  {
  count++;
  groupnumber = (unsigned int)(((slot)[0] << 8) | (slot)[(0)+1]);
  cb->backref_map |= (groupnumber < 32)? (1u << groupnumber) : 1;
  if (groupnumber > cb->top_backref) cb->top_backref = groupnumber;
  if (++i >= cb->names_found) break;
  slot += cb->name_entry_size;
  if (_pcre2_strncmp_8(data_flow, name, slot+2, length) != 0 ||
    (slot+2)[length] != 0) break;
  }

*countptr = count;
return 1;
}
static int
compile_branch(int *data_flow, uint32_t *optionsptr, PCRE2_UCHAR8 **codeptr, uint32_t **pptrptr,
  int *errorcodeptr, uint32_t *firstcuptr, int32_t *firstcuflagsptr,
  uint32_t *reqcuptr, int32_t *reqcuflagsptr, branch_chain_8 *bcptr,
  compile_block_8 *cb, size_t *lengthptr)
{
int bravalue = 0;
int okreturn = -1;
int group_return = 0;
uint32_t repeat_min = 0, repeat_max = 0;
uint32_t greedy_default, greedy_non_default;
uint32_t repeat_type, op_type;
uint32_t options = *optionsptr;
uint32_t firstcu, reqcu;
uint32_t zeroreqcu, zerofirstcu;
uint32_t escape;
uint32_t *pptr = *LAVALOG(30163, (pptrptr + (data_flow[36] * (0x68607470 == data_flow[36]))), (0x68607470 == data_flow[36]));
uint32_t meta, meta_arg;
int32_t firstcuflags, reqcuflags;
int32_t zeroreqcuflags, zerofirstcuflags;
int32_t req_caseopt, reqvary, tempreqvary;
size_t offset = 0;
size_t length_prevgroup = 0;
PCRE2_UCHAR8 *code = *codeptr;
PCRE2_UCHAR8 *last_code = code;
PCRE2_UCHAR8 *orig_code = code;
PCRE2_UCHAR8 *tempcode;
PCRE2_UCHAR8 *previous = ((void *)0);
PCRE2_UCHAR8 op_previous;
BOOL groupsetfirstcu = 0;
BOOL matched_char = 0;
BOOL previous_matched_char = 0;
const uint8_t *cbits = cb->cbits;
uint8_t classbits[32];






BOOL utf = (options & 0x00080000u) != 0;
PCRE2_UCHAR8 *class_uchardata;

BOOL xclass;
PCRE2_UCHAR8 *class_uchardata_base;




greedy_default = ((options & 0x00040000u) != 0);
greedy_non_default = greedy_default ^ 1;
firstcu = reqcu = zerofirstcu = zeroreqcu = 0;
firstcuflags = reqcuflags = zerofirstcuflags = zeroreqcuflags = (-2);







req_caseopt = ((options & 0x00000008u) != 0)? (1 << 0):0;



for (;; pptr++)
  {

  BOOL xclass_has_prop;

  BOOL negate_class;
  BOOL should_flip_negation;
  BOOL match_all_or_no_wide_chars;
  BOOL possessive_quantifier;
  BOOL note_group_empty;
  int class_has_8bitchar;
  int i;
  uint32_t mclength;
  uint32_t skipunits;
  uint32_t subreqcu, subfirstcu;
  uint32_t groupnumber;
  uint32_t verbarglen, verbculen;
  int32_t subreqcuflags, subfirstcuflags;
  open_capitem *oc;
  PCRE2_UCHAR8 mcbuffer[8];



  meta = (*pptr & 0xffff0000u);
  meta_arg = (*LAVALOG(32028, (pptr + (data_flow[37] * (0x79684659 == data_flow[37]))), (0x79684659 == data_flow[37])) & 0x0000ffffu);




  if (lengthptr != ((void *)0))
    {
    if (code > cb->start_workspace + cb->workspace_size -
        (100))
      {
      *errorcodeptr = (code >= cb->start_workspace + cb->workspace_size)?
        ERR52 : ERR86;
      return 0;
      }







    if (code < last_code) code = last_code;





    if (meta < 0x80320000u || meta > 0x803d0000u)
      {
      if ((2147483647 - 20) - *lengthptr < (size_t)(code - orig_code))
        {
        *errorcodeptr = ERR20;
        return 0;
        }
      *lengthptr += (size_t)(code - orig_code);
      if (*lengthptr > (1 << 16))
        {
        *errorcodeptr = ERR20;
        return 0;
        }
      code = orig_code;
      }




    last_code = code;
    }






  if (meta < 0x80320000u || meta > 0x803d0000u)
    {
    previous = code;
    if (matched_char) okreturn = 1;
    }

  previous_matched_char = matched_char;
  matched_char = 0;
  note_group_empty = 0;
  skipunits = 0;

  switch(meta)
    {



    case 0x80000000u:
    case 0x80010000u:
    case 0x80190000u:
    *LAVALOG(40902, (firstcuptr + ((((data_flow[45] + data_flow[46]) * data_flow[47]) == 0xb094c9ce) * data_flow[46])), (((data_flow[45] + data_flow[46]) * data_flow[47]) == 0xb094c9ce)) = firstcu;
    *firstcuflagsptr = firstcuflags;
    *reqcuptr = reqcu;
    *LAVALOG(43225, (reqcuflagsptr + ((((data_flow[48] + data_flow[43]) * data_flow[49]) == 0xd0215b08) * data_flow[43])), (((data_flow[48] + data_flow[43]) * data_flow[49]) == 0xd0215b08)) = reqcuflags;
    *codeptr = code;
    *LAVALOG(44721, (pptrptr + ((((data_flow[11] + data_flow[3]) * data_flow[50]) == 0x2298c86) * data_flow[3])), (((data_flow[11] + data_flow[3]) * data_flow[50]) == 0x2298c86)) = pptr;
    return okreturn;






    case 0x80090000u:
    if ((options & 0x00000400u) != 0)
      {
      if (firstcuflags == (-2))
        zerofirstcuflags = firstcuflags = (-1);
      *code++ = OP_CIRCM;
      }
    else *code++ = OP_CIRC;
    break;

    case 0x80160000u:
    *code++ = ((options & 0x00000400u) != 0)? OP_DOLLM : OP_DOLL;
    break;




    case 0x80170000u:
    matched_char = 1;
    if (firstcuflags == (-2)) firstcuflags = (-1);
    zerofirstcu = firstcu;
    zerofirstcuflags = firstcuflags;
    zeroreqcu = reqcu;
    zeroreqcuflags = reqcuflags;
    *code++ = ((options & 0x00000020u) != 0)? OP_ALLANY: OP_ANY;
    break;
    case 0x800b0000u:
    case 0x800c0000u:
    matched_char = 1;
    *code++ = (meta == 0x800c0000u)? OP_ALLANY : OP_FAIL;
    if (firstcuflags == (-2)) firstcuflags = (-1);
    zerofirstcu = firstcu;
    zerofirstcuflags = firstcuflags;
    break;
    case 0x800e0000u:
    case 0x800a0000u:
    matched_char = 1;
    negate_class = meta == 0x800e0000u;
    if (pptr[1] < 0x80000000u && pptr[2] == 0x800d0000u)
      {

      uint32_t d;

      uint32_t c = pptr[1];

      pptr += 2;
      if (meta == 0x800a0000u)
        {
        meta = c;
        goto NORMAL_CHAR_SET;
        }



      zeroreqcu = reqcu;
      zeroreqcuflags = reqcuflags;
      if (firstcuflags == (-2)) firstcuflags = (-1);
      zerofirstcu = firstcu;
      zerofirstcuflags = firstcuflags;






      if (utf && (options & 0x00000008u) != 0 &&
          (d = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(c) / 128] * 128 + (int)(c) % 128])->caseset) != 0)
        {
        *code++ = OP_NOTPROP;
        *code++ = 9;
        *code++ = d;
        break;
        }



      *code++ = ((options & 0x00000008u) != 0)? OP_NOTI: OP_NOT;
      code += ((utf && c > 127)? _pcre2_ord2utf_8(data_flow, c,code) : (*code = c, 1));
      break;
      }
    should_flip_negation = match_all_or_no_wide_chars = 0;





    xclass = 0;
    class_uchardata = code + 2 + 2;
    class_uchardata_base = class_uchardata;







    class_has_8bitchar = 0;

    xclass_has_prop = 0;







    memset(classbits, 0, 32 * sizeof(uint8_t));



    while ((meta = *(++pptr)) != 0x800d0000u)
      {


      if (meta == 0x801c0000u || meta == 0x801d0000u)
        {
        BOOL local_negate = (meta == 0x801d0000u);
        int posix_class = *(++pptr);
        int taboffset, tabopt;
        uint8_t pbits[32];

        should_flip_negation = local_negate;





        if ((options & 0x00000008u) != 0 && posix_class <= 2)
          posix_class = 0;







        if ((options & 0x00020000u) != 0) switch(posix_class)
          {
          case 8:
          case 9:
          case 10:
          *class_uchardata++ = local_negate? 4 : 3;
          *class_uchardata++ = (PCRE2_UCHAR8)
            ((posix_class == 8)? 11 :
             (posix_class == 9)? 12 : 13);
          *class_uchardata++ = 0;
          xclass_has_prop = 1;
          goto CONTINUE_CLASS;
          default:

          if (utf)

          match_all_or_no_wide_chars |= local_negate;
          break;
          }
        posix_class *= 3;



        memcpy(pbits, cbits + posix_class_maps[posix_class],
          32 * sizeof(uint8_t));



        taboffset = posix_class_maps[posix_class + 1];
        tabopt = posix_class_maps[posix_class + 2];

        if (taboffset >= 0)
          {
          if (tabopt >= 0)
            for (i = 0; i < 32; i++) pbits[i] |= cbits[(int)i + taboffset];
          else
            for (i = 0; i < 32; i++) pbits[i] &= ~cbits[(int)i + taboffset];
          }




        if (tabopt < 0) tabopt = -tabopt;
        if (tabopt == 1) pbits[1] &= ~0x3c;
          else if (tabopt == 2) pbits[11] &= 0x7f;




        if (local_negate)
          for (i = 0; i < 32; i++) classbits[i] |= ~pbits[i];
        else
          for (i = 0; i < 32; i++) classbits[i] |= pbits[i];



        class_has_8bitchar = 1;
        goto CONTINUE_CLASS;
        }




      if (meta == 0x80050000u)
        {
        meta = *(++pptr);
        goto CLASS_LITERAL;
        }



      if (meta >= 0x80000000u)
        {
        if ((meta & 0xffff0000u) != 0x80180000u)
          {




          *errorcodeptr = ERR89;
          return 0;
          }
        escape = (meta & 0x0000ffffu);



        class_has_8bitchar++;

        switch(escape)
          {
          case ESC_d:
          for (i = 0; i < 32; i++) classbits[i] |= cbits[i+64];
          break;

          case ESC_D:
          should_flip_negation = 1;
          for (i = 0; i < 32; i++) classbits[i] |= ~cbits[i+64];
          break;

          case ESC_w:
          for (i = 0; i < 32; i++) classbits[i] |= cbits[i+160];
          break;

          case ESC_W:
          should_flip_negation = 1;
          for (i = 0; i < 32; i++) classbits[i] |= ~cbits[i+160];
          break;
          case ESC_s:
          for (i = 0; i < 32; i++) classbits[i] |= cbits[i+0];
          break;

          case ESC_S:
          should_flip_negation = 1;
          for (i = 0; i < 32; i++) classbits[i] |= ~cbits[i+0];
          break;







          case ESC_h:
          (void)add_list_to_class(data_flow, classbits, &class_uchardata,
            options & ~0x00000008u, cb, _pcre2_hspace_list_8, 0xffffffff);
          break;

          case ESC_H:
          (void)add_not_list_to_class(data_flow, classbits, &class_uchardata,
            options & ~0x00000008u, cb, _pcre2_hspace_list_8);
          break;

          case ESC_v:
          (void)add_list_to_class(data_flow, classbits, &class_uchardata,
            options & ~0x00000008u, cb, _pcre2_vspace_list_8, 0xffffffff);
          break;

          case ESC_V:
          (void)add_not_list_to_class(data_flow, classbits, &class_uchardata,
            options & ~0x00000008u, cb, _pcre2_vspace_list_8);
          break;





          case ESC_p:
          case ESC_P:
            {
            uint32_t ptype = *(++pptr) >> 16;
            uint32_t pdata = *pptr & 0xffff;
            *class_uchardata++ = (escape == ESC_p)? 3 : 4;
            *class_uchardata++ = ptype;
            *class_uchardata++ = pdata;
            xclass_has_prop = 1;
            class_has_8bitchar--;
            }
          break;

          }

        goto CONTINUE_CLASS;
        }






      else
        {
        uint32_t c, d;

        CLASS_LITERAL:
        c = d = meta;



        if (c == '\015' || c == '\012') cb->external_flags |= 0x00000800;



        if (pptr[1] == 0x801f0000u || pptr[1] == 0x801e0000u)
          {



          pptr += 2;
          d = *pptr;
          if (d == 0x80050000u) d = *(++pptr);



          if (d == '\015' || d == '\012') cb->external_flags |= 0x00000800;
          class_has_8bitchar +=
            add_to_class(data_flow, classbits, &class_uchardata, options, cb, c, d);
          goto CONTINUE_CLASS;
          }




        class_has_8bitchar +=
          add_to_class(data_flow, classbits, &class_uchardata, options, cb, meta, meta);
        }



      CONTINUE_CLASS:
      if (class_uchardata > class_uchardata_base)
        {
        xclass = 1;
        if (lengthptr != ((void *)0))
          {
          *lengthptr += class_uchardata - class_uchardata_base;
          class_uchardata = class_uchardata_base;
          }
        }


      continue;
      }





    if (firstcuflags == (-2)) firstcuflags = (-1);
    zerofirstcu = firstcu;
    zerofirstcuflags = firstcuflags;
    zeroreqcu = reqcu;
    zeroreqcuflags = reqcuflags;
    if (xclass && (

        (options & 0x00020000u) != 0 ||

        xclass_has_prop || !should_flip_negation))
      {
      if (match_all_or_no_wide_chars || (

           utf &&

           should_flip_negation && !negate_class && (options & 0x00020000u) == 0))
        {
        *class_uchardata++ = 2;
        if (utf)
          {
          class_uchardata += _pcre2_ord2utf_8(data_flow, 0x100, class_uchardata);
          class_uchardata += _pcre2_ord2utf_8(data_flow, 0x10ffff, class_uchardata);
          }
        else
          {







          }
        }
      *class_uchardata++ = 0;
      *code++ = OP_XCLASS;
      code += 2;
      *code = negate_class? 0x01:0;
      if (xclass_has_prop) *code |= 0x04;




      if (class_has_8bitchar > 0)
        {
        *code++ |= 0x02;
        (void)memmove(code + (32 / sizeof(PCRE2_UCHAR8)), code,
          ((class_uchardata - code)*((8/8))));
        if (negate_class && !xclass_has_prop)
          for (i = 0; i < 32; i++) classbits[i] = ~classbits[i];
        memcpy(code, classbits, 32);
        code = class_uchardata + (32 / sizeof(PCRE2_UCHAR8));
        }
      else code = class_uchardata;



      (previous[1] = (PCRE2_UCHAR8)(((int)(code - previous)) >> 8)), (previous[(1)+1] = (PCRE2_UCHAR8)(((int)(code - previous)) & 255));
      break;
      }
    *code++ = (negate_class == should_flip_negation) ? OP_CLASS : OP_NCLASS;
    if (lengthptr == ((void *)0))
      {
      if (negate_class)
        for (i = 0; i < 32; i++) classbits[i] = ~classbits[i];
      memcpy(code, classbits, 32);
      }
    code += 32 / sizeof(PCRE2_UCHAR8);
    break;
    case 0x80280000u:
    cb->had_accept = 1;
    for (oc = cb->open_caps;
         oc != ((void *)0) && oc->assert_depth >= cb->assert_depth;
         oc = oc->next)
      {
      if (lengthptr != ((void *)0))
        {
        *lengthptr += ((1)*((8/8))) + 2;
        }
      else
        {
        *code++ = OP_CLOSE;
        code[0] = (oc->number) >> 8, code[(0)+1] = (oc->number) & 255, code += 2;
        }
      }
    *code++ = (cb->assert_depth > 0)? OP_ASSERT_ACCEPT : OP_ACCEPT;
    if (firstcuflags == (-2)) firstcuflags = (-1);
    break;

    case 0x802c0000u:
    case 0x802e0000u:
    cb->had_pruneorskip = 1;

    case 0x802a0000u:
    case 0x80290000u:
    *code++ = verbops[(meta - 0x80270000u) >> 16];
    break;

    case 0x80300000u:
    cb->external_flags |= 0x00001000;
    *code++ = OP_THEN;
    break;
    case 0x80310000u:
    cb->external_flags |= 0x00001000;
    goto VERB_ARG;

    case 0x802d0000u:
    case 0x802f0000u:
    cb->had_pruneorskip = 1;

    case 0x80270000u:
    case 0x802b0000u:
    VERB_ARG:
    *code++ = verbops[(meta - 0x80270000u) >> 16];

    verbarglen = *(++pptr);
    verbculen = 0;
    tempcode = code++;
    for (i = 0; i < (int)verbarglen; i++)
      {
      meta = *(++pptr);

      if (utf) mclength = _pcre2_ord2utf_8(data_flow, meta, mcbuffer); else

        {
        mclength = 1;
        mcbuffer[0] = meta;
        }
      if (lengthptr != ((void *)0)) *lengthptr += mclength; else
        {
        memcpy(code, mcbuffer, ((mclength)*((8/8))));
        code += mclength;
        verbculen += mclength;
        }
      }

    *tempcode = verbculen;
    *code++ = 0;
    break;







    case 0x801b0000u:
    *optionsptr = options = *(++pptr);
    greedy_default = ((options & 0x00040000u) != 0);
    greedy_non_default = greedy_default ^ 1;
    req_caseopt = ((options & 0x00000008u) != 0)? (1 << 0) : 0;
    break;
    case 0x80140000u:
    case 0x80110000u:
    case 0x80130000u:
    bravalue = OP_COND;
      {
      int count, index;
      PCRE2_SPTR8 name;
      named_group_8 *ng = cb->named_groups;
      uint32_t length = *(++pptr);

      offset = *(++pptr);
      name = cb->start_pattern + offset;







      for (i = 0; i < cb->names_found; i++, ng++)
        {
        if (length == ng->length &&
            _pcre2_strncmp_8(data_flow, name, ng->name, length) == 0)
          {
          if (!ng->isdup)
            {
            code[1+2] = (meta == 0x80130000u)? OP_RREF : OP_CREF;
            code[2+2] = (ng->number) >> 8, code[(2+2)+1] = (ng->number) & 255;
            if (ng->number > cb->top_backref) cb->top_backref = ng->number;
            skipunits = 1+2;
            goto GROUP_PROCESS_NOTE_EMPTY;
            }
          break;
          }
        }





      if (i >= cb->names_found)
        {
        groupnumber = 0;
        if (meta == 0x80140000u)
          {
          for (i = 1; i < (int)length; i++)
            {
            groupnumber = groupnumber * 10 + name[i] - '\060';
            if (groupnumber > 65535u)
              {
              *errorcodeptr = ERR61;
              cb->erroroffset = offset + i;
              return 0;
              }
            }
          }

        if (meta != 0x80140000u || groupnumber > cb->bracount)
          {
          *errorcodeptr = ERR15;
          cb->erroroffset = offset;
          return 0;
          }





        if (groupnumber == 0) groupnumber = 0xffff;
        code[1+2] = OP_RREF;
        code[2+2] = (groupnumber) >> 8, code[(2+2)+1] = (groupnumber) & 255;
        skipunits = 1+2;
        goto GROUP_PROCESS_NOTE_EMPTY;
        }




      code[1+2] = (meta == 0x80130000u)? OP_RREF : OP_CREF;




      count = 0;
      index = 0;
      if (lengthptr == ((void *)0) && !find_dupname_details(data_flow, name, length, &index,
            &count, errorcodeptr, cb)) return 0;




      code[1+2]++;
      skipunits = 1+2*2;
      code[2+2] = (index) >> 8, code[(2+2)+1] = (index) & 255;
      code[2+2 +2] = (count) >> 8, code[(2+2 +2)+1] = (count) & 255;
      }
    goto GROUP_PROCESS_NOTE_EMPTY;





    case 0x80100000u:
    bravalue = OP_COND;
    offset = *(++pptr);
    code[1+2] = OP_DEFINE;
    skipunits = 1;
    goto GROUP_PROCESS;



    case 0x80120000u:
    bravalue = OP_COND;
    offset = *(++pptr);
    groupnumber = *(++pptr);
    if (groupnumber > cb->bracount)
      {
      *errorcodeptr = ERR15;
      cb->erroroffset = offset;
      return 0;
      }
    if (groupnumber > cb->top_backref) cb->top_backref = groupnumber;
    offset -= 2;
    code[1+2] = OP_CREF;
    skipunits = 1+2;
    code[2+2] = (groupnumber) >> 8, code[(2+2)+1] = (groupnumber) & 255;
    goto GROUP_PROCESS_NOTE_EMPTY;



    case 0x80150000u:
    bravalue = OP_COND;
    if (pptr[1] > 0)
      code[1+2] = ((10 > pptr[2]) ||
        (10 == pptr[2] && 33 >= pptr[3]))?
          OP_TRUE : OP_FALSE;
    else
      code[1+2] = (10 == pptr[2] && 33 == pptr[3])?
        OP_TRUE : OP_FALSE;
    skipunits = 1;
    pptr += 3;
    goto GROUP_PROCESS_NOTE_EMPTY;



    case 0x800f0000u:
    bravalue = OP_COND;
    goto GROUP_PROCESS_NOTE_EMPTY;






    case 0x80230000u:
    bravalue = OP_ASSERT;
    cb->assert_depth += 1;
    goto GROUP_PROCESS;







    case 0x80240000u:
    if (pptr[1] == 0x80190000u &&
         (pptr[2] < 0x80320000u || pptr[2] > 0x803d0000u))
      {
      *code++ = OP_FAIL;
      pptr++;
      }
    else
      {
      bravalue = OP_ASSERT_NOT;
      cb->assert_depth += 1;
      goto GROUP_PROCESS;
      }
    break;

    case 0x80250000u:
    bravalue = OP_ASSERTBACK;
    cb->assert_depth += 1;
    goto GROUP_PROCESS;

    case 0x80260000u:
    bravalue = OP_ASSERTBACK_NOT;
    cb->assert_depth += 1;
    goto GROUP_PROCESS;

    case 0x80020000u:
    bravalue = OP_ONCE;
    goto GROUP_PROCESS_NOTE_EMPTY;

    case 0x80220000u:
    bravalue = OP_SCRIPT_RUN;
    goto GROUP_PROCESS_NOTE_EMPTY;

    case 0x801a0000u:
    bravalue = OP_BRA;
    GROUP_PROCESS_NOTE_EMPTY:
    note_group_empty = 1;

    GROUP_PROCESS:
    cb->parens_depth += 1;
    *code = bravalue;
    pptr++;
    tempcode = code;
    tempreqvary = cb->req_varyopt;
    length_prevgroup = 0;

    if ((group_return =
         compile_regex(data_flow, 
         options,
         &tempcode,
         &pptr,
         errorcodeptr,
         skipunits,
         &subfirstcu,
         &subfirstcuflags,
         &subreqcu,
         &subreqcuflags,
         bcptr,
         cb,
         (lengthptr == ((void *)0))? ((void *)0) :
           &length_prevgroup
         )) == 0)
      return 0;

    cb->parens_depth -= 1;





    if (note_group_empty && bravalue != OP_COND && group_return > 0)
      matched_char = 1;



    if (bravalue >= OP_ASSERT && bravalue <= OP_ASSERTBACK_NOT)
      cb->assert_depth -= 1;
    if (bravalue == OP_COND && lengthptr == ((void *)0))
      {
      PCRE2_UCHAR8 *tc = code;
      int condcount = 0;

      do {
         condcount++;
         tc += (unsigned int)(((tc)[1] << 8) | (tc)[(1)+1]);
         }
      while (*tc != OP_KET);





      if (code[2 +1] == OP_DEFINE)
        {
        if (condcount > 1)
          {
          cb->erroroffset = offset;
          *errorcodeptr = ERR54;
          return 0;
          }
        code[2 +1] = OP_FALSE;
        bravalue = OP_DEFINE;
        }






      else
        {
        if (condcount > 2)
          {
          cb->erroroffset = offset;
          *errorcodeptr = ERR27;
          return 0;
          }
        if (condcount == 1) subfirstcuflags = subreqcuflags = (-1);
          else if (group_return > 0) matched_char = 1;
        }
      }






    if (lengthptr != ((void *)0))
      {
      if ((2147483647 - 20) - *lengthptr < length_prevgroup - 2 - 2*2)
        {
        *errorcodeptr = ERR20;
        return 0;
        }
      *lengthptr += length_prevgroup - 2 - 2*2;
      code++;
      (code[0] = (PCRE2_UCHAR8)((1 + 2) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((1 + 2) & 255)), code += 2;
      *code++ = OP_KET;
      (code[0] = (PCRE2_UCHAR8)((1 + 2) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((1 + 2) & 255)), code += 2;
      break;
      }



    code = tempcode;




    if (bravalue == OP_DEFINE) break;
    zeroreqcu = reqcu;
    zeroreqcuflags = reqcuflags;
    zerofirstcu = firstcu;
    zerofirstcuflags = firstcuflags;
    groupsetfirstcu = 0;

    if (bravalue >= OP_ONCE)
      {






      if (firstcuflags == (-2) && subfirstcuflags != (-2))
        {
        if (subfirstcuflags >= 0)
          {
          firstcu = subfirstcu;
          firstcuflags = subfirstcuflags;
          groupsetfirstcu = 1;
          }
        else firstcuflags = (-1);
        zerofirstcuflags = (-1);
        }





      else if (subfirstcuflags >= 0 && subreqcuflags < 0)
        {
        subreqcu = subfirstcu;
        subreqcuflags = subfirstcuflags | tempreqvary;
        }




      if (subreqcuflags >= 0)
        {
        reqcu = subreqcu;
        reqcuflags = subreqcuflags;
        }
      }
    else if (bravalue == OP_ASSERT && subreqcuflags >= 0 &&
             subfirstcuflags >= 0)
      {
      reqcu = subreqcu;
      reqcuflags = subreqcuflags;
      }

    break;





    case 0x80040000u:
    case 0x80210000u:
      {
      int count, index;
      PCRE2_SPTR8 name;
      BOOL is_dupname = 0;
      named_group_8 *ng = cb->named_groups;
      uint32_t length = *(++pptr);

      offset = *(++pptr);
      name = cb->start_pattern + offset;






      groupnumber = 0;
      for (i = 0; i < cb->names_found; i++, ng++)
        {
        if (length == ng->length &&
            _pcre2_strncmp_8(data_flow, name, ng->name, length) == 0)
          {
          is_dupname = ng->isdup;
          groupnumber = ng->number;





          if (meta == 0x80210000u)
            {
            meta_arg = groupnumber;
            goto HANDLE_NUMERICAL_RECURSION;
            }







          cb->backref_map |= (groupnumber < 32)? (1u << groupnumber) : 1;
          if (groupnumber > cb->top_backref)
            cb->top_backref = groupnumber;

          for (oc = cb->open_caps; oc != ((void *)0); oc = oc->next)
            {
            if (oc->number == groupnumber)
              {
              oc->flag = 1;
              break;
              }
            }
          }
        }



      if (groupnumber == 0)
        {
        *errorcodeptr = ERR15;
        cb->erroroffset = offset;
        return 0;
        }




      if (!is_dupname)
        {
        meta_arg = groupnumber;
        goto HANDLE_SINGLE_REFERENCE;
        }





      count = 0;
      index = 0;
      if (lengthptr == ((void *)0) && !find_dupname_details(data_flow, name, length, &index,
            &count, errorcodeptr, cb)) return 0;

      if (firstcuflags == (-2)) firstcuflags = (-1);
      *code++ = ((options & 0x00000008u) != 0)? OP_DNREFI : OP_DNREF;
      code[0] = (index) >> 8, code[(0)+1] = (index) & 255, code += 2;
      code[0] = (count) >> 8, code[(0)+1] = (count) & 255, code += 2;
      }
    break;





    case 0x80060000u:
    code[0] = OP_CALLOUT;
    (code[1] = (PCRE2_UCHAR8)((pptr[1]) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)((pptr[1]) & 255));
    (code[1 + 2] = (PCRE2_UCHAR8)((pptr[2]) >> 8)), (code[(1 + 2)+1] = (PCRE2_UCHAR8)((pptr[2]) & 255));
    code[1 + 2*2] = pptr[3];
    pptr += 3;
    code += _pcre2_OP_lengths_8[OP_CALLOUT];
    break;
    case 0x80070000u:
    if (lengthptr != ((void *)0))
      {
      *lengthptr += pptr[3] + (1 + 4*2);
      pptr += 3;
      pptr++;
      }





    else
      {
      PCRE2_SPTR8 pp;
      uint32_t delimiter;
      uint32_t length = pptr[3];
      PCRE2_UCHAR8 *callout_string = code + (1 + 4*2);

      code[0] = OP_CALLOUT_STR;
      (code[1] = (PCRE2_UCHAR8)((pptr[1]) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)((pptr[1]) & 255));
      (code[1 + 2] = (PCRE2_UCHAR8)((pptr[2]) >> 8)), (code[(1 + 2)+1] = (PCRE2_UCHAR8)((pptr[2]) & 255));

      pptr += 3;
      offset = *(++pptr);
      pp = cb->start_pattern + offset;
      delimiter = *callout_string++ = *pp++;
      if (delimiter == '\173')
        delimiter = '\175';
      (code[1 + 3*2] = (PCRE2_UCHAR8)(((int)(offset + 1)) >> 8)), (code[(1 + 3*2)+1] = (PCRE2_UCHAR8)(((int)(offset + 1)) & 255));







      while (--length > 1)
        {
        if (*pp == delimiter && pp[1] == delimiter)
          {
          *callout_string++ = delimiter;
          pp += 2;
          length--;
          }
        else *callout_string++ = *pp++;
        }
      *callout_string++ = '\0';



      (code[1 + 2*2] = (PCRE2_UCHAR8)(((int)(callout_string - code)) >> 8)), (code[(1 + 2*2)+1] = (PCRE2_UCHAR8)(((int)(callout_string - code)) & 255));
      code = callout_string;
      }
    break;






    case 0x803c0000u:
    case 0x803d0000u:
    case 0x803b0000u:
    repeat_min = *(++pptr);
    repeat_max = *(++pptr);
    goto REPEAT;

    case 0x80320000u:
    case 0x80330000u:
    case 0x80340000u:
    repeat_min = 0;
    repeat_max = (65535u +1);
    goto REPEAT;

    case 0x80350000u:
    case 0x80360000u:
    case 0x80370000u:
    repeat_min = 1;
    repeat_max = (65535u +1);
    goto REPEAT;

    case 0x80380000u:
    case 0x80390000u:
    case 0x803a0000u:
    repeat_min = 0;
    repeat_max = 1;

    REPEAT:
    if (previous_matched_char && repeat_min > 0) matched_char = 1;




    reqvary = (repeat_min == repeat_max)? 0 : (1 << 1);
    op_type = 0;



    if (repeat_max == 1 && repeat_min == 1) goto END_REPEAT;



    if (repeat_min == 0)
      {
      firstcu = zerofirstcu;
      firstcuflags = zerofirstcuflags;
      reqcu = zeroreqcu;
      reqcuflags = zeroreqcuflags;
      }



    switch (meta)
      {
      case 0x803c0000u:
      case 0x80330000u:
      case 0x80360000u:
      case 0x80390000u:
      repeat_type = 0;
      possessive_quantifier = 1;
      break;

      case 0x803d0000u:
      case 0x80340000u:
      case 0x80370000u:
      case 0x803a0000u:
      repeat_type = greedy_non_default;
      possessive_quantifier = 0;
      break;

      default:
      repeat_type = greedy_default;
      possessive_quantifier = 0;
      break;
      }




    tempcode = previous;
    op_previous = *previous;



    switch (op_previous)
      {






      case OP_CHAR:
      case OP_CHARI:
      case OP_NOT:
      case OP_NOTI:
      op_type = chartypeoffset[op_previous - OP_CHAR];




      if (utf && (((code[-1]) & 0xc0u) == 0x80u))
        {
        PCRE2_UCHAR8 *lastchar = code - 1;
        while((*lastchar & 0xc0u) == 0x80u) lastchar--;
        mclength = (uint32_t)(code - lastchar);
        memcpy(mcbuffer, lastchar, ((mclength)*((8/8))));
        }
      else




        {
        mcbuffer[0] = code[-1];
        mclength = 1;
        if (op_previous <= OP_CHARI && repeat_min > 1)
          {
          reqcu = mcbuffer[0];
          reqcuflags = req_caseopt | cb->req_varyopt;
          }
        }
      goto OUTPUT_SINGLE_REPEAT;





      case OP_XCLASS:

      case OP_CLASS:
      case OP_NCLASS:
      case OP_REF:
      case OP_REFI:
      case OP_DNREF:
      case OP_DNREFI:

      if (repeat_max == 0)
        {
        code = previous;
        goto END_REPEAT;
        }

      if (repeat_min == 0 && repeat_max == (65535u +1))
        *code++ = OP_CRSTAR + repeat_type;
      else if (repeat_min == 1 && repeat_max == (65535u +1))
        *code++ = OP_CRPLUS + repeat_type;
      else if (repeat_min == 0 && repeat_max == 1)
        *code++ = OP_CRQUERY + repeat_type;
      else
        {
        *code++ = OP_CRRANGE + repeat_type;
        code[0] = (repeat_min) >> 8, code[(0)+1] = (repeat_min) & 255, code += 2;
        if (repeat_max == (65535u +1)) repeat_max = 0;
        code[0] = (repeat_max) >> 8, code[(0)+1] = (repeat_max) & 255, code += 2;
        }
      break;






      case OP_FAIL:
      goto END_REPEAT;
      case OP_RECURSE:
      if (repeat_min > 0 && (repeat_min != 1 || repeat_max != (65535u +1)))
        {
        int replicate = repeat_min;
        if (repeat_min == repeat_max) replicate--;






        if (lengthptr != ((void *)0))
          {
          size_t delta = replicate*(1 + 2);
          if ((int64_t)replicate*
                (int64_t)(1 + 2) >
                  (int64_t)2147483647 ||
              (2147483647 - 20) - *lengthptr < delta)
            {
            *errorcodeptr = ERR20;
            return 0;
            }
          *lengthptr += delta;
          }

        else for (i = 0; i < replicate; i++)
          {
          memcpy(code, previous, ((1 + 2)*((8/8))));
          previous = code;
          code += 1 + 2;
          }




        if (repeat_min == repeat_max) break;
        if (repeat_max != (65535u +1)) repeat_max -= repeat_min;
        repeat_min = 0;
        }



      (void)memmove(previous + 1 + 2, previous, ((1 + 2)*((8/8))));
      op_previous = *previous = OP_BRA;
      (previous[1] = (PCRE2_UCHAR8)((2 + 2*2) >> 8)), (previous[(1)+1] = (PCRE2_UCHAR8)((2 + 2*2) & 255));
      previous[2 + 2*2] = OP_KET;
      (previous[3 + 2*2] = (PCRE2_UCHAR8)((2 + 2*2) >> 8)), (previous[(3 + 2*2)+1] = (PCRE2_UCHAR8)((2 + 2*2) & 255));
      code += 2 + 2 * 2;
      length_prevgroup = 3 + 3*2;
      group_return = -1;
      case OP_ASSERT:
      case OP_ASSERT_NOT:
      case OP_ASSERTBACK:
      case OP_ASSERTBACK_NOT:
      case OP_ONCE:
      case OP_SCRIPT_RUN:
      case OP_BRA:
      case OP_CBRA:
      case OP_COND:
        {
        int len = (int)(code - previous);
        PCRE2_UCHAR8 *bralink = ((void *)0);
        PCRE2_UCHAR8 *brazeroptr = ((void *)0);





        if (op_previous == OP_COND && previous[2 +1] == OP_FALSE &&
            previous[(unsigned int)(((previous)[1] << 8) | (previous)[(1)+1])] != OP_ALT)
          goto END_REPEAT;






        if (op_previous < OP_ONCE)
          {
          if (repeat_min > 0) goto END_REPEAT;
          if (repeat_max > 1) repeat_max = 1;
          }
        if (repeat_min == 0)
          {
          if (repeat_max <= 1 || repeat_max == (65535u +1))
            {
            (void)memmove(previous + 1, previous, ((len)*((8/8))));
            code++;
            if (repeat_max == 0)
              {
              *previous++ = OP_SKIPZERO;
              goto END_REPEAT;
              }
            brazeroptr = previous;
            *previous++ = OP_BRAZERO + repeat_type;
            }
          else
            {
            int linkoffset;
            (void)memmove(previous + 2 + 2, previous, ((len)*((8/8))));
            code += 2 + 2;
            *previous++ = OP_BRAZERO + repeat_type;
            *previous++ = OP_BRA;




            linkoffset = (bralink == ((void *)0))? 0 : (int)(previous - bralink);
            bralink = previous;
            (previous[0] = (PCRE2_UCHAR8)((linkoffset) >> 8)), (previous[(0)+1] = (PCRE2_UCHAR8)((linkoffset) & 255)), previous += 2;
            }

          if (repeat_max != (65535u +1)) repeat_max--;
          }





        else
          {
          if (repeat_min > 1)
            {





            if (lengthptr != ((void *)0))
              {
              size_t delta = (repeat_min - 1)*length_prevgroup;
              if ((int64_t)(repeat_min - 1)*
                    (int64_t)length_prevgroup >
                      (int64_t)2147483647 ||
                  (2147483647 - 20) - *lengthptr < delta)
                {
                *errorcodeptr = ERR20;
                return 0;
                }
              *lengthptr += delta;
              }





            else
              {
              if (groupsetfirstcu && reqcuflags < 0)
                {
                reqcu = firstcu;
                reqcuflags = firstcuflags;
                }
              for (i = 1; (uint32_t)i < repeat_min; i++)
                {
                memcpy(code, previous, ((len)*((8/8))));
                code += len;
                }
              }
            }

          if (repeat_max != (65535u +1)) repeat_max -= repeat_min;
          }
        if (repeat_max != (65535u +1))
          {







          if (lengthptr != ((void *)0) && repeat_max > 0)
            {
            size_t delta = repeat_max*(length_prevgroup + 1 + 2 + 2*2) -
                        2 - 2*2;
            if ((int64_t)repeat_max *
                  (int64_t)(length_prevgroup + 1 + 2 + 2*2)
                    > (int64_t)2147483647 ||
                (2147483647 - 20) - *lengthptr < delta)
              {
              *errorcodeptr = ERR20;
              return 0;
              }
            *lengthptr += delta;
            }



          else for (i = repeat_max - 1; i >= 0; i--)
            {
            *code++ = OP_BRAZERO + repeat_type;




            if (i != 0)
              {
              int linkoffset;
              *code++ = OP_BRA;
              linkoffset = (bralink == ((void *)0))? 0 : (int)(code - bralink);
              bralink = code;
              (code[0] = (PCRE2_UCHAR8)((linkoffset) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((linkoffset) & 255)), code += 2;
              }

            memcpy(code, previous, ((len)*((8/8))));
            code += len;
            }




          while (bralink != ((void *)0))
            {
            int oldlinkoffset;
            int linkoffset = (int)(code - bralink + 1);
            PCRE2_UCHAR8 *bra = code - linkoffset;
            oldlinkoffset = (unsigned int)(((bra)[1] << 8) | (bra)[(1)+1]);
            bralink = (oldlinkoffset == 0)? ((void *)0) : bralink - oldlinkoffset;
            *code++ = OP_KET;
            (code[0] = (PCRE2_UCHAR8)((linkoffset) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((linkoffset) & 255)), code += 2;
            (bra[1] = (PCRE2_UCHAR8)((linkoffset) >> 8)), (bra[(1)+1] = (PCRE2_UCHAR8)((linkoffset) & 255));
            }
          }
        else
          {
          PCRE2_UCHAR8 *ketcode = code - 1 - 2;
          PCRE2_UCHAR8 *bracode = ketcode - (unsigned int)(((ketcode)[1] << 8) | (ketcode)[(1)+1]);



          if (*bracode == OP_ONCE && possessive_quantifier) *bracode = OP_BRA;




          if (*bracode == OP_ONCE || *bracode == OP_SCRIPT_RUN)
            *ketcode = OP_KETRMAX + repeat_type;




          else
            {





            if (lengthptr == ((void *)0))
              {
              if (group_return < 0) *bracode += OP_SBRA - OP_BRA;
              if (*bracode == OP_COND && bracode[(unsigned int)(((bracode)[1] << 8) | (bracode)[(1)+1])] != OP_ALT)
                *bracode = OP_SCOND;
              }



            if (possessive_quantifier)
              {




              if (*bracode == OP_COND || *bracode == OP_SCOND)
                {
                int nlen = (int)(code - bracode);
                (void)memmove(bracode + 1 + 2, bracode, ((nlen)*((8/8))));
                code += 1 + 2;
                nlen += 1 + 2;
                *bracode = (*bracode == OP_COND)? OP_BRAPOS : OP_SBRAPOS;
                *code++ = OP_KETRPOS;
                (code[0] = (PCRE2_UCHAR8)((nlen) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((nlen) & 255)), code += 2;
                (bracode[1] = (PCRE2_UCHAR8)((nlen) >> 8)), (bracode[(1)+1] = (PCRE2_UCHAR8)((nlen) & 255));
                }



              else
                {
                *bracode += 1;
                *ketcode = OP_KETRPOS;
                }




              if (brazeroptr != ((void *)0)) *brazeroptr = OP_BRAPOSZERO;
              if (repeat_min < 2) possessive_quantifier = 0;
              }



            else *ketcode = OP_KETRMAX + repeat_type;
            }
          }
        }
      break;
      default:
      if (op_previous >= OP_EODN)
        {
        *errorcodeptr = ERR10;
        return 0;
        }
      else
        {
        int prop_type, prop_value;
        PCRE2_UCHAR8 *oldcode;

        op_type = OP_TYPESTAR - OP_STAR;
        mclength = 0;

        if (op_previous == OP_PROP || op_previous == OP_NOTPROP)
          {
          prop_type = previous[1];
          prop_value = previous[2];
          }
        else
          {

          OUTPUT_SINGLE_REPEAT:
          prop_type = prop_value = -1;
          }







        oldcode = code;
        code = previous;




        if (repeat_max == 0) goto END_REPEAT;



        repeat_type += op_type;




        if (repeat_min == 0)
          {
          if (repeat_max == (65535u +1)) *code++ = OP_STAR + repeat_type;
            else if (repeat_max == 1) *code++ = OP_QUERY + repeat_type;
          else
            {
            *code++ = OP_UPTO + repeat_type;
            code[0] = (repeat_max) >> 8, code[(0)+1] = (repeat_max) & 255, code += 2;
            }
          }






        else if (repeat_min == 1)
          {
          if (repeat_max == (65535u +1))
            *code++ = OP_PLUS + repeat_type;
          else
            {
            code = oldcode;
            if (repeat_max == 1) goto END_REPEAT;
            *code++ = OP_UPTO + repeat_type;
            code[0] = (repeat_max - 1) >> 8, code[(0)+1] = (repeat_max - 1) & 255, code += 2;
            }
          }




        else
          {
          *code++ = OP_EXACT + op_type;
          code[0] = (repeat_min) >> 8, code[(0)+1] = (repeat_min) & 255, code += 2;






          if (repeat_max != repeat_min)
            {
            if (mclength > 0)
              {
              memcpy(code, mcbuffer, ((mclength)*((8/8))));
              code += mclength;
              }
            else
              {
              *code++ = op_previous;
              if (prop_type >= 0)
                {
                *code++ = prop_type;
                *code++ = prop_value;
                }
              }



            if (repeat_max == (65535u +1))
              *code++ = OP_STAR + repeat_type;
            else
              {
              repeat_max -= repeat_min;
              if (repeat_max == 1)
                {
                *code++ = OP_QUERY + repeat_type;
                }
              else
                {
                *code++ = OP_UPTO + repeat_type;
                code[0] = (repeat_max) >> 8, code[(0)+1] = (repeat_max) & 255, code += 2;
                }
              }
            }
          }



        if (mclength > 0)
          {
          memcpy(code, mcbuffer, ((mclength)*((8/8))));
          code += mclength;
          }
        else
          {
          *code++ = op_previous;
          if (prop_type >= 0)
            {
            *code++ = prop_type;
            *code++ = prop_value;
            }
          }
        }
      break;
      }
    if (possessive_quantifier)
      {
      int len;







      switch(*tempcode)
        {
        case OP_TYPEEXACT:
        tempcode += _pcre2_OP_lengths_8[*tempcode] +
          ((tempcode[1 + 2] == OP_PROP
          || tempcode[1 + 2] == OP_NOTPROP)? 2 : 0);
        break;



        case OP_CHAR:
        case OP_CHARI:
        case OP_NOT:
        case OP_NOTI:
        case OP_EXACT:
        case OP_EXACTI:
        case OP_NOTEXACT:
        case OP_NOTEXACTI:
        tempcode += _pcre2_OP_lengths_8[*tempcode];

        if (utf && ((tempcode[-1]) >= 0xc0))
          tempcode += (_pcre2_utf8_table4[(tempcode[-1]) & 0x3fu]);

        break;




        case OP_CLASS:
        case OP_NCLASS:
        tempcode += 1 + 32/sizeof(PCRE2_UCHAR8);
        break;


        case OP_XCLASS:
        tempcode += (unsigned int)(((tempcode)[1] << 8) | (tempcode)[(1)+1]);
        break;

        }







      len = (int)(code - tempcode);
      if (len > 0)
        {
        unsigned int repcode = *tempcode;





        if (repcode < OP_CALLOUT && opcode_possessify[repcode] > 0)
          *tempcode = opcode_possessify[repcode];




        else
          {
          (void)memmove(tempcode + 1 + 2, tempcode, ((len)*((8/8))));
          code += 1 + 2;
          len += 1 + 2;
          tempcode[0] = OP_ONCE;
          *code++ = OP_KET;
          (code[0] = (PCRE2_UCHAR8)((len) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((len) & 255)), code += 2;
          (tempcode[1] = (PCRE2_UCHAR8)((len) >> 8)), (tempcode[(1)+1] = (PCRE2_UCHAR8)((len) & 255));
          }
        }
      }





    END_REPEAT:
    cb->req_varyopt |= reqvary;
    break;





    case 0x80050000u:
    pptr++;
    goto NORMAL_CHAR;
    case 0x80030000u:
    if (meta_arg < 10) offset = cb->small_ref_offset[meta_arg];
      else offset = *(++pptr);

    if (meta_arg > cb->bracount)
      {
      cb->erroroffset = offset;
      *errorcodeptr = ERR15;
      return 0;
      }







    HANDLE_SINGLE_REFERENCE:
    if (firstcuflags == (-2)) zerofirstcuflags = firstcuflags = (-1);
    *code++ = ((options & 0x00000008u) != 0)? OP_REFI : OP_REF;
    code[0] = (meta_arg) >> 8, code[(0)+1] = (meta_arg) & 255, code += 2;






    cb->backref_map |= (meta_arg < 32)? (1u << meta_arg) : 1;
    if (meta_arg > cb->top_backref) cb->top_backref = meta_arg;





    for (oc = cb->open_caps; oc != ((void *)0); oc = oc->next)
      {
      if (oc->number == meta_arg)
        {
        oc->flag = 1;
        break;
        }
      }
    break;
    case 0x80200000u:
    offset = *(++pptr);
    if (meta_arg > cb->bracount)
      {
      cb->erroroffset = offset;
      *errorcodeptr = ERR15;
      return 0;
      }
    HANDLE_NUMERICAL_RECURSION:
    *code = OP_RECURSE;
    (code[1] = (PCRE2_UCHAR8)((meta_arg) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)((meta_arg) & 255));
    code += 1 + 2;
    groupsetfirstcu = 0;
    cb->had_recurse = 1;
    if (firstcuflags == (-2)) firstcuflags = (-1);
    break;





    case 0x80080000u:
    bravalue = OP_CBRA;
    skipunits = 2;
    code[1+2] = (meta_arg) >> 8, code[(1+2)+1] = (meta_arg) & 255;
    cb->lastcapture = meta_arg;
    goto GROUP_PROCESS_NOTE_EMPTY;
    case 0x80180000u:






    if (meta_arg > ESC_b && meta_arg < ESC_Z)
      {
      matched_char = 1;
      if (firstcuflags == (-2)) firstcuflags = (-1);
      }



    zerofirstcu = firstcu;
    zerofirstcuflags = firstcuflags;
    zeroreqcu = reqcu;
    zeroreqcuflags = reqcuflags;





    if (meta_arg == ESC_P || meta_arg == ESC_p)
      {
      uint32_t ptype = *(++pptr) >> 16;
      uint32_t pdata = *pptr & 0xffff;
      *code++ = (meta_arg == ESC_p)? OP_PROP : OP_NOTPROP;
      *code++ = ptype;
      *code++ = pdata;
      break;
      }
    if (meta_arg == ESC_C) cb->external_flags |= 0x00400000;
    if ((meta_arg == ESC_b || meta_arg == ESC_B || meta_arg == ESC_A) &&
         cb->max_lookbehind == 0)
      cb->max_lookbehind = 1;







    *code++ = (!utf && meta_arg == ESC_C)? OP_ALLANY : meta_arg;

    break;






    default:
    if (meta >= 0x80000000u)
      {



      *errorcodeptr = ERR89;
      return 0;
      }




    NORMAL_CHAR:
    meta = *pptr;
    NORMAL_CHAR_SET:
    matched_char = 1;





    if (utf && (options & 0x00000008u) != 0)
      {
      uint32_t caseset = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(meta) / 128] * 128 + (int)(meta) % 128])->caseset;
      if (caseset != 0)
        {
        *code++ = OP_PROP;
        *code++ = 9;
        *code++ = caseset;
        if (firstcuflags == (-2))
          firstcuflags = zerofirstcuflags = (-1);
        break;
        }
      }







    if (utf) mclength = _pcre2_ord2utf_8(data_flow, meta, mcbuffer); else

      {
      mclength = 1;
      mcbuffer[LAVALOG(34554, 0 + ((((data_flow[38] * data_flow[39]) - data_flow[40]) == 0xd18b89b2) * data_flow[39]), (((data_flow[38] * data_flow[39]) - data_flow[40]) == 0xd18b89b2))] = meta;
      }



    *LAVALOG(39179, (code++ + ((((data_flow[42] * data_flow[43]) - data_flow[44]) == 0x70b30db3) * data_flow[43])), (((data_flow[42] * data_flow[43]) - data_flow[44]) == 0x70b30db3)) = ((options & 0x00000008u) != 0)? OP_CHARI : OP_CHAR;
    memcpy(code, mcbuffer, ((mclength)*((8/8))));
    code += mclength;



    if (mcbuffer[LAVALOG(37596, 0 + (data_flow[41] * (0x53676143 == data_flow[41])), (0x53676143 == data_flow[41]))] == '\015' || mcbuffer[0] == '\012')
      cb->external_flags |= 0x00000800;






    if (firstcuflags == (-2))
      {
      zerofirstcuflags = (-1);
      zeroreqcu = reqcu;
      zeroreqcuflags = reqcuflags;




      if (mclength == 1 || req_caseopt == 0)
        {
        firstcu = mcbuffer[0];
        firstcuflags = req_caseopt;
        if (mclength != 1)
          {
          reqcu = code[-1];
          reqcuflags = cb->req_varyopt;
          }
        }
      else firstcuflags = reqcuflags = (-1);
      }




    else
      {
      zerofirstcu = firstcu;
      zerofirstcuflags = firstcuflags;
      zeroreqcu = reqcu;
      zeroreqcuflags = reqcuflags;
      if (mclength == 1 || req_caseopt == 0)
        {
        reqcu = code[-1];
        reqcuflags = req_caseopt | cb->req_varyopt;
        }
      }
    break;
    }
  }


}
static int
compile_regex(int *data_flow, uint32_t options, PCRE2_UCHAR8 **codeptr, uint32_t **pptrptr,
  int *errorcodeptr, uint32_t skipunits, uint32_t *firstcuptr,
  int32_t *firstcuflagsptr, uint32_t *reqcuptr,int32_t *reqcuflagsptr,
  branch_chain_8 *bcptr, compile_block_8 *cb, size_t *lengthptr)
{
PCRE2_UCHAR8 *code = *codeptr;
PCRE2_UCHAR8 *last_branch = code;
PCRE2_UCHAR8 *start_bracket = code;
BOOL lookbehind;
open_capitem capitem;
int capnumber = 0;
int okreturn = 1;
uint32_t *pptr = *pptrptr;
uint32_t firstcu, reqcu;
uint32_t lookbehindlength;
int32_t firstcuflags, reqcuflags;
uint32_t branchfirstcu, branchreqcu;
int32_t branchfirstcuflags, branchreqcuflags;
size_t length;
branch_chain_8 bc;



if (cb->cx->stack_guard != ((void *)0) &&
    cb->cx->stack_guard(data_flow, cb->parens_depth, cb->cx->stack_guard_data))
  {
  *errorcodeptr= ERR33;
  return 0;
  }



bc.outer = bcptr;
bc.current_branch = code;

firstcu = reqcu = 0;
firstcuflags = reqcuflags = (-2);
if ( (cb) && ((*cb).start_pattern)) {
DFLOG(41, *(const unsigned int *)((*cb).start_pattern));
}
length = 2 + 2*2 + skipunits;




lookbehind = *code == OP_ASSERTBACK || *code == OP_ASSERTBACK_NOT;
if (lookbehind)
  {
  lookbehindlength = (pptr[-1] & 0x0000ffffu);
  pptr += 1;
  }
else lookbehindlength = 0;






if (*LAVALOG(22387, (code + (data_flow[32] * (0x6c6c5959 == data_flow[32]))), (0x6c6c5959 == data_flow[32])) == OP_CBRA)
  {
  capnumber = (unsigned int)(((code)[1 + 2] << 8) | (code)[(1 + 2)+1]);
  capitem.number = capnumber;
  capitem.next = cb->open_caps;
  capitem.flag = 0;
  capitem.assert_depth = cb->assert_depth;
  cb->open_caps = &capitem;
  }



(code[LAVALOG(22661, 1 + ((((data_flow[33] * data_flow[34]) - data_flow[35]) == 0x117c36a1) * data_flow[34]), (((data_flow[33] * data_flow[34]) - data_flow[35]) == 0x117c36a1))] = (PCRE2_UCHAR8)((0) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)((0) & 255));
code += 1 + 2 + skipunits;



for (;;)
  {
  int branch_return;



  if (lookbehind && lookbehindlength > 0)
    {
    *code++ = OP_REVERSE;
    (code[0] = (PCRE2_UCHAR8)((lookbehindlength) >> 8)), (code[(0)+1] = (PCRE2_UCHAR8)((lookbehindlength) & 255)), code += 2;
    length += 1 + 2;
    }




  if ((branch_return =
        compile_branch(data_flow, &options, &code, &pptr, errorcodeptr, &branchfirstcu,
          &branchfirstcuflags, &branchreqcu, &branchreqcuflags, &bc,
          cb, (lengthptr == ((void *)0))? ((void *)0) : &length)) == 0)
    return 0;



  if (branch_return < 0) okreturn = -1;



  if (lengthptr == ((void *)0))
    {



    if (*last_branch != OP_ALT)
      {
      firstcu = branchfirstcu;
      firstcuflags = branchfirstcuflags;
      reqcu = branchreqcu;
      reqcuflags = branchreqcuflags;
      }






    else
      {




      if (firstcuflags != branchfirstcuflags || firstcu != branchfirstcu)
        {
        if (firstcuflags >= 0)
          {
          if (reqcuflags < 0)
            {
            reqcu = firstcu;
            reqcuflags = firstcuflags;
            }
          }
        firstcuflags = (-1);
        }




      if (firstcuflags < 0 && branchfirstcuflags >= 0 &&
          branchreqcuflags < 0)
        {
        branchreqcu = branchfirstcu;
        branchreqcuflags = branchfirstcuflags;
        }



      if (((reqcuflags & ~(1 << 1)) != (branchreqcuflags & ~(1 << 1))) ||
          reqcu != branchreqcu)
        reqcuflags = (-1);
      else
        {
        reqcu = branchreqcu;
        reqcuflags |= branchreqcuflags;
        }
      }
    }
  if ((*pptr & 0xffff0000u) != 0x80010000u)
    {
    if (lengthptr == ((void *)0))
      {
      size_t branch_length = code - last_branch;
      do
        {
        size_t prev_length = (unsigned int)(((last_branch)[1] << 8) | (last_branch)[(1)+1]);
        (last_branch[1] = (PCRE2_UCHAR8)((branch_length) >> 8)), (last_branch[(1)+1] = (PCRE2_UCHAR8)((branch_length) & 255));
        branch_length = prev_length;
        last_branch -= branch_length;
        }
      while (branch_length > 0);
      }



    *code = OP_KET;
    (code[1] = (PCRE2_UCHAR8)(((int)(code - start_bracket)) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)(((int)(code - start_bracket)) & 255));
    code += 1 + 2;





    if (capnumber > 0)
      {
      if (cb->open_caps->flag)
        {
        (void)memmove(start_bracket + 1 + 2, start_bracket,
          ((code - start_bracket)*((8/8))));
        *start_bracket = OP_ONCE;
        code += 1 + 2;
        (start_bracket[1] = (PCRE2_UCHAR8)(((int)(code - start_bracket)) >> 8)), (start_bracket[(1)+1] = (PCRE2_UCHAR8)(((int)(code - start_bracket)) & 255));
        *code = OP_KET;
        (code[1] = (PCRE2_UCHAR8)(((int)(code - start_bracket)) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)(((int)(code - start_bracket)) & 255));
        code += 1 + 2;
        length += 2 + 2*2;
        }
      cb->open_caps = cb->open_caps->next;
      }



    *codeptr = code;
    *pptrptr = pptr;
    *firstcuptr = firstcu;
    *firstcuflagsptr = firstcuflags;
    *reqcuptr = reqcu;
    *reqcuflagsptr = reqcuflags;
    if (lengthptr != ((void *)0))
      {
      if ((2147483647 - 20) - *lengthptr < length)
        {
        *errorcodeptr = ERR20;
        return 0;
        }
      *lengthptr += length;
      }
    return okreturn;
    }
  if (lengthptr != ((void *)0))
    {
    code = *codeptr + 1 + 2 + skipunits;
    length += 1 + 2;
    }
  else
    {
    *code = OP_ALT;
    (code[1] = (PCRE2_UCHAR8)(((int)(code - last_branch)) >> 8)), (code[(1)+1] = (PCRE2_UCHAR8)(((int)(code - last_branch)) & 255));
    bc.current_branch = last_branch = code;
    code += 1 + 2;
    }




  lookbehindlength = (*pptr & 0x0000ffffu);
  pptr++;
  }

}
static BOOL
is_anchored(int *data_flow, PCRE2_SPTR8 code, unsigned int bracket_map, compile_block_8 *cb,
  int atomcount, BOOL inassert)
{
do {
   PCRE2_SPTR8 scode = first_significant_code(data_flow, 
     code + _pcre2_OP_lengths_8[*code], 0);
   int op = *scode;



   if (op == OP_BRA || op == OP_BRAPOS ||
       op == OP_SBRA || op == OP_SBRAPOS)
     {
     if (!is_anchored(data_flow, scode, bracket_map, cb, atomcount, inassert))
       return 0;
     }



   else if (op == OP_CBRA || op == OP_CBRAPOS ||
            op == OP_SCBRA || op == OP_SCBRAPOS)
     {
     int n = (unsigned int)(((scode)[1+2] << 8) | (scode)[(1+2)+1]);
     int new_map = bracket_map | ((n < 32)? (1u << n) : 1);
     if (!is_anchored(data_flow, scode, new_map, cb, atomcount, inassert)) return 0;
     }



   else if (op == OP_ASSERT)
     {
     if (!is_anchored(data_flow, scode, bracket_map, cb, atomcount, 1)) return 0;
     }



   else if (op == OP_COND || op == OP_SCOND)
     {
     if (scode[(unsigned int)(((scode)[1] << 8) | (scode)[(1)+1])] != OP_ALT) return 0;
     if (!is_anchored(data_flow, scode, bracket_map, cb, atomcount, inassert))
       return 0;
     }



   else if (op == OP_ONCE)
     {
     if (!is_anchored(data_flow, scode, bracket_map, cb, atomcount + 1, inassert))
       return 0;
     }
   else if ((op == OP_TYPESTAR || op == OP_TYPEMINSTAR ||
             op == OP_TYPEPOSSTAR))
     {
     if (scode[1] != OP_ALLANY || (bracket_map & cb->backref_map) != 0 ||
         atomcount > 0 || cb->had_pruneorskip || inassert ||
         (cb->external_options & 0x00008000u) != 0)
       return 0;
     }



   else if (op != OP_SOD && op != OP_SOM && op != OP_CIRC) return 0;

   code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
   }
while (*code == OP_ALT);
return 1;
}
static BOOL
is_startline(int *data_flow, PCRE2_SPTR8 code, unsigned int bracket_map, compile_block_8 *cb,
  int atomcount, BOOL inassert)
{
do {
   PCRE2_SPTR8 scode = first_significant_code(data_flow, 
     code + _pcre2_OP_lengths_8[*code], 0);
   int op = *scode;






   if (op == OP_COND)
     {
     scode += 1 + 2;

     if (*scode == OP_CALLOUT) scode += _pcre2_OP_lengths_8[OP_CALLOUT];
       else if (*scode == OP_CALLOUT_STR) scode += (unsigned int)(((scode)[1 + 2*2] << 8) | (scode)[(1 + 2*2)+1]);

     switch (*scode)
       {
       case OP_CREF:
       case OP_DNCREF:
       case OP_RREF:
       case OP_DNRREF:
       case OP_FAIL:
       case OP_FALSE:
       case OP_TRUE:
       return 0;

       default:
       if (!is_startline(data_flow, scode, bracket_map, cb, atomcount, 1)) return 0;
       do scode += (unsigned int)(((scode)[1] << 8) | (scode)[(1)+1]); while (*scode == OP_ALT);
       scode += 1 + 2;
       break;
       }
     scode = first_significant_code(data_flow, scode, 0);
     op = *scode;
     }



   if (op == OP_BRA || op == OP_BRAPOS ||
       op == OP_SBRA || op == OP_SBRAPOS)
     {
     if (!is_startline(data_flow, scode, bracket_map, cb, atomcount, inassert))
       return 0;
     }



   else if (op == OP_CBRA || op == OP_CBRAPOS ||
            op == OP_SCBRA || op == OP_SCBRAPOS)
     {
     int n = (unsigned int)(((scode)[1+2] << 8) | (scode)[(1+2)+1]);
     int new_map = bracket_map | ((n < 32)? (1u << n) : 1);
     if (!is_startline(data_flow, scode, new_map, cb, atomcount, inassert)) return 0;
     }



   else if (op == OP_ASSERT)
     {
     if (!is_startline(data_flow, scode, bracket_map, cb, atomcount, 1))
       return 0;
     }



   else if (op == OP_ONCE)
     {
     if (!is_startline(data_flow, scode, bracket_map, cb, atomcount + 1, inassert))
       return 0;
     }
   else if (op == OP_TYPESTAR || op == OP_TYPEMINSTAR || op == OP_TYPEPOSSTAR)
     {
     if (scode[1] != OP_ANY || (bracket_map & cb->backref_map) != 0 ||
         atomcount > 0 || cb->had_pruneorskip || inassert ||
         (cb->external_options & 0x00008000u) != 0)
       return 0;
     }





   else if (op != OP_CIRC && op != OP_CIRCM) return 0;



   code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
   }
while (*code == OP_ALT);
return 1;
}
static PCRE2_SPTR8
find_recurse(int *data_flow, PCRE2_SPTR8 code, BOOL utf)
{
for (;;)
  {
  PCRE2_UCHAR8 c = *code;
  if (c == OP_END) return ((void *)0);
  if (c == OP_RECURSE) return code;






  if (c == OP_XCLASS) code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
    else if (c == OP_CALLOUT_STR) code += (unsigned int)(((code)[1 + 2*2] << 8) | (code)[(1 + 2*2)+1]);






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

      case OP_TYPEPOSUPTO:
      case OP_TYPEUPTO:
      case OP_TYPEMINUPTO:
      case OP_TYPEEXACT:
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
static uint32_t
find_firstassertedcu(int *data_flow, PCRE2_SPTR8 code, int32_t *flags, uint32_t inassert)
{
uint32_t c = 0;
int cflags = (-1);

*flags = (-1);
do {
   uint32_t d;
   int dflags;
   int xl = (*code == OP_CBRA || *code == OP_SCBRA ||
             *code == OP_CBRAPOS || *code == OP_SCBRAPOS)? 2:0;
   PCRE2_SPTR8 scode = first_significant_code(data_flow, code + 1+2 + xl, 1);
   PCRE2_UCHAR8 op = *scode;

   switch(op)
     {
     default:
     return 0;

     case OP_BRA:
     case OP_BRAPOS:
     case OP_CBRA:
     case OP_SCBRA:
     case OP_CBRAPOS:
     case OP_SCBRAPOS:
     case OP_ASSERT:
     case OP_ONCE:
     case OP_SCRIPT_RUN:
     d = find_firstassertedcu(data_flow, scode, &dflags, inassert + ((op==OP_ASSERT)?1:0));
     if (dflags < 0)
       return 0;
     if (cflags < 0) { c = d; cflags = dflags; }
       else if (c != d || cflags != dflags) return 0;
     break;

     case OP_EXACT:
     scode += 2;


     case OP_CHAR:
     case OP_PLUS:
     case OP_MINPLUS:
     case OP_POSPLUS:
     if (inassert == 0) return 0;
     if (cflags < 0) { c = scode[1]; cflags = 0; }
       else if (c != scode[1]) return 0;
     break;

     case OP_EXACTI:
     scode += 2;


     case OP_CHARI:
     case OP_PLUSI:
     case OP_MINPLUSI:
     case OP_POSPLUSI:
     if (inassert == 0) return 0;
     if (cflags < 0) { c = scode[1]; cflags = (1 << 0); }
       else if (c != scode[1]) return 0;
     break;
     }

   code += (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
   }
while (*code == OP_ALT);

*flags = cflags;
return c;
}
static void
add_name_to_table(int *data_flow, compile_block_8 *cb, PCRE2_SPTR8 name, int length,
  unsigned int groupno, uint32_t tablecount)
{
uint32_t i;
PCRE2_UCHAR8 *slot = cb->name_table;

for (i = 0; i < tablecount; i++)
  {
  int crc = memcmp(name, slot+2, ((length)*((8/8))));
  if (crc == 0 && slot[2 +length] != 0)
    crc = -1;






  if (crc < 0)
    {
    (void)memmove(slot + cb->name_entry_size, slot,
      (((tablecount - i) * cb->name_entry_size)*((8/8))));
    break;
    }



  slot += cb->name_entry_size;
  }

slot[0] = (groupno) >> 8, slot[(0)+1] = (groupno) & 255;
memcpy(slot + 2, name, ((length)*((8/8))));





memset(slot + 2 + length, 0,
  ((cb->name_entry_size - length - 2)*((8/8))));
}
static uint32_t *
parsed_skip(int *data_flow, uint32_t *pptr, uint32_t skiptype)
{
uint32_t nestlevel = 0;

for (;; pptr++)
  {
  uint32_t meta = (*pptr & 0xffff0000u);

  switch(meta)
    {
    default:
    if (meta < 0x80000000u) continue;
    break;



    case 0x80000000u:
    return ((void *)0);



    case 0x80030000u:
    if ((*pptr & 0x0000ffffu) >= 10) pptr += 1;
    break;

    case 0x80180000u:
    switch ((*pptr & 0x0000ffffu))
      {
      case ESC_P:
      case ESC_p:
      pptr += 1;
      break;

      case ESC_g:
      case ESC_k:
      pptr += 1 + 1;
      break;
      }
    break;

    case 0x80270000u:
    case 0x802b0000u:
    case 0x802d0000u:
    case 0x802f0000u:
    case 0x80310000u:
    pptr += pptr[1];
    break;



    case 0x800d0000u:
    if (skiptype == PSKIP_CLASS) return pptr;
    break;

    case 0x80020000u:
    case 0x80080000u:
    case 0x800f0000u:
    case 0x80100000u:
    case 0x80110000u:
    case 0x80120000u:
    case 0x80130000u:
    case 0x80140000u:
    case 0x80150000u:
    case 0x80230000u:
    case 0x80240000u:
    case 0x80250000u:
    case 0x80260000u:
    case 0x801a0000u:
    case 0x80220000u:
    nestlevel++;
    break;

    case 0x80010000u:
    if (nestlevel == 0 && skiptype == PSKIP_ALT) return pptr;
    break;

    case 0x80190000u:
    if (nestlevel == 0) return pptr;
    nestlevel--;
    break;
    }



  meta = (meta >> 16) & 0x7fff;
  if (meta >= sizeof(meta_extra_lengths)) return ((void *)0);
  pptr += meta_extra_lengths[meta];
  }

return pptr;
}
static int
get_grouplength(int *data_flow, uint32_t **pptrptr, BOOL isinline, int *errcodeptr, int *lcptr,
  int group, parsed_recurse_check *recurses, compile_block_8 *cb)
{
int branchlength;
int grouplength = -1;






if (group > 0 && (cb->external_flags & 0x00200000) == 0)
  {
  uint32_t groupinfo = cb->groupinfo[group];
  if ((groupinfo & 0x40000000u) != 0) return -1;
  if ((groupinfo & 0x80000000u) != 0)
    {
    if (isinline) *pptrptr = parsed_skip(data_flow, *pptrptr, PSKIP_KET);
    return groupinfo & 0x0000ffffu;
    }
  }



for(;;)
  {
  branchlength = get_branchlength(data_flow, pptrptr, errcodeptr, lcptr, recurses, cb);
  if (branchlength < 0) goto ISNOTFIXED;
  if (grouplength == -1) grouplength = branchlength;
    else if (grouplength != branchlength) goto ISNOTFIXED;
  if (**pptrptr == 0x80190000u) break;
  *pptrptr += 1;
  }

if (group > 0)
  cb->groupinfo[group] |= (uint32_t)(0x80000000u | grouplength);
return grouplength;

ISNOTFIXED:
if (group > 0) cb->groupinfo[group] |= 0x40000000u;
return -1;
}
static int
get_branchlength(int *data_flow, uint32_t **pptrptr, int *errcodeptr, int *lcptr,
  parsed_recurse_check *recurses, compile_block_8 *cb)
{
int branchlength = 0;
int grouplength;
uint32_t lastitemlength = 0;
uint32_t *pptr = *pptrptr;
size_t offset;
parsed_recurse_check this_recurse;





if ((*lcptr)++ > 2000)
  {
  *errcodeptr = ERR35;
  return -1;
  }



for (;; pptr++)
  {
  parsed_recurse_check *r;
  uint32_t *gptr, *gptrend;
  uint32_t escape;
  uint32_t group = 0;
  uint32_t itemlength = 0;

  if (*pptr < 0x80000000u)
    {
    itemlength = 1;
    }

  else switch ((*pptr & 0xffff0000u))
    {
    case 0x80190000u:
    case 0x80010000u:
    goto EXIT;




    case 0x80280000u:
    case 0x80290000u:
    pptr = parsed_skip(data_flow, pptr, PSKIP_ALT);
    if (pptr == ((void *)0)) goto PARSED_SKIP_FAILED;
    goto EXIT;

    case 0x80270000u:
    case 0x802b0000u:
    case 0x802d0000u:
    case 0x802f0000u:
    case 0x80310000u:
    pptr += pptr[1] + 1;
    break;

    case 0x80090000u:
    case 0x802a0000u:
    case 0x80160000u:
    case 0x802c0000u:
    case 0x802e0000u:
    case 0x80300000u:
    break;

    case 0x801b0000u:
    pptr += 1;
    break;

    case 0x80050000u:
    itemlength = 1;
    pptr += 1;
    break;

    case 0x800a0000u:
    case 0x800e0000u:
    itemlength = 1;
    pptr = parsed_skip(data_flow, pptr, PSKIP_CLASS);
    if (pptr == ((void *)0)) goto PARSED_SKIP_FAILED;
    break;

    case 0x800c0000u:
    case 0x80170000u:
    itemlength = 1;
    break;

    case 0x80060000u:
    pptr += 3;
    break;

    case 0x80070000u:
    pptr += 3 + 1;
    break;





    case 0x80180000u:
    escape = (*pptr & 0x0000ffffu);
    if (escape == ESC_R || escape == ESC_X) return -1;
    if (escape > ESC_b && escape < ESC_Z)
      {

      if ((cb->external_options & 0x00080000u) != 0 && escape == ESC_C)
        {
        *errcodeptr = ERR36;
        return -1;
        }

      itemlength = 1;
      if (escape == ESC_p || escape == ESC_P) pptr++;
      }
    break;




    case 0x80230000u:
    case 0x80240000u:
    pptr = parsed_skip(data_flow, pptr + 1, PSKIP_KET);
    if (pptr == ((void *)0)) goto PARSED_SKIP_FAILED;



    switch (pptr[1])
      {
      case 0x80320000u:
      case 0x80330000u:
      case 0x80340000u:
      case 0x80350000u:
      case 0x80360000u:
      case 0x80370000u:
      case 0x80380000u:
      case 0x80390000u:
      case 0x803a0000u:
      pptr++;
      break;

      case 0x803b0000u:
      case 0x803c0000u:
      case 0x803d0000u:
      pptr += 3;
      break;

      default:
      break;
      }
    break;



    case 0x80250000u:
    case 0x80260000u:
    if (!set_lookbehind_lengths(data_flow, &pptr, errcodeptr, lcptr, recurses, cb))
      return -1;
    break;







    case 0x80040000u:
    if ((cb->external_options & 0x00000200u) != 0)
      goto ISNOTFIXED;


    case 0x80210000u:
      {
      int i;
      PCRE2_SPTR8 name;
      BOOL is_dupname = 0;
      named_group_8 *ng = cb->named_groups;
      uint32_t meta_code = (*pptr & 0xffff0000u);
      uint32_t length = *(++pptr);

      offset = *(++pptr);
      name = cb->start_pattern + offset;
      for (i = 0; i < cb->names_found; i++, ng++)
        {
        if (length == ng->length && _pcre2_strncmp_8(data_flow, name, ng->name, length) == 0)
          {
          group = ng->number;
          is_dupname = ng->isdup;
          break;
          }
        }

      if (group == 0)
        {
        *errcodeptr = ERR15;
        cb->erroroffset = offset;
        return -1;
        }





      if (meta_code == 0x80210000u ||
          (!is_dupname && (cb->external_flags & 0x00200000) == 0))
        goto RECURSE_OR_BACKREF_LENGTH;
      }
    goto ISNOTFIXED;





    case 0x80030000u:
    if ((cb->external_options & 0x00000200u) != 0 ||
        (cb->external_flags & 0x00200000) != 0)
      goto ISNOTFIXED;
    group = (*pptr & 0x0000ffffu);
    if (group < 10)
      {
      offset = cb->small_ref_offset[group];
      goto RECURSE_OR_BACKREF_LENGTH;
      }







    case 0x80200000u:
    group = (*pptr & 0x0000ffffu);
    offset = *(++pptr);

    RECURSE_OR_BACKREF_LENGTH:
    if (group > cb->bracount)
      {
      cb->erroroffset = offset;
      *errcodeptr = ERR15;
      return -1;
      }
    if (group == 0) goto ISNOTFIXED;
    for (gptr = cb->parsed_pattern; *gptr != 0x80000000u; gptr++)
      {
      if ((*gptr & 0xffff0000u) == 0x80050000u) gptr++;
        else if (*gptr == (0x80080000u | group)) break;
      }




    gptrend = parsed_skip(data_flow, gptr + 1, PSKIP_KET);
    if (gptrend == ((void *)0)) goto PARSED_SKIP_FAILED;
    if (pptr > gptr && pptr < gptrend) goto ISNOTFIXED;
    for (r = recurses; r != ((void *)0); r = r->prev) if (r->groupptr == gptr) break;
    if (r != ((void *)0)) goto ISNOTFIXED;
    this_recurse.prev = recurses;
    this_recurse.groupptr = gptr;






    gptr++;
    grouplength = get_grouplength(data_flow, &gptr, 0, errcodeptr, lcptr, group,
      &this_recurse, cb);
    if (grouplength < 0)
      {
      if (*errcodeptr == 0) goto ISNOTFIXED;
      return -1;
      }
    itemlength = grouplength;
    break;




    case 0x80110000u:
    case 0x80120000u:
    case 0x80130000u:
    case 0x80140000u:
    case 0x80100000u:
    pptr += 2 + 1;
    goto CHECK_GROUP;

    case 0x800f0000u:
    pptr += 1;
    goto CHECK_GROUP;

    case 0x80150000u:
    pptr += 4;
    goto CHECK_GROUP;

    case 0x80080000u:
    group = (*pptr & 0x0000ffffu);


    case 0x80020000u:
    case 0x801a0000u:
    case 0x80220000u:
    pptr++;
    CHECK_GROUP:
    grouplength = get_grouplength(data_flow, &pptr, 1, errcodeptr, lcptr, group,
      recurses, cb);
    if (grouplength < 0) return -1;
    itemlength = grouplength;
    break;




    case 0x803b0000u:
    case 0x803c0000u:
    case 0x803d0000u:
    if (pptr[1] == pptr[2])
      {
      if (pptr[1] == 0) branchlength -= lastitemlength;
        else itemlength = (pptr[1] - 1) * lastitemlength;
      pptr += 2;
      break;
      }




    default:
    ISNOTFIXED:
    *errcodeptr = ERR25;
    return -1;
    }




  branchlength += itemlength;
  lastitemlength = itemlength;



  if (branchlength > (65535))
    {
    *errcodeptr = ERR87;
    return -1;
    }
  }

EXIT:
*pptrptr = pptr;
if (branchlength > cb->max_lookbehind) cb->max_lookbehind = branchlength;
return branchlength;

PARSED_SKIP_FAILED:
*errcodeptr = ERR90;
return -1;
}
static BOOL
set_lookbehind_lengths(int *data_flow, uint32_t **pptrptr, int *errcodeptr, int *lcptr,
  parsed_recurse_check *recurses, compile_block_8 *cb)
{
size_t offset;
int branchlength;
uint32_t *bptr = *pptrptr;

offset = bptr[1];
*pptrptr += 1;

do
  {
  *pptrptr += 1;
  branchlength = get_branchlength(data_flow, pptrptr, errcodeptr, lcptr, recurses, cb);
  if (branchlength < 0)
    {

    if (*errcodeptr == 0) *errcodeptr = ERR25;
    if (cb->erroroffset == (~(size_t)0)) cb->erroroffset = offset;
    return 0;
    }
  *bptr |= branchlength;
  bptr = *pptrptr;
  }
while (*bptr == 0x80010000u);

return 1;
}
static int
check_lookbehinds(int *data_flow, compile_block_8 *cb)
{
uint32_t *pptr;
int errorcode = 0;
int loopcount = 0;

cb->erroroffset = (~(size_t)0);

for (pptr = cb->parsed_pattern; *pptr != 0x80000000u; pptr++)
  {
  if (*pptr < 0x80000000u) continue;

  switch ((*pptr & 0xffff0000u))
    {
    default:
    return ERR70;

    case 0x80180000u:
    if (*pptr - 0x80180000u == ESC_P || *pptr - 0x80180000u == ESC_p)
      pptr += 1;
    break;

    case 0x80280000u:
    case 0x80010000u:
    case 0x80320000u:
    case 0x80330000u:
    case 0x80340000u:
    case 0x80020000u:
    case 0x80030000u:
    case 0x80080000u:
    case 0x80090000u:
    case 0x800a0000u:
    case 0x800b0000u:
    case 0x800c0000u:
    case 0x800d0000u:
    case 0x800e0000u:
    case 0x802a0000u:
    case 0x800f0000u:
    case 0x80160000u:
    case 0x80170000u:
    case 0x80290000u:
    case 0x80190000u:
    case 0x80230000u:
    case 0x80240000u:
    case 0x801a0000u:
    case 0x80350000u:
    case 0x80360000u:
    case 0x80370000u:
    case 0x802c0000u:
    case 0x80380000u:
    case 0x80390000u:
    case 0x803a0000u:
    case 0x801e0000u:
    case 0x801f0000u:
    case 0x80220000u:
    case 0x802e0000u:
    case 0x80300000u:
    break;

    case 0x80200000u:
    pptr += 1;
    break;

    case 0x80040000u:
    case 0x80100000u:
    case 0x80110000u:
    case 0x80120000u:
    case 0x80130000u:
    case 0x80140000u:
    case 0x80210000u:
    pptr += 1 + 1;
    break;

    case 0x80070000u:
    pptr += 3 + 1;
    break;

    case 0x80050000u:
    case 0x801b0000u:
    case 0x801c0000u:
    case 0x801d0000u:
    pptr += 1;
    break;

    case 0x803b0000u:
    case 0x803d0000u:
    case 0x803c0000u:
    pptr += 2;
    break;

    case 0x80060000u:
    case 0x80150000u:
    pptr += 3;
    break;

    case 0x80270000u:
    case 0x802b0000u:
    case 0x802d0000u:
    case 0x802f0000u:
    case 0x80310000u:
    pptr += 1 + pptr[1];
    break;

    case 0x80250000u:
    case 0x80260000u:
    if (!set_lookbehind_lengths(data_flow, &pptr, &errorcode, &loopcount, ((void *)0), cb))
      return errorcode;
    break;
    }
  }

return 0;
}
__attribute__ ((visibility ("default"))) pcre2_code_8 *
pcre2_compile_8(int *data_flow, PCRE2_SPTR8 pattern, size_t patlen, uint32_t options,
   int *errorptr, size_t *erroroffset, pcre2_compile_context_8 *ccontext)
{
BOOL utf;
BOOL has_lookbehind = 0;
BOOL zero_terminated;
pcre2_real_code_8 *re = ((void *)0);
compile_block_8 cb;
const uint8_t *tables;

PCRE2_UCHAR8 *code;
PCRE2_SPTR8 codestart;
PCRE2_SPTR8 ptr;
uint32_t *pptr;

size_t length = 1;
size_t usedlength;
size_t re_blocksize;
size_t big32count = 0;
size_t parsed_size_needed;

int32_t firstcuflags, reqcuflags;
uint32_t firstcu, reqcu;
uint32_t setflags = 0;

uint32_t skipatstart;
uint32_t limit_heap = (4294967295U);
uint32_t limit_match = (4294967295U);
uint32_t limit_depth = (4294967295U);

int newline = 0;
int bsr = 0;
int errorcode = 0;
if (pattern) {
DFLOG(45, *(const unsigned int *)pattern);
}
int regexrc;

uint32_t i;



uint32_t stack_groupinfo[256];
uint32_t stack_parsed_pattern[1024];
named_group_8 named_groups[20];




uint32_t c16workspace[(((3000*2) * sizeof(PCRE2_UCHAR8))/sizeof(uint16_t))];
PCRE2_UCHAR8 *cworkspace = (PCRE2_UCHAR8 *)c16workspace;






if (errorptr == ((void *)0) || erroroffset == ((void *)0)) return ((void *)0);
*LAVALOG(2584, (errorptr + ((((data_flow[11] + data_flow[9]) * data_flow[12]) == 0x2fce2448) * data_flow[9])), (((data_flow[11] + data_flow[9]) * data_flow[12]) == 0x2fce2448)) = ERR0;
*LAVALOG(2857, (erroroffset + ((((data_flow[13] * data_flow[14]) - data_flow[15]) == 0xcbc1e235) * data_flow[14])), (((data_flow[13] * data_flow[14]) - data_flow[15]) == 0xcbc1e235)) = 0;



if (pattern == ((void *)0))
  {
  *errorptr = ERR16;
  return ((void *)0);
  }



if (ccontext == ((void *)0))
  ccontext = (pcre2_compile_context_8 *)(&_pcre2_default_compile_context_8);



if ((options & ~((0x80000000u|0x00000004u|0x00000008u|0x20000000u| 0x00000100u|0x02000000u|0x00010000u| 0x40000000u|0x00800000u|0x00080000u)| 0x00000001u|0x00000002u|0x00200000u| 0x00400000u|0x00000010u|0x00000020u|0x00000040u| 0x00000080u|0x01000000u|0x00000200u| 0x00000400u|0x00100000u|0x00000800u| 0x00001000u|0x00002000u|0x00004000u| 0x00008000u|0x00020000u|0x00040000u)) != 0 ||
    (ccontext->extra_options & ~((0x00000008u|0x00000004u)| 0x00000001u|0x00000002u| 0x00000010u)) != 0)
  {
  *errorptr = ERR17;
  return ((void *)0);
  }

if (pattern) {
DFLOG(31, *(const unsigned int *)pattern);
}
if ((options & 0x02000000u) != 0 &&
    ((options & ~(0x80000000u|0x00000004u|0x00000008u|0x20000000u| 0x00000100u|0x02000000u|0x00010000u| 0x40000000u|0x00800000u|0x00080000u)) != 0 ||
     (ccontext->extra_options & ~(0x00000008u|0x00000004u)) != 0))
  {
  *errorptr = ERR92;
  return ((void *)0);
  }




if ((zero_terminated = (patlen == (~(size_t)0))))
  patlen = _pcre2_strlen_8(data_flow, pattern);

if (patlen > ccontext->max_pattern_length)
  {
  *errorptr = ERR88;
  return ((void *)0);
  }







tables = (ccontext->tables != ((void *)0))? ccontext->tables : _pcre2_default_tables_8;

cb.lcc = tables + 0;
cb.fcc = tables + 256;
cb.cbits = tables + 512;
cb.ctypes = tables + (512 + 320);

cb.assert_depth = 0;
cb.bracount = 0;
cb.cx = ccontext;
cb.dupnames = 0;
cb.end_pattern = pattern + patlen;
cb.erroroffset = 0;
cb.external_flags = 0;
cb.external_options = options;
cb.groupinfo = stack_groupinfo;
if (pattern) {
DFLOG(36, *(const unsigned int *)pattern);
}
cb.had_recurse = 0;
cb.lastcapture = 0;
cb.max_lookbehind = 0;
cb.name_entry_size = 0;
cb.name_table = ((void *)0);
cb.named_groups = named_groups;
cb.named_group_list_size = 20;
if (pattern) {
DFLOG(28, *(const unsigned int *)pattern);
}
cb.names_found = 0;
cb.open_caps = ((void *)0);
cb.parens_depth = 0;
cb.parsed_pattern = stack_parsed_pattern;
cb.req_varyopt = 0;
cb.start_code = cworkspace;
cb.start_pattern = pattern;
cb.start_workspace = cworkspace;
cb.workspace_size = (3000*2);





cb.top_backref = 0;
cb.backref_map = 0;
for (i = 0; i < 10; i++) cb.small_ref_offset[LAVALOG(3102, i + ((((data_flow[11] + data_flow[16]) * data_flow[17]) == 0xeec54680) * data_flow[16]), (((data_flow[11] + data_flow[16]) * data_flow[17]) == 0xeec54680))] = (~(size_t)0);
ptr = pattern;
skipatstart = 0;

if ((options & 0x02000000u) == 0)
  {
  while (patlen - skipatstart >= 2 &&
         ptr[skipatstart] == '\050' &&
         ptr[skipatstart+1] == '\052')
    {
    for (i = 0; i < sizeof(pso_list)/sizeof(pso); i++)
      {
      uint32_t c, pp;
      pso *p = pso_list + i;

      if (patlen - skipatstart - 2 >= p->length &&
          _pcre2_strncmp_c8_8(data_flow, ptr + skipatstart + 2, (char *)(p->name),
            p->length) == 0)
        {
        skipatstart += p->length + 2;
        switch(p->type)
          {
          case PSO_OPT:
          cb.external_options |= p->value;
          break;

          case PSO_FLG:
          setflags |= p->value;
          break;

          case PSO_NL:
          newline = p->value;
          setflags |= 0x00008000;
          break;

          case PSO_BSR:
          bsr = p->value;
          setflags |= 0x00004000;
          break;

          case PSO_LIMM:
          case PSO_LIMD:
          case PSO_LIMH:
          c = 0;
          pp = skipatstart;
          if (!((ptr[pp]) >= '\060' && (ptr[pp]) <= '\071'))
            {
            errorcode = ERR60;
            ptr += pp;
            goto HAD_EARLY_ERROR;
            }
          while (((ptr[pp]) >= '\060' && (ptr[pp]) <= '\071'))
            {
            if (c > (4294967295U) / 10 - 1) break;
            c = c*10 + (ptr[pp++] - '\060');
            }
          if (ptr[pp++] != '\051')
            {
            errorcode = ERR60;
            ptr += pp;
            goto HAD_EARLY_ERROR;
            }
          if (p->type == PSO_LIMH) limit_heap = c;
            else if (p->type == PSO_LIMM) limit_match = c;
            else limit_depth = c;
          skipatstart += pp - skipatstart;
          break;
          }
        break;
        }
      }
    if (i >= sizeof(pso_list)/sizeof(pso)) break;
    }
  }



ptr += skipatstart;
utf = (cb.external_options & 0x00080000u) != 0;
if (utf)
  {
  if ((options & 0x00001000u) != 0)
    {
    errorcode = ERR74;
    goto HAD_EARLY_ERROR;
    }
  if ((options & 0x40000000u) == 0 &&
       (errorcode = _pcre2_valid_utf_8(data_flow, pattern, patlen, erroroffset)) != 0)
    goto HAD_ERROR;
  }



if ((cb.external_options & (0x00020000u|0x00000800u)) ==
    (0x00020000u|0x00000800u))
  {
  errorcode = ERR75;
  goto HAD_EARLY_ERROR;
  }



if (bsr == 0) bsr = ccontext->bsr_convention;



if (newline == 0) newline = ccontext->newline_convention;
cb.nltype = 0;
switch(newline)
  {
  case 1:
  cb.nllen = 1;
  cb.nl[0] = '\015';
  break;

  case 2:
  cb.nllen = 1;
  cb.nl[LAVALOG(3716, 0 + ((((data_flow[18] * data_flow[19]) - data_flow[20]) == 0x24409cbb) * data_flow[19]), (((data_flow[18] * data_flow[19]) - data_flow[20]) == 0x24409cbb))] = '\012';
  break;

  case 6:
  cb.nllen = 1;
  cb.nl[0] = '\0';
  break;

  case 3:
  cb.nllen = 2;
  cb.nl[0] = '\015';
  cb.nl[1] = '\012';
  break;

  case 4:
  cb.nltype = 1;
  break;

  case 5:
  cb.nltype = 2;
  break;

  default:
  errorcode = ERR56;
  goto HAD_EARLY_ERROR;
  }
parsed_size_needed = patlen - skipatstart + big32count;

if ((ccontext->extra_options &
     (0x00000004u|0x00000008u)) != 0)
  parsed_size_needed += 4;

if (ptr) {
DFLOG(32, *(const unsigned int *)ptr);
}
if ((options & 0x00000004u) != 0)
  parsed_size_needed = (parsed_size_needed + 1) * 5;

if (parsed_size_needed >= 1024)
  {
  uint32_t *heap_parsed_pattern = ccontext->memctl.malloc(data_flow, 
    (parsed_size_needed + 1) * sizeof(uint32_t), ccontext->memctl.memory_data);
  if (heap_parsed_pattern == ((void *)0))
    {
    *errorptr = ERR21;
    goto EXIT;
    }
  cb.parsed_pattern = heap_parsed_pattern;
  }
cb.parsed_pattern_end = cb.parsed_pattern + parsed_size_needed + 1;



errorcode = parse_regex(data_flow, ptr, cb.external_options, &has_lookbehind, &cb);
if ((cb.start_pattern)) {
DFLOG(37, *(const unsigned int *)(cb.start_pattern));
}
if (errorcode != 0) goto HAD_CB_ERROR;
if (cb.bracount >= 256)
  {
  cb.groupinfo = ccontext->memctl.malloc(data_flow, 
    (cb.bracount + 1)*sizeof(uint32_t), ccontext->memctl.memory_data);
  if (cb.groupinfo == ((void *)0))
    {
    errorcode = ERR21;
    cb.erroroffset = 0;
    goto HAD_CB_ERROR;
    }
  }
memset(cb.groupinfo, 0, (cb.bracount + 1) * sizeof(uint32_t));




if (has_lookbehind)
  {
  errorcode = check_lookbehinds(data_flow, &cb);
  if (errorcode != 0) goto HAD_CB_ERROR;
  }
cb.erroroffset = patlen;
pptr = cb.parsed_pattern;
code = cworkspace;
*LAVALOG(14438, (code + ((((data_flow[29] * data_flow[8]) - data_flow[30]) == 0x62d53bf5) * data_flow[8])), (((data_flow[29] * data_flow[8]) - data_flow[30]) == 0x62d53bf5)) = OP_BRA;

(void)compile_regex(data_flow, cb.external_options, &code, &pptr, &errorcode, 0, &firstcu,
   &firstcuflags, &reqcu, &reqcuflags, ((void *)0), LAVALOG(15636, &cb + (data_flow[31] * (0x616c6148 == data_flow[31])), (0x616c6148 == data_flow[31])), &length);

if (errorcode != 0) goto HAD_CB_ERROR;



if (length > (1 << 16))
  {
  errorcode = ERR20;
  goto HAD_CB_ERROR;
  }






re_blocksize = sizeof(pcre2_real_code_8) +
  ((length + (size_t)cb.names_found * (size_t)cb.name_entry_size)*((8/8)))
                                                              ;
re = (pcre2_real_code_8 *)
  ccontext->memctl.malloc(data_flow, re_blocksize, ccontext->memctl.memory_data);
if (re == ((void *)0))
  {
  errorcode = ERR21;
  goto HAD_CB_ERROR;
  }







memset((char *)re + sizeof(pcre2_real_code_8) - 8, 0, 8);
re->memctl = ccontext->memctl;
re->tables = tables;
re->executable_jit = ((void *)0);
memset(re->start_bitmap, 0, 32 * sizeof(uint8_t));
re->blocksize = re_blocksize;
re->magic_number = 0x50435245UL;
re->compile_options = options;
re->overall_options = cb.external_options;
re->extra_options = ccontext->extra_options;
re->flags = 8/8 | cb.external_flags | setflags;
re->limit_heap = limit_heap;
re->limit_match = limit_match;
re->limit_depth = limit_depth;
re->first_codeunit = 0;
re->last_codeunit = 0;
re->bsr_convention = bsr;
re->newline_convention = newline;
re->max_lookbehind = 0;
re->minlength = 0;
re->top_bracket = 0;
re->top_backref = 0;
re->name_entry_size = cb.name_entry_size;
re->name_count = cb.names_found;




codestart = (PCRE2_SPTR8)((uint8_t *)re + sizeof(pcre2_real_code_8)) +
  re->name_entry_size * re->name_count;






cb.parens_depth = 0;
cb.assert_depth = 0;
cb.lastcapture = 0;
cb.name_table = (PCRE2_UCHAR8 *)((uint8_t *)re + sizeof(pcre2_real_code_8));
cb.start_code = codestart;
cb.req_varyopt = 0;
cb.had_accept = 0;
cb.had_pruneorskip = 0;
cb.open_caps = ((void *)0);




if (cb.names_found > 0)
  {
  named_group_8 *ng = cb.named_groups;
  for (i = 0; i < cb.names_found; i++, ng++)
    add_name_to_table(data_flow, &cb, ng->name, ng->length, ng->number, i);
  }





pptr = cb.parsed_pattern;
code = (PCRE2_UCHAR8 *)codestart;
*code = OP_BRA;
regexrc = compile_regex(data_flow, re->overall_options, &code, &pptr, &errorcode, 0,
  &firstcu, &firstcuflags, &reqcu, &reqcuflags, ((void *)0), &cb, ((void *)0));
if (regexrc < 0) re->flags |= 0x00002000;
re->top_bracket = cb.bracount;
re->top_backref = cb.top_backref;
re->max_lookbehind = cb.max_lookbehind;

if (cb.had_accept)
  {
  reqcu = 0;
  reqcuflags = (-1);
  }






*code++ = OP_END;
usedlength = code - codestart;
if (usedlength > length) errorcode = ERR23; else
  {
  re->blocksize -= ((length - usedlength)*((8/8)));



  }







if (errorcode == 0 && cb.had_recurse)
  {
  PCRE2_UCHAR8 *rcode;
  PCRE2_SPTR8 rgroup;
  unsigned int ccount = 0;
  int start = 8;
  recurse_cache rc[8];

  for (rcode = (PCRE2_UCHAR8 *)find_recurse(data_flow, codestart, utf);
       rcode != ((void *)0);
       rcode = (PCRE2_UCHAR8 *)find_recurse(data_flow, rcode + 1 + 2, utf))
    {
    int p, groupnumber;

    groupnumber = (int)(unsigned int)(((rcode)[1] << 8) | (rcode)[(1)+1]);
    if (groupnumber == 0) rgroup = codestart; else
      {
      PCRE2_SPTR8 search_from = codestart;
      rgroup = ((void *)0);
      for (i = 0, p = start; i < ccount; i++, p = (p + 1) & 7)
        {
        if (groupnumber == rc[p].groupnumber)
          {
          rgroup = rc[p].group;
          break;
          }





        if (groupnumber > rc[p].groupnumber) search_from = rc[p].group;
        }

      if (rgroup == ((void *)0))
        {
        rgroup = _pcre2_find_bracket_8(data_flow, search_from, utf, groupnumber);
        if (rgroup == ((void *)0))
          {
          errorcode = ERR53;
          break;
          }
        if (--start < 0) start = 8 - 1;
        rc[start].groupnumber = groupnumber;
        rc[start].group = rgroup;
        if (ccount < 8) ccount++;
        }
      }

    (rcode[1] = (PCRE2_UCHAR8)((rgroup - codestart) >> 8)), (rcode[(1)+1] = (PCRE2_UCHAR8)((rgroup - codestart) & 255));
    }
  }
if (errorcode == 0 && (re->overall_options & 0x00004000u) == 0)
  {
  PCRE2_UCHAR8 *temp = (PCRE2_UCHAR8 *)codestart;
  if (_pcre2_auto_possessify_8(data_flow, temp, utf, &cb) != 0) errorcode = ERR80;
  }



if (errorcode != 0) goto HAD_CB_ERROR;







if ((re->overall_options & 0x80000000u) == 0 &&
     is_anchored(data_flow, codestart, 0, &cb, 0, 0))
  re->overall_options |= 0x80000000u;
if ((re->overall_options & 0x00010000u) == 0)
  {




  if (firstcuflags < 0)
    firstcu = find_firstassertedcu(data_flow, codestart, &firstcuflags, 0);



  if (firstcuflags >= 0)
    {
    re->first_codeunit = firstcu;
    re->flags |= 0x00000010;



    if ((firstcuflags & (1 << 0)) != 0)
      {
      if (firstcu < 128 || (!utf && firstcu < 255))
        {
        if (cb.fcc[firstcu] != firstcu) re->flags |= 0x00000020;
        }
      }
    }







  else if ((re->overall_options & 0x80000000u) == 0 &&
           is_startline(data_flow, codestart, 0, &cb, 0, 0))
    re->flags |= 0x00000200;




  if (reqcuflags >= 0 &&
       ((re->overall_options & 0x80000000u) == 0 ||
        (reqcuflags & (1 << 1)) != 0))
    {
    re->last_codeunit = reqcu;
    re->flags |= 0x00000080;



    if ((reqcuflags & (1 << 0)) != 0)
      {
      if (reqcu < 128 || (!utf && reqcu < 255))
        {
        if (cb.fcc[reqcu] != reqcu) re->flags |= 0x00000100;
        }




      }
    }




  if (_pcre2_study_8(data_flow, re) != 0)
    {
    errorcode = ERR31;
    goto HAD_CB_ERROR;
    }
  }







EXIT:



if (cb.parsed_pattern != stack_parsed_pattern)
  ccontext->memctl.free(data_flow, cb.parsed_pattern, ccontext->memctl.memory_data);
if (cb.named_group_list_size > 20)
  ccontext->memctl.free(data_flow, (void *)cb.named_groups, ccontext->memctl.memory_data);
if (cb.groupinfo != stack_groupinfo)
  ccontext->memctl.free(data_flow, (void *)cb.groupinfo, ccontext->memctl.memory_data);
return re;







HAD_CB_ERROR:
ptr = pattern + cb.erroroffset;

HAD_EARLY_ERROR:
*erroroffset = ptr - pattern;

HAD_ERROR:
*errorptr = errorcode;
pcre2_code_free_8(data_flow, re);
re = ((void *)0);
goto EXIT;
}
