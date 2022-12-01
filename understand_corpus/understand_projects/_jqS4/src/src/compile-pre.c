











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
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



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



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

















typedef long double float_t;

typedef long double double_t;


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
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















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

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


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;










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
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






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









extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int fdatasync (int __fildes);



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
const char* jv_kind_name(jv_kind);
static int jv_is_valid(jv x) { return jv_get_kind(x) != JV_KIND_INVALID; }

jv jv_copy(jv);
void jv_free(jv);

int jv_get_refcnt(jv);

int jv_equal(jv, jv);
int jv_identical(jv, jv);
int jv_contains(jv, jv);

jv jv_invalid(void);
jv jv_invalid_with_msg(jv);
jv jv_invalid_get_msg(jv);
int jv_invalid_has_msg(jv);


jv jv_null(void);
jv jv_true(void);
jv jv_false(void);
jv jv_bool(int);

jv jv_number(double);
double jv_number_value(jv);
int jv_is_integer(jv);

jv jv_array(void);
jv jv_array_sized(int);
int jv_array_length(jv);
jv jv_array_get(jv, int);
jv jv_array_set(jv, int, jv);
jv jv_array_append(jv, jv);
jv jv_array_concat(jv, jv);
jv jv_array_slice(jv, int, int);
jv jv_array_indexes(jv, jv);
jv jv_string(const char*);
jv jv_string_sized(const char*, int);
jv jv_string_empty(int len);
int jv_string_length_bytes(jv);
int jv_string_length_codepoints(jv);
unsigned long jv_string_hash(jv);
const char* jv_string_value(jv);
jv jv_string_indexes(jv j, jv k);
jv jv_string_slice(jv j, int start, int end);
jv jv_string_concat(jv, jv);
jv jv_string_vfmt(const char*, va_list) __attribute__ ((__format__( __printf__, 1, 0)));
jv jv_string_fmt(const char*, ...) __attribute__ ((__format__( __printf__, 1, 2)));
jv jv_string_append_codepoint(jv a, uint32_t c);
jv jv_string_append_buf(jv a, const char* buf, int len);
jv jv_string_append_str(jv a, const char* str);
jv jv_string_split(jv j, jv sep);
jv jv_string_explode(jv j);
jv jv_string_implode(jv j);

jv jv_object(void);
jv jv_object_get(jv object, jv key);
int jv_object_has(jv object, jv key);
jv jv_object_set(jv object, jv key, jv value);
jv jv_object_delete(jv object, jv key);
int jv_object_length(jv object);
jv jv_object_merge(jv, jv);
jv jv_object_merge_recursive(jv, jv);

int jv_object_iter(jv);
int jv_object_iter_next(jv, int);
int jv_object_iter_valid(jv, int);
jv jv_object_iter_key(jv, int);
jv jv_object_iter_value(jv, int);
int jv_get_refcnt(jv);

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


void jv_dumpf(jv, FILE *f, int flags);
void jv_dump(jv, int flags);
void jv_show(jv, int flags);
jv jv_dump_string(jv, int flags);
char *jv_dump_string_trunc(jv x, char *outbuf, size_t bufsize);

enum {
  JV_PARSE_SEQ = 1,
  JV_PARSE_STREAMING = 2,
  JV_PARSE_STREAM_ERRORS = 4,
};

jv jv_parse(const char* string);
jv jv_parse_sized(const char* string, int length);

typedef void (*jv_nomem_handler_f)(void *);
void jv_nomem_handler(jv_nomem_handler_f, void *);

jv jv_load_file(const char *, int);

typedef struct jv_parser jv_parser;
jv_parser* jv_parser_new(int);
void jv_parser_set_buf(jv_parser*, const char*, int, int);
int jv_parser_remaining(jv_parser*);
jv jv_parser_next(jv_parser*);
void jv_parser_free(jv_parser*);

jv jv_get(jv, jv);
jv jv_set(jv, jv, jv);
jv jv_has(jv, jv);
jv jv_setpath(jv, jv, jv);
jv jv_getpath(jv, jv);
jv jv_delpaths(jv, jv);
jv jv_keys(jv );
jv jv_keys_unsorted(jv );
int jv_cmp(jv, jv);
jv jv_group(jv, jv);
jv jv_sort(jv, jv);






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

const struct opcode_description* opcode_describe(opcode op);



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

void dump_disassembly(int, struct bytecode* code);
void dump_operation(struct bytecode* bc, uint16_t* op);

int bytecode_operation_length(uint16_t* codeptr);
void bytecode_free(struct bytecode* bc);









enum {
  JQ_DEBUG_TRACE = 1,
  JQ_DEBUG_TRACE_DETAIL = 2,
  JQ_DEBUG_TRACE_ALL = JQ_DEBUG_TRACE | JQ_DEBUG_TRACE_DETAIL,
};

typedef struct jq_state jq_state;
typedef void (*jq_msg_cb)(void *, jv);

jq_state *jq_init(void);
void jq_set_error_cb(jq_state *, jq_msg_cb, void *);
void jq_get_error_cb(jq_state *, jq_msg_cb *, void **);
void jq_set_nomem_handler(jq_state *, void (*)(void *), void *);
jv jq_format_error(jv msg);
void jq_report_error(jq_state *, jv);
int jq_compile(jq_state *, const char*);
int jq_compile_args(jq_state *, const char*, jv);
void jq_dump_disassembly(jq_state *, int);
void jq_start(jq_state *, jv value, int);
jv jq_next(jq_state *);
void jq_teardown(jq_state **);

void jq_halt(jq_state *, jv, jv);
int jq_halted(jq_state *);
jv jq_get_exit_code(jq_state *);
jv jq_get_error_message(jq_state *);

typedef jv (*jq_input_cb)(jq_state *, void *);
void jq_set_input_cb(jq_state *, jq_input_cb, void *);
void jq_get_input_cb(jq_state *, jq_input_cb *, void **);

void jq_set_debug_cb(jq_state *, jq_msg_cb, void *);
void jq_get_debug_cb(jq_state *, jq_msg_cb *, void **);

void jq_set_attrs(jq_state *, jv);
jv jq_get_attrs(jq_state *);
jv jq_get_jq_origin(jq_state *);
jv jq_get_prog_origin(jq_state *);
jv jq_get_lib_dirs(jq_state *);
void jq_set_attr(jq_state *, jv, jv);
jv jq_get_attr(jq_state *, jv);







typedef struct jq_util_input_state jq_util_input_state;
typedef void (*jq_util_msg_cb)(void *, const char *);

jq_util_input_state *jq_util_input_init(jq_util_msg_cb, void *);
void jq_util_input_set_parser(jq_util_input_state *, jv_parser *, int);
void jq_util_input_free(jq_util_input_state **);
void jq_util_input_add_input(jq_util_input_state *, const char *);
int jq_util_input_errors(jq_util_input_state *);
jv jq_util_input_next_input(jq_util_input_state *);
jv jq_util_input_next_input_cb(jq_state *, void *);
jv jq_util_input_get_position(jq_state*);
jv jq_util_input_get_current_filename(jq_state*);
jv jq_util_input_get_current_line(jq_state*);

int jq_set_colors(const char *);

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

struct locfile* locfile_init(jq_state *, const char *, const char *, int);
struct locfile* locfile_retain(struct locfile *);
int locfile_get_line(struct locfile *, int);
void locfile_free(struct locfile *);
void locfile_locate(struct locfile *, location, const char *, ...);

struct inst;
typedef struct inst inst;


typedef struct block {
  inst* first;
  inst* last;
} block;

block gen_location(location, struct locfile*, block);

block gen_noop();
int block_is_noop(block b);
block gen_op_simple(opcode op);
block gen_const(jv constant);
block gen_const_global(jv constant, const char *name);
int block_is_const(block b);
int block_is_const_inf(block b);
jv_kind block_const_kind(block b);
jv block_const(block b);
block gen_op_target(opcode op, block target);
block gen_op_unbound(opcode op, const char* name);
block gen_op_bound(opcode op, block binder);
block gen_op_var_fresh(opcode op, const char* name);
block gen_op_pushk_under(jv constant);

block gen_module(block metadata);
jv block_module_meta(block b);
block gen_import(const char* name, const char *as, int is_data);
block gen_import_meta(block import, block metadata);
block gen_function(const char* name, block formals, block body);
block gen_param_regular(const char* name);
block gen_param(const char* name);
block gen_lambda(block body);
block gen_call(const char* name, block body);
block gen_subexp(block a);
block gen_both(block a, block b);
block gen_const_object(block expr);
block gen_collect(block expr);
block gen_reduce(block source, block matcher, block init, block body);
block gen_foreach(block source, block matcher, block init, block update, block extract);
block gen_definedor(block a, block b);
block gen_condbranch(block iftrue, block iffalse);
block gen_and(block a, block b);
block gen_or(block a, block b);
block gen_dictpair(block k, block v);

block gen_var_binding(block var, const char* name, block body);
block gen_array_matcher(block left, block curr);
block gen_object_matcher(block name, block curr);
block gen_destructure(block var, block matcher, block body);
block gen_destructure_alt(block matcher);

block gen_cond(block cond, block iftrue, block iffalse);
block gen_try_handler(block handler);
block gen_try(block exp, block handler);
block gen_label(const char *label, block exp);

block gen_cbinding(const struct cfunction* functions, int nfunctions, block b);

void block_append(block* b, block b2);
block block_join(block a, block b);
int block_has_only_binders_and_imports(block, int bindflags);
int block_has_only_binders(block, int bindflags);
int block_has_main(block);
int block_is_funcdef(block b);
int block_is_single(block b);
block block_bind(block binder, block body, int bindflags);
block block_bind_library(block binder, block body, int bindflags, const char* libname);
block block_bind_referenced(block binder, block body, int bindflags);
block block_drop_unreferenced(block body);

jv block_take_imports(block* body);
jv block_list_funcs(block body, int omit_underscores);

int block_compile(block, struct bytecode**, struct locfile*, jv);

void block_free(block);






typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;




extern volatile char jv_mem_uninitialised;


static void jv_mem_invalidate(void* mem, size_t n) {

  char* m = mem;
  while (n--) *m++ ^= jv_mem_uninitialised ^ jv_mem_uninitialised;

}

void* jv_mem_alloc(size_t);
void* jv_mem_alloc_unguarded(size_t);
void* jv_mem_calloc(size_t, size_t);
void* jv_mem_calloc_unguarded(size_t, size_t);
char* jv_mem_strdup(const char *);
char* jv_mem_strdup_unguarded(const char *);
void jv_mem_free(void*);
__attribute__((warn_unused_result)) void* jv_mem_realloc(void*, size_t);



int load_program(jq_state *jq, struct locfile* src, block *out_block);
jv load_module_meta(jq_state *jq, jv modname);
struct inst {
  struct inst* next;
  struct inst* prev;

  opcode op;

  struct {
    uint16_t intval;
    struct inst* target;
    jv constant;
    const struct cfunction* cfunc;
  } imm;

  struct locfile* locfile;
  location source;
  struct inst* bound_by;
  char* symbol;

  int nformals;
  int nactuals;

  block subfn;
  block arglist;



  struct bytecode* compiled;

  int bytecode_pos;
};

static inst* inst_new(opcode op) {
  inst* i = jv_mem_alloc(sizeof(inst));
  i->next = i->prev = 0;
  i->op = op;
  i->bytecode_pos = -1;
  i->bound_by = 0;
  i->symbol = 0;
  i->nformals = -1;
  i->nactuals = -1;
  i->subfn = gen_noop();
  i->arglist = gen_noop();
  i->source = UNKNOWN_LOCATION;
  i->locfile = 0;
  return i;
}

static void inst_free(struct inst* i) {
  jv_mem_free(i->symbol);
  block_free(i->subfn);
  block_free(i->arglist);
  if (i->locfile)
    locfile_free(i->locfile);
  if (opcode_describe(i->op)->flags & OP_HAS_CONSTANT) {
    jv_free(i->imm.constant);
  }
  jv_mem_free(i);
}

static block inst_block(inst* i) {
  block b = {i,i};
  return b;
}

int block_is_single(block b) {
  return b.first && b.first == b.last;
}

static inst* block_take(block* b) {
  if (b->first == 0) return 0;
  inst* i = b->first;
  if (i->next) {
    i->next->prev = 0;
    b->first = i->next;
    i->next = 0;
  } else {
    b->first = 0;
    b->last = 0;
  }
  return i;
}

block gen_location(location loc, struct locfile* l, block b) {
  for (inst* i = b.first; i; i = i->next) {
    if (i->source.start == UNKNOWN_LOCATION.start &&
        i->source.end == UNKNOWN_LOCATION.end) {
      i->source = loc;
      i->locfile = locfile_retain(l);
    }
  }
  return b;
}

block gen_noop() {
  block b = {0,0};
  return b;
}

int block_is_noop(block b) {
  return (b.first == 0 && b.last == 0);
}

block gen_op_simple(opcode op) {
  
 ((
 opcode_describe(op)->length == 1
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->length == 1"
 , "compile.c", 141, __PRETTY_FUNCTION__))
                                         ;
  return inst_block(inst_new(op));
}


block gen_const(jv constant) {
  
 ((
 opcode_describe(LOADK)->flags & OP_HAS_CONSTANT
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(LOADK)->flags & OP_HAS_CONSTANT"
 , "compile.c", 147, __PRETTY_FUNCTION__))
                                                        ;
  inst* i = inst_new(LOADK);
  i->imm.constant = constant;
  return inst_block(i);
}

block gen_const_global(jv constant, const char *name) {
  
 ((
 (opcode_describe(STORE_GLOBAL)->flags & (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)) == (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)
 ) ? (void) (0) : __assert_fail (
 "(opcode_describe(STORE_GLOBAL)->flags & (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)) == (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)"
 ,
                                                             "compile.c"
  ,
                                                             155
  , __PRETTY_FUNCTION__))
                                                              
                                                             ;
  inst* i = inst_new(STORE_GLOBAL);
  i->imm.constant = constant;
  i->symbol = strdup(name);
  return inst_block(i);
}

block gen_op_pushk_under(jv constant) {
  
 ((
 opcode_describe(PUSHK_UNDER)->flags & OP_HAS_CONSTANT
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(PUSHK_UNDER)->flags & OP_HAS_CONSTANT"
 , "compile.c", 163, __PRETTY_FUNCTION__))
                                                              ;
  inst* i = inst_new(PUSHK_UNDER);
  i->imm.constant = constant;
  return inst_block(i);
}

int block_is_const(block b) {
  return (block_is_single(b) && (b.first->op == LOADK || b.first->op == PUSHK_UNDER));
}

int block_is_const_inf(block b) {
  return (block_is_single(b) && b.first->op == LOADK &&
          jv_get_kind(b.first->imm.constant) == JV_KIND_NUMBER &&
          
         __builtin_isinf_sign (
         jv_number_value(b.first->imm.constant)
         )
                                                      );
}

jv_kind block_const_kind(block b) {
  
 ((
 block_is_const(b)
 ) ? (void) (0) : __assert_fail (
 "block_is_const(b)"
 , "compile.c", 180, __PRETTY_FUNCTION__))
                          ;
  return jv_get_kind(b.first->imm.constant);
}

jv block_const(block b) {
  
 ((
 block_is_const(b)
 ) ? (void) (0) : __assert_fail (
 "block_is_const(b)"
 , "compile.c", 185, __PRETTY_FUNCTION__))
                          ;
  return jv_copy(b.first->imm.constant);
}

block gen_op_target(opcode op, block target) {
  
 ((
 opcode_describe(op)->flags & OP_HAS_BRANCH
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_BRANCH"
 , "compile.c", 190, __PRETTY_FUNCTION__))
                                                   ;
  
 ((
 target.last
 ) ? (void) (0) : __assert_fail (
 "target.last"
 , "compile.c", 191, __PRETTY_FUNCTION__))
                    ;
  inst* i = inst_new(op);
  i->imm.target = target.last;
  return inst_block(i);
}

block gen_op_targetlater(opcode op) {
  
 ((
 opcode_describe(op)->flags & OP_HAS_BRANCH
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_BRANCH"
 , "compile.c", 198, __PRETTY_FUNCTION__))
                                                   ;
  inst* i = inst_new(op);
  i->imm.target = 0;
  return inst_block(i);
}
void inst_set_target(block b, block target) {
  
 ((
 block_is_single(b)
 ) ? (void) (0) : __assert_fail (
 "block_is_single(b)"
 , "compile.c", 204, __PRETTY_FUNCTION__))
                           ;
  
 ((
 opcode_describe(b.first->op)->flags & OP_HAS_BRANCH
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(b.first->op)->flags & OP_HAS_BRANCH"
 , "compile.c", 205, __PRETTY_FUNCTION__))
                                                            ;
  
 ((
 target.last
 ) ? (void) (0) : __assert_fail (
 "target.last"
 , "compile.c", 206, __PRETTY_FUNCTION__))
                    ;
  b.first->imm.target = target.last;
}

block gen_op_unbound(opcode op, const char* name) {
  
 ((
 opcode_describe(op)->flags & OP_HAS_BINDING
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_BINDING"
 , "compile.c", 211, __PRETTY_FUNCTION__))
                                                    ;
  inst* i = inst_new(op);
  i->symbol = strdup(name);
  return inst_block(i);
}

block gen_op_var_fresh(opcode op, const char* name) {
  
 ((
 opcode_describe(op)->flags & OP_HAS_VARIABLE
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_VARIABLE"
 , "compile.c", 218, __PRETTY_FUNCTION__))
                                                     ;
  return block_bind(gen_op_unbound(op, name),
                    gen_noop(), OP_HAS_VARIABLE);
}

block gen_op_bound(opcode op, block binder) {
  
 ((
 block_is_single(binder)
 ) ? (void) (0) : __assert_fail (
 "block_is_single(binder)"
 , "compile.c", 224, __PRETTY_FUNCTION__))
                                ;
  block b = gen_op_unbound(op, binder.first->symbol);
  b.first->bound_by = binder.first;
  return b;
}

block gen_dictpair(block k, block v) {
  return (block_join((block_join((gen_subexp(k)),(gen_subexp(v)))),(gen_op_simple(INSERT))));
}


static void inst_join(inst* a, inst* b) {
  
 ((
 a && b
 ) ? (void) (0) : __assert_fail (
 "a && b"
 , "compile.c", 236, __PRETTY_FUNCTION__))
               ;
  
 ((
 !a->next
 ) ? (void) (0) : __assert_fail (
 "!a->next"
 , "compile.c", 237, __PRETTY_FUNCTION__))
                 ;
  
 ((
 !b->prev
 ) ? (void) (0) : __assert_fail (
 "!b->prev"
 , "compile.c", 238, __PRETTY_FUNCTION__))
                 ;
  a->next = b;
  b->prev = a;
}

void block_append(block* b, block b2) {
  if (b2.first) {
    if (b->last) {
      inst_join(b->last, b2.first);
    } else {
      b->first = b2.first;
    }
    b->last = b2.last;
  }
}

block block_join(block a, block b) {
  block c = a;
  block_append(&c, b);
  return c;
}

int block_has_only_binders_and_imports(block binders, int bindflags) {
  bindflags |= OP_HAS_BINDING;
  for (inst* curr = binders.first; curr; curr = curr->next) {
    if ((opcode_describe(curr->op)->flags & bindflags) != bindflags && curr->op != DEPS && curr->op != MODULEMETA) {
      return 0;
    }
  }
  return 1;
}

static int inst_is_binder(inst *i, int bindflags) {
  return !((opcode_describe(i->op)->flags & bindflags) != bindflags && i->op != MODULEMETA);
}

int block_has_only_binders(block binders, int bindflags) {
  bindflags |= OP_HAS_BINDING;
  bindflags &= ~OP_BIND_WILDCARD;
  for (inst* curr = binders.first; curr; curr = curr->next) {
    if ((opcode_describe(curr->op)->flags & bindflags) != bindflags && curr->op != MODULEMETA) {
      return 0;
    }
  }
  return 1;
}


static int block_count_formals(block b) {
  int args = 0;
  if (b.first->op == CLOSURE_CREATE_C)
    return b.first->imm.cfunc->nargs - 1;
  for (inst* i = b.first->arglist.first; i; i = i->next) {
    
   ((
   i->op == CLOSURE_PARAM
   ) ? (void) (0) : __assert_fail (
   "i->op == CLOSURE_PARAM"
   , "compile.c", 291, __PRETTY_FUNCTION__))
                                 ;
    args++;
  }
  return args;
}


static int block_count_actuals(block b) {
  int args = 0;
  for (inst* i = b.first; i; i = i->next) {
    switch (i->op) {
    default: 
            ((
            0 && "Unknown function type"
            ) ? (void) (0) : __assert_fail (
            "0 && \"Unknown function type\""
            , "compile.c", 302, __PRETTY_FUNCTION__))
                                                ; break;
    case CLOSURE_CREATE:
    case CLOSURE_PARAM:
    case CLOSURE_CREATE_C:
      args++;
      break;
    }
  }
  return args;
}

static int block_count_refs(block binder, block body) {
  int nrefs = 0;
  for (inst* i = body.first; i; i = i->next) {
    if (i != binder.first && i->bound_by == binder.first) {
      nrefs++;
    }

    nrefs += block_count_refs(binder, i->subfn);

    nrefs += block_count_refs(binder, i->arglist);
  }
  return nrefs;
}

static int block_bind_subblock(block binder, block body, int bindflags, int break_distance) {
  
 ((
 block_is_single(binder)
 ) ? (void) (0) : __assert_fail (
 "block_is_single(binder)"
 , "compile.c", 328, __PRETTY_FUNCTION__))
                                ;
  
 ((
 (opcode_describe(binder.first->op)->flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD)
 ) ? (void) (0) : __assert_fail (
 "(opcode_describe(binder.first->op)->flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD)"
 , "compile.c", 329, __PRETTY_FUNCTION__))
                                                                                                  ;
  
 ((
 binder.first->symbol
 ) ? (void) (0) : __assert_fail (
 "binder.first->symbol"
 , "compile.c", 330, __PRETTY_FUNCTION__))
                             ;
  
 ((
 binder.first->bound_by == 0 || binder.first->bound_by == binder.first
 ) ? (void) (0) : __assert_fail (
 "binder.first->bound_by == 0 || binder.first->bound_by == binder.first"
 , "compile.c", 331, __PRETTY_FUNCTION__))
                                                                              ;
  
 ((
 break_distance >= 0
 ) ? (void) (0) : __assert_fail (
 "break_distance >= 0"
 , "compile.c", 332, __PRETTY_FUNCTION__))
                            ;

  binder.first->bound_by = binder.first;
  if (binder.first->nformals == -1)
    binder.first->nformals = block_count_formals(binder);
  int nrefs = 0;
  for (inst* i = body.first; i; i = i->next) {
    int flags = opcode_describe(i->op)->flags;
    if ((flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD) && i->bound_by == 0 &&
        (!strcmp(i->symbol, binder.first->symbol) ||

         ((bindflags & OP_BIND_WILDCARD) && i->symbol[0] == '*' &&
          break_distance <= 3 && (i->symbol[1] == '1' + break_distance) &&
          i->symbol[2] == '\0'))) {

      if (i->op == CALL_JQ && i->nactuals == -1)
        i->nactuals = block_count_actuals(i->arglist);
      if (i->nactuals == -1 || i->nactuals == binder.first->nformals) {
        i->bound_by = binder.first;
        nrefs++;
      }
    } else if ((flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD) && i->bound_by != 0 &&
               !strncmp(binder.first->symbol, "*anonlabel", sizeof("*anonlabel") - 1) &&
               !strncmp(i->symbol, "*anonlabel", sizeof("*anonlabel") - 1)) {


      break_distance++;
    }

    nrefs += block_bind_subblock(binder, i->subfn, bindflags, break_distance);

    nrefs += block_bind_subblock(binder, i->arglist, bindflags, break_distance);
  }
  return nrefs;
}

static int block_bind_each(block binder, block body, int bindflags) {
  
 ((
 block_has_only_binders(binder, bindflags)
 ) ? (void) (0) : __assert_fail (
 "block_has_only_binders(binder, bindflags)"
 , "compile.c", 369, __PRETTY_FUNCTION__))
                                                  ;
  bindflags |= OP_HAS_BINDING;
  int nrefs = 0;
  for (inst* curr = binder.first; curr; curr = curr->next) {
    nrefs += block_bind_subblock(inst_block(curr), body, bindflags, 0);
  }
  return nrefs;
}

block block_bind(block binder, block body, int bindflags) {
  block_bind_each(binder, body, bindflags);
  return block_join(binder, body);
}

block block_bind_library(block binder, block body, int bindflags, const char *libname) {
  bindflags |= OP_HAS_BINDING;
  int nrefs = 0;
  int matchlen = (libname == 
                            ((void *)0)
                                ) ? 0 : strlen(libname);
  char *matchname = jv_mem_alloc(matchlen+2+1);
  matchname[0] = '\0';
  if (libname != 
                ((void *)0) 
                     && libname[0] != '\0') {
    strcpy(matchname,libname);
    strcpy(matchname+matchlen, "::");
    matchlen += 2;
  }
  
 ((
 block_has_only_binders(binder, bindflags)
 ) ? (void) (0) : __assert_fail (
 "block_has_only_binders(binder, bindflags)"
 , "compile.c", 394, __PRETTY_FUNCTION__))
                                                  ;
  for (inst *curr = binder.first; curr; curr = curr->next) {
    int bindflags2 = bindflags;
    char* cname = curr->symbol;
    char* tname = jv_mem_alloc(strlen(curr->symbol)+matchlen+1);
    strcpy(tname, matchname);
    strcpy(tname+matchlen, curr->symbol);


    if ((opcode_describe(curr->op)->flags & (OP_HAS_VARIABLE | OP_HAS_CONSTANT)))
      bindflags2 = OP_HAS_VARIABLE | OP_HAS_BINDING;


    curr->symbol = tname;
    nrefs += block_bind_subblock(inst_block(curr), body, bindflags2, 0);
    curr->symbol = cname;
    free(tname);
  }
  free(matchname);
  return body;
}



block block_bind_referenced(block binder, block body, int bindflags) {
  
 ((
 block_has_only_binders(binder, bindflags)
 ) ? (void) (0) : __assert_fail (
 "block_has_only_binders(binder, bindflags)"
 , "compile.c", 419, __PRETTY_FUNCTION__))
                                                  ;
  bindflags |= OP_HAS_BINDING;
  block refd = gen_noop();
  block unrefd = gen_noop();
  int nrefs={0};
  for (int last_kept = 0, kept = 0; ; ) {
    for (inst* curr={0}; (curr = block_take(&binder));) {
      block b = inst_block(curr);
      nrefs = block_bind_each(b, body, bindflags);


      nrefs += block_count_refs(b, refd);
      nrefs += block_count_refs(b, body);
      if (nrefs) {
        refd = (block_join((refd),(b)));
        kept++;
      } else {
        unrefd = (block_join((unrefd),(b)));
      }
    }
    if (kept == last_kept)
      break;
    last_kept = kept;
    binder = unrefd;
    unrefd = gen_noop();
  }
  block_free(unrefd);
  return block_join(refd, body);
}

block block_drop_unreferenced(block body) {
  inst* curr={0};
  block refd = gen_noop();
  block unrefd = gen_noop();
  int drop={0};
  do {
    drop = 0;
    while ((curr = block_take(&body)) && curr->op != TOP) {
      block b = inst_block(curr);
      if (block_count_refs(b,refd) + block_count_refs(b,body) == 0) {
        unrefd = (block_join((unrefd),(b)));
        drop++;
      } else {
        refd = (block_join((refd),(b)));
      }
    }
    if (curr && curr->op == TOP) {
      body = (block_join((inst_block(curr)),(body)));
    }
    body = (block_join((refd),(body)));
    refd = gen_noop();
  } while (drop != 0);
  block_free(unrefd);
  return body;
}

jv block_take_imports(block* body) {
  jv imports = jv_array();

  inst* top = 
             ((void *)0)
                 ;
  if (body->first && body->first->op == TOP) {
    top = block_take(body);
  }
  while (body->first && (body->first->op == MODULEMETA || body->first->op == DEPS)) {
    inst* dep = block_take(body);
    if (dep->op == DEPS) {
      imports = jv_array_append(imports, jv_copy(dep->imm.constant));
    }
    inst_free(dep);
  }
  if (top) {
    *body = block_join(inst_block(top),*body);
  }
  return imports;
}

jv block_list_funcs(block body, int omit_underscores) {
  jv funcs = jv_object();
  for (inst *pos = body.first; pos != 
                                     ((void *)0)
                                         ; pos = pos->next) {
    if (pos->op == CLOSURE_CREATE || pos->op == CLOSURE_CREATE_C) {
      if (pos->symbol != 
                        ((void *)0) 
                             && (!omit_underscores || pos->symbol[0] != '_')) {
        funcs = jv_object_set(funcs, jv_string_fmt("%s/%i", pos->symbol, pos->nformals), jv_null());
      }
    }
  }
  return jv_keys_unsorted(funcs);
}

block gen_module(block metadata) {
  inst* i = inst_new(MODULEMETA);
  i->imm.constant = block_const(metadata);
  if (jv_get_kind(i->imm.constant) != JV_KIND_OBJECT)
    i->imm.constant = jv_object_set(jv_object(), jv_string("metadata"), i->imm.constant);
  block_free(metadata);
  return inst_block(i);
}

jv block_module_meta(block b) {
  if (b.first != 
                ((void *)0) 
                     && b.first->op == MODULEMETA)
    return jv_copy(b.first->imm.constant);
  return jv_null();
}

block gen_import(const char* name, const char* as, int is_data) {
  inst* i = inst_new(DEPS);
  jv meta = jv_object();
  if (as != 
           ((void *)0)
               )
    meta = jv_object_set(meta, jv_string("as"), jv_string(as));
  meta = jv_object_set(meta, jv_string("is_data"), is_data ? jv_true() : jv_false());
  meta = jv_object_set(meta, jv_string("relpath"), jv_string(name));
  i->imm.constant = meta;
  return inst_block(i);
}

block gen_import_meta(block import, block metadata) {
  
 ((
 block_is_single(import) && import.first->op == DEPS
 ) ? (void) (0) : __assert_fail (
 "block_is_single(import) && import.first->op == DEPS"
 , "compile.c", 534, __PRETTY_FUNCTION__))
                                                            ;
  
 ((
 block_is_const(metadata) && block_const_kind(metadata) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "block_is_const(metadata) && block_const_kind(metadata) == JV_KIND_OBJECT"
 , "compile.c", 535, __PRETTY_FUNCTION__))
                                                                                 ;
  inst *i = import.first;
  i->imm.constant = jv_object_merge(block_const(metadata), i->imm.constant);
  block_free(metadata);
  return import;
}

block gen_function(const char* name, block formals, block body) {
  inst* i = inst_new(CLOSURE_CREATE);
  for (inst* i = formals.last; i; i = i->prev) {
    if (i->op == CLOSURE_PARAM_REGULAR) {
      i->op = CLOSURE_PARAM;
      body = gen_var_binding(gen_call(i->symbol, gen_noop()), i->symbol, body);
    }
    block_bind_subblock(inst_block(i), body, OP_IS_CALL_PSEUDO | OP_HAS_BINDING, 0);
  }
  i->subfn = body;
  i->symbol = strdup(name);
  i->arglist = formals;
  block b = inst_block(i);
  block_bind_subblock(b, b, OP_IS_CALL_PSEUDO | OP_HAS_BINDING, 0);
  return b;
}

block gen_param_regular(const char* name) {
  return gen_op_unbound(CLOSURE_PARAM_REGULAR, name);
}

block gen_param(const char* name) {
  return gen_op_unbound(CLOSURE_PARAM, name);
}

block gen_lambda(block body) {
  return gen_function("@lambda", gen_noop(), body);
}

block gen_call(const char* name, block args) {
  block b = gen_op_unbound(CALL_JQ, name);
  b.first->arglist = args;
  return b;
}

block gen_subexp(block a) {
  if (block_is_noop(a)) {
    return gen_op_simple(DUP);
  }
  if (block_is_single(a) && a.first->op == LOADK) {
    jv c = block_const(a);
    block_free(a);
    return gen_op_pushk_under(c);
  }
  return (block_join((block_join((gen_op_simple(SUBEXP_BEGIN)),(a))),(gen_op_simple(SUBEXP_END))));
}

block gen_both(block a, block b) {
  block jump = gen_op_targetlater(JUMP);
  block fork = gen_op_target(FORK, jump);
  block c = (block_join((block_join((block_join((fork),(a))),(jump))),(b)));
  inst_set_target(jump, c);
  return c;
}

block gen_const_object(block expr) {
  int is_const = 1;
  jv o = jv_object();
  jv k = jv_null();
  jv v = jv_null();
  for (inst *i = expr.first; i; i = i->next) {
    if (i->op == PUSHK_UNDER) {
      k = jv_copy(i->imm.constant);
      i = i->next;
    } else if (i->op != SUBEXP_BEGIN ||
        i->next == 
                  ((void *)0) 
                       ||
        i->next->op != LOADK ||
        i->next->next == 
                        ((void *)0) 
                             ||
        i->next->next->op != SUBEXP_END) {
      is_const = 0;
      break;
    } else {
      k = jv_copy(i->next->imm.constant);
      i = i->next->next->next;
    }
    if (i != 
            ((void *)0) 
                 && i->op == PUSHK_UNDER) {
      v = jv_copy(i->imm.constant);
      i = i->next;
    } else if (i == 
                   ((void *)0) 
                        ||
        i->op != SUBEXP_BEGIN ||
        i->next == 
                  ((void *)0) 
                       ||
        i->next->op != LOADK ||
        i->next->next == 
                        ((void *)0) 
                             ||
        i->next->next->op != SUBEXP_END) {
      is_const = 0;
      break;
    } else {
      v = jv_copy(i->next->imm.constant);
      i = i->next->next->next;
    }
    if (i == 
            ((void *)0) 
                 || i->op != INSERT) {
      is_const = 0;
      break;
    }
    if (jv_get_kind(k) != JV_KIND_STRING) {
      is_const = 0;
      break;
    }
    o = jv_object_set(o, k, v);
    k = jv_null();
    v = jv_null();
  }
  if (!is_const) {
    jv_free(o);
    jv_free(k);
    jv_free(v);
    block b = {0,0};
    return b;
  }
  block_free(expr);
  return gen_const(o);
}

static block gen_const_array(block expr) {
  int all_const = 1;
  int commas = 0;
  int normal = 1;
  jv a = jv_array();
  for (inst *i = expr.first; i; i = i->next) {
    if (i->op == FORK) {
      commas++;
      if (i->imm.target == 
                          ((void *)0) 
                               || i->imm.target->op != JUMP ||
          jv_array_length(jv_copy(a)) > 0) {
        normal = 0;
        break;
      }
    } else if (all_const && i->op == LOADK) {
      if (i->next != 
                    ((void *)0) 
                         && i->next->op != JUMP) {
        normal = 0;
        break;
      }
      a = jv_array_append(a, jv_copy(i->imm.constant));
    } else if (i->op != JUMP || i->imm.target == 
                                                ((void *)0) 
                                                     ||
               i->imm.target->op != LOADK) {
      all_const = 0;
    }
  }

  if (all_const && normal &&
      (expr.last == 
                   ((void *)0) 
                        || expr.last->op == LOADK) &&
      jv_array_length(jv_copy(a)) == commas + 1) {
    block_free(expr);
    return gen_const(a);
  }

  jv_free(a);
  block b = {0,0};
  return b;
}

block gen_collect(block expr) {
  block const_array = gen_const_array(expr);
  if (const_array.first != 
                          ((void *)0)
                              )
    return const_array;

  block array_var = gen_op_var_fresh(STOREV, "collect");
  block c = (block_join((block_join((gen_op_simple(DUP)),(gen_const(jv_array())))),(array_var)));

  block tail = (block_join((gen_op_bound(APPEND, array_var)),(gen_op_simple(BACKTRACK))))
                                              ;

  return (block_join((block_join((block_join((block_join((c),(gen_op_target(FORK, tail)))),(expr))),(tail))),(gen_op_bound(LOADVN, array_var))))



                                               ;
}

static block bind_matcher(block matcher, block body) {



  for (inst* i = matcher.first; i; i = i->next) {
    if ((i->op == STOREV || i->op == STOREVN) && !i->bound_by)
      block_bind_subblock(inst_block(i), body, OP_HAS_VARIABLE, 0);
  }
  return (block_join((matcher),(body)));
}




static void block_get_unbound_vars(block b, jv *vars) {
  
 ((
 vars != 
 ((void *)0)) ? (void) (0) : __assert_fail (
 "vars != NULL"
 , "compile.c", 747, __PRETTY_FUNCTION__))
                     ;
  
 ((
 jv_get_kind(*vars) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(*vars) == JV_KIND_OBJECT"
 , "compile.c", 748, __PRETTY_FUNCTION__))
                                             ;
  for (inst* i = b.first; i; i = i->next) {
    if (i->subfn.first) {
      block_get_unbound_vars(i->subfn, vars);
      continue;
    }
    if ((i->op == STOREV || i->op == STOREVN) && i->bound_by == 
                                                               ((void *)0)
                                                                   ) {
      *vars = jv_object_set(*vars, jv_string(i->symbol), jv_true());
    }
  }
}







static block bind_alternation_matchers(block matchers, block body) {
  block preamble = {0};
  block altmatchers = {0};
  block mb = {0};
  block final_matcher = matchers;


  while (final_matcher.first && final_matcher.first->op == DESTRUCTURE_ALT) {
    block_append(&altmatchers, inst_block(block_take(&final_matcher)));
  }


  if (altmatchers.first == 
                          ((void *)0)
                              ) {
    return bind_matcher(final_matcher, body);
  }


  jv all_vars = jv_object();
  block_get_unbound_vars(altmatchers, &all_vars);
  block_get_unbound_vars(final_matcher, &all_vars);


  for (int jv_i__ = jv_object_iter(all_vars), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key={0}; jv_object_iter_valid((all_vars), jv_i__) ? (key = jv_object_iter_key(all_vars, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(all_vars, jv_i__)) {
    preamble = (block_join((block_join((block_join((preamble),(gen_op_simple(DUP)))),(gen_const(jv_null())))),(gen_op_unbound(STOREV, jv_string_value(key)))))


                                                                  ;
    jv_free(key);
  }
  jv_free(all_vars);


  for (inst *i = altmatchers.first; i; i = i->next) {
    block submatcher = i->subfn;


    submatcher = (block_join((submatcher),(gen_op_target(JUMP, final_matcher))));


    mb = (block_join((block_join((mb),(gen_op_target(DESTRUCTURE_ALT, submatcher)))),(submatcher)));



    i->subfn.first = i->subfn.last = 
                                    ((void *)0)
                                        ;
  }

  block_free(altmatchers);

  return bind_matcher(preamble, (block_join((block_join((mb),(final_matcher))),(body))));
}

block gen_reduce(block source, block matcher, block init, block body) {
  block res_var = gen_op_var_fresh(STOREV, "reduce");
  block loop = (block_join((block_join((block_join((gen_op_simple(DUPN)),(source))),(bind_alternation_matchers(matcher, (block_join((block_join((gen_op_bound(LOADVN, res_var)),(body))),(gen_op_bound(STOREV, res_var)))))))),(gen_op_simple(BACKTRACK))))





                                              ;
  return (block_join((block_join((block_join((block_join((block_join((gen_op_simple(DUP)),(init))),(res_var))),(gen_op_target(FORK, loop)))),(loop))),(gen_op_bound(LOADVN, res_var))))




                                             ;
}

block gen_foreach(block source, block matcher, block init, block update, block extract) {
  block output = gen_op_targetlater(JUMP);
  block state_var = gen_op_var_fresh(STOREV, "foreach");
  block loop = (block_join((block_join((gen_op_simple(DUPN)),(source))),(bind_alternation_matchers(matcher, (block_join((block_join((block_join((block_join((block_join((gen_op_bound(LOADVN, state_var)),(update))),(gen_op_simple(DUP)))),(gen_op_bound(STOREV, state_var)))),(extract))),(output)))))))
                                                 ;
  block foreach = (block_join((block_join((block_join((block_join((block_join((gen_op_simple(DUP)),(init))),(state_var))),(gen_op_target(FORK, loop)))),(loop))),(gen_op_simple(BACKTRACK))))







                                                 ;
  inst_set_target(output, foreach);
  return foreach;
}

block gen_definedor(block a, block b) {

  block found_var = gen_op_var_fresh(STOREV, "found");
  block init = (block_join((block_join((gen_op_simple(DUP)),(gen_const(jv_false())))),(found_var)));


  block backtrack = gen_op_simple(BACKTRACK);
  block tail = (block_join((block_join((block_join((block_join((block_join((gen_op_simple(DUP)),(gen_op_bound(LOADV, found_var)))),(gen_op_target(JUMP_F, backtrack)))),(backtrack))),(gen_op_simple(POP)))),(b)))




                       ;


  block if_notfound = gen_op_simple(BACKTRACK);


  block if_found = (block_join((block_join((block_join((gen_op_simple(DUP)),(gen_const(jv_true())))),(gen_op_bound(STOREV, found_var)))),(gen_op_target(JUMP, tail))))


                                                   ;

  return (block_join((block_join((block_join((block_join((block_join((block_join((init),(gen_op_target(FORK, if_notfound)))),(a))),(gen_op_target(JUMP_F, if_found)))),(if_found))),(if_notfound))),(tail)))





                    ;
}

int block_has_main(block top) {
  for (inst *c = top.first; c; c = c->next) {
    if (c->op == TOP)
      return 1;
  }
  return 0;
}

int block_is_funcdef(block b) {
  if (b.first != 
                ((void *)0) 
                     && b.first->op == CLOSURE_CREATE)
    return 1;
  return 0;
}

block gen_condbranch(block iftrue, block iffalse) {
  iftrue = (block_join((iftrue),(gen_op_target(JUMP, iffalse))));
  return (block_join((block_join((gen_op_target(JUMP_F, iftrue)),(iftrue))),(iffalse)));
}

block gen_and(block a, block b) {

  return (block_join((block_join((gen_op_simple(DUP)),(a))),(gen_condbranch((block_join((block_join((gen_op_simple(POP)),(b))),(gen_condbranch(gen_const(jv_true()), gen_const(jv_false()))))), (block_join((gen_op_simple(POP)),(gen_const(jv_false()))))))))




                                                                                ;
}

block gen_or(block a, block b) {

  return (block_join((block_join((gen_op_simple(DUP)),(a))),(gen_condbranch((block_join((gen_op_simple(POP)),(gen_const(jv_true())))), (block_join((block_join((gen_op_simple(POP)),(b))),(gen_condbranch(gen_const(jv_true()), gen_const(jv_false())))))))))




                                                                            ;
}

block gen_destructure_alt(block matcher) {
  for (inst *i = matcher.first; i; i = i->next) {
    if (i->op == STOREV) {
      i->op = STOREVN;
    }
  }
  inst* i = inst_new(DESTRUCTURE_ALT);
  i->subfn = matcher;
  return inst_block(i);
}

block gen_var_binding(block var, const char* name, block body) {
  return gen_destructure(var, gen_op_unbound(STOREV, name), body);
}

block gen_array_matcher(block left, block curr) {
  int index={0};
  if (block_is_noop(left))
    index = 0;
  else {


    
   ((
   left.first->op == DUP
   ) ? (void) (0) : __assert_fail (
   "left.first->op == DUP"
   , "compile.c", 970, __PRETTY_FUNCTION__))
                                ;
    
   ((
   left.first->next != 
   ((void *)0)) ? (void) (0) : __assert_fail (
   "left.first->next != NULL"
   , "compile.c", 971, __PRETTY_FUNCTION__))
                                   ;
    inst *i = 
             ((void *)0)
                 ;
    if (left.first->next->op == PUSHK_UNDER) {
      i = left.first->next;
    } else {
      
     ((
     left.first->next->op == SUBEXP_BEGIN
     ) ? (void) (0) : __assert_fail (
     "left.first->next->op == SUBEXP_BEGIN"
     , "compile.c", 976, __PRETTY_FUNCTION__))
                                                 ;
      
     ((
     left.first->next->next->op == LOADK
     ) ? (void) (0) : __assert_fail (
     "left.first->next->next->op == LOADK"
     , "compile.c", 977, __PRETTY_FUNCTION__))
                                                ;
      i = left.first->next->next;
    }
    index = 1 + (int) jv_number_value(i->imm.constant);
  }


  return (block_join((block_join((block_join((block_join((gen_op_simple(DUP)),(gen_subexp(gen_const(jv_number(index)))))),(gen_op_simple(INDEX)))),(curr))),(left)))
                                                ;
}

block gen_object_matcher(block name, block curr) {
  return (block_join((block_join((block_join((gen_op_simple(DUP)),(gen_subexp(name)))),(gen_op_simple(INDEX)))),(curr)))
                    ;
}

block gen_destructure(block var, block matchers, block body) {

  block top = gen_noop();
  if (body.first && body.first->op == TOP)
    top = inst_block(block_take(&body));

  if (matchers.first && matchers.first->op == DESTRUCTURE_ALT) {
    block_append(&var, gen_op_simple(DUP));
  } else {
    top = (block_join((top),(gen_op_simple(DUP))));
  }

  return (block_join((block_join((block_join((top),(gen_subexp(var)))),(gen_op_simple(POP)))),(bind_alternation_matchers(matchers, body))));
}


static block gen_wildvar_binding(block var, const char* name, block body) {
  return (block_join((block_join((gen_op_simple(DUP)),(var))),(block_bind(gen_op_unbound(STOREV, name), body, OP_HAS_VARIABLE | OP_BIND_WILDCARD))))

                                                                    ;
}

block gen_cond(block cond, block iftrue, block iffalse) {
  return (block_join((block_join((gen_op_simple(DUP)),((block_join((gen_subexp(cond)),(gen_op_simple(POP))))))),(gen_condbranch((block_join((gen_op_simple(POP)),(iftrue))), (block_join((gen_op_simple(POP)),(iffalse)))))))

                                                                  ;
}

block gen_try_handler(block handler) {

  return gen_cond(
                  gen_and(gen_call("_equal",
                                   (block_join((gen_lambda(gen_const(jv_string("object")))),(gen_lambda(gen_noop()))))
                                                                ),
                          (block_join((block_join((gen_subexp(gen_const(jv_string("__jq")))),(gen_noop()))),(gen_op_simple(INDEX))))

                                                     ),

                  gen_call("error", gen_noop()),

                  handler);
}

block gen_try(block exp, block handler) {
  if (!handler.first && !handler.last)

    handler = (block_join((block_join((gen_op_simple(DUP)),(gen_op_simple(POP)))),(handler)));
  exp = (block_join((exp),(gen_op_target(JUMP, handler))));
  return (block_join((block_join((gen_op_target(FORK_OPT, exp)),(exp))),(handler)));
}

block gen_label(const char *label, block exp) {
  block cond = gen_call("_equal",
                        (block_join((gen_lambda(gen_noop())),(gen_lambda(gen_op_unbound(LOADV, label)))))
                                                                       );
  return gen_wildvar_binding(gen_op_simple(GENLABEL), label,
                             (block_join((gen_op_simple(POP)),(gen_try(exp, gen_cond(cond, gen_op_simple(BACKTRACK), gen_call("error", gen_noop()))))))
                                                                                    );
}

block gen_cbinding(const struct cfunction* cfunctions, int ncfunctions, block code) {
  for (int cfunc=0; cfunc<ncfunctions; cfunc++) {
    inst* i = inst_new(CLOSURE_CREATE_C);
    i->imm.cfunc = &cfunctions[cfunc];
    i->symbol = strdup(i->imm.cfunc->name);
    code = block_bind(inst_block(i), code, OP_IS_CALL_PSEUDO);
  }
  return code;
}

static uint16_t nesting_level(struct bytecode* bc, inst* target) {
  uint16_t level = 0;
  
 ((
 bc && target && target->compiled
 ) ? (void) (0) : __assert_fail (
 "bc && target && target->compiled"
 , "compile.c", 1091, __PRETTY_FUNCTION__))
                                         ;
  while (bc && target->compiled != bc) {
    level++;
    bc = bc->parent;
  }
  
 ((
 bc && bc == target->compiled
 ) ? (void) (0) : __assert_fail (
 "bc && bc == target->compiled"
 , "compile.c", 1096, __PRETTY_FUNCTION__))
                                     ;
  return level;
}

static int count_cfunctions(block b) {
  int n = 0;
  for (inst* i = b.first; i; i = i->next) {
    if (i->op == CLOSURE_CREATE_C) n++;
    n += count_cfunctions(i->subfn);
  }
  return n;
}


extern char **environ;


static jv
make_env(jv env)
{
  if (jv_is_valid(env))
    return jv_copy(env);
  jv r = jv_object();
  if (environ == 
                ((void *)0)
                    )
    return r;
  for (size_t i = 0; environ[i] != 
                                  ((void *)0)
                                      ; i++) {
    const char *eq={0};

    if ((eq = strchr(environ[i], '=')) == 
                                         ((void *)0)
                                             )
      r = jv_object_delete(r, jv_string(environ[i]));
    else
      r = jv_object_set(r, jv_string_sized(environ[i], eq - environ[i]), jv_string(eq + 1));
  }
  return jv_copy(r);
}


static int expand_call_arglist(block* b, jv args, jv *env) {
  int errors = 0;
  block ret = gen_noop();
  for (inst* curr={0}; (curr = block_take(b));) {
    if (opcode_describe(curr->op)->flags & OP_HAS_BINDING) {
      if (!curr->bound_by && curr->op == LOADV && strcmp(curr->symbol, "ENV") == 0) {
        curr->op = LOADK;
        *env = curr->imm.constant = make_env(*env);
      } else if (!curr->bound_by && curr->op == LOADV && jv_object_has(jv_copy(args), jv_string(curr->symbol))) {
        curr->op = LOADK;
        curr->imm.constant = jv_object_get(jv_copy(args), jv_string(curr->symbol));
      } else if (!curr->bound_by) {
        if (curr->symbol[0] == '*' && curr->symbol[1] >= '1' && curr->symbol[1] <= '3' && curr->symbol[2] == '\0')
          locfile_locate(curr->locfile, curr->source, "jq: error: break used outside labeled control structure");
        else if (curr->op == LOADV)
          locfile_locate(curr->locfile, curr->source, "jq: error: $%s is not defined", curr->symbol);
        else
          locfile_locate(curr->locfile, curr->source, "jq: error: %s/%d is not defined", curr->symbol, block_count_actuals(curr->arglist));
        errors++;

        ret = (block_join((ret),(inst_block(curr))));
        continue;
      }
    }

    block prelude = gen_noop();
    if (curr->op == CALL_JQ) {
      int actual_args = 0, desired_args = 0;

      switch (curr->bound_by->op) {
      default: 
              ((
              0 && "Unknown function type"
              ) ? (void) (0) : __assert_fail (
              "0 && \"Unknown function type\""
              , "compile.c", 1163, __PRETTY_FUNCTION__))
                                                  ; break;
      case CLOSURE_CREATE:
      case CLOSURE_PARAM: {
        block callargs = gen_noop();
        for (inst* i={0}; (i = block_take(&curr->arglist));) {
          
         ((
         opcode_describe(i->op)->flags & OP_IS_CALL_PSEUDO
         ) ? (void) (0) : __assert_fail (
         "opcode_describe(i->op)->flags & OP_IS_CALL_PSEUDO"
         , "compile.c", 1168, __PRETTY_FUNCTION__))
                                                                  ;
          block b = inst_block(i);
          switch (i->op) {
          default: 
                  ((
                  0 && "Unknown type of parameter"
                  ) ? (void) (0) : __assert_fail (
                  "0 && \"Unknown type of parameter\""
                  , "compile.c", 1171, __PRETTY_FUNCTION__))
                                                          ; break;
          case CLOSURE_REF:
            block_append(&callargs, b);
            break;
          case CLOSURE_CREATE:
            block_append(&prelude, b);
            block_append(&callargs, gen_op_bound(CLOSURE_REF, b));
            break;
          }
          actual_args++;
        }
        curr->imm.intval = actual_args;
        curr->arglist = callargs;

        if (curr->bound_by->op == CLOSURE_CREATE) {
          for (inst* i = curr->bound_by->arglist.first; i; i = i->next) {
            
           ((
           i->op == CLOSURE_PARAM
           ) ? (void) (0) : __assert_fail (
           "i->op == CLOSURE_PARAM"
           , "compile.c", 1187, __PRETTY_FUNCTION__))
                                         ;
            desired_args++;
          }
        }
        break;
      }

      case CLOSURE_CREATE_C: {
        for (inst* i={0}; (i = block_take(&curr->arglist)); ) {
          
         ((
         i->op == CLOSURE_CREATE
         ) ? (void) (0) : __assert_fail (
         "i->op == CLOSURE_CREATE"
         , "compile.c", 1196, __PRETTY_FUNCTION__))
                                        ;
          block body = i->subfn;
          i->subfn = gen_noop();
          inst_free(i);

          errors += expand_call_arglist(&body, args, env);
          prelude = (block_join((gen_subexp(body)),(prelude)));
          actual_args++;
        }
        
       ((
       curr->op == CALL_JQ
       ) ? (void) (0) : __assert_fail (
       "curr->op == CALL_JQ"
       , "compile.c", 1205, __PRETTY_FUNCTION__))
                                  ;
        curr->op = CALL_BUILTIN;
        curr->imm.intval = actual_args + 1 ;
        
       ((
       curr->bound_by->op == CLOSURE_CREATE_C
       ) ? (void) (0) : __assert_fail (
       "curr->bound_by->op == CLOSURE_CREATE_C"
       , "compile.c", 1208, __PRETTY_FUNCTION__))
                                                     ;
        desired_args = curr->bound_by->imm.cfunc->nargs - 1;
        
       ((
       !curr->arglist.first
       ) ? (void) (0) : __assert_fail (
       "!curr->arglist.first"
       , "compile.c", 1210, __PRETTY_FUNCTION__))
                                   ;
        break;
      }
      }

      
     ((
     actual_args == desired_args
     ) ? (void) (0) : __assert_fail (
     "actual_args == desired_args"
     , "compile.c", 1215, __PRETTY_FUNCTION__))
                                        ;
    }
    ret = (block_join((block_join((ret),(prelude))),(inst_block(curr))));
  }
  *b = ret;
  return errors;
}

static int compile(struct bytecode* bc, block b, struct locfile* lf, jv args, jv *env) {
  int errors = 0;
  int pos = 0;
  int var_frame_idx = 0;
  bc->nsubfunctions = 0;
  errors += expand_call_arglist(&b, args, env);
  b = (block_join((b),(gen_op_simple(RET))));
  jv localnames = jv_array();
  for (inst* curr = b.first; curr; curr = curr->next) {
    if (!curr->next) 
                    ((
                    curr == b.last
                    ) ? (void) (0) : __assert_fail (
                    "curr == b.last"
                    , "compile.c", 1232, __PRETTY_FUNCTION__))
                                          ;
    int length = opcode_describe(curr->op)->length;
    if (curr->op == CALL_JQ) {
      for (inst* arg = curr->arglist.first; arg; arg = arg->next) {
        length += 2;
      }
    }
    pos += length;
    curr->bytecode_pos = pos;
    curr->compiled = bc;

    
   ((
   curr->op != CLOSURE_REF && curr->op != CLOSURE_PARAM
   ) ? (void) (0) : __assert_fail (
   "curr->op != CLOSURE_REF && curr->op != CLOSURE_PARAM"
   , "compile.c", 1243, __PRETTY_FUNCTION__))
                                                               ;

    if ((opcode_describe(curr->op)->flags & OP_HAS_VARIABLE) &&
        curr->bound_by == curr) {
      curr->imm.intval = var_frame_idx++;
      localnames = jv_array_append(localnames, jv_string(curr->symbol));
    }

    if (curr->op == CLOSURE_CREATE) {
      
     ((
     curr->bound_by == curr
     ) ? (void) (0) : __assert_fail (
     "curr->bound_by == curr"
     , "compile.c", 1252, __PRETTY_FUNCTION__))
                                   ;
      curr->imm.intval = bc->nsubfunctions++;
    }
    if (curr->op == CLOSURE_CREATE_C) {
      
     ((
     curr->bound_by == curr
     ) ? (void) (0) : __assert_fail (
     "curr->bound_by == curr"
     , "compile.c", 1256, __PRETTY_FUNCTION__))
                                   ;
      int idx = bc->globals->ncfunctions++;
      bc->globals->cfunc_names = jv_array_append(bc->globals->cfunc_names,
                                                 jv_string(curr->symbol));
      bc->globals->cfunctions[idx] = *curr->imm.cfunc;
      curr->imm.intval = idx;
    }
  }
  if (pos > 0xFFFF) {

    locfile_locate(lf, UNKNOWN_LOCATION,
        "function compiled to %d bytes which is too long", pos);
    errors++;
  }
  bc->codelen = pos;
  bc->debuginfo = jv_object_set(bc->debuginfo, jv_string("locals"), localnames);
  if (bc->nsubfunctions) {
    bc->subfunctions = jv_mem_calloc(sizeof(struct bytecode*), bc->nsubfunctions);
    for (inst* curr = b.first; curr; curr = curr->next) {
      if (curr->op == CLOSURE_CREATE) {
        struct bytecode* subfn = jv_mem_alloc(sizeof(struct bytecode));
        bc->subfunctions[curr->imm.intval] = subfn;
        subfn->globals = bc->globals;
        subfn->parent = bc;
        subfn->nclosures = 0;
        subfn->debuginfo = jv_object_set(jv_object(), jv_string("name"), jv_string(curr->symbol));
        jv params = jv_array();
        for (inst* param = curr->arglist.first; param; param = param->next) {
          
         ((
         param->op == CLOSURE_PARAM
         ) ? (void) (0) : __assert_fail (
         "param->op == CLOSURE_PARAM"
         , "compile.c", 1284, __PRETTY_FUNCTION__))
                                           ;
          
         ((
         param->bound_by == param
         ) ? (void) (0) : __assert_fail (
         "param->bound_by == param"
         , "compile.c", 1285, __PRETTY_FUNCTION__))
                                         ;
          param->imm.intval = subfn->nclosures++;
          param->compiled = subfn;
          params = jv_array_append(params, jv_string(param->symbol));
        }
        subfn->debuginfo = jv_object_set(subfn->debuginfo, jv_string("params"), params);
        errors += compile(subfn, curr->subfn, lf, args, env);
        curr->subfn = gen_noop();
      }
    }
  } else {
    bc->subfunctions = 0;
  }
  uint16_t* code = jv_mem_calloc(sizeof(uint16_t), bc->codelen);
  bc->code = code;
  pos = 0;
  jv constant_pool = jv_array();
  int maxvar = -1;
  if (!errors) for (inst* curr = b.first; curr; curr = curr->next) {
    const struct opcode_description* op = opcode_describe(curr->op);
    if (op->length == 0)
      continue;
    code[pos++] = curr->op;
    
   ((
   curr->op != CLOSURE_REF && curr->op != CLOSURE_PARAM
   ) ? (void) (0) : __assert_fail (
   "curr->op != CLOSURE_REF && curr->op != CLOSURE_PARAM"
   , "compile.c", 1308, __PRETTY_FUNCTION__))
                                                               ;
    if (curr->op == CALL_BUILTIN) {
      
     ((
     curr->bound_by->op == CLOSURE_CREATE_C
     ) ? (void) (0) : __assert_fail (
     "curr->bound_by->op == CLOSURE_CREATE_C"
     , "compile.c", 1310, __PRETTY_FUNCTION__))
                                                   ;
      
     ((
     !curr->arglist.first
     ) ? (void) (0) : __assert_fail (
     "!curr->arglist.first"
     , "compile.c", 1311, __PRETTY_FUNCTION__))
                                 ;
      code[pos++] = (uint16_t)curr->imm.intval;
      code[pos++] = curr->bound_by->imm.intval;
    } else if (curr->op == CALL_JQ) {
      
     ((
     curr->bound_by->op == CLOSURE_CREATE || curr->bound_by->op == CLOSURE_PARAM
     ) ? (void) (0) : __assert_fail (
     "curr->bound_by->op == CLOSURE_CREATE || curr->bound_by->op == CLOSURE_PARAM"
     ,
                                                "compile.c"
      ,
                                                1316
      , __PRETTY_FUNCTION__))
                                                 
                                                ;
      code[pos++] = (uint16_t)curr->imm.intval;
      code[pos++] = nesting_level(bc, curr->bound_by);
      code[pos++] = curr->bound_by->imm.intval |
        (curr->bound_by->op == CLOSURE_CREATE ? 0x1000 : 0);
      for (inst* arg = curr->arglist.first; arg; arg = arg->next) {
        
       ((
       arg->op == CLOSURE_REF && arg->bound_by->op == CLOSURE_CREATE
       ) ? (void) (0) : __assert_fail (
       "arg->op == CLOSURE_REF && arg->bound_by->op == CLOSURE_CREATE"
       , "compile.c", 1322, __PRETTY_FUNCTION__))
                                                                            ;
        code[pos++] = nesting_level(bc, arg->bound_by);
        code[pos++] = arg->bound_by->imm.intval | 0x1000;
      }
    } else if ((op->flags & OP_HAS_CONSTANT) && (op->flags & OP_HAS_VARIABLE)) {

      code[pos++] = jv_array_length(jv_copy(constant_pool));
      constant_pool = jv_array_append(constant_pool, jv_copy(curr->imm.constant));
      code[pos++] = nesting_level(bc, curr->bound_by);
      uint16_t var = (uint16_t)curr->bound_by->imm.intval;
      code[pos++] = var;
    } else if (op->flags & OP_HAS_CONSTANT) {
      code[pos++] = jv_array_length(jv_copy(constant_pool));
      constant_pool = jv_array_append(constant_pool, jv_copy(curr->imm.constant));
    } else if (op->flags & OP_HAS_VARIABLE) {
      code[pos++] = nesting_level(bc, curr->bound_by);
      uint16_t var = (uint16_t)curr->bound_by->imm.intval;
      code[pos++] = var;
      if (var > maxvar) maxvar = var;
    } else if (op->flags & OP_HAS_BRANCH) {
      
     ((
     curr->imm.target->bytecode_pos != -1
     ) ? (void) (0) : __assert_fail (
     "curr->imm.target->bytecode_pos != -1"
     , "compile.c", 1342, __PRETTY_FUNCTION__))
                                                 ;
      
     ((
     curr->imm.target->bytecode_pos > pos
     ) ? (void) (0) : __assert_fail (
     "curr->imm.target->bytecode_pos > pos"
     , "compile.c", 1343, __PRETTY_FUNCTION__))
                                                 ;
      code[pos] = curr->imm.target->bytecode_pos - (pos + 1);
      pos++;
    } else if (op->length > 1) {
      
     ((
     0 && "codegen not implemented for this operation"
     ) ? (void) (0) : __assert_fail (
     "0 && \"codegen not implemented for this operation\""
     , "compile.c", 1347, __PRETTY_FUNCTION__))
                                                              ;
    }
  }
  bc->constants = constant_pool;
  bc->nlocals = maxvar + 2;
  block_free(b);
  return errors;
}

int block_compile(block b, struct bytecode** out, struct locfile* lf, jv args) {
  struct bytecode* bc = jv_mem_alloc(sizeof(struct bytecode));
  bc->parent = 0;
  bc->nclosures = 0;
  bc->globals = jv_mem_alloc(sizeof(struct symbol_table));
  int ncfunc = count_cfunctions(b);
  bc->globals->ncfunctions = 0;
  bc->globals->cfunctions = jv_mem_calloc(sizeof(struct cfunction), ncfunc);
  bc->globals->cfunc_names = jv_array();
  bc->debuginfo = jv_object_set(jv_object(), jv_string("name"), jv_null());
  jv env = jv_invalid();
  int nerrors = compile(bc, b, lf, args, &env);
  jv_free(args);
  jv_free(env);
  
 ((
 bc->globals->ncfunctions == ncfunc
 ) ? (void) (0) : __assert_fail (
 "bc->globals->ncfunctions == ncfunc"
 , "compile.c", 1370, __PRETTY_FUNCTION__))
                                           ;
  if (nerrors > 0) {
    bytecode_free(bc);
    *out = 0;
  } else {
    *out = bc;
  }
  return nerrors;
}

void block_free(block b) {
  struct inst* next={0};
  for (struct inst* curr = b.first; curr; curr = next) {
    next = curr->next;
    inst_free(curr);
  }
}
