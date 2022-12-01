











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





typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;






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



int load_program(int *data_flow, jq_state *jq, struct locfile* src, block *out_block);
jv load_module_meta(int *data_flow, jq_state *jq, jv modname);
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

static inst* inst_new(int *data_flow, opcode op) {
  inst* i = jv_mem_alloc(sizeof(inst));
  i->next = i->prev = 0;
  i->op = op;
  i->bytecode_pos = -1;
  i->bound_by = 0;
  i->symbol = 0;
  i->nformals = -1;
  i->nactuals = -1;
  i->subfn = gen_noop(data_flow);
  i->arglist = gen_noop(data_flow);
  i->source = UNKNOWN_LOCATION;
  i->locfile = 0;
  return i;
}

static void inst_free(int *data_flow, struct inst* i) {
  jv_mem_free(i->symbol);
  block_free(data_flow, i->subfn);
  block_free(data_flow, i->arglist);
  if (i->locfile)
    locfile_free(data_flow, i->locfile);
  if (opcode_describe(data_flow, i->op)->flags & OP_HAS_CONSTANT) {
    jv_free(i->imm.constant);
  }
  jv_mem_free(i);
}

static block inst_block(int *data_flow, inst* i) {
  block b = {i,i};
  return b;
}

int block_is_single(int *data_flow, block b) {
  return b.first && b.first == b.last;
}

static inst* block_take(int *data_flow, block* b) {
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

block gen_location(int *data_flow, location loc, struct locfile* l, block b) {
  for (inst* i = b.first; i; i = i->next) {
    if (i->source.start == UNKNOWN_LOCATION.start &&
        i->source.end == UNKNOWN_LOCATION.end) {
      i->source = loc;
      i->locfile = locfile_retain(data_flow, l);
    }
  }
  return b;
}

block gen_noop(int *data_flow) {
  block b = {0,0};
  return b;
}

int block_is_noop(int *data_flow, block b) {
  return (b.first == 0 && b.last == 0);
}

block gen_op_simple(int *data_flow, opcode op) {
  
 ((
 opcode_describe(data_flow, op)->length == 1
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->length == 1"
 , "compile.c", 141, __PRETTY_FUNCTION__))
                                         ;
  return inst_block(data_flow, inst_new(data_flow, op));
}


block gen_const(int *data_flow, jv constant) {
  
 ((
 opcode_describe(data_flow, LOADK)->flags & OP_HAS_CONSTANT
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(LOADK)->flags & OP_HAS_CONSTANT"
 , "compile.c", 147, __PRETTY_FUNCTION__))
                                                        ;
  inst* i = inst_new(data_flow, LOADK);
  i->imm.constant = constant;
  return inst_block(data_flow, i);
}

block gen_const_global(int *data_flow, jv constant, const char *name) {
  
 ((
 (opcode_describe(data_flow, STORE_GLOBAL)->flags & (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)) == (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)
 ) ? (void) (0) : __assert_fail (
 "(opcode_describe(STORE_GLOBAL)->flags & (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)) == (OP_HAS_CONSTANT | OP_HAS_VARIABLE | OP_HAS_BINDING)"
 ,
                                                             "compile.c"
  ,
                                                             155
  , __PRETTY_FUNCTION__))
                                                              
                                                             ;
  inst* i = inst_new(data_flow, STORE_GLOBAL);
  i->imm.constant = constant;
  i->symbol = strdup(name);
  return inst_block(data_flow, i);
}

block gen_op_pushk_under(int *data_flow, jv constant) {
  
 ((
 opcode_describe(data_flow, PUSHK_UNDER)->flags & OP_HAS_CONSTANT
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(PUSHK_UNDER)->flags & OP_HAS_CONSTANT"
 , "compile.c", 163, __PRETTY_FUNCTION__))
                                                              ;
  inst* i = inst_new(data_flow, PUSHK_UNDER);
  i->imm.constant = constant;
  return inst_block(data_flow, i);
}

int block_is_const(int *data_flow, block b) {
  return (block_is_single(data_flow, b) && (b.first->op == LOADK || b.first->op == PUSHK_UNDER));
}

int block_is_const_inf(int *data_flow, block b) {
  return (block_is_single(data_flow, b) && b.first->op == LOADK &&
          jv_get_kind(b.first->imm.constant) == JV_KIND_NUMBER &&
          
         __builtin_isinf_sign (
         jv_number_value(b.first->imm.constant)
         )
                                                      );
}

jv_kind block_const_kind(int *data_flow, block b) {
  
 ((
 block_is_const(data_flow, b)
 ) ? (void) (0) : __assert_fail (
 "block_is_const(b)"
 , "compile.c", 180, __PRETTY_FUNCTION__))
                          ;
  return jv_get_kind(b.first->imm.constant);
}

jv block_const(int *data_flow, block b) {
  
 ((
 block_is_const(data_flow, b)
 ) ? (void) (0) : __assert_fail (
 "block_is_const(b)"
 , "compile.c", 185, __PRETTY_FUNCTION__))
                          ;
  return jv_copy(b.first->imm.constant);
}

block gen_op_target(int *data_flow, opcode op, block target) {
  
 ((
 opcode_describe(data_flow, op)->flags & OP_HAS_BRANCH
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
  inst* i = inst_new(data_flow, op);
  i->imm.target = target.last;
  return inst_block(data_flow, i);
}

block gen_op_targetlater(int *data_flow, opcode op) {
  
 ((
 opcode_describe(data_flow, op)->flags & OP_HAS_BRANCH
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_BRANCH"
 , "compile.c", 198, __PRETTY_FUNCTION__))
                                                   ;
  inst* i = inst_new(data_flow, op);
  i->imm.target = 0;
  return inst_block(data_flow, i);
}
void inst_set_target(int *data_flow, block b, block target) {
  
 ((
 block_is_single(data_flow, b)
 ) ? (void) (0) : __assert_fail (
 "block_is_single(b)"
 , "compile.c", 204, __PRETTY_FUNCTION__))
                           ;
  
 ((
 opcode_describe(data_flow, b.first->op)->flags & OP_HAS_BRANCH
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

block gen_op_unbound(int *data_flow, opcode op, const char* name) {
  
 ((
 opcode_describe(data_flow, op)->flags & OP_HAS_BINDING
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_BINDING"
 , "compile.c", 211, __PRETTY_FUNCTION__))
                                                    ;
  inst* i = inst_new(data_flow, op);
  i->symbol = strdup(name);
  return inst_block(data_flow, i);
}

block gen_op_var_fresh(int *data_flow, opcode op, const char* name) {
  
 ((
 opcode_describe(data_flow, op)->flags & OP_HAS_VARIABLE
 ) ? (void) (0) : __assert_fail (
 "opcode_describe(op)->flags & OP_HAS_VARIABLE"
 , "compile.c", 218, __PRETTY_FUNCTION__))
                                                     ;
  return block_bind(data_flow, gen_op_unbound(data_flow, op, name),
                    gen_noop(data_flow), OP_HAS_VARIABLE);
}

block gen_op_bound(int *data_flow, opcode op, block binder) {
  
 ((
 block_is_single(data_flow, binder)
 ) ? (void) (0) : __assert_fail (
 "block_is_single(binder)"
 , "compile.c", 224, __PRETTY_FUNCTION__))
                                ;
  block b = gen_op_unbound(data_flow, op, binder.first->symbol);
  b.first->bound_by = binder.first;
  return b;
}

block gen_dictpair(int *data_flow, block k, block v) {
  return (block_join(data_flow, (block_join(data_flow, (gen_subexp(data_flow, k)),(gen_subexp(data_flow, v)))),(gen_op_simple(data_flow, INSERT))));
}


static void inst_join(int *data_flow, inst* a, inst* b) {
  
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

void block_append(int *data_flow, block* b, block b2) {
  if (b2.first) {
    if (b->last) {
      inst_join(data_flow, b->last, b2.first);
    } else {
      b->first = b2.first;
    }
    b->last = b2.last;
  }
}

block block_join(int *data_flow, block a, block b) {
  block c = a;
  block_append(data_flow, &c, b);
  return c;
}

int block_has_only_binders_and_imports(int *data_flow, block binders, int bindflags) {
  bindflags |= OP_HAS_BINDING;
  for (inst* curr = binders.first; curr; curr = curr->next) {
    if ((opcode_describe(data_flow, curr->op)->flags & bindflags) != bindflags && curr->op != DEPS && curr->op != MODULEMETA) {
      return 0;
    }
  }
  return 1;
}

static int inst_is_binder(int *data_flow, inst *i, int bindflags) {
  return !((opcode_describe(data_flow, i->op)->flags & bindflags) != bindflags && i->op != MODULEMETA);
}

int block_has_only_binders(int *data_flow, block binders, int bindflags) {
  bindflags |= OP_HAS_BINDING;
  bindflags &= ~OP_BIND_WILDCARD;
  for (inst* curr = binders.first; curr; curr = curr->next) {
    if ((opcode_describe(data_flow, curr->op)->flags & bindflags) != bindflags && curr->op != MODULEMETA) {
      return 0;
    }
  }
  return 1;
}


static int block_count_formals(int *data_flow, block b) {
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


static int block_count_actuals(int *data_flow, block b) {
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

static int block_count_refs(int *data_flow, block binder, block body) {
  int nrefs = 0;
  for (inst* i = body.first; i; i = i->next) {
    if (i != binder.first && i->bound_by == binder.first) {
      nrefs++;
    }

    nrefs += block_count_refs(data_flow, binder, i->subfn);

    nrefs += block_count_refs(data_flow, binder, i->arglist);
  }
  return nrefs;
}

static int block_bind_subblock(int *data_flow, block binder, block body, int bindflags, int break_distance) {
  
 ((
 block_is_single(data_flow, binder)
 ) ? (void) (0) : __assert_fail (
 "block_is_single(binder)"
 , "compile.c", 328, __PRETTY_FUNCTION__))
                                ;
  
 ((
 (opcode_describe(data_flow, binder.first->op)->flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD)
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
    binder.first->nformals = block_count_formals(data_flow, binder);
  int nrefs = 0;
  for (inst* i = body.first; i; i = i->next) {
    int flags = opcode_describe(data_flow, i->op)->flags;
    if ((flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD) && i->bound_by == 0 &&
        (!strcmp(i->symbol, binder.first->symbol) ||

         ((bindflags & OP_BIND_WILDCARD) && i->symbol[0] == '*' &&
          break_distance <= 3 && (i->symbol[1] == '1' + break_distance) &&
          i->symbol[2] == '\0'))) {

      if (i->op == CALL_JQ && i->nactuals == -1)
        i->nactuals = block_count_actuals(data_flow, i->arglist);
      if (i->nactuals == -1 || i->nactuals == binder.first->nformals) {
        i->bound_by = binder.first;
        nrefs++;
      }
    } else if ((flags & bindflags) == (bindflags & ~OP_BIND_WILDCARD) && i->bound_by != 0 &&
               !strncmp(binder.first->symbol, "*anonlabel", sizeof("*anonlabel") - 1) &&
               !strncmp(i->symbol, "*anonlabel", sizeof("*anonlabel") - 1)) {


      break_distance++;
    }

    nrefs += block_bind_subblock(data_flow, binder, i->subfn, bindflags, break_distance);

    nrefs += block_bind_subblock(data_flow, binder, i->arglist, bindflags, break_distance);
  }
  return nrefs;
}

static int block_bind_each(int *data_flow, block binder, block body, int bindflags) {
  
 ((
 block_has_only_binders(data_flow, binder, bindflags)
 ) ? (void) (0) : __assert_fail (
 "block_has_only_binders(binder, bindflags)"
 , "compile.c", 369, __PRETTY_FUNCTION__))
                                                  ;
  bindflags |= OP_HAS_BINDING;
  int nrefs = 0;
  for (inst* curr = binder.first; curr; curr = curr->next) {
    nrefs += block_bind_subblock(data_flow, inst_block(data_flow, curr), body, bindflags, 0);
  }
  return nrefs;
}

block block_bind(int *data_flow, block binder, block body, int bindflags) {
  block_bind_each(data_flow, binder, body, bindflags);
  return block_join(data_flow, binder, body);
}

block block_bind_library(int *data_flow, block binder, block body, int bindflags, const char *libname) {
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
 block_has_only_binders(data_flow, binder, bindflags)
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


    if ((opcode_describe(data_flow, curr->op)->flags & (OP_HAS_VARIABLE | OP_HAS_CONSTANT)))
      bindflags2 = OP_HAS_VARIABLE | OP_HAS_BINDING;


    curr->symbol = tname;
    nrefs += block_bind_subblock(data_flow, inst_block(data_flow, curr), body, bindflags2, 0);
    curr->symbol = cname;
    free(tname);
  }
  free(matchname);
  return body;
}



block block_bind_referenced(int *data_flow, block binder, block body, int bindflags) {
  
 ((
 block_has_only_binders(data_flow, binder, bindflags)
 ) ? (void) (0) : __assert_fail (
 "block_has_only_binders(binder, bindflags)"
 , "compile.c", 419, __PRETTY_FUNCTION__))
                                                  ;
  bindflags |= OP_HAS_BINDING;
  block refd = gen_noop(data_flow);
  block unrefd = gen_noop(data_flow);
  int nrefs;
  for (int last_kept = 0, kept = 0; ; ) {
    for (inst* curr; (curr = block_take(data_flow, &binder));) {
      block b = inst_block(data_flow, curr);
      nrefs = block_bind_each(data_flow, b, body, bindflags);


      nrefs += block_count_refs(data_flow, b, refd);
      nrefs += block_count_refs(data_flow, b, body);
      if (nrefs) {
        refd = (block_join(data_flow, (refd),(b)));
        kept++;
      } else {
        unrefd = (block_join(data_flow, (unrefd),(b)));
      }
    }
    if (kept == last_kept)
      break;
    last_kept = kept;
    binder = unrefd;
    unrefd = gen_noop(data_flow);
  }
  block_free(data_flow, unrefd);
  return block_join(data_flow, refd, body);
}

block block_drop_unreferenced(int *data_flow, block body) {
  inst* curr;
  block refd = gen_noop(data_flow);
  block unrefd = gen_noop(data_flow);
  int drop;
  do {
    drop = 0;
    while ((curr = block_take(data_flow, &body)) && curr->op != TOP) {
      block b = inst_block(data_flow, curr);
      if (block_count_refs(data_flow, b,refd) + block_count_refs(data_flow, b,body) == 0) {
        unrefd = (block_join(data_flow, (unrefd),(b)));
        drop++;
      } else {
        refd = (block_join(data_flow, (refd),(b)));
      }
    }
    if (curr && curr->op == TOP) {
      body = (block_join(data_flow, (inst_block(data_flow, curr)),(body)));
    }
    body = (block_join(data_flow, (refd),(body)));
    refd = gen_noop(data_flow);
  } while (drop != 0);
  block_free(data_flow, unrefd);
  return body;
}

jv block_take_imports(int *data_flow, block* body) {
  jv imports = jv_array();

  inst* top = 
             ((void *)0)
                 ;
  if (body->first && body->first->op == TOP) {
    top = block_take(data_flow, body);
  }
  while (body->first && (body->first->op == MODULEMETA || body->first->op == DEPS)) {
    inst* dep = block_take(data_flow, body);
    if (dep->op == DEPS) {
      imports = jv_array_append(imports, jv_copy(dep->imm.constant));
    }
    inst_free(data_flow, dep);
  }
  if (top) {
    *body = block_join(data_flow, inst_block(data_flow, top),*body);
  }
  return imports;
}

jv block_list_funcs(int *data_flow, block body, int omit_underscores) {
  jv funcs = jv_object(data_flow);
  for (inst *pos = body.first; pos != 
                                     ((void *)0)
                                         ; pos = pos->next) {
    if (pos->op == CLOSURE_CREATE || pos->op == CLOSURE_CREATE_C) {
      if (pos->symbol != 
                        ((void *)0) 
                             && (!omit_underscores || pos->symbol[0] != '_')) {
        funcs = jv_object_set(data_flow, funcs, jv_string_fmt(data_flow, "%s/%i", pos->symbol, pos->nformals), jv_null());
      }
    }
  }
  return jv_keys_unsorted(data_flow, funcs);
}

block gen_module(int *data_flow, block metadata) {
  inst* i = inst_new(data_flow, MODULEMETA);
  i->imm.constant = block_const(data_flow, metadata);
  if (jv_get_kind(i->imm.constant) != JV_KIND_OBJECT)
    i->imm.constant = jv_object_set(data_flow, jv_object(data_flow), jv_string("metadata"), i->imm.constant);
  block_free(data_flow, metadata);
  return inst_block(data_flow, i);
}

jv block_module_meta(int *data_flow, block b) {
  if (b.first != 
                ((void *)0) 
                     && b.first->op == MODULEMETA)
    return jv_copy(b.first->imm.constant);
  return jv_null();
}

block gen_import(int *data_flow, const char* name, const char* as, int is_data) {
  inst* i = inst_new(data_flow, DEPS);
  jv meta = jv_object(data_flow);
  if (as != 
           ((void *)0)
               )
    meta = jv_object_set(data_flow, meta, jv_string("as"), jv_string(as));
  meta = jv_object_set(data_flow, meta, jv_string("is_data"), is_data ? jv_true(data_flow) : jv_false(data_flow));
  meta = jv_object_set(data_flow, meta, jv_string("relpath"), jv_string(name));
  i->imm.constant = meta;
  return inst_block(data_flow, i);
}

block gen_import_meta(int *data_flow, block import, block metadata) {
  
 ((
 block_is_single(data_flow, import) && import.first->op == DEPS
 ) ? (void) (0) : __assert_fail (
 "block_is_single(import) && import.first->op == DEPS"
 , "compile.c", 534, __PRETTY_FUNCTION__))
                                                            ;
  
 ((
 block_is_const(data_flow, metadata) && block_const_kind(data_flow, metadata) == JV_KIND_OBJECT
 ) ? (void) (0) : __assert_fail (
 "block_is_const(metadata) && block_const_kind(metadata) == JV_KIND_OBJECT"
 , "compile.c", 535, __PRETTY_FUNCTION__))
                                                                                 ;
  inst *i = import.first;
  i->imm.constant = jv_object_merge(data_flow, block_const(data_flow, metadata), i->imm.constant);
  block_free(data_flow, metadata);
  return import;
}

block gen_function(int *data_flow, const char* name, block formals, block body) {
  inst* i = inst_new(data_flow, CLOSURE_CREATE);
  for (inst* i = formals.last; i; i = i->prev) {
    if (i->op == CLOSURE_PARAM_REGULAR) {
      i->op = CLOSURE_PARAM;
      body = gen_var_binding(data_flow, gen_call(data_flow, i->symbol, gen_noop(data_flow)), i->symbol, body);
    }
    block_bind_subblock(data_flow, inst_block(data_flow, i), body, OP_IS_CALL_PSEUDO | OP_HAS_BINDING, 0);
  }
  i->subfn = body;
  i->symbol = strdup(name);
  i->arglist = formals;
  block b = inst_block(data_flow, i);
  block_bind_subblock(data_flow, b, b, OP_IS_CALL_PSEUDO | OP_HAS_BINDING, 0);
  return b;
}

block gen_param_regular(int *data_flow, const char* name) {
  return gen_op_unbound(data_flow, CLOSURE_PARAM_REGULAR, name);
}

block gen_param(int *data_flow, const char* name) {
  return gen_op_unbound(data_flow, CLOSURE_PARAM, name);
}

block gen_lambda(int *data_flow, block body) {
  return gen_function(data_flow, "@lambda", gen_noop(data_flow), body);
}

block gen_call(int *data_flow, const char* name, block args) {
  block b = gen_op_unbound(data_flow, CALL_JQ, name);
  b.first->arglist = args;
  return b;
}

block gen_subexp(int *data_flow, block a) {
  if (block_is_noop(data_flow, a)) {
    return gen_op_simple(data_flow, DUP);
  }
  if (block_is_single(data_flow, a) && a.first->op == LOADK) {
    jv c = block_const(data_flow, a);
    block_free(data_flow, a);
    return gen_op_pushk_under(data_flow, c);
  }
  return (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, SUBEXP_BEGIN)),(a))),(gen_op_simple(data_flow, SUBEXP_END))));
}

block gen_both(int *data_flow, block a, block b) {
  block jump = gen_op_targetlater(data_flow, JUMP);
  block fork = gen_op_target(data_flow, FORK, jump);
  block c = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (fork),(a))),(jump))),(b)));
  inst_set_target(data_flow, jump, c);
  return c;
}

block gen_const_object(int *data_flow, block expr) {
  int is_const = 1;
  jv o = jv_object(data_flow);
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
    o = jv_object_set(data_flow, o, k, v);
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
  block_free(data_flow, expr);
  return gen_const(data_flow, o);
}

static block gen_const_array(int *data_flow, block expr) {
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
    block_free(data_flow, expr);
    return gen_const(data_flow, a);
  }

  jv_free(a);
  block b = {0,0};
  return b;
}

block gen_collect(int *data_flow, block expr) {
  block const_array = gen_const_array(data_flow, expr);
  if (const_array.first != 
                          ((void *)0)
                              )
    return const_array;

  block array_var = gen_op_var_fresh(data_flow, STOREV, "collect");
  block c = (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_const(data_flow, jv_array())))),(array_var)));

  block tail = (block_join(data_flow, (gen_op_bound(data_flow, APPEND, array_var)),(gen_op_simple(data_flow, BACKTRACK))))
                                              ;

  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (c),(gen_op_target(data_flow, FORK, tail)))),(expr))),(tail))),(gen_op_bound(data_flow, LOADVN, array_var))))



                                               ;
}

static block bind_matcher(int *data_flow, block matcher, block body) {



  for (inst* i = matcher.first; i; i = i->next) {
    if ((i->op == STOREV || i->op == STOREVN) && !i->bound_by)
      block_bind_subblock(data_flow, inst_block(data_flow, i), body, OP_HAS_VARIABLE, 0);
  }
  return (block_join(data_flow, (matcher),(body)));
}




static void block_get_unbound_vars(int *data_flow, block b, jv *vars) {
  
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
      block_get_unbound_vars(data_flow, i->subfn, vars);
      continue;
    }
    if ((i->op == STOREV || i->op == STOREVN) && i->bound_by == 
                                                               ((void *)0)
                                                                   ) {
      *vars = jv_object_set(data_flow, *vars, jv_string(i->symbol), jv_true(data_flow));
    }
  }
}







static block bind_alternation_matchers(int *data_flow, block matchers, block body) {
  block preamble = {0};
  block altmatchers = {0};
  block mb = {0};
  block final_matcher = matchers;


  while (final_matcher.first && final_matcher.first->op == DESTRUCTURE_ALT) {
    block_append(data_flow, &altmatchers, inst_block(data_flow, block_take(data_flow, &final_matcher)));
  }


  if (altmatchers.first == 
                          ((void *)0)
                              ) {
    return bind_matcher(data_flow, final_matcher, body);
  }


  jv all_vars = jv_object(data_flow);
  block_get_unbound_vars(data_flow, altmatchers, &all_vars);
  block_get_unbound_vars(data_flow, final_matcher, &all_vars);


  for (int jv_i__ = jv_object_iter(all_vars), jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv key; jv_object_iter_valid((all_vars), jv_i__) ? (key = jv_object_iter_key(all_vars, jv_i__), 1) : 0; jv_i__ = jv_object_iter_next(all_vars, jv_i__)) {
    preamble = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (preamble),(gen_op_simple(data_flow, DUP)))),(gen_const(data_flow, jv_null())))),(gen_op_unbound(data_flow, STOREV, jv_string_value(key)))))


                                                                  ;
    jv_free(key);
  }
  jv_free(all_vars);


  for (inst *i = altmatchers.first; i; i = i->next) {
    block submatcher = i->subfn;


    submatcher = (block_join(data_flow, (submatcher),(gen_op_target(data_flow, JUMP, final_matcher))));


    mb = (block_join(data_flow, (block_join(data_flow, (mb),(gen_op_target(data_flow, DESTRUCTURE_ALT, submatcher)))),(submatcher)));



    i->subfn.first = i->subfn.last = 
                                    ((void *)0)
                                        ;
  }

  block_free(data_flow, altmatchers);

  return bind_matcher(data_flow, preamble, (block_join(data_flow, (block_join(data_flow, (mb),(final_matcher))),(body))));
}

block gen_reduce(int *data_flow, block source, block matcher, block init, block body) {
  block res_var = gen_op_var_fresh(data_flow, STOREV, "reduce");
  block loop = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUPN)),(source))),(bind_alternation_matchers(data_flow, matcher, (block_join(data_flow, (block_join(data_flow, (gen_op_bound(data_flow, LOADVN, res_var)),(body))),(gen_op_bound(data_flow, STOREV, res_var)))))))),(gen_op_simple(data_flow, BACKTRACK))))





                                              ;
  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(init))),(res_var))),(gen_op_target(data_flow, FORK, loop)))),(loop))),(gen_op_bound(data_flow, LOADVN, res_var))))




                                             ;
}

block gen_foreach(int *data_flow, block source, block matcher, block init, block update, block extract) {
  block output = gen_op_targetlater(data_flow, JUMP);
  block state_var = gen_op_var_fresh(data_flow, STOREV, "foreach");
  block loop = (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUPN)),(source))),(bind_alternation_matchers(data_flow, matcher, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_bound(data_flow, LOADVN, state_var)),(update))),(gen_op_simple(data_flow, DUP)))),(gen_op_bound(data_flow, STOREV, state_var)))),(extract))),(output)))))))
                                                 ;
  block foreach = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(init))),(state_var))),(gen_op_target(data_flow, FORK, loop)))),(loop))),(gen_op_simple(data_flow, BACKTRACK))))







                                                 ;
  inst_set_target(data_flow, output, foreach);
  return foreach;
}

block gen_definedor(int *data_flow, block a, block b) {

  block found_var = gen_op_var_fresh(data_flow, STOREV, "found");
  block init = (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_const(data_flow, jv_false(data_flow))))),(found_var)));


  block backtrack = gen_op_simple(data_flow, BACKTRACK);
  block tail = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_op_bound(data_flow, LOADV, found_var)))),(gen_op_target(data_flow, JUMP_F, backtrack)))),(backtrack))),(gen_op_simple(data_flow, POP)))),(b)))




                       ;


  block if_notfound = gen_op_simple(data_flow, BACKTRACK);


  block if_found = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_const(data_flow, jv_true(data_flow))))),(gen_op_bound(data_flow, STOREV, found_var)))),(gen_op_target(data_flow, JUMP, tail))))


                                                   ;

  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (init),(gen_op_target(data_flow, FORK, if_notfound)))),(a))),(gen_op_target(data_flow, JUMP_F, if_found)))),(if_found))),(if_notfound))),(tail)))





                    ;
}

int block_has_main(int *data_flow, block top) {
  for (inst *c = top.first; c; c = c->next) {
    if (c->op == TOP)
      return 1;
  }
  return 0;
}

int block_is_funcdef(int *data_flow, block b) {
  if (b.first != 
                ((void *)0) 
                     && b.first->op == CLOSURE_CREATE)
    return 1;
  return 0;
}

block gen_condbranch(int *data_flow, block iftrue, block iffalse) {
  iftrue = (block_join(data_flow, (iftrue),(gen_op_target(data_flow, JUMP, iffalse))));
  return (block_join(data_flow, (block_join(data_flow, (gen_op_target(data_flow, JUMP_F, iftrue)),(iftrue))),(iffalse)));
}

block gen_and(int *data_flow, block a, block b) {

  return (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(a))),(gen_condbranch(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, POP)),(b))),(gen_condbranch(data_flow, gen_const(data_flow, jv_true(data_flow)), gen_const(data_flow, jv_false(data_flow)))))), (block_join(data_flow, (gen_op_simple(data_flow, POP)),(gen_const(data_flow, jv_false(data_flow)))))))))




                                                                                ;
}

block gen_or(int *data_flow, block a, block b) {

  return (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(a))),(gen_condbranch(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, POP)),(gen_const(data_flow, jv_true(data_flow))))), (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, POP)),(b))),(gen_condbranch(data_flow, gen_const(data_flow, jv_true(data_flow)), gen_const(data_flow, jv_false(data_flow))))))))))




                                                                            ;
}

block gen_destructure_alt(int *data_flow, block matcher) {
  for (inst *i = matcher.first; i; i = i->next) {
    if (i->op == STOREV) {
      i->op = STOREVN;
    }
  }
  inst* i = inst_new(data_flow, DESTRUCTURE_ALT);
  i->subfn = matcher;
  return inst_block(data_flow, i);
}

block gen_var_binding(int *data_flow, block var, const char* name, block body) {
  return gen_destructure(data_flow, var, gen_op_unbound(data_flow, STOREV, name), body);
}

block gen_array_matcher(int *data_flow, block left, block curr) {
  int index;
  if (block_is_noop(data_flow, left))
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


  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_subexp(data_flow, gen_const(data_flow, jv_number(index)))))),(gen_op_simple(data_flow, INDEX)))),(curr))),(left)))
                                                ;
}

block gen_object_matcher(int *data_flow, block name, block curr) {
  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_subexp(data_flow, name)))),(gen_op_simple(data_flow, INDEX)))),(curr)))
                    ;
}

block gen_destructure(int *data_flow, block var, block matchers, block body) {

  block top = gen_noop(data_flow);
  if (body.first && body.first->op == TOP)
    top = inst_block(data_flow, block_take(data_flow, &body));

  if (matchers.first && matchers.first->op == DESTRUCTURE_ALT) {
    block_append(data_flow, &var, gen_op_simple(data_flow, DUP));
  } else {
    top = (block_join(data_flow, (top),(gen_op_simple(data_flow, DUP))));
  }

  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (top),(gen_subexp(data_flow, var)))),(gen_op_simple(data_flow, POP)))),(bind_alternation_matchers(data_flow, matchers, body))));
}


static block gen_wildvar_binding(int *data_flow, block var, const char* name, block body) {
  return (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(var))),(block_bind(data_flow, gen_op_unbound(data_flow, STOREV, name), body, OP_HAS_VARIABLE | OP_BIND_WILDCARD))))

                                                                    ;
}

block gen_cond(int *data_flow, block cond, block iftrue, block iffalse) {
  return (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),((block_join(data_flow, (gen_subexp(data_flow, cond)),(gen_op_simple(data_flow, POP))))))),(gen_condbranch(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, POP)),(iftrue))), (block_join(data_flow, (gen_op_simple(data_flow, POP)),(iffalse)))))))

                                                                  ;
}

block gen_try_handler(int *data_flow, block handler) {

  return gen_cond(data_flow, 
                  gen_and(data_flow, gen_call(data_flow, "_equal",
                                   (block_join(data_flow, (gen_lambda(data_flow, gen_const(data_flow, jv_string("object")))),(gen_lambda(data_flow, gen_noop(data_flow)))))
                                                                ),
                          (block_join(data_flow, (block_join(data_flow, (gen_subexp(data_flow, gen_const(data_flow, jv_string("__jq")))),(gen_noop(data_flow)))),(gen_op_simple(data_flow, INDEX))))

                                                     ),

                  gen_call(data_flow, "error", gen_noop(data_flow)),

                  handler);
}

block gen_try(int *data_flow, block exp, block handler) {
  if (!handler.first && !handler.last)

    handler = (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_op_simple(data_flow, POP)))),(handler)));
  exp = (block_join(data_flow, (exp),(gen_op_target(data_flow, JUMP, handler))));
  return (block_join(data_flow, (block_join(data_flow, (gen_op_target(data_flow, FORK_OPT, exp)),(exp))),(handler)));
}

block gen_label(int *data_flow, const char *label, block exp) {
  block cond = gen_call(data_flow, "_equal",
                        (block_join(data_flow, (gen_lambda(data_flow, gen_noop(data_flow))),(gen_lambda(data_flow, gen_op_unbound(data_flow, LOADV, label)))))
                                                                       );
  return gen_wildvar_binding(data_flow, gen_op_simple(data_flow, GENLABEL), label,
                             (block_join(data_flow, (gen_op_simple(data_flow, POP)),(gen_try(data_flow, exp, gen_cond(data_flow, cond, gen_op_simple(data_flow, BACKTRACK), gen_call(data_flow, "error", gen_noop(data_flow)))))))
                                                                                    );
}

block gen_cbinding(int *data_flow, const struct cfunction* cfunctions, int ncfunctions, block code) {
  for (int cfunc=0; cfunc<ncfunctions; cfunc++) {
    inst* i = inst_new(data_flow, CLOSURE_CREATE_C);
    i->imm.cfunc = &cfunctions[cfunc];
    i->symbol = strdup(i->imm.cfunc->name);
    code = block_bind(data_flow, inst_block(data_flow, i), code, OP_IS_CALL_PSEUDO);
  }
  return code;
}

static uint16_t nesting_level(int *data_flow, struct bytecode* bc, inst* target) {
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

static int count_cfunctions(int *data_flow, block b) {
  int n = 0;
  for (inst* i = b.first; i; i = i->next) {
    if (i->op == CLOSURE_CREATE_C) n++;
    n += count_cfunctions(data_flow, i->subfn);
  }
  return n;
}


extern char **environ;


static jv
make_env(int *data_flow, jv env)
{
  if (jv_is_valid(data_flow, env))
    return jv_copy(env);
  jv r = jv_object(data_flow);
  if (environ == 
                ((void *)0)
                    )
    return r;
  for (size_t i = 0; environ[i] != 
                                  ((void *)0)
                                      ; i++) {
    const char *eq;

    if ((eq = strchr(environ[i], '=')) == 
                                         ((void *)0)
                                             )
      r = jv_object_delete(data_flow, r, jv_string(environ[i]));
    else
      r = jv_object_set(data_flow, r, jv_string_sized(environ[i], eq - environ[i]), jv_string(eq + 1));
  }
  return jv_copy(r);
}


static int expand_call_arglist(int *data_flow, block* b, jv args, jv *env) {
  int errors = 0;
  block ret = gen_noop(data_flow);
  for (inst* curr; (curr = block_take(data_flow, b));) {
    if (opcode_describe(data_flow, curr->op)->flags & OP_HAS_BINDING) {
      if (!curr->bound_by && curr->op == LOADV && strcmp(curr->symbol, "ENV") == 0) {
        curr->op = LOADK;
        *env = curr->imm.constant = make_env(data_flow, *env);
      } else if (!curr->bound_by && curr->op == LOADV && jv_object_has(data_flow, jv_copy(args), jv_string(curr->symbol))) {
        curr->op = LOADK;
        curr->imm.constant = jv_object_get(jv_copy(args), jv_string(curr->symbol));
      } else if (!curr->bound_by) {
        if (curr->symbol[0] == '*' && curr->symbol[1] >= '1' && curr->symbol[1] <= '3' && curr->symbol[2] == '\0')
          locfile_locate(data_flow, curr->locfile, curr->source, "jq: error: break used outside labeled control structure");
        else if (curr->op == LOADV)
          locfile_locate(data_flow, curr->locfile, curr->source, "jq: error: $%s is not defined", curr->symbol);
        else
          locfile_locate(data_flow, curr->locfile, curr->source, "jq: error: %s/%d is not defined", curr->symbol, block_count_actuals(data_flow, curr->arglist));
        errors++;

        ret = (block_join(data_flow, (ret),(inst_block(data_flow, curr))));
        continue;
      }
    }

    block prelude = gen_noop(data_flow);
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
        block callargs = gen_noop(data_flow);
        for (inst* i; (i = block_take(data_flow, &curr->arglist));) {
          
         ((
         opcode_describe(data_flow, i->op)->flags & OP_IS_CALL_PSEUDO
         ) ? (void) (0) : __assert_fail (
         "opcode_describe(i->op)->flags & OP_IS_CALL_PSEUDO"
         , "compile.c", 1168, __PRETTY_FUNCTION__))
                                                                  ;
          block b = inst_block(data_flow, i);
          switch (i->op) {
          default: 
                  ((
                  0 && "Unknown type of parameter"
                  ) ? (void) (0) : __assert_fail (
                  "0 && \"Unknown type of parameter\""
                  , "compile.c", 1171, __PRETTY_FUNCTION__))
                                                          ; break;
          case CLOSURE_REF:
            block_append(data_flow, &callargs, b);
            break;
          case CLOSURE_CREATE:
            block_append(data_flow, &prelude, b);
            block_append(data_flow, &callargs, gen_op_bound(data_flow, CLOSURE_REF, b));
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
        for (inst* i; (i = block_take(data_flow, &curr->arglist)); ) {
          
         ((
         i->op == CLOSURE_CREATE
         ) ? (void) (0) : __assert_fail (
         "i->op == CLOSURE_CREATE"
         , "compile.c", 1196, __PRETTY_FUNCTION__))
                                        ;
          block body = i->subfn;
          i->subfn = gen_noop(data_flow);
          inst_free(data_flow, i);

          errors += expand_call_arglist(data_flow, &body, args, env);
          prelude = (block_join(data_flow, (gen_subexp(data_flow, body)),(prelude)));
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
    ret = (block_join(data_flow, (block_join(data_flow, (ret),(prelude))),(inst_block(data_flow, curr))));
  }
  *b = ret;
  return errors;
}

static int compile(int *data_flow, struct bytecode* bc, block b, struct locfile* lf, jv args, jv *env) {
  int errors = 0;
  int pos = 0;
  int var_frame_idx = 0;
  bc->nsubfunctions = 0;
  errors += expand_call_arglist(data_flow, &b, args, env);
  b = (block_join(data_flow, (b),(gen_op_simple(data_flow, RET))));
  jv localnames = jv_array();
  for (inst* curr = b.first; curr; curr = curr->next) {
    if (!curr->next) 
                    ((
                    curr == b.last
                    ) ? (void) (0) : __assert_fail (
                    "curr == b.last"
                    , "compile.c", 1232, __PRETTY_FUNCTION__))
                                          ;
    int length = opcode_describe(data_flow, curr->op)->length;
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

    if ((opcode_describe(data_flow, curr->op)->flags & OP_HAS_VARIABLE) &&
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

    locfile_locate(data_flow, lf, UNKNOWN_LOCATION,
        "function compiled to %d bytes which is too long", pos);
    errors++;
  }
  bc->codelen = pos;
  bc->debuginfo = jv_object_set(data_flow, bc->debuginfo, jv_string("locals"), localnames);
  if (bc->nsubfunctions) {
    bc->subfunctions = jv_mem_calloc(sizeof(struct bytecode*), bc->nsubfunctions);
    for (inst* curr = b.first; curr; curr = curr->next) {
      if (curr->op == CLOSURE_CREATE) {
        struct bytecode* subfn = jv_mem_alloc(sizeof(struct bytecode));
        bc->subfunctions[curr->imm.intval] = subfn;
        subfn->globals = bc->globals;
        subfn->parent = bc;
        subfn->nclosures = 0;
        subfn->debuginfo = jv_object_set(data_flow, jv_object(data_flow), jv_string("name"), jv_string(curr->symbol));
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
        subfn->debuginfo = jv_object_set(data_flow, subfn->debuginfo, jv_string("params"), params);
        errors += compile(data_flow, subfn, curr->subfn, lf, args, env);
        curr->subfn = gen_noop(data_flow);
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
    const struct opcode_description* op = opcode_describe(data_flow, curr->op);
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
      code[pos++] = nesting_level(data_flow, bc, curr->bound_by);
      code[pos++] = curr->bound_by->imm.intval |
        (curr->bound_by->op == CLOSURE_CREATE ? 0x1000 : 0);
      for (inst* arg = curr->arglist.first; arg; arg = arg->next) {
        
       ((
       arg->op == CLOSURE_REF && arg->bound_by->op == CLOSURE_CREATE
       ) ? (void) (0) : __assert_fail (
       "arg->op == CLOSURE_REF && arg->bound_by->op == CLOSURE_CREATE"
       , "compile.c", 1322, __PRETTY_FUNCTION__))
                                                                            ;
        code[pos++] = nesting_level(data_flow, bc, arg->bound_by);
        code[pos++] = arg->bound_by->imm.intval | 0x1000;
      }
    } else if ((op->flags & OP_HAS_CONSTANT) && (op->flags & OP_HAS_VARIABLE)) {

      code[pos++] = jv_array_length(jv_copy(constant_pool));
      constant_pool = jv_array_append(constant_pool, jv_copy(curr->imm.constant));
      code[pos++] = nesting_level(data_flow, bc, curr->bound_by);
      uint16_t var = (uint16_t)curr->bound_by->imm.intval;
      code[pos++] = var;
    } else if (op->flags & OP_HAS_CONSTANT) {
      code[pos++] = jv_array_length(jv_copy(constant_pool));
      constant_pool = jv_array_append(constant_pool, jv_copy(curr->imm.constant));
    } else if (op->flags & OP_HAS_VARIABLE) {
      code[pos++] = nesting_level(data_flow, bc, curr->bound_by);
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
  block_free(data_flow, b);
  return errors;
}

int block_compile(int *data_flow, block b, struct bytecode** out, struct locfile* lf, jv args) {
  struct bytecode* bc = jv_mem_alloc(sizeof(struct bytecode));
  bc->parent = 0;
  bc->nclosures = 0;
  bc->globals = jv_mem_alloc(sizeof(struct symbol_table));
  int ncfunc = count_cfunctions(data_flow, b);
  bc->globals->ncfunctions = 0;
  bc->globals->cfunctions = jv_mem_calloc(sizeof(struct cfunction), ncfunc);
  bc->globals->cfunc_names = jv_array();
  bc->debuginfo = jv_object_set(data_flow, jv_object(data_flow), jv_string("name"), jv_null());
  jv env = jv_invalid();
  int nerrors = compile(data_flow, bc, b, lf, args, &env);
  jv_free(args);
  jv_free(env);
  
 ((
 bc->globals->ncfunctions == ncfunc
 ) ? (void) (0) : __assert_fail (
 "bc->globals->ncfunctions == ncfunc"
 , "compile.c", 1370, __PRETTY_FUNCTION__))
                                           ;
  if (nerrors > 0) {
    bytecode_free(data_flow, bc);
    *out = 0;
  } else {
    *out = bc;
  }
  return nerrors;
}

void block_free(int *data_flow, block b) {
  struct inst* next;
  for (struct inst* curr = b.first; curr; curr = next) {
    next = curr->next;
    inst_free(data_flow, curr);
  }
}
