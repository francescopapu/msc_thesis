











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
typedef long int wchar_t;
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









extern int *__errno_location (void);









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

YY_BUFFER_STATE jq_yy_scan_buffer (int *data_flow, char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE jq_yy_scan_string (int *data_flow, const char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE jq_yy_scan_bytes (int *data_flow, const char *bytes,yy_size_t len ,yyscan_t yyscanner );

void *jq_yyalloc (int *data_flow, yy_size_t ,yyscan_t yyscanner );
void *jq_yyrealloc (int *data_flow, void *,yy_size_t ,yyscan_t yyscanner );
void jq_yyfree (int *data_flow, void * ,yyscan_t yyscanner );





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
extern int jq_yylex
               (int *data_flow, YYSTYPE * yylval_param,location * yylloc_param ,yyscan_t yyscanner);
struct lexer_param {
  yyscan_t lexer;
};







void yyerror(int *data_flow, location* loc, block* answer, int* errors,
             struct locfile* locations, struct lexer_param* lexer_param_ptr, const char *s){
  (*errors)++;
  if (strstr(s, "unexpected")) {



      locfile_locate(data_flow, locations, *loc, "jq: error: %s (Unix shell quoting issues?)", s);

  } else {
      locfile_locate(data_flow, locations, *loc, "jq: error: %s", s);
  }
}

int yylex(int *data_flow, YYSTYPE* yylval, location* yylloc, block* answer, int* errors,
          struct locfile* locations, struct lexer_param* lexer_param_ptr) {
  yyscan_t lexer = lexer_param_ptr->lexer;
  int tok = jq_yylex(data_flow, yylval, yylloc, lexer);
  if ((tok == 261 || tok == 297) && !jv_is_valid(data_flow, yylval->literal)) {
    jv msg = jv_invalid_get_msg(data_flow, jv_copy(yylval->literal));
    if (jv_get_kind(msg) == JV_KIND_STRING) {
      do { location l = *yylloc; yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, jv_string_value(msg)); ; } while (0);
    } else {
      do { location l = *yylloc; yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Invalid literal"); ; } while (0);
    }
    jv_free(msg);
    jv_free(yylval->literal);
    yylval->literal = jv_null();
  }
  return tok;
}



static jv check_object_key(int *data_flow, block k) {
  if (block_is_const(data_flow, k) && block_const_kind(data_flow, k) != JV_KIND_STRING) {
    char errbuf[15];
    return jv_string_fmt(data_flow, "Cannot use %s (%s) as object key",
        jv_kind_name(data_flow, block_const_kind(data_flow, k)),
        jv_dump_string_trunc(data_flow, jv_copy(block_const(data_flow, k)), errbuf, sizeof(errbuf)));
  }
  return jv_invalid();
}

static block gen_index(int *data_flow, block obj, block key) {
  return (block_join(data_flow, (block_join(data_flow, (gen_subexp(data_flow, key)),(obj))),(gen_op_simple(data_flow, INDEX))));
}

static block gen_index_opt(int *data_flow, block obj, block key) {
  return (block_join(data_flow, (block_join(data_flow, (gen_subexp(data_flow, key)),(obj))),(gen_op_simple(data_flow, INDEX_OPT))));
}

static block gen_slice_index(int *data_flow, block obj, block start, block end, opcode idx_op) {
  block key = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_subexp(data_flow, gen_const(data_flow, jv_object(data_flow)))),(gen_subexp(data_flow, gen_const(data_flow, jv_string("start")))))),(gen_subexp(data_flow, start)))),(gen_op_simple(data_flow, INSERT)))),(gen_subexp(data_flow, gen_const(data_flow, jv_string("end")))))),(gen_subexp(data_flow, end)))),(gen_op_simple(data_flow, INSERT))))





                                          ;
  return (block_join(data_flow, (block_join(data_flow, (key),(obj))),(gen_op_simple(data_flow, idx_op))));
}

static block constant_fold(int *data_flow, block a, block b, int op) {
  if (!block_is_single(data_flow, a) || !block_is_const(data_flow, a) ||
      !block_is_single(data_flow, b) || !block_is_const(data_flow, b))
    return gen_noop(data_flow);
  if (op == '+') {
    if (block_const_kind(data_flow, a) == JV_KIND_NULL) {
      block_free(data_flow, a);
      return b;
    }
    if (block_const_kind(data_flow, b) == JV_KIND_NULL) {
      block_free(data_flow, b);
      return a;
    }
  }
  if (block_const_kind(data_flow, a) != block_const_kind(data_flow, b))
    return gen_noop(data_flow);

  jv res = jv_invalid();

  if (block_const_kind(data_flow, a) == JV_KIND_NUMBER) {
    double na = jv_number_value(block_const(data_flow, a));
    double nb = jv_number_value(block_const(data_flow, b));
    switch (op) {
    case '+': res = jv_number(na + nb); break;
    case '-': res = jv_number(na - nb); break;
    case '*': res = jv_number(na * nb); break;
    case '/': res = jv_number(na / nb); break;
    case 265: res = (na == nb ? jv_true(data_flow) : jv_false(data_flow)); break;
    case 266: res = (na != nb ? jv_true(data_flow) : jv_false(data_flow)); break;
    case '<': res = (na < nb ? jv_true(data_flow) : jv_false(data_flow)); break;
    case '>': res = (na > nb ? jv_true(data_flow) : jv_false(data_flow)); break;
    case 293: res = (na <= nb ? jv_true(data_flow) : jv_false(data_flow)); break;
    case 294: res = (na >= nb ? jv_true(data_flow) : jv_false(data_flow)); break;
    default: break;
    }
  } else if (op == '+' && block_const_kind(data_flow, a) == JV_KIND_STRING) {
    res = jv_string_concat(data_flow, block_const(data_flow, a), block_const(data_flow, b));
  } else {
    return gen_noop(data_flow);
  }

  if (jv_get_kind(res) == JV_KIND_INVALID)
    return gen_noop(data_flow);

  block_free(data_flow, a);
  block_free(data_flow, b);
  return gen_const(data_flow, res);
}

static block gen_binop(int *data_flow, block a, block b, int op) {
  block folded = constant_fold(data_flow, a, b, op);
  if (!block_is_noop(data_flow, folded))
    return folded;

  const char* funcname = 0;
  switch (op) {
  case '+': funcname = "_plus"; break;
  case '-': funcname = "_minus"; break;
  case '*': funcname = "_multiply"; break;
  case '/': funcname = "_divide"; break;
  case '%': funcname = "_mod"; break;
  case 265: funcname = "_equal"; break;
  case 266: funcname = "_notequal"; break;
  case '<': funcname = "_less"; break;
  case '>': funcname = "_greater"; break;
  case 293: funcname = "_lesseq"; break;
  case 294: funcname = "_greatereq"; break;
  }
  
 ((
 funcname
 ) ? (void) (0) : __assert_fail (
 "funcname"
 , "src/parser.y", 267, __PRETTY_FUNCTION__))
                 ;

  return gen_call(data_flow, funcname, (block_join(data_flow, (gen_lambda(data_flow, a)),(gen_lambda(data_flow, b)))));
}

static block gen_format(int *data_flow, block a, jv fmt) {
  return (block_join(data_flow, (a),(gen_call(data_flow, "format", gen_lambda(data_flow, gen_const(data_flow, fmt))))));
}

static block gen_definedor_assign(int *data_flow, block object, block val) {
  block tmp = gen_op_var_fresh(data_flow, STOREV, "tmp");
  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(val))),(tmp))),(gen_call(data_flow, "_modify", (block_join(data_flow, (gen_lambda(data_flow, object)),(gen_lambda(data_flow, gen_definedor(data_flow, gen_noop(data_flow), gen_op_bound(data_flow, LOADV, tmp))))))))))



                                                                                               ;
}

static block gen_update(int *data_flow, block object, block val, int optype) {
  block tmp = gen_op_var_fresh(data_flow, STOREV, "tmp");
  return (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(val))),(tmp))),(gen_call(data_flow, "_modify", (block_join(data_flow, (gen_lambda(data_flow, object)),(gen_lambda(data_flow, gen_binop(data_flow, gen_noop(data_flow), gen_op_bound(data_flow, LOADV, tmp), optype)))))))))





                                                                         ;
}
typedef unsigned char yytype_uint8;





typedef signed char yytype_int8;





typedef unsigned short int yytype_uint16;





typedef short int yytype_int16;
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  location yyls_alloc;
};
static const yytype_uint8 yytranslate[] =
{
       0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 62, 56, 2, 2,
      60, 61, 54, 52, 48, 53, 64, 55, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 63, 59,
      50, 49, 51, 58, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 65, 2, 66, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 67, 47, 68, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
       5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
      45, 46, 57
};
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INVALID_CHARACTER", "IDENT", "FIELD",
  "LITERAL", "FORMAT", "\"..\"", "\"%=\"", "\"==\"", "\"!=\"", "\"//\"",
  "\"as\"", "\"def\"", "\"module\"", "\"import\"", "\"include\"", "\"if\"",
  "\"then\"", "\"else\"", "\"elif\"", "\"reduce\"", "\"foreach\"",
  "\"end\"", "\"and\"", "\"or\"", "\"try\"", "\"catch\"", "\"label\"",
  "\"break\"", "\"__loc__\"", "\"|=\"", "\"+=\"", "\"-=\"", "\"*=\"",
  "\"/=\"", "\"//=\"", "\"<=\"", "\">=\"", "\"?//\"", "QQSTRING_START",
  "QQSTRING_TEXT", "QQSTRING_INTERP_START", "QQSTRING_INTERP_END",
  "QQSTRING_END", "FUNCDEF", "'|'", "','", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "NONOPT", "'?'", "';'", "'('", "')'", "'$'",
  "':'", "'.'", "'['", "']'", "'{'", "'}'", "$accept", "TopLevel",
  "Module", "Imports", "FuncDefs", "Exp", "Import", "ImportWhat",
  "ImportFrom", "FuncDef", "Params", "Param", "String", "@1", "@2",
  "QQString", "ElseBody", "ExpD", "Term", "Args", "Arg", "RepPatterns",
  "Patterns", "Pattern", "ArrayPats", "ObjPats", "ObjPat", "Keyword",
  "MkDict", "MkDictPair", 0
};
static const yytype_int16 yypact[] =
{
      21, 772, 43, 63, -6, 12, -158, 80, -158, 122,
     772, 193, 193, 772, 74, 5, -158, 772, 522, 10,
     279, 455, 152, 1290, 772, -158, 8, -158, 3, 3,
     772, 63, 680, 772, -158, -158, 67, 1646, 58, 130,
     106, 133, -158, 135, -158, 20, 83, 1120, -158, -158,
    -158, 140, 80, 93, 86, -158, 917, -23, 91, -158,
    -158, -158, -158, -158, -158, -158, -158, -158, -158, -158,
    -158, -158, -158, -158, -158, -158, -158, -158, 772, 151,
      94, 97, 95, 113, 772, 772, 772, 772, 772, 772,
     772, 772, 772, 772, 772, 772, 772, 772, 772, 772,
     772, 772, 772, 772, 772, 772, 772, 772, -158, -158,
    1814, 104, -7, 3, 388, 171, -158, -158, -158, 1814,
     772, -158, -158, 1341, 1814, 59, -158, -158, 7, 772,
     587, -7, -7, 652, 117, -158, 4, -158, -158, -158,
    -158, -158, -158, 345, -3, -158, -3, 1154, -158, -3,
      -3, -158, 345, 1882, 370, 370, 1848, 436, 1914, 1882,
    1882, 1882, 1882, 1882, 1882, 370, 370, 1814, 1848, 1882,
     370, 370, 20, 20, 129, 129, 129, -158, 184, -7,
     834, 149, 143, 156, 134, 136, 772, 145, 867, 47,
    -158, -158, 772, -158, 23, -158, 200, 72, -158, 1392,
    -158, 1596, 146, 150, -158, -158, 772, -158, 772, -158,
     -11, -158, -3, 162, 51, 162, 148, 162, 162, -158,
    -158, -158, -24, 153, 154, 772, 209, 155, -15, -158,
     158, -7, 772, -158, -158, 967, -158, 744, 157, -158,
     215, -158, -158, -158, 7, 159, -158, 772, 772, -158,
     772, 772, 1814, 1680, -158, -3, -3, -7, -158, -7,
      -7, 1188, 163, -7, 834, -158, -7, 185, 1814, 169,
     170, 1017, -158, -158, -158, 772, 1730, 1780, 1443, 1494,
    -158, 162, 162, -158, -158, -158, 166, -7, -158, -158,
    -158, -158, -158, 172, 1545, -158, 772, 772, 772, -7,
    -158, -158, -158, 1596, 1222, 1067, -158, -158, -158, 772,
    -158, 1256, -158
};




static const yytype_uint8 yydefact[] =
{
       4, 0, 0, 6, 105, 81, 96, 98, 73, 0,
       0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
       0, 0, 0, 0, 0, 97, 47, 1, 0, 0,
       8, 6, 0, 0, 77, 62, 0, 0, 0, 0,
      18, 0, 75, 0, 64, 32, 0, 0, 104, 103,
      84, 0, 0, 83, 0, 101, 0, 0, 160, 132,
     133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
     143, 144, 145, 146, 147, 148, 149, 150, 0, 0,
     158, 0, 0, 152, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 21, 5,
      10, 80, 0, 0, 0, 0, 53, 52, 3, 2,
       8, 7, 48, 0, 113, 0, 111, 64, 0, 0,
       0, 0, 0, 0, 0, 74, 0, 107, 99, 85,
      79, 108, 100, 0, 0, 110, 0, 0, 159, 0,
       0, 102, 0, 40, 41, 42, 25, 24, 23, 27,
      31, 34, 36, 39, 26, 45, 46, 28, 29, 22,
      43, 44, 30, 33, 35, 37, 38, 76, 0, 0,
       0, 0, 0, 117, 82, 0, 0, 89, 0, 0,
       9, 49, 0, 106, 0, 59, 0, 0, 56, 0,
      16, 0, 0, 0, 19, 17, 0, 65, 0, 61,
       0, 154, 0, 162, 71, 155, 0, 157, 156, 153,
     118, 121, 0, 0, 0, 0, 0, 0, 0, 123,
       0, 0, 0, 78, 109, 0, 88, 0, 87, 51,
       0, 112, 63, 58, 0, 0, 54, 0, 0, 15,
       0, 0, 20, 0, 70, 0, 0, 0, 119, 0,
       0, 0, 125, 0, 0, 120, 0, 116, 11, 95,
      94, 0, 86, 50, 57, 0, 0, 0, 0, 0,
      66, 69, 161, 122, 131, 127, 0, 0, 129, 124,
     128, 92, 91, 93, 0, 68, 0, 0, 0, 0,
     126, 90, 55, 0, 0, 0, 130, 67, 12, 0,
      14, 0, 13
};


static const yytype_int16 yypgoto[] =
{
    -158, -158, -158, 201, 115, -1, -158, -158, 204, -8,
    -158, -5, 6, -158, -158, 110, -65, -131, -4, -158,
      48, -158, 16, -149, -158, -158, -22, -157, -104, -158
};


static const yytype_int16 yydefgoto[] =
{
      -1, 2, 3, 30, 118, 110, 31, 32, 115, 24,
     197, 198, 25, 44, 127, 136, 249, 213, 26, 125,
     126, 181, 182, 183, 222, 228, 229, 81, 82, 83
};




static const yytype_int16 yytable[] =
{
      23, 4, 5, 6, 7, 8, 42, 38, 39, 37,
      52, 195, 40, 111, 48, 215, 45, 47, 217, 218,
      56, 112, 120, 230, 257, 143, 53, 15, 80, 119,
     221, 123, 124, 264, 116, 116, 1, 143, 16, 211,
     144, 49, 258, 27, 16, 145, 207, 208, 219, 209,
     212, 239, 144, 265, 33, 178, 111, 18, 179, 19,
     180, 20, 21, 111, 22, 207, 208, 43, 242, 196,
      34, 131, 113, 114, 105, 106, 107, 147, 108, 28,
      29, 254, 267, 153, 154, 155, 156, 157, 158, 159,
     160, 161, 162, 163, 164, 165, 166, 167, 168, 169,
     170, 171, 172, 173, 174, 175, 176, 230, 283, 240,
     284, 285, 120, 188, 288, 113, 114, 290, 192, 184,
     193, 35, 113, 114, 281, 282, 36, 128, 199, 201,
     129, 244, 205, 245, 133, 111, 41, 134, 300, 135,
     214, 139, 214, 132, 137, 214, 214, 202, 203, 80,
     306, 140, 141, 57, 146, 148, 58, 149, 80, 52,
     150, 152, 177, 151, 206, 59, 60, 61, 62, 63,
      64, 65, 66, 67, 68, 69, 70, 71, 72, 73,
      74, 75, 76, 77, 189, 235, 227, 108, 220, 231,
     232, 124, 233, 16, 113, 114, -115, 4, 5, 6,
       7, 8, 234, 236, 243, 252, 250, 253, 214, 255,
     251, 256, 78, 262, 79, 272, 259, 260, 263, 273,
    -151, 266, 275, 15, 261, -114, 287, 291, 292, 299,
     301, 268, 121, 117, 16, 190, 271, 194, 307, 274,
     241, 0, 289, 0, 0, 0, 276, 277, 0, 278,
     279, 214, 214, 18, 0, 19, 0, 20, 21, 0,
      22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     227, 0, 0, 0, 294, 0, 0, 0, 0, -72,
      50, 0, 0, 51, -72, 0, 52, 0, -72, -72,
     -72, -72, -72, 0, 0, 303, 304, 305, -72, -72,
     -72, 0, 0, -72, -72, -72, 0, -72, 311, 0,
       0, -72, -72, -72, -72, -72, -72, -72, -72, 0,
      16, 0, 0, -72, 0, 0, -72, -72, -72, -72,
     -72, -72, -72, -72, -72, -72, 0, -72, -72, 0,
     -72, 0, -72, -72, -72, -72, 210, -72, 0, 58,
       0, 0, 52, 0, 0, 0, 0, 0, 59, 60,
      61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
      71, 72, 73, 74, 75, 76, 77, 0, 0, 0,
    -152, -152, 0, 0, 0, 0, 16, 0, 0, 185,
       0, 0, 4, 5, 6, 7, 8, 0, 0, 0,
       0, 0, 9, 0, 0, 78, 10, 79, -152, -152,
      11, 12, 0, -151, 0, 13, 0, 14, 15, 0,
    -152, -152, 103, 104, 105, 106, 107, 0, 108, 16,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 17, 0, 0, 0, 0, 85, 86, 18, 0,
      19, 186, 20, 21, 187, 22, 54, 0, 0, 4,
       5, 6, 7, 8, 0, 0, 0, 0, 0, 9,
       0, 0, 0, 10, 96, 97, 0, 11, 12, 0,
       0, 0, 13, 0, 14, 15, 101, 102, 103, 104,
     105, 106, 107, 0, 108, 0, 16, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
       0, 0, 0, 0, 0, 18, 0, 19, 0, 20,
      21, 55, 22, 46, 0, 0, 4, 5, 6, 7,
       8, 0, 0, 0, 0, 0, 9, 0, 0, 0,
      10, 0, 0, 0, 11, 12, 0, 0, 0, 13,
       0, 14, 15, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
       0, 0, 18, 0, 19, 0, 20, 21, 200, 22,
       0, 4, 5, 6, 7, 8, 0, 0, 0, 0,
       0, 9, 0, 0, 0, 10, 0, 0, 0, 11,
      12, 0, 0, 0, 13, 0, 14, 15, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      17, 0, 0, 0, 0, 0, 0, 18, 0, 19,
       0, 20, 21, 204, 22, 0, 4, 5, 6, 7,
       8, 0, 0, 0, 0, 0, 9, 0, 0, 0,
      10, 0, 0, 0, 11, 12, 0, 0, 0, 13,
       0, 14, 15, 0, 4, 5, 6, 7, 8, 0,
       0, 0, 0, 16, 9, 0, 0, 0, 10, 0,
       0, 0, 11, 12, 0, 17, 0, 13, 0, 14,
      15, 0, 18, 0, 19, 0, 20, 21, 0, 22,
       0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 17, 0, 0, 0, 0, 0, 122,
      18, 0, 19, 0, 20, 21, 0, 22, 4, 5,
       6, 7, 8, 0, 0, 0, 0, 0, 9, 0,
       0, 0, 10, 0, 0, 0, 11, 12, 0, 0,
       0, 13, 0, 14, 15, 0, 4, 5, 6, 7,
       8, 0, 0, 0, 0, 16, 9, 0, 0, 0,
      10, 0, 0, 0, 11, 12, 0, 17, 0, 13,
       0, 14, 15, 0, 18, 0, 19, 0, 20, 21,
     270, 22, 0, 16, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
       0, 0, 18, 0, 19, 223, 20, 21, 224, 22,
       0, 52, 0, 0, 0, 0, 0, 59, 60, 61,
      62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
      72, 73, 74, 75, 76, 77, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 16, 84, 85, 86, 87,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 88, 89, 225, 0, 226, 0, 0, 90,
      91, 92, 93, 94, 95, 96, 97, 0, 0, 0,
       0, 0, 0, 0, 98, 99, 100, 101, 102, 103,
     104, 105, 106, 107, 0, 108, 84, 85, 86, 87,
     237, 0, 0, 238, 0, 0, 0, 0, 0, 0,
       0, 0, 88, 89, 0, 0, 0, 0, 0, 90,
      91, 92, 93, 94, 95, 96, 97, 0, 0, 0,
       0, 0, 0, 0, 98, 99, 100, 101, 102, 103,
     104, 105, 106, 107, 0, 108, 84, 85, 86, 87,
       0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
       0, 0, 88, 89, 0, 0, 0, 0, 0, 90,
      91, 92, 93, 94, 95, 96, 97, 0, 0, 0,
       0, 0, 0, 0, 98, 99, 100, 101, 102, 103,
     104, 105, 106, 107, 0, 108, 84, 85, 86, 87,
       0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
       0, 0, 88, 89, 0, 0, 0, 0, 0, 90,
      91, 92, 93, 94, 95, 96, 97, 0, 0, 0,
       0, 0, 0, 0, 98, 99, 100, 101, 102, 103,
     104, 105, 106, 107, 0, 108, 84, 85, 86, 87,
       0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
       0, 0, 88, 89, 0, 0, 0, 0, 0, 90,
      91, 92, 93, 94, 95, 96, 97, 0, 0, 0,
       0, 0, 0, 0, 98, 99, 100, 101, 102, 103,
     104, 105, 106, 107, 0, 108, 309, 0, 310, 84,
      85, 86, 87, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 88, 89, 0, 0, 0,
       0, 0, 90, 91, 92, 93, 94, 95, 96, 97,
       0, 0, 0, 84, 85, 86, 87, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 0, 108, 88,
      89, 138, 0, 0, 0, 0, 90, 91, 92, 93,
      94, 95, 96, 97, 0, 0, 0, 84, 85, 86,
      87, 98, 99, 100, 101, 102, 103, 104, 105, 106,
     107, 0, 108, 88, 89, 216, 0, 0, 0, 0,
      90, 91, 92, 93, 94, 95, 96, 97, 0, 0,
       0, 84, 85, 86, 87, 98, 99, 100, 101, 102,
     103, 104, 105, 106, 107, 0, 108, 88, 89, 286,
       0, 0, 0, 0, 90, 91, 92, 93, 94, 95,
      96, 97, 0, 0, 0, 84, 85, 86, 87, 98,
      99, 100, 101, 102, 103, 104, 105, 106, 107, 0,
     108, 88, 89, 308, 0, 0, 0, 0, 90, 91,
      92, 93, 94, 95, 96, 97, 0, 0, 0, 84,
      85, 86, 87, 98, 99, 100, 101, 102, 103, 104,
     105, 106, 107, 0, 108, 88, 89, 312, 0, 0,
       0, 0, 90, 91, 92, 93, 94, 95, 96, 97,
       0, 0, 0, 0, 0, 0, 0, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 0, 108, 109,
      84, 85, 86, 87, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 88, 89, 0, 0,
       0, 0, 0, 90, 91, 92, 93, 94, 95, 96,
      97, 0, 0, 0, 0, 0, 0, 0, 98, 99,
     100, 101, 102, 103, 104, 105, 106, 107, 0, 108,
     191, 84, 85, 86, 87, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 88, 89, 0,
       0, 0, 0, 0, 90, 91, 92, 93, 94, 95,
      96, 97, 0, 0, 0, 0, 0, 0, 0, 98,
      99, 100, 101, 102, 103, 104, 105, 106, 107, 0,
     108, 246, 84, 85, 86, 87, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 88, 89,
       0, 0, 0, 0, 0, 90, 91, 92, 93, 94,
      95, 96, 97, 0, 0, 0, 0, 0, 0, 0,
      98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
       0, 108, 297, 84, 85, 86, 87, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
      89, 0, 0, 0, 0, 0, 90, 91, 92, 93,
      94, 95, 96, 97, 0, 0, 0, 0, 0, 0,
       0, 98, 99, 100, 101, 102, 103, 104, 105, 106,
     107, 0, 108, 298, 84, 85, 86, 87, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      88, 89, 0, 0, 0, 0, 0, 90, 91, 92,
      93, 94, 95, 96, 97, 0, 0, 0, 0, 0,
       0, 0, 98, 99, 100, 101, 102, 103, 104, 105,
     106, 107, 0, 108, 302, 84, 85, 86, 87, 0,
       0, 0, 0, 0, 0, 0, 247, 248, 0, 0,
       0, 88, 89, 0, 0, 0, 0, 0, 90, 91,
      92, 93, 94, 95, 96, 97, 0, 0, 0, 0,
       0, 0, 0, 98, 99, 100, 101, 102, 103, 104,
     105, 106, 107, 0, 108, 84, 85, 86, 87, 0,
       0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
       0, 88, 89, 0, 0, 0, 0, 0, 90, 91,
      92, 93, 94, 95, 96, 97, 0, 0, 0, 84,
      85, 86, 87, 98, 99, 100, 101, 102, 103, 104,
     105, 106, 107, 0, 108, 88, 89, 0, 0, 0,
       0, 0, 90, 91, 92, 93, 94, 95, 96, 97,
       0, 0, 0, 0, 280, 0, 0, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 0, 108, 84,
      85, 86, 87, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 295, 88, 89, 0, 0, 0,
       0, 0, 90, 91, 92, 93, 94, 95, 96, 97,
       0, 0, 0, 0, 0, 0, 0, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 0, 108, 84,
      85, 86, 87, 0, 0, 0, 0, 0, 0, 296,
       0, 0, 0, 0, 0, 88, 89, 0, 0, 0,
       0, 0, 90, 91, 92, 93, 94, 95, 96, 97,
       0, 0, 0, 84, 85, 86, 87, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 0, 108, 88,
      89, 0, 0, 0, 0, 0, 90, 91, 92, 93,
      94, 95, 96, 97, 0, 0, 0, 84, 85, 86,
      87, 98, 99, 100, 101, 102, 103, 104, 105, 106,
     107, 0, 108, 88, 89, 0, 0, 0, 0, 0,
      90, 91, 92, 93, 94, 95, 96, 97, 0, 0,
       0, -152, 85, 86, 0, 0, 0, 100, 101, 102,
     103, 104, 105, 106, 107, 0, 108, 88, 89, 0,
       0, 0, 0, 0, -152, -152, -152, -152, -152, -152,
      96, 97, 0, 0, 85, 86, 0, 0, 0, 0,
       0, -152, 101, 102, 103, 104, 105, 106, 107, 88,
     108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 96, 97, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 101, 102, 103, 104, 105, 106,
     107, 0, 108
};

static const yytype_int16 yycheck[] =
{
       1, 4, 5, 6, 7, 8, 1, 11, 12, 10,
       7, 4, 13, 5, 4, 146, 17, 18, 149, 150,
      21, 13, 30, 180, 48, 48, 20, 30, 22, 30,
     179, 32, 33, 48, 28, 29, 15, 48, 41, 143,
      63, 31, 66, 0, 41, 68, 42, 43, 152, 45,
      53, 4, 63, 68, 60, 62, 5, 60, 65, 62,
      67, 64, 65, 5, 67, 42, 43, 62, 45, 62,
      58, 13, 64, 65, 54, 55, 56, 78, 58, 16,
      17, 212, 231, 84, 85, 86, 87, 88, 89, 90,
      91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 264, 257, 62,
     259, 260, 120, 114, 263, 64, 65, 266, 59, 113,
      61, 41, 64, 65, 255, 256, 4, 60, 129, 130,
      63, 59, 133, 61, 28, 5, 62, 4, 287, 4,
     144, 1, 146, 13, 61, 149, 150, 131, 132, 143,
     299, 58, 66, 1, 63, 4, 4, 63, 152, 7,
      63, 48, 58, 68, 47, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
      28, 29, 30, 31, 13, 186, 180, 58, 4, 40,
      47, 192, 58, 41, 64, 65, 40, 4, 5, 6,
       7, 8, 66, 58, 4, 206, 60, 208, 212, 47,
      60, 63, 60, 4, 62, 58, 63, 63, 63, 4,
      68, 63, 63, 30, 225, 40, 63, 58, 58, 63,
      58, 232, 31, 29, 41, 120, 237, 127, 303, 244,
     192, -1, 264, -1, -1, -1, 247, 248, -1, 250,
     251, 255, 256, 60, -1, 62, -1, 64, 65, -1,
      67, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     264, -1, -1, -1, 275, -1, -1, -1, -1, 0,
       1, -1, -1, 4, 5, -1, 7, -1, 9, 10,
      11, 12, 13, -1, -1, 296, 297, 298, 19, 20,
      21, -1, -1, 24, 25, 26, -1, 28, 309, -1,
      -1, 32, 33, 34, 35, 36, 37, 38, 39, -1,
      41, -1, -1, 44, -1, -1, 47, 48, 49, 50,
      51, 52, 53, 54, 55, 56, -1, 58, 59, -1,
      61, -1, 63, 64, 65, 66, 1, 68, -1, 4,
      -1, -1, 7, -1, -1, -1, -1, -1, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 29, 30, 31, -1, -1, -1,
      10, 11, -1, -1, -1, -1, 41, -1, -1, 1,
      -1, -1, 4, 5, 6, 7, 8, -1, -1, -1,
      -1, -1, 14, -1, -1, 60, 18, 62, 38, 39,
      22, 23, -1, 68, -1, 27, -1, 29, 30, -1,
      50, 51, 52, 53, 54, 55, 56, -1, 58, 41,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 53, -1, -1, -1, -1, 10, 11, 60, -1,
      62, 63, 64, 65, 66, 67, 1, -1, -1, 4,
       5, 6, 7, 8, -1, -1, -1, -1, -1, 14,
      -1, -1, -1, 18, 38, 39, -1, 22, 23, -1,
      -1, -1, 27, -1, 29, 30, 50, 51, 52, 53,
      54, 55, 56, -1, 58, -1, 41, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 53, -1,
      -1, -1, -1, -1, -1, 60, -1, 62, -1, 64,
      65, 66, 67, 1, -1, -1, 4, 5, 6, 7,
       8, -1, -1, -1, -1, -1, 14, -1, -1, -1,
      18, -1, -1, -1, 22, 23, -1, -1, -1, 27,
      -1, 29, 30, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 41, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 53, -1, -1, -1, -1,
      -1, -1, 60, -1, 62, -1, 64, 65, 1, 67,
      -1, 4, 5, 6, 7, 8, -1, -1, -1, -1,
      -1, 14, -1, -1, -1, 18, -1, -1, -1, 22,
      23, -1, -1, -1, 27, -1, 29, 30, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 41, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      53, -1, -1, -1, -1, -1, -1, 60, -1, 62,
      -1, 64, 65, 1, 67, -1, 4, 5, 6, 7,
       8, -1, -1, -1, -1, -1, 14, -1, -1, -1,
      18, -1, -1, -1, 22, 23, -1, -1, -1, 27,
      -1, 29, 30, -1, 4, 5, 6, 7, 8, -1,
      -1, -1, -1, 41, 14, -1, -1, -1, 18, -1,
      -1, -1, 22, 23, -1, 53, -1, 27, -1, 29,
      30, -1, 60, -1, 62, -1, 64, 65, -1, 67,
      -1, 41, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 53, -1, -1, -1, -1, -1, 59,
      60, -1, 62, -1, 64, 65, -1, 67, 4, 5,
       6, 7, 8, -1, -1, -1, -1, -1, 14, -1,
      -1, -1, 18, -1, -1, -1, 22, 23, -1, -1,
      -1, 27, -1, 29, 30, -1, 4, 5, 6, 7,
       8, -1, -1, -1, -1, 41, 14, -1, -1, -1,
      18, -1, -1, -1, 22, 23, -1, 53, -1, 27,
      -1, 29, 30, -1, 60, -1, 62, -1, 64, 65,
      66, 67, -1, 41, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 53, -1, -1, -1, -1,
      -1, -1, 60, -1, 62, 1, 64, 65, 4, 67,
      -1, 7, -1, -1, -1, -1, -1, 13, 14, 15,
      16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
      26, 27, 28, 29, 30, 31, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 41, 9, 10, 11, 12,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 25, 26, 60, -1, 62, -1, -1, 32,
      33, 34, 35, 36, 37, 38, 39, -1, -1, -1,
      -1, -1, -1, -1, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, -1, 58, 9, 10, 11, 12,
      63, -1, -1, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, 25, 26, -1, -1, -1, -1, -1, 32,
      33, 34, 35, 36, 37, 38, 39, -1, -1, -1,
      -1, -1, -1, -1, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, -1, 58, 9, 10, 11, 12,
      -1, -1, -1, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, 25, 26, -1, -1, -1, -1, -1, 32,
      33, 34, 35, 36, 37, 38, 39, -1, -1, -1,
      -1, -1, -1, -1, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, -1, 58, 9, 10, 11, 12,
      -1, -1, -1, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, 25, 26, -1, -1, -1, -1, -1, 32,
      33, 34, 35, 36, 37, 38, 39, -1, -1, -1,
      -1, -1, -1, -1, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, -1, 58, 9, 10, 11, 12,
      -1, -1, -1, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, 25, 26, -1, -1, -1, -1, -1, 32,
      33, 34, 35, 36, 37, 38, 39, -1, -1, -1,
      -1, -1, -1, -1, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, -1, 58, 59, -1, 61, 9,
      10, 11, 12, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 25, 26, -1, -1, -1,
      -1, -1, 32, 33, 34, 35, 36, 37, 38, 39,
      -1, -1, -1, 9, 10, 11, 12, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, -1, 58, 25,
      26, 61, -1, -1, -1, -1, 32, 33, 34, 35,
      36, 37, 38, 39, -1, -1, -1, 9, 10, 11,
      12, 47, 48, 49, 50, 51, 52, 53, 54, 55,
      56, -1, 58, 25, 26, 61, -1, -1, -1, -1,
      32, 33, 34, 35, 36, 37, 38, 39, -1, -1,
      -1, 9, 10, 11, 12, 47, 48, 49, 50, 51,
      52, 53, 54, 55, 56, -1, 58, 25, 26, 61,
      -1, -1, -1, -1, 32, 33, 34, 35, 36, 37,
      38, 39, -1, -1, -1, 9, 10, 11, 12, 47,
      48, 49, 50, 51, 52, 53, 54, 55, 56, -1,
      58, 25, 26, 61, -1, -1, -1, -1, 32, 33,
      34, 35, 36, 37, 38, 39, -1, -1, -1, 9,
      10, 11, 12, 47, 48, 49, 50, 51, 52, 53,
      54, 55, 56, -1, 58, 25, 26, 61, -1, -1,
      -1, -1, 32, 33, 34, 35, 36, 37, 38, 39,
      -1, -1, -1, -1, -1, -1, -1, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, -1, 58, 59,
       9, 10, 11, 12, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 25, 26, -1, -1,
      -1, -1, -1, 32, 33, 34, 35, 36, 37, 38,
      39, -1, -1, -1, -1, -1, -1, -1, 47, 48,
      49, 50, 51, 52, 53, 54, 55, 56, -1, 58,
      59, 9, 10, 11, 12, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 25, 26, -1,
      -1, -1, -1, -1, 32, 33, 34, 35, 36, 37,
      38, 39, -1, -1, -1, -1, -1, -1, -1, 47,
      48, 49, 50, 51, 52, 53, 54, 55, 56, -1,
      58, 59, 9, 10, 11, 12, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 25, 26,
      -1, -1, -1, -1, -1, 32, 33, 34, 35, 36,
      37, 38, 39, -1, -1, -1, -1, -1, -1, -1,
      47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
      -1, 58, 59, 9, 10, 11, 12, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 25,
      26, -1, -1, -1, -1, -1, 32, 33, 34, 35,
      36, 37, 38, 39, -1, -1, -1, -1, -1, -1,
      -1, 47, 48, 49, 50, 51, 52, 53, 54, 55,
      56, -1, 58, 59, 9, 10, 11, 12, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      25, 26, -1, -1, -1, -1, -1, 32, 33, 34,
      35, 36, 37, 38, 39, -1, -1, -1, -1, -1,
      -1, -1, 47, 48, 49, 50, 51, 52, 53, 54,
      55, 56, -1, 58, 59, 9, 10, 11, 12, -1,
      -1, -1, -1, -1, -1, -1, 20, 21, -1, -1,
      -1, 25, 26, -1, -1, -1, -1, -1, 32, 33,
      34, 35, 36, 37, 38, 39, -1, -1, -1, -1,
      -1, -1, -1, 47, 48, 49, 50, 51, 52, 53,
      54, 55, 56, -1, 58, 9, 10, 11, 12, -1,
      -1, -1, -1, -1, -1, 19, -1, -1, -1, -1,
      -1, 25, 26, -1, -1, -1, -1, -1, 32, 33,
      34, 35, 36, 37, 38, 39, -1, -1, -1, 9,
      10, 11, 12, 47, 48, 49, 50, 51, 52, 53,
      54, 55, 56, -1, 58, 25, 26, -1, -1, -1,
      -1, -1, 32, 33, 34, 35, 36, 37, 38, 39,
      -1, -1, -1, -1, 44, -1, -1, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, -1, 58, 9,
      10, 11, 12, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 24, 25, 26, -1, -1, -1,
      -1, -1, 32, 33, 34, 35, 36, 37, 38, 39,
      -1, -1, -1, -1, -1, -1, -1, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, -1, 58, 9,
      10, 11, 12, -1, -1, -1, -1, -1, -1, 19,
      -1, -1, -1, -1, -1, 25, 26, -1, -1, -1,
      -1, -1, 32, 33, 34, 35, 36, 37, 38, 39,
      -1, -1, -1, 9, 10, 11, 12, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, -1, 58, 25,
      26, -1, -1, -1, -1, -1, 32, 33, 34, 35,
      36, 37, 38, 39, -1, -1, -1, 9, 10, 11,
      12, 47, 48, 49, 50, 51, 52, 53, 54, 55,
      56, -1, 58, 25, 26, -1, -1, -1, -1, -1,
      32, 33, 34, 35, 36, 37, 38, 39, -1, -1,
      -1, 9, 10, 11, -1, -1, -1, 49, 50, 51,
      52, 53, 54, 55, 56, -1, 58, 25, 26, -1,
      -1, -1, -1, -1, 32, 33, 34, 35, 36, 37,
      38, 39, -1, -1, 10, 11, -1, -1, -1, -1,
      -1, 49, 50, 51, 52, 53, 54, 55, 56, 25,
      58, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 38, 39, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 50, 51, 52, 53, 54, 55,
      56, -1, 58
};



static const yytype_uint8 yystos[] =
{
       0, 15, 70, 71, 4, 5, 6, 7, 8, 14,
      18, 22, 23, 27, 29, 30, 41, 53, 60, 62,
      64, 65, 67, 74, 78, 81, 87, 0, 16, 17,
      72, 75, 76, 60, 58, 41, 4, 74, 87, 87,
      74, 62, 1, 62, 82, 74, 1, 74, 4, 31,
       1, 4, 7, 81, 1, 66, 74, 1, 4, 13,
      14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
      24, 25, 26, 27, 28, 29, 30, 31, 60, 62,
      81, 96, 97, 98, 9, 10, 11, 12, 25, 26,
      32, 33, 34, 35, 36, 37, 38, 39, 47, 48,
      49, 50, 51, 52, 53, 54, 55, 56, 58, 59,
      74, 5, 13, 64, 65, 77, 81, 77, 73, 74,
      78, 72, 59, 74, 74, 88, 89, 83, 60, 63,
      19, 13, 13, 28, 4, 4, 84, 61, 61, 1,
      58, 66, 66, 48, 63, 68, 63, 74, 4, 63,
      63, 68, 48, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 58, 62, 65,
      67, 90, 91, 92, 81, 1, 63, 66, 74, 13,
      73, 59, 59, 61, 84, 4, 62, 79, 80, 74,
       1, 74, 91, 91, 1, 74, 47, 42, 43, 45,
       1, 97, 53, 86, 87, 86, 61, 86, 86, 97,
       4, 92, 93, 1, 4, 60, 62, 81, 94, 95,
      96, 40, 47, 58, 66, 74, 58, 63, 66, 4,
      62, 89, 45, 4, 59, 61, 59, 20, 21, 85,
      60, 60, 74, 74, 86, 47, 63, 48, 66, 63,
      63, 74, 4, 63, 48, 68, 63, 92, 74, 66,
      66, 74, 58, 4, 80, 63, 74, 74, 74, 74,
      44, 86, 86, 92, 92, 92, 61, 63, 92, 95,
      92, 58, 58, 66, 74, 24, 19, 59, 59, 63,
      92, 58, 59, 74, 74, 74, 92, 85, 61, 59,
      61, 74, 61
};


static const yytype_uint8 yyr1[] =
{
       0, 69, 70, 70, 71, 71, 72, 72, 73, 73,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 75, 75,
      76, 76, 76, 77, 78, 78, 79, 79, 80, 80,
      82, 81, 83, 81, 84, 84, 84, 85, 85, 86,
      86, 86, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 88, 88, 89, 90, 90, 91, 91, 92, 92,
      92, 93, 93, 94, 94, 95, 95, 95, 95, 95,
      95, 95, 96, 96, 96, 96, 96, 96, 96, 96,
      96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
      96, 97, 97, 97, 97, 98, 98, 98, 98, 98,
      98, 98, 98
};


static const yytype_uint8 yyr2[] =
{
       0, 2, 3, 3, 0, 3, 0, 2, 0, 2,
       2, 5, 9, 11, 9, 5, 4, 4, 2, 4,
       5, 2, 3, 3, 3, 3, 3, 3, 3, 3,
       3, 3, 2, 3, 3, 3, 3, 3, 3, 3,
       3, 3, 3, 3, 3, 3, 3, 1, 2, 3,
       5, 4, 2, 1, 5, 8, 1, 3, 2, 1,
       0, 4, 0, 5, 0, 2, 4, 5, 3, 3,
       2, 1, 1, 1, 3, 2, 3, 2, 4, 3,
       2, 1, 3, 2, 2, 3, 5, 4, 4, 3,
       7, 6, 6, 6, 5, 5, 1, 1, 1, 3,
       3, 2, 3, 2, 2, 1, 4, 3, 3, 4,
       3, 1, 3, 1, 3, 1, 3, 1, 2, 3,
       3, 1, 3, 1, 3, 2, 4, 3, 3, 3,
       5, 3, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 0, 1, 3, 3, 3, 3, 3, 1, 2,
       1, 5, 3
};
static char *
yystpcpy (int *data_flow, char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
static unsigned int
yytnamerr (int *data_flow, char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      unsigned int yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;

          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (data_flow, yyres, yystr) - yyres;
}
static int
yysyntax_error (int *data_flow, unsigned int *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  unsigned int yysize0 = yytnamerr (data_flow, 0, yytname[yytoken]);
  unsigned int yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };

  const char *yyformat = 0;

  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];


  int yycount = 0;
  if (yytoken != (-2))
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!(!!((yyn) == (-158))))
        {



          int yyxbegin = yyn < 0 ? -yyn : 0;

          int yychecklim = 1972 - yyn + 1;
          int yyxend = yychecklim < 69 ? yychecklim : 69;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != 1
                && !(!!((yytable[yyx + yyn]) == (-152))))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  unsigned int yysize1 = yysize + yytnamerr (data_flow, 0, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= ((unsigned int) -1)))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {




      case 0: yyformat = "syntax error"; break;
      case 1: yyformat = "syntax error, unexpected %s"; break;
      case 2: yyformat = "syntax error, unexpected %s, expecting %s"; break;
      case 3: yyformat = "syntax error, unexpected %s, expecting %s or %s"; break;
      case 4: yyformat = "syntax error, unexpected %s, expecting %s or %s or %s"; break;
      case 5: yyformat = "syntax error, unexpected %s, expecting %s or %s or %s or %s"; break;

    }

  {
    unsigned int yysize1 = yysize + strlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= ((unsigned int) -1)))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= ((unsigned int) -1)))
        *yymsg_alloc = ((unsigned int) -1);
      return 1;
    }




  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (data_flow, yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}






static void
yydestruct (int *data_flow, const char *yymsg, int yytype, YYSTYPE *yyvaluep, location *yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  ((void) (yyvaluep));
  ((void) (yylocationp));
  ((void) (answer));
  ((void) (errors));
  ((void) (locations));
  ((void) (lexer_param_ptr));
  if (!yymsg)
    yymsg = "Deleting";
  ;

 
 
 
 
  switch (yytype)
    {
          case 4:
      { jv_free(((*yyvaluep).literal)); }
        break;

    case 5:
      { jv_free(((*yyvaluep).literal)); }
        break;

    case 6:
      { jv_free(((*yyvaluep).literal)); }
        break;

    case 7:
      { jv_free(((*yyvaluep).literal)); }
        break;

    case 42:
      { jv_free(((*yyvaluep).literal)); }
        break;

    case 71:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 72:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 73:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 74:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 75:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 76:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 77:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 78:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 79:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 80:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 81:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 84:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 85:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 86:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 87:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 88:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 89:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 90:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 91:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 92:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 93:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 94:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 95:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 96:
      { jv_free(((*yyvaluep).literal)); }
        break;

    case 97:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;

    case 98:
      { block_free(data_flow, ((*yyvaluep).blk)); }
        break;


      default:
        break;
    }
 
 
}
int
yyparse (int *data_flow, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{

int yychar;






YYSTYPE yylval ;


static location yyloc_default



;
location yylloc = yyloc_default;


    int yynerrs;

    int yystate;

    int yyerrstatus;
    yytype_int16 yyssa[200];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;


    YYSTYPE yyvsa[200];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;


    location yylsa[200];
    location *yyls;
    location *yylsp;


    location yyerror_range[3];

    unsigned int yystacksize;

  int yyn;
  int yyresult;

  int yytoken = 0;


  YYSTYPE yyval;
  location yyloc;



  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  unsigned int yymsg_alloc = sizeof yymsgbuf;






  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = 200;

  ;

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = (-2);
  yylsp[0] = yylloc;
  goto yysetstate;




 yynewstate:


  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {

      unsigned int yysize = yyssp - yyss + 1;
      if (10000 <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (10000 < yystacksize)
        yystacksize = 10000;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) jv_mem_alloc (((yystacksize) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (location)) + 2 * (sizeof (union yyalloc) - 1)));
        if (! yyptr)
          goto yyexhaustedlab;
        do { unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyss_alloc, yyss, (yysize) * sizeof (*(yyss))); yyss = &yyptr->yyss_alloc; yynewbytes = yystacksize * sizeof (*yyss) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);
        do { unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyvs_alloc, yyvs, (yysize) * sizeof (*(yyvs))); yyvs = &yyptr->yyvs_alloc; yynewbytes = yystacksize * sizeof (*yyvs) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);
        do { unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyls_alloc, yyls, (yysize) * sizeof (*(yyls))); yyls = &yyptr->yyls_alloc; yynewbytes = yystacksize * sizeof (*yyls) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);

        if (yyss1 != yyssa)
          jv_mem_free (yyss1);
      }



      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

     
                                                   ;

      if (yyss + yystacksize - 1 <= yyssp)
        goto yyabortlab;
    }

  ;

  if (yystate == 27)
    goto yyacceptlab;

  goto yybackup;




yybackup:





  yyn = yypact[yystate];
  if ((!!((yyn) == (-158))))
    goto yydefault;




  if (yychar == (-2))
    {
      ;
      yychar = yylex (data_flow, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }

  if (yychar <= 0)
    {
      yychar = yytoken = 0;
      ;
    }
  else
    {
      yytoken = ((unsigned int) (yychar) <= 302 ? yytranslate[yychar] : 2);
      ;
    }



  yyn += yytoken;
  if (yyn < 0 || 1972 < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if ((!!((yyn) == (-152))))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }



  if (yyerrstatus)
    yyerrstatus--;


  ;


  yychar = (-2);

  yystate = yyn;
 
 
 
 
  *++yyvsp = yylval;
 
 
  *++yylsp = yylloc;
  goto yynewstate;





yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;





yyreduce:

  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen];


  do { if (yylen) { (yyloc).start = (((yylsp - yylen))[1]).start; (yyloc).end = (((yylsp - yylen))[yylen]).end; } else { (yyloc).start = (((yylsp - yylen))[0]).end; (yyloc).end = (((yylsp - yylen))[0]).end; } } while (0);
  ;
  switch (yyn)
    {
        case 2:
    {
  *answer = (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, ((yyvsp[-2].blk)),((yyvsp[-1].blk)))),(gen_op_simple(data_flow, TOP)))),((yyvsp[0].blk))));
}
    break;

  case 3:
    {
  *answer = (block_join(data_flow, (block_join(data_flow, ((yyvsp[-2].blk)),((yyvsp[-1].blk)))),((yyvsp[0].blk))));
}
    break;

  case 4:
    {
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 5:
    {
  if (!block_is_const(data_flow, (yyvsp[-1].blk))) {
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Module metadata must be constant"); ; } while (0);
    (yyval.blk) = gen_noop(data_flow);
    block_free(data_flow, (yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_module(data_flow, (yyvsp[-1].blk));
  }
}
    break;

  case 6:
    {
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 7:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-1].blk)),((yyvsp[0].blk))));
}
    break;

  case 8:
    {
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 9:
    {
  (yyval.blk) = block_bind(data_flow, (yyvsp[-1].blk), (yyvsp[0].blk), OP_IS_CALL_PSEUDO);
}
    break;

  case 10:
    {
  (yyval.blk) = block_bind_referenced(data_flow, (yyvsp[-1].blk), (yyvsp[0].blk), OP_IS_CALL_PSEUDO);
}
    break;

  case 11:
    {
  (yyval.blk) = gen_destructure(data_flow, (yyvsp[-4].blk), (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 12:
    {
  (yyval.blk) = gen_reduce(data_flow, (yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
    break;

  case 13:
    {
  (yyval.blk) = gen_foreach(data_flow, (yyvsp[-9].blk), (yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
    break;

  case 14:
    {
  (yyval.blk) = gen_foreach(data_flow, (yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), gen_noop(data_flow));
}
    break;

  case 15:
    {
  (yyval.blk) = gen_cond(data_flow, (yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
    break;

  case 16:
    {
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Possibly unterminated 'if' statement"); ; } while (0);
  (yyval.blk) = (yyvsp[-2].blk);
}
    break;

  case 17:
    {

  (yyval.blk) = gen_try(data_flow, (yyvsp[-2].blk), gen_try_handler(data_flow, (yyvsp[0].blk)));
}
    break;

  case 18:
    {

  (yyval.blk) = gen_try(data_flow, (yyvsp[0].blk), gen_op_simple(data_flow, BACKTRACK));
}
    break;

  case 19:
    {
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Possibly unterminated 'try' statement"); ; } while (0);
  (yyval.blk) = (yyvsp[-2].blk);
}
    break;

  case 20:
    {
  jv v = jv_string_fmt(data_flow, "*label-%s", jv_string_value((yyvsp[-2].literal)));
  (yyval.blk) = gen_location(data_flow, (yyloc), locations, gen_label(data_flow, jv_string_value(v), (yyvsp[0].blk)));
  jv_free((yyvsp[-2].literal));
  jv_free(v);
}
    break;

  case 21:
    {
  (yyval.blk) = gen_try(data_flow, (yyvsp[-1].blk), gen_op_simple(data_flow, BACKTRACK));
}
    break;

  case 22:
    {
  (yyval.blk) = gen_call(data_flow, "_assign", (block_join(data_flow, (gen_lambda(data_flow, (yyvsp[-2].blk))),(gen_lambda(data_flow, (yyvsp[0].blk))))));
}
    break;

  case 23:
    {
  (yyval.blk) = gen_or(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 24:
    {
  (yyval.blk) = gen_and(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 25:
    {
  (yyval.blk) = gen_definedor(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 26:
    {
  (yyval.blk) = gen_definedor_assign(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 27:
    {
  (yyval.blk) = gen_call(data_flow, "_modify", (block_join(data_flow, (gen_lambda(data_flow, (yyvsp[-2].blk))),(gen_lambda(data_flow, (yyvsp[0].blk))))));
}
    break;

  case 28:
    {
  (yyval.blk) = block_join(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 29:
    {
  (yyval.blk) = gen_both(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 30:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
    break;

  case 31:
    {
  (yyval.blk) = gen_update(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
    break;

  case 32:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[0].blk)),(gen_call(data_flow, "_negate", gen_noop(data_flow)))));
}
    break;

  case 33:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
    break;

  case 34:
    {
  (yyval.blk) = gen_update(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
    break;

  case 35:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
    break;

  case 36:
    {
  (yyval.blk) = gen_update(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
    break;

  case 37:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '/');
  if (block_is_const_inf(data_flow, (yyval.blk)))
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Division by zero?"); ; } while (0);
}
    break;

  case 38:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '%');
  if (block_is_const_inf(data_flow, (yyval.blk)))
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Remainder by zero?"); ; } while (0);
}
    break;

  case 39:
    {
  (yyval.blk) = gen_update(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '/');
}
    break;

  case 40:
    {
  (yyval.blk) = gen_update(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '%');
}
    break;

  case 41:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), 265);
}
    break;

  case 42:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), 266);
}
    break;

  case 43:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '<');
}
    break;

  case 44:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), '>');
}
    break;

  case 45:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), 293);
}
    break;

  case 46:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk), 294);
}
    break;

  case 47:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 48:
    {
  (yyval.blk) = (yyvsp[-1].blk);
}
    break;

  case 49:
    {
  if (!block_is_const(data_flow, (yyvsp[-1].blk))) {
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Module metadata must be constant"); ; } while (0);
    (yyval.blk) = gen_noop(data_flow);
    block_free(data_flow, (yyvsp[-2].blk));
    block_free(data_flow, (yyvsp[-1].blk));
  } else if (block_const_kind(data_flow, (yyvsp[-1].blk)) != JV_KIND_OBJECT) {
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Module metadata must be an object"); ; } while (0);
    (yyval.blk) = gen_noop(data_flow);
    block_free(data_flow, (yyvsp[-2].blk));
    block_free(data_flow, (yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_import_meta(data_flow, (yyvsp[-2].blk), (yyvsp[-1].blk));
  }
}
    break;

  case 50:
    {
  jv v = block_const(data_flow, (yyvsp[-3].blk));


  (yyval.blk) = gen_import(data_flow, jv_string_value(v), jv_string_value((yyvsp[0].literal)), 1);
  block_free(data_flow, (yyvsp[-3].blk));
  jv_free((yyvsp[0].literal));
  jv_free(v);
}
    break;

  case 51:
    {
  jv v = block_const(data_flow, (yyvsp[-2].blk));
  (yyval.blk) = gen_import(data_flow, jv_string_value(v), jv_string_value((yyvsp[0].literal)), 0);
  block_free(data_flow, (yyvsp[-2].blk));
  jv_free((yyvsp[0].literal));
  jv_free(v);
}
    break;

  case 52:
    {
  jv v = block_const(data_flow, (yyvsp[0].blk));
  (yyval.blk) = gen_import(data_flow, jv_string_value(v), 
                                              ((void *)0)
                                                  , 0);
  block_free(data_flow, (yyvsp[0].blk));
  jv_free(v);
}
    break;

  case 53:
    {
  if (!block_is_const(data_flow, (yyvsp[0].blk))) {
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "Import path must be constant"); ; } while (0);
    (yyval.blk) = gen_const(data_flow, jv_string(""));
    block_free(data_flow, (yyvsp[0].blk));
  } else {
    (yyval.blk) = (yyvsp[0].blk);
  }
}
    break;

  case 54:
    {
  (yyval.blk) = gen_function(data_flow, jv_string_value((yyvsp[-3].literal)), gen_noop(data_flow), (yyvsp[-1].blk));
  jv_free((yyvsp[-3].literal));
}
    break;

  case 55:
    {
  (yyval.blk) = gen_function(data_flow, jv_string_value((yyvsp[-6].literal)), (yyvsp[-4].blk), (yyvsp[-1].blk));
  jv_free((yyvsp[-6].literal));
}
    break;

  case 56:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 57:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-2].blk)),((yyvsp[0].blk))));
}
    break;

  case 58:
    {
  (yyval.blk) = gen_param_regular(data_flow, jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
    break;

  case 59:
    {
  (yyval.blk) = gen_param(data_flow, jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
    break;

  case 60:
    { (yyval.literal) = jv_string("text"); }
    break;

  case 61:
    {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
    break;

  case 62:
    { (yyval.literal) = (yyvsp[-1].literal); }
    break;

  case 63:
    {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
    break;

  case 64:
    {
  (yyval.blk) = gen_const(data_flow, jv_string(""));
}
    break;

  case 65:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-1].blk), gen_const(data_flow, (yyvsp[0].literal)), '+');
}
    break;

  case 66:
    {
  (yyval.blk) = gen_binop(data_flow, (yyvsp[-3].blk), gen_format(data_flow, (yyvsp[-1].blk), jv_copy((yyvsp[-4].literal))), '+');
}
    break;

  case 67:
    {
  (yyval.blk) = gen_cond(data_flow, (yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
    break;

  case 68:
    {
  (yyval.blk) = (yyvsp[-1].blk);
}
    break;

  case 69:
    {
  (yyval.blk) = block_join(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 70:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[0].blk)),(gen_call(data_flow, "_negate", gen_noop(data_flow)))));
}
    break;

  case 71:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 72:
    {
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 73:
    {
  (yyval.blk) = gen_call(data_flow, "recurse", gen_noop(data_flow));
}
    break;

  case 74:
    {
  jv v = jv_string_fmt(data_flow, "*label-%s", jv_string_value((yyvsp[0].literal)));
  (yyval.blk) = gen_location(data_flow, (yyloc), locations,
                    (block_join(data_flow, (gen_op_unbound(data_flow, LOADV, jv_string_value(v))),(gen_call(data_flow, "error", gen_noop(data_flow)))))
                                                  );
  jv_free(v);
  jv_free((yyvsp[0].literal));
}
    break;

  case 75:
    {
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "break requires a label to break to"); ; } while (0);
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 76:
    {
  (yyval.blk) = gen_index_opt(data_flow, (yyvsp[-2].blk), gen_const(data_flow, (yyvsp[-1].literal)));
}
    break;

  case 77:
    {
  (yyval.blk) = gen_index_opt(data_flow, gen_noop(data_flow), gen_const(data_flow, (yyvsp[-1].literal)));
}
    break;

  case 78:
    {
  (yyval.blk) = gen_index_opt(data_flow, (yyvsp[-3].blk), (yyvsp[-1].blk));
}
    break;

  case 79:
    {
  (yyval.blk) = gen_index_opt(data_flow, gen_noop(data_flow), (yyvsp[-1].blk));
}
    break;

  case 80:
    {
  (yyval.blk) = gen_index(data_flow, (yyvsp[-1].blk), gen_const(data_flow, (yyvsp[0].literal)));
}
    break;

  case 81:
    {
  (yyval.blk) = gen_index(data_flow, gen_noop(data_flow), gen_const(data_flow, (yyvsp[0].literal)));
}
    break;

  case 82:
    {
  (yyval.blk) = gen_index(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 83:
    {
  (yyval.blk) = gen_index(data_flow, gen_noop(data_flow), (yyvsp[0].blk));
}
    break;

  case 84:
    {
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "try .[\"field\"] instead of .field for unusually named fields"); ; } while (0);
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 85:
    {
  jv_free((yyvsp[-1].literal));
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "try .[\"field\"] instead of .field for unusually named fields"); ; } while (0);
  (yyval.blk) = gen_noop(data_flow);
}
    break;

  case 86:
    {
  (yyval.blk) = gen_index_opt(data_flow, (yyvsp[-4].blk), (yyvsp[-2].blk));
}
    break;

  case 87:
    {
  (yyval.blk) = gen_index(data_flow, (yyvsp[-3].blk), (yyvsp[-1].blk));
}
    break;

  case 88:
    {
  (yyval.blk) = block_join(data_flow, (yyvsp[-3].blk), gen_op_simple(data_flow, EACH_OPT));
}
    break;

  case 89:
    {
  (yyval.blk) = block_join(data_flow, (yyvsp[-2].blk), gen_op_simple(data_flow, EACH));
}
    break;

  case 90:
    {
  (yyval.blk) = gen_slice_index(data_flow, (yyvsp[-6].blk), (yyvsp[-4].blk), (yyvsp[-2].blk), INDEX_OPT);
}
    break;

  case 91:
    {
  (yyval.blk) = gen_slice_index(data_flow, (yyvsp[-5].blk), (yyvsp[-3].blk), gen_const(data_flow, jv_null()), INDEX_OPT);
}
    break;

  case 92:
    {
  (yyval.blk) = gen_slice_index(data_flow, (yyvsp[-5].blk), gen_const(data_flow, jv_null()), (yyvsp[-2].blk), INDEX_OPT);
}
    break;

  case 93:
    {
  (yyval.blk) = gen_slice_index(data_flow, (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), INDEX);
}
    break;

  case 94:
    {
  (yyval.blk) = gen_slice_index(data_flow, (yyvsp[-4].blk), (yyvsp[-2].blk), gen_const(data_flow, jv_null()), INDEX);
}
    break;

  case 95:
    {
  (yyval.blk) = gen_slice_index(data_flow, (yyvsp[-4].blk), gen_const(data_flow, jv_null()), (yyvsp[-1].blk), INDEX);
}
    break;

  case 96:
    {
  (yyval.blk) = gen_const(data_flow, (yyvsp[0].literal));
}
    break;

  case 97:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 98:
    {
  (yyval.blk) = gen_format(data_flow, gen_noop(data_flow), (yyvsp[0].literal));
}
    break;

  case 99:
    {
  (yyval.blk) = (yyvsp[-1].blk);
}
    break;

  case 100:
    {
  (yyval.blk) = gen_collect(data_flow, (yyvsp[-1].blk));
}
    break;

  case 101:
    {
  (yyval.blk) = gen_const(data_flow, jv_array());
}
    break;

  case 102:
    {
  block o = gen_const_object(data_flow, (yyvsp[-1].blk));
  if (o.first != 
                ((void *)0)
                    )
    (yyval.blk) = o;
  else
    (yyval.blk) = (block_join(data_flow, (block_join(data_flow, (gen_subexp(data_flow, gen_const(data_flow, jv_object(data_flow)))),((yyvsp[-1].blk)))),(gen_op_simple(data_flow, POP))));
}
    break;

  case 103:
    {
  (yyval.blk) = gen_const(data_flow, (jv_object_set(data_flow, (jv_object_set(data_flow, jv_object(data_flow),((jv_string("file"))),((jv_copy(locations->fname))))),(jv_string("line")),(jv_number(locfile_get_line(data_flow, locations, (yyloc).start) + 1))))
                                                                                                        );
}
    break;

  case 104:
    {
  (yyval.blk) = gen_location(data_flow, (yyloc), locations, gen_op_unbound(data_flow, LOADV, jv_string_value((yyvsp[0].literal))));
  jv_free((yyvsp[0].literal));
}
    break;

  case 105:
    {
  const char *s = jv_string_value((yyvsp[0].literal));
  if (strcmp(s, "false") == 0)
    (yyval.blk) = gen_const(data_flow, jv_false(data_flow));
  else if (strcmp(s, "true") == 0)
    (yyval.blk) = gen_const(data_flow, jv_true(data_flow));
  else if (strcmp(s, "null") == 0)
    (yyval.blk) = gen_const(data_flow, jv_null());
  else
    (yyval.blk) = gen_location(data_flow, (yyloc), locations, gen_call(data_flow, s, gen_noop(data_flow)));
  jv_free((yyvsp[0].literal));
}
    break;

  case 106:
    {
  (yyval.blk) = gen_call(data_flow, jv_string_value((yyvsp[-3].literal)), (yyvsp[-1].blk));
  (yyval.blk) = gen_location(data_flow, (yylsp[-3]), locations, (yyval.blk));
  jv_free((yyvsp[-3].literal));
}
    break;

  case 107:
    { (yyval.blk) = gen_noop(data_flow); }
    break;

  case 108:
    { (yyval.blk) = gen_noop(data_flow); }
    break;

  case 109:
    { (yyval.blk) = (yyvsp[-3].blk); }
    break;

  case 110:
    { (yyval.blk) = gen_noop(data_flow); }
    break;

  case 111:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 112:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-2].blk)),((yyvsp[0].blk))));
}
    break;

  case 113:
    {
  (yyval.blk) = gen_lambda(data_flow, (yyvsp[0].blk));
}
    break;

  case 114:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-2].blk)),(gen_destructure_alt(data_flow, (yyvsp[0].blk)))));
}
    break;

  case 115:
    {
  (yyval.blk) = gen_destructure_alt(data_flow, (yyvsp[0].blk));
}
    break;

  case 116:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-2].blk)),((yyvsp[0].blk))));
}
    break;

  case 117:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 118:
    {
  (yyval.blk) = gen_op_unbound(data_flow, STOREV, jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
    break;

  case 119:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-1].blk)),(gen_op_simple(data_flow, POP))));
}
    break;

  case 120:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-1].blk)),(gen_op_simple(data_flow, POP))));
}
    break;

  case 121:
    {
  (yyval.blk) = gen_array_matcher(data_flow, gen_noop(data_flow), (yyvsp[0].blk));
}
    break;

  case 122:
    {
  (yyval.blk) = gen_array_matcher(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 123:
    {
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 124:
    {
  (yyval.blk) = (block_join(data_flow, ((yyvsp[-2].blk)),((yyvsp[0].blk))));
}
    break;

  case 125:
    {
  (yyval.blk) = gen_object_matcher(data_flow, gen_const(data_flow, (yyvsp[0].literal)), gen_op_unbound(data_flow, STOREV, jv_string_value((yyvsp[0].literal))));
}
    break;

  case 126:
    {
  (yyval.blk) = gen_object_matcher(data_flow, gen_const(data_flow, (yyvsp[-2].literal)), (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, DUP)),(gen_op_unbound(data_flow, STOREV, jv_string_value((yyvsp[-2].literal)))))),((yyvsp[0].blk)))));
}
    break;

  case 127:
    {
  (yyval.blk) = gen_object_matcher(data_flow, gen_const(data_flow, (yyvsp[-2].literal)), (yyvsp[0].blk));
}
    break;

  case 128:
    {
  (yyval.blk) = gen_object_matcher(data_flow, gen_const(data_flow, (yyvsp[-2].literal)), (yyvsp[0].blk));
}
    break;

  case 129:
    {
  (yyval.blk) = gen_object_matcher(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
}
    break;

  case 130:
    {
  jv msg = check_object_key(data_flow, (yyvsp[-3].blk));
  if (jv_is_valid(data_flow, msg)) {
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, jv_string_value(msg)); ; } while (0);
  }
  jv_free(msg);
  (yyval.blk) = gen_object_matcher(data_flow, (yyvsp[-3].blk), (yyvsp[0].blk));
}
    break;

  case 131:
    {
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "May need parentheses around object key expression"); ; } while (0);
  (yyval.blk) = (yyvsp[0].blk);
}
    break;

  case 132:
    {
  (yyval.literal) = jv_string("as");
}
    break;

  case 133:
    {
  (yyval.literal) = jv_string("def");
}
    break;

  case 134:
    {
  (yyval.literal) = jv_string("module");
}
    break;

  case 135:
    {
  (yyval.literal) = jv_string("import");
}
    break;

  case 136:
    {
  (yyval.literal) = jv_string("include");
}
    break;

  case 137:
    {
  (yyval.literal) = jv_string("if");
}
    break;

  case 138:
    {
  (yyval.literal) = jv_string("then");
}
    break;

  case 139:
    {
  (yyval.literal) = jv_string("else");
}
    break;

  case 140:
    {
  (yyval.literal) = jv_string("elif");
}
    break;

  case 141:
    {
  (yyval.literal) = jv_string("reduce");
}
    break;

  case 142:
    {
  (yyval.literal) = jv_string("foreach");
}
    break;

  case 143:
    {
  (yyval.literal) = jv_string("end");
}
    break;

  case 144:
    {
  (yyval.literal) = jv_string("and");
}
    break;

  case 145:
    {
  (yyval.literal) = jv_string("or");
}
    break;

  case 146:
    {
  (yyval.literal) = jv_string("try");
}
    break;

  case 147:
    {
  (yyval.literal) = jv_string("catch");
}
    break;

  case 148:
    {
  (yyval.literal) = jv_string("label");
}
    break;

  case 149:
    {
  (yyval.literal) = jv_string("break");
}
    break;

  case 150:
    {
  (yyval.literal) = jv_string("__loc__");
}
    break;

  case 151:
    {
  (yyval.blk)=gen_noop(data_flow);
}
    break;

  case 152:
    { (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 153:
    { (yyval.blk)=block_join(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk)); }
    break;

  case 154:
    { (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 155:
    {
  (yyval.blk) = gen_dictpair(data_flow, gen_const(data_flow, (yyvsp[-2].literal)), (yyvsp[0].blk));
 }
    break;

  case 156:
    {
  (yyval.blk) = gen_dictpair(data_flow, gen_const(data_flow, (yyvsp[-2].literal)), (yyvsp[0].blk));
  }
    break;

  case 157:
    {
  (yyval.blk) = gen_dictpair(data_flow, (yyvsp[-2].blk), (yyvsp[0].blk));
  }
    break;

  case 158:
    {
  (yyval.blk) = gen_dictpair(data_flow, (yyvsp[0].blk), (block_join(data_flow, (block_join(data_flow, (block_join(data_flow, (gen_op_simple(data_flow, POP)),(gen_op_simple(data_flow, DUP2)))),(gen_op_simple(data_flow, DUP2)))),(gen_op_simple(data_flow, INDEX))))
                                                                        );
  }
    break;

  case 159:
    {
  (yyval.blk) = gen_dictpair(data_flow, gen_const(data_flow, (yyvsp[0].literal)),
                    gen_location(data_flow, (yyloc), locations, gen_op_unbound(data_flow, LOADV, jv_string_value((yyvsp[0].literal)))));
  }
    break;

  case 160:
    {
  (yyval.blk) = gen_dictpair(data_flow, gen_const(data_flow, jv_copy((yyvsp[0].literal))),
                    gen_index(data_flow, gen_noop(data_flow), gen_const(data_flow, (yyvsp[0].literal))));
  }
    break;

  case 161:
    {
  jv msg = check_object_key(data_flow, (yyvsp[-3].blk));
  if (jv_is_valid(data_flow, msg)) {
    do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, jv_string_value(msg)); ; } while (0);
  }
  jv_free(msg);
  (yyval.blk) = gen_dictpair(data_flow, (yyvsp[-3].blk), (yyvsp[0].blk));
  }
    break;

  case 162:
    {
  do { location l = (yyloc); yyerror(data_flow, &l, answer, errors, locations, lexer_param_ptr, "May need parentheses around object key expression"); ; } while (0);
  (yyval.blk) = (yyvsp[0].blk);
  }
    break;
      default: break;
    }
  ;

  (yyvsp -= (yylen), yyssp -= (yylen), yylsp -= (yylen));
  yylen = 0;
  ;

  *++yyvsp = yyval;
  *++yylsp = yyloc;





  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - 69] + *yyssp;
  if (0 <= yystate && yystate <= 1972 && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - 69];

  goto yynewstate;





yyerrlab:


  yytoken = yychar == (-2) ? (-2) : ((unsigned int) (yychar) <= 302 ? yytranslate[yychar] : 2);


  if (!yyerrstatus)
    {
      ++yynerrs;





      {
        char const *yymsgp = "syntax error";
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (data_flow, &yymsg_alloc, &yymsg, yyssp, yytoken);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              jv_mem_free (yymsg);
            yymsg = (char *) jv_mem_alloc (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = yysyntax_error (data_flow, &yymsg_alloc, &yymsg, yyssp, yytoken);
                yymsgp = yymsg;
              }
          }
        yyerror (data_flow, &yylloc, answer, errors, locations, lexer_param_ptr, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }


    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {



      if (yychar <= 0)
        {

          if (yychar == 0)
            goto yyabortlab;
        }
      else
        {
          yydestruct (data_flow, "Error: discarding",
                      yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
          yychar = (-2);
        }
    }



  goto yyerrlab1;





yyerrorlab:




  if ( 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];


  (yyvsp -= (yylen), yyssp -= (yylen), yylsp -= (yylen));
  yylen = 0;
  ;
  yystate = *yyssp;
  goto yyerrlab1;





yyerrlab1:
  yyerrstatus = 3;

  for (;;)
    {
      yyn = yypact[yystate];
      if (!(!!((yyn) == (-158))))
        {
          yyn += 1;
          if (0 <= yyn && yyn <= 1972 && yycheck[yyn] == 1)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }


      if (yyssp == yyss)
        goto yyabortlab;

      yyerror_range[1] = *yylsp;
      yydestruct (data_flow, "Error: popping",
                  yystos[yystate], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      (yyvsp -= (1), yyssp -= (1), yylsp -= (1));
      yystate = *yyssp;
      ;
    }

 
 
 
 
  *++yyvsp = yylval;
 
 

  yyerror_range[2] = yylloc;


  do { if (2) { (yyloc).start = ((yyerror_range)[1]).start; (yyloc).end = ((yyerror_range)[2]).end; } else { (yyloc).start = ((yyerror_range)[0]).end; (yyloc).end = ((yyerror_range)[0]).end; } } while (0);
  *++yylsp = yyloc;


  ;

  yystate = yyn;
  goto yynewstate;





yyacceptlab:
  yyresult = 0;
  goto yyreturn;




yyabortlab:
  yyresult = 1;
  goto yyreturn;





yyexhaustedlab:
  yyerror (data_flow, &yylloc, answer, errors, locations, lexer_param_ptr, "memory exhausted");
  yyresult = 2;



yyreturn:
  if (yychar != (-2))
    {


      yytoken = ((unsigned int) (yychar) <= 302 ? yytranslate[yychar] : 2);
      yydestruct (data_flow, "Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }


  (yyvsp -= (yylen), yyssp -= (yylen), yylsp -= (yylen));
  ;
  while (yyssp != yyss)
    {
      yydestruct (data_flow, "Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      (yyvsp -= (1), yyssp -= (1), yylsp -= (1));
    }

  if (yyss != yyssa)
    jv_mem_free (yyss);


  if (yymsg != yymsgbuf)
    jv_mem_free (yymsg);

  return yyresult;
}


int jq_parse(int *data_flow, struct locfile* locations, block* answer) {
  struct lexer_param scanner;
  YY_BUFFER_STATE buf;
  jq_yylex_init_extra(data_flow, 0, &scanner.lexer);
  buf = jq_yy_scan_bytes(data_flow, locations->data, locations->length, scanner.lexer);
  int errors = 0;
  *answer = gen_noop(data_flow);
  yyparse(data_flow, answer, &errors, locations, &scanner);
  jq_yy_delete_buffer(data_flow, buf, scanner.lexer);
  jq_yylex_destroy(data_flow, scanner.lexer);
  if (errors > 0) {
    block_free(data_flow, *answer);
    *answer = gen_noop(data_flow);
  }
  return errors;
}

int jq_parse_library(int *data_flow, struct locfile* locations, block* answer) {
  int errs = jq_parse(data_flow, locations, answer);
  if (errs) return errs;
  if (block_has_main(data_flow, *answer)) {
    locfile_locate(data_flow, locations, UNKNOWN_LOCATION, "jq: error: library should only have function definitions, not a main expression");
    return 1;
  }
  
 ((
 block_has_only_binders_and_imports(data_flow, *answer, OP_IS_CALL_PSEUDO)
 ) ? (void) (0) : __assert_fail (
 "block_has_only_binders_and_imports(*answer, OP_IS_CALL_PSEUDO)"
 , "src/parser.y", 977, __PRETTY_FUNCTION__))
                                                                       ;
  return 0;
}
