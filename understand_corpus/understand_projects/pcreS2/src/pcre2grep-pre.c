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

enum
{
  __LC_CTYPE = 0,
  __LC_NUMERIC = 1,
  __LC_TIME = 2,
  __LC_COLLATE = 3,
  __LC_MONETARY = 4,
  __LC_MESSAGES = 5,
  __LC_ALL = 6,
  __LC_PAPER = 7,
  __LC_NAME = 8,
  __LC_ADDRESS = 9,
  __LC_TELEPHONE = 10,
  __LC_MEASUREMENT = 11,
  __LC_IDENTIFICATION = 12
};





struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, __const char *__locale) __attribute__ ((__nothrow__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__));


extern __locale_t newlocale (int __category_mask, __const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__));
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__));












typedef unsigned int size_t;
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

typedef int wchar_t;








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











extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern char *program_invocation_name, *program_invocation_short_name;




typedef int error_t;




struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;

    __ino_t st_ino;



    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;

    __off_t st_size;



    __blksize_t st_blksize;


    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __unused4;
    unsigned long int __unused5;



  };


struct stat64
  {
    __dev_t st_dev;
    unsigned int __pad1;

    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned int __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;

    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
  };
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__));





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__));



extern int mkdir (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 5)));





extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);







typedef __sig_atomic_t sig_atomic_t;










typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
      } _sifields;
  } siginfo_t;
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (int *data_flow, sigval_t);
     void *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};




typedef void (*__sighandler_t) (int *data_flow, int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));






extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));




extern int raise (int __sig) __attribute__ ((__nothrow__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__));




extern void psignal (int __sig, __const char *__s);




extern void psiginfo (__const siginfo_t *__pinfo, __const char *__s);
extern int __sigpause (int __sig_or_mask, int __is_sig);
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
extern int sigblock (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (__const sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, __const sigset_t *__left,
        __const sigset_t *__right) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, __const sigset_t *__left,
       __const sigset_t *__right) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));




struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int *data_flow, int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (int *data_flowvoid);
  };


extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__));






extern int sigsuspend (__const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (__const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (__const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    __const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, __const union sigval __val)
     __attribute__ ((__nothrow__));
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
extern int sigvec (int __sig, __const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__));


























typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;



typedef unsigned short umode_t;






typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int *data_flow, int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;


typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
struct _fpreg {
 unsigned short significand[4];
 unsigned short exponent;
};

struct _fpxreg {
 unsigned short significand[4];
 unsigned short exponent;
 unsigned short padding[3];
};

struct _xmmreg {
 unsigned long element[4];
};

struct _fpstate {

 unsigned long cw;
 unsigned long sw;
 unsigned long tag;
 unsigned long ipoff;
 unsigned long cssel;
 unsigned long dataoff;
 unsigned long datasel;
 struct _fpreg _st[8];
 unsigned short status;
 unsigned short magic;


 unsigned long _fxsr_env[6];
 unsigned long mxcsr;
 unsigned long reserved;
 struct _fpxreg _fxsr_st[8];
 struct _xmmreg _xmm[8];
 unsigned long padding1[44];

 union {
  unsigned long padding2[12];
  struct _fpx_sw_bytes sw_reserved;

 };
};






struct sigcontext {
 unsigned short gs, __gsh;
 unsigned short fs, __fsh;
 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned long edi;
 unsigned long esi;
 unsigned long ebp;
 unsigned long esp;
 unsigned long ebx;
 unsigned long edx;
 unsigned long ecx;
 unsigned long eax;
 unsigned long trapno;
 unsigned long err;
 unsigned long eip;
 unsigned short cs, __csh;
 unsigned long eflags;
 unsigned long esp_at_signal;
 unsigned short ss, __ssh;
 struct _fpstate *fpstate;
 unsigned long oldmask;
 unsigned long cr2;
};
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__));










extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__));

struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;








typedef int greg_t;





typedef greg_t gregset_t[19];



enum
{
  REG_GS = 0,

  REG_FS,

  REG_ES,

  REG_DS,

  REG_EDI,

  REG_ESI,

  REG_EBP,

  REG_ESP,

  REG_EBX,

  REG_EDX,

  REG_ECX,

  REG_EAX,

  REG_TRAPNO,

  REG_ERR,

  REG_EIP,

  REG_CS,

  REG_EFL,

  REG_UESP,

  REG_SS

};



struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));



extern int sigaltstack (__const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));







extern int sighold (int __sig) __attribute__ ((__nothrow__));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__));


extern int sigignore (int __sig) __attribute__ ((__nothrow__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__));






extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__));






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__));




enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};




struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    long int ru_maxrss;


    long int ru_ixrss;

    long int ru_idrss;

    long int ru_isrss;


    long int ru_minflt;

    long int ru_majflt;

    long int ru_nswap;


    long int ru_inblock;

    long int ru_oublock;

    long int ru_msgsnd;

    long int ru_msgrcv;

    long int ru_nsignals;



    long int ru_nvcsw;


    long int ru_nivcsw;
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};







extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource,
      __const struct rlimit *__new_limit,
      struct rlimit *__old_limit) __attribute__ ((__nothrow__));
extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        __const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) __attribute__ ((__nothrow__));

















typedef enum __rlimit_resource __rlimit_resource_t;
typedef enum __rusage_who __rusage_who_t;
typedef enum __priority_which __priority_which_t;
extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) __attribute__ ((__nothrow__));
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) __attribute__ ((__nothrow__));






extern int setrlimit (__rlimit_resource_t __resource,
        __const struct rlimit *__rlimits) __attribute__ ((__nothrow__));
extern int setrlimit64 (__rlimit_resource_t __resource,
   __const struct rlimit64 *__rlimits) __attribute__ ((__nothrow__));




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) __attribute__ ((__nothrow__));





extern int getpriority (__priority_which_t __which, id_t __who) __attribute__ ((__nothrow__));



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     __attribute__ ((__nothrow__));


typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
extern __pid_t wait (__WAIT_STATUS __stat_loc);
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);



extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (__WAIT_STATUS __stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));




extern __pid_t wait4 (__pid_t __pid, __WAIT_STATUS __stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));












typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__)) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__));



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__)) ;




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


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
extern int setpgrp (void) __attribute__ ((__nothrow__));
extern __pid_t setsid (void) __attribute__ ((__nothrow__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__));






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));





extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));
extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int truncate64 (__const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__)) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__libc_block, int __edflag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) __attribute__ ((__nothrow__));


















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
typedef uint8_t PCRE2_UCHAR8;
typedef uint16_t PCRE2_UCHAR16;
typedef uint32_t PCRE2_UCHAR32;

typedef const PCRE2_UCHAR8 *PCRE2_SPTR8;
typedef const PCRE2_UCHAR16 *PCRE2_SPTR16;
typedef const PCRE2_UCHAR32 *PCRE2_SPTR32;
struct pcre2_real_general_context_8; typedef struct pcre2_real_general_context_8 pcre2_general_context_8; struct pcre2_real_compile_context_8; typedef struct pcre2_real_compile_context_8 pcre2_compile_context_8; struct pcre2_real_match_context_8; typedef struct pcre2_real_match_context_8 pcre2_match_context_8; struct pcre2_real_convert_context_8; typedef struct pcre2_real_convert_context_8 pcre2_convert_context_8; struct pcre2_real_code_8; typedef struct pcre2_real_code_8 pcre2_code_8; struct pcre2_real_match_data_8; typedef struct pcre2_real_match_data_8 pcre2_match_data_8; struct pcre2_real_jit_stack_8; typedef struct pcre2_real_jit_stack_8 pcre2_jit_stack_8; typedef pcre2_jit_stack_8 *(*pcre2_jit_callback_8)(int *data_flow, void *); typedef struct pcre2_callout_block_8 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR8 mark; PCRE2_SPTR8 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; uint32_t callout_flags; } pcre2_callout_block_8; typedef struct pcre2_callout_enumerate_block_8 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; } pcre2_callout_enumerate_block_8; typedef struct pcre2_substitute_callout_block_8 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_8; extern __attribute__ ((visibility ("default"))) int pcre2_config_8(int *data_flow, uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_copy_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_create_8(int *data_flow, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_copy_8(int *data_flow, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_create_8(int *data_flow, pcre2_general_context_8 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_8(int *data_flow, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_8(int *data_flow, pcre2_compile_context_8 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_8(int *data_flow, pcre2_compile_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_8(int *data_flow, pcre2_compile_context_8 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_copy_8(int *data_flow, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_create_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_8(int *data_flow, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_8(int *data_flow, pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_8(int *data_flow, pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_8(int *data_flow, PCRE2_SPTR8, size_t, uint32_t, PCRE2_UCHAR8 **, size_t *, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_8(int *data_flow, PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_copy_8(int *data_flow, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_create_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_8(int *data_flow, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_8(int *data_flow, pcre2_match_context_8 *, int (*)(int *data_flow, pcre2_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_8(int *data_flow, pcre2_match_context_8 *, void (*)(int *data_flow, pcre2_substitute_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_8(int *data_flow, pcre2_match_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_8(int *data_flow, pcre2_match_context_8 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_compile_8(int *data_flow, PCRE2_SPTR8, size_t, uint32_t, int *, size_t *, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_8(int *data_flow, pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_8(int *data_flow, const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_with_tables_8(int *data_flow, const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_8(int *data_flow, const pcre2_code_8 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_8(int *data_flow, const pcre2_code_8 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_8(int *data_flow, uint32_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_from_pattern_8(int *data_flow, const pcre2_code_8 *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR8 pcre2_get_mark_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_8(int *data_flow, PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, PCRE2_SPTR8 *, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_8(int *data_flow, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_8(int *data_flow, pcre2_match_data_8 *, PCRE2_UCHAR8 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_8(int *data_flow, const pcre2_code_8 **, int32_t, uint8_t **, size_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_8(int *data_flow, pcre2_code_8 **, int32_t, const uint8_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_8(int *data_flow, const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_8(int *data_flow, uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, PCRE2_SPTR8, size_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_8(int *data_flow, pcre2_code_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_8 *pcre2_jit_stack_create_8(int *data_flow, size_t, size_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_8(int *data_flow, pcre2_match_context_8 *, pcre2_jit_callback_8, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_8(int *data_flow, pcre2_jit_stack_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_8(int *data_flow, int, PCRE2_UCHAR8 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_8(int *data_flow, pcre2_general_context_8 *);



struct pcre2_real_general_context_16; typedef struct pcre2_real_general_context_16 pcre2_general_context_16; struct pcre2_real_compile_context_16; typedef struct pcre2_real_compile_context_16 pcre2_compile_context_16; struct pcre2_real_match_context_16; typedef struct pcre2_real_match_context_16 pcre2_match_context_16; struct pcre2_real_convert_context_16; typedef struct pcre2_real_convert_context_16 pcre2_convert_context_16; struct pcre2_real_code_16; typedef struct pcre2_real_code_16 pcre2_code_16; struct pcre2_real_match_data_16; typedef struct pcre2_real_match_data_16 pcre2_match_data_16; struct pcre2_real_jit_stack_16; typedef struct pcre2_real_jit_stack_16 pcre2_jit_stack_16; typedef pcre2_jit_stack_16 *(*pcre2_jit_callback_16)(int *data_flow, void *); typedef struct pcre2_callout_block_16 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR16 mark; PCRE2_SPTR16 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; uint32_t callout_flags; } pcre2_callout_block_16; typedef struct pcre2_callout_enumerate_block_16 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; } pcre2_callout_enumerate_block_16; typedef struct pcre2_substitute_callout_block_16 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_16; extern __attribute__ ((visibility ("default"))) int pcre2_config_16(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_copy_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_create_16(void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_copy_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_create_16(pcre2_general_context_16 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_16(pcre2_compile_context_16 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_16(pcre2_compile_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_16(pcre2_compile_context_16 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_copy_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_16(PCRE2_SPTR16, size_t, uint32_t, PCRE2_UCHAR16 **, size_t *, pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_copy_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_16(pcre2_match_context_16 *, int (*)(int *data_flow, pcre2_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_16(pcre2_match_context_16 *, void (*)(int *data_flow, pcre2_substitute_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_16(pcre2_match_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_16(pcre2_match_context_16 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_compile_16(PCRE2_SPTR16, size_t, uint32_t, int *, size_t *, pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_16(pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_with_tables_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_16(const pcre2_code_16 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_16(const pcre2_code_16 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_16(uint32_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_from_pattern_16(const pcre2_code_16 *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR16 pcre2_get_mark_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_16(pcre2_match_data_16 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_16(const pcre2_code_16 *, PCRE2_SPTR16, PCRE2_SPTR16 *, PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_16(const pcre2_code_16 *, PCRE2_SPTR16); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_16(PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_16(pcre2_match_data_16 *, PCRE2_UCHAR16 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_16(const pcre2_code_16 **, int32_t, uint8_t **, size_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_16(pcre2_code_16 **, int32_t, const uint8_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_16(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_16(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, PCRE2_SPTR16, size_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_16(pcre2_code_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_16 *pcre2_jit_stack_create_16(size_t, size_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_16(pcre2_match_context_16 *, pcre2_jit_callback_16, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_16(pcre2_jit_stack_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_16(int, PCRE2_UCHAR16 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_16(pcre2_general_context_16 *);



struct pcre2_real_general_context_32; typedef struct pcre2_real_general_context_32 pcre2_general_context_32; struct pcre2_real_compile_context_32; typedef struct pcre2_real_compile_context_32 pcre2_compile_context_32; struct pcre2_real_match_context_32; typedef struct pcre2_real_match_context_32 pcre2_match_context_32; struct pcre2_real_convert_context_32; typedef struct pcre2_real_convert_context_32 pcre2_convert_context_32; struct pcre2_real_code_32; typedef struct pcre2_real_code_32 pcre2_code_32; struct pcre2_real_match_data_32; typedef struct pcre2_real_match_data_32 pcre2_match_data_32; struct pcre2_real_jit_stack_32; typedef struct pcre2_real_jit_stack_32 pcre2_jit_stack_32; typedef pcre2_jit_stack_32 *(*pcre2_jit_callback_32)(int *data_flow, void *); typedef struct pcre2_callout_block_32 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR32 mark; PCRE2_SPTR32 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; uint32_t callout_flags; } pcre2_callout_block_32; typedef struct pcre2_callout_enumerate_block_32 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; } pcre2_callout_enumerate_block_32; typedef struct pcre2_substitute_callout_block_32 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_32; extern __attribute__ ((visibility ("default"))) int pcre2_config_32(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_copy_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_create_32(void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_copy_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_create_32(pcre2_general_context_32 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_32(pcre2_compile_context_32 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_32(pcre2_compile_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_32(pcre2_compile_context_32 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_copy_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_32(PCRE2_SPTR32, size_t, uint32_t, PCRE2_UCHAR32 **, size_t *, pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_copy_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_32(pcre2_match_context_32 *, int (*)(int *data_flow, pcre2_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_32(pcre2_match_context_32 *, void (*)(int *data_flow, pcre2_substitute_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_32(pcre2_match_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_32(pcre2_match_context_32 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_compile_32(PCRE2_SPTR32, size_t, uint32_t, int *, size_t *, pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_32(pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_with_tables_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_32(const pcre2_code_32 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_32(const pcre2_code_32 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_32(uint32_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_from_pattern_32(const pcre2_code_32 *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR32 pcre2_get_mark_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_32(pcre2_match_data_32 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_32(const pcre2_code_32 *, PCRE2_SPTR32, PCRE2_SPTR32 *, PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_32(const pcre2_code_32 *, PCRE2_SPTR32); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_32(PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_32(pcre2_match_data_32 *, PCRE2_UCHAR32 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_32(const pcre2_code_32 **, int32_t, uint8_t **, size_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_32(pcre2_code_32 **, int32_t, const uint8_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_32(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_32(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, PCRE2_SPTR32, size_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_32(pcre2_code_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_32 *pcre2_jit_stack_create_32(size_t, size_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_32(pcre2_match_context_32 *, pcre2_jit_callback_32, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_32(pcre2_jit_stack_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_32(int, PCRE2_UCHAR32 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_32(pcre2_general_context_32 *);
typedef int BOOL;
enum { FN_NONE, FN_DEFAULT, FN_MATCH_ONLY, FN_NOMATCH_ONLY, FN_FORCE };



enum { FR_PLAIN, FR_LIBZ, FR_LIBBZ2 };



enum { dee_READ, dee_SKIP, dee_RECURSE };
enum { DEE_READ, DEE_SKIP };
enum { BIN_BINARY, BIN_NOMATCH, BIN_TEXT };
static const char *colour_string = "1;31";
static const char *colour_option = ((void *)0);
static const char *dee_option = ((void *)0);
static const char *DEE_option = ((void *)0);
static const char *locale = ((void *)0);
static const char *newline_arg = ((void *)0);
static const char *om_separator = ((void *)0);
static const char *stdin_name = "(standard input)";
static const char *output_text = ((void *)0);

static char *main_buffer = ((void *)0);

static int after_context = 0;
static int before_context = 0;
static int binary_files = BIN_BINARY;
static int both_context = 0;
static int bufthird = 20480;
static int max_bufthird = 1048576;
static int bufsize = 3*20480;
static int endlinetype;

static unsigned long int total_count = 0;
static unsigned long int counts_printed = 0;




static int dee_action = dee_READ;


static int DEE_action = DEE_READ;
static int error_count = 0;
static int filenames = FN_DEFAULT;




static BOOL use_jit = 0;


static const uint8_t *character_tables = ((void *)0);

static uint32_t pcre2_options = 0;
static uint32_t extra_options = 0;
static size_t heap_limit = (~(size_t)0);
static uint32_t match_limit = 0;
static uint32_t depth_limit = 0;

static pcre2_compile_context_8 *compile_context;
static pcre2_match_context_8 *match_context;
static pcre2_match_data_8 *match_data;
static size_t *offsets;

static BOOL count_only = 0;
static BOOL do_colour = 0;



static BOOL file_offsets = 0;
static BOOL hyphenpending = 0;
static BOOL invert = 0;
static BOOL line_buffered = 0;
static BOOL line_offsets = 0;
static BOOL multiline = 0;
static BOOL number = 0;
static BOOL omit_zero_count = 0;
static BOOL resource_error = 0;
static BOOL quiet = 0;
static BOOL show_total_count = 0;
static BOOL silent = 0;
static BOOL utf = 0;



typedef struct omstr {
  struct omstr *next;
  int groupnum;
} omstr;

static omstr *only_matching = ((void *)0);
static omstr *only_matching_last = ((void *)0);
static int only_matching_count;



typedef struct omdatastr {
  omstr **anchor;
  omstr **lastptr;
} omdatastr;

static omdatastr only_matching_data = { &only_matching, &only_matching_last };



typedef struct fnstr {
  struct fnstr *next;
  char *name;
} fnstr;

static fnstr *exclude_from = ((void *)0);
static fnstr *exclude_from_last = ((void *)0);
static fnstr *include_from = ((void *)0);
static fnstr *include_from_last = ((void *)0);

static fnstr *file_lists = ((void *)0);
static fnstr *file_lists_last = ((void *)0);
static fnstr *pattern_files = ((void *)0);
static fnstr *pattern_files_last = ((void *)0);



typedef struct fndatastr {
  fnstr **anchor;
  fnstr **lastptr;
} fndatastr;

static fndatastr exclude_from_data = { &exclude_from, &exclude_from_last };
static fndatastr include_from_data = { &include_from, &include_from_last };
static fndatastr file_lists_data = { &file_lists, &file_lists_last };
static fndatastr pattern_files_data = { &pattern_files, &pattern_files_last };




typedef struct patstr {
  struct patstr *next;
  char *string;
  size_t length;
  pcre2_code_8 *compiled;
} patstr;

static patstr *patterns = ((void *)0);
static patstr *patterns_last = ((void *)0);
static patstr *include_patterns = ((void *)0);
static patstr *include_patterns_last = ((void *)0);
static patstr *exclude_patterns = ((void *)0);
static patstr *exclude_patterns_last = ((void *)0);
static patstr *include_dir_patterns = ((void *)0);
static patstr *include_dir_patterns_last = ((void *)0);
static patstr *exclude_dir_patterns = ((void *)0);
static patstr *exclude_dir_patterns_last = ((void *)0);




typedef struct patdatastr {
  patstr **anchor;
  patstr **lastptr;
} patdatastr;

static patdatastr match_patdata = { &patterns, &patterns_last };
static patdatastr include_patdata = { &include_patterns, &include_patterns_last };
static patdatastr exclude_patdata = { &exclude_patterns, &exclude_patterns_last };
static patdatastr include_dir_patdata = { &include_dir_patterns, &include_dir_patterns_last };
static patdatastr exclude_dir_patdata = { &exclude_dir_patterns, &exclude_dir_patterns_last };

static patstr **incexlist[4] = { &include_patterns, &exclude_patterns,
                                 &include_dir_patterns, &exclude_dir_patterns };

static const char *incexname[4] = { "--include", "--exclude",
                                    "--include-dir", "--exclude-dir" };



enum { OP_NODATA, OP_STRING, OP_OP_STRING, OP_NUMBER, OP_U32NUMBER, OP_SIZE,
       OP_OP_NUMBER, OP_OP_NUMBERS, OP_PATLIST, OP_FILELIST, OP_BINFILES };

typedef struct option_item {
  int type;
  int one_char;
  void *dataptr;
  const char *long_name;
  const char *help_text;
} option_item;
static option_item optionlist[] = {
  { OP_NODATA, (-9), ((void *)0), "", "terminate options" },
  { OP_NODATA, (-4), ((void *)0), "help", "display this help and exit" },
  { OP_NUMBER, 'A', &after_context, "after-context=number", "set number of following context lines" },
  { OP_NODATA, 'a', ((void *)0), "text", "treat binary files as text" },
  { OP_NUMBER, 'B', &before_context, "before-context=number", "set number of prior context lines" },
  { OP_BINFILES, (-19), ((void *)0), "binary-files=word", "set treatment of binary files" },
  { OP_NUMBER, (-16),&bufthird, "buffer-size=number", "set processing buffer starting size" },
  { OP_NUMBER, (-23),&max_bufthird, "max-buffer-size=number", "set processing buffer maximum size" },
  { OP_OP_STRING, (-1), &colour_option, "color=option", "matched text color option" },
  { OP_OP_STRING, (-1), &colour_option, "colour=option", "matched text colour option" },
  { OP_NUMBER, 'C', &both_context, "context=number", "set number of context lines, before & after" },
  { OP_NODATA, 'c', ((void *)0), "count", "print only a count of matching lines per FILE" },
  { OP_STRING, 'D', &DEE_option, "devices=action","how to handle devices, FIFOs, and sockets" },
  { OP_STRING, 'd', &dee_option, "directories=action", "how to handle directories" },
  { OP_PATLIST, 'e', &match_patdata, "regex(p)=pattern", "specify pattern (may be used more than once)" },
  { OP_NODATA, 'F', ((void *)0), "fixed-strings", "patterns are sets of newline-separated strings" },
  { OP_FILELIST, 'f', &pattern_files_data, "file=path", "read patterns from file" },
  { OP_FILELIST, (-18), &file_lists_data, "file-list=path","read files to search from file" },
  { OP_NODATA, (-11), ((void *)0), "file-offsets", "output file offsets, not text" },
  { OP_NODATA, 'H', ((void *)0), "with-filename", "force the prefixing filename on output" },
  { OP_NODATA, 'h', ((void *)0), "no-filename", "suppress the prefixing filename on output" },
  { OP_NODATA, 'I', ((void *)0), "", "treat binary files as not matching (ignore)" },
  { OP_NODATA, 'i', ((void *)0), "ignore-case", "ignore case distinctions" },
  { OP_NODATA, 'l', ((void *)0), "files-with-matches", "print only FILE names containing matches" },
  { OP_NODATA, 'L', ((void *)0), "files-without-match","print only FILE names not containing matches" },
  { OP_STRING, (-7), &stdin_name, "label=name", "set name for standard input" },
  { OP_NODATA, (-12), ((void *)0), "line-buffered", "use line buffering" },
  { OP_NODATA, (-10), ((void *)0), "line-offsets", "output line numbers and offsets, not text" },
  { OP_STRING, (-8), &locale, "locale=locale", "use the named locale" },
  { OP_SIZE, (-13), &heap_limit, "heap-limit=number", "set PCRE2 heap limit option (kibibytes)" },
  { OP_U32NUMBER, (-14), &match_limit, "match-limit=number", "set PCRE2 match limit option" },
  { OP_U32NUMBER, (-15), &depth_limit, "depth-limit=number", "set PCRE2 depth limit option" },
  { OP_U32NUMBER, (-15), &depth_limit, "recursion-limit=number", "obsolete synonym for depth-limit" },
  { OP_NODATA, 'M', ((void *)0), "multiline", "run in multiline mode" },
  { OP_STRING, 'N', &newline_arg, "newline=type", "set newline type (CR, LF, CRLF, ANYCRLF, ANY, or NUL)" },
  { OP_NODATA, 'n', ((void *)0), "line-number", "print line number with output lines" },



  { OP_NODATA, (-17), ((void *)0), "no-jit", "ignored: this pcre2grep does not support JIT" },

  { OP_STRING, 'O', &output_text, "output=text", "show only this text (possibly expanded)" },
  { OP_OP_NUMBERS, 'o', &only_matching_data, "only-matching=n", "show only the part of the line that matched" },
  { OP_STRING, (-22), &om_separator, "om-separator=text", "set separator for multiple -o output" },
  { OP_NODATA, 'q', ((void *)0), "quiet", "suppress output, just set return code" },
  { OP_NODATA, 'r', ((void *)0), "recursive", "recursively scan sub-directories" },
  { OP_PATLIST, (-2),&exclude_patdata, "exclude=pattern","exclude matching files when recursing" },
  { OP_PATLIST, (-5),&include_patdata, "include=pattern","include matching files when recursing" },
  { OP_PATLIST, (-3),&exclude_dir_patdata, "exclude-dir=pattern","exclude matching directories when recursing" },
  { OP_PATLIST, (-6),&include_dir_patdata, "include-dir=pattern","include matching directories when recursing" },
  { OP_FILELIST, (-20),&exclude_from_data, "exclude-from=path", "read exclude list from file" },
  { OP_FILELIST, (-21),&include_from_data, "include-from=path", "read include list from file" },



  { OP_NODATA, 's', ((void *)0), "no-messages", "suppress error messages" },
  { OP_NODATA, 't', ((void *)0), "total-count", "print total count of matching lines" },
  { OP_NODATA, 'u', ((void *)0), "utf", "use UTF mode" },
  { OP_NODATA, 'V', ((void *)0), "version", "print version information and exit" },
  { OP_NODATA, 'v', ((void *)0), "invert-match", "select non-matching lines" },
  { OP_NODATA, 'w', ((void *)0), "word-regex(p)", "force patterns to match only as words" },
  { OP_NODATA, 'x', ((void *)0), "line-regex(p)", "force patterns to match only whole lines" },
  { OP_NODATA, 0, ((void *)0), ((void *)0), ((void *)0) }
};




static const char *newlines[] = {
  "DEFAULT", "CR", "LF", "CRLF", "ANY", "ANYCRLF", "NUL" };



const int utf8_table3[] = { 0xff, 0x1f, 0x0f, 0x07, 0x03, 0x01};

const char utf8_table4[] = {
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
  3,3,3,3,3,3,3,3,4,4,4,4,5,5,5,5 };
static int
strcmpic(int *data_flow, const char *str1, const char *str2)
{
unsigned int c1, c2;
while (*str1 != '\0' || *str2 != '\0')
  {
  c1 = tolower(*str1++);
  c2 = tolower(*str2++);
  if (c1 != c2) return ((c1 > c2) << 1) - 1;
  }
return 0;
}
static char *
parse_grep_colors(int *data_flow, const char *gc)
{
static char seq[16];
char *col;
uint32_t len;
if (gc == ((void *)0)) return ((void *)0);
col = strstr(gc, "ms=");
if (col == ((void *)0)) col = strstr(gc, "mt=");
if (col == ((void *)0)) return ((void *)0);
len = 0;
col += 3;
while (*col != ':' && *col != 0 && len < sizeof(seq)-1)
  seq[len++] = *col++;
seq[len] = 0;
return seq;
}
static void
pcre2grep_exit(int *data_flow, int rc)
{
if (resource_error)
  {
  fprintf(stderr, "pcre2grep: Error %d, %d, %d or %d means that a resource "
    "limit was exceeded.\n", (-46), (-47),
    (-53), (-63));
  fprintf(stderr, "pcre2grep: Check your regex for nested unlimited loops.\n");
  }
exit(rc);
}
static patstr *
add_pattern(int *data_flow, char *s, size_t patlen, patstr *after)
{
patstr *p = (patstr *)malloc(sizeof(patstr));
if (p == ((void *)0))
  {
  fprintf(stderr, "pcre2grep: malloc failed\n");
  pcre2grep_exit(data_flow, 2);
  }
if (patlen > 8192)
  {
  fprintf(stderr, "pcre2grep: pattern is too long (limit is %d bytes)\n",
    8192);
  free(p);
  return ((void *)0);
  }
p->next = ((void *)0);
p->string = s;
p->length = patlen;
if (s) {
DFLOG(29, *(const unsigned int *)s);
}
p->compiled = ((void *)0);

if (after != ((void *)0))
  {
  p->next = after->next;
  after->next = p;
  }
return p;
}
static void
free_pattern_chain(int *data_flow, patstr *pc)
{
while (pc != ((void *)0))
  {
  patstr *p = pc;
  pc = p->next;
  if (p->compiled != ((void *)0)) pcre2_code_free_8(data_flow, p->compiled);
  free(p);
  }
}
static void
free_file_chain(int *data_flow, fnstr *fn)
{
while (fn != ((void *)0))
  {
  fnstr *f = fn;
  fn = f->next;
  free(f);
  }
}

struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
typedef struct __dirstream DIR;






extern DIR *opendir (__const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int scandir (__const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (int *data_flow, __const struct dirent *),
      int (*__cmp) (int *data_flow, __const struct dirent **,
      __const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
extern int scandir64 (__const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (int *data_flow, __const struct dirent64 *),
        int (*__cmp) (int *data_flow, __const struct dirent64 **,
        __const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));




extern int alphasort (__const struct dirent **__e1,
        __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int alphasort64 (__const struct dirent64 **__e1,
   __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (__const struct dirent **__e1,
   __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int versionsort64 (__const struct dirent64 **__e1,
     __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




typedef DIR directory_type;


static int
isdirectory(int *data_flow, char *filename)
{
struct stat statbuf;
if (stat(filename, &statbuf) < 0)
  return 0;
return ((((statbuf.st_mode)) & 0170000) == (0040000));
}

static directory_type *
opendirectory(int *data_flow, char *filename)
{
return opendir(filename);
}

static char *
readdirectory(int *data_flow, directory_type *dir)
{
for (;;)
  {
  struct dirent *dent = readdir(dir);
  if (dent == ((void *)0)) return ((void *)0);
  if (strcmp(dent->d_name, ".") != 0 && strcmp(dent->d_name, "..") != 0)
    return dent->d_name;
  }

}

static void
closedirectory(int *data_flow, directory_type *dir)
{
closedir(dir);
}




static int
isregfile(int *data_flow, char *filename)
{
struct stat statbuf;
if (stat(filename, &statbuf) < 0)
  return 1;
return ((((statbuf.st_mode)) & 0170000) == (0100000));
}
static BOOL
is_stdout_tty(int *data_flowvoid)
{
return isatty(fileno(stdout));
}

static BOOL
is_file_tty(int *data_flow, FILE *f)
{
return isatty(fileno(f));
}





static void
print_match(int *data_flow, const void *buf, int length)
{
if (length == 0) return;
if (do_colour) fprintf(stdout, "%c[%sm", 0x1b, colour_string);
if (fwrite(buf,1,length,stdout)) {};
if (do_colour) fprintf(stdout, "%c[0m", 0x1b);
}
static int
usage(int *data_flow, int rc)
{
option_item *op;
fprintf(stderr, "Usage: pcre2grep [-");
for (op = optionlist; op->one_char != 0; op++)
  {
  if (op->one_char > 0) fprintf(stderr, "%c", op->one_char);
  }
fprintf(stderr, "] [long options] [pattern] [files]\n");
fprintf(stderr, "Type \"pcre2grep --help\" for more information and the long "
  "options.\n");
return rc;
}







static void
help(int *data_flowvoid)
{
option_item *op;

printf("Usage: pcre2grep [OPTION]... [PATTERN] [FILE1 FILE2 ...]" "\n");
printf("Search for PATTERN in each FILE or standard input." "\n");
printf("PATTERN must be present if neither -e nor -f is used." "\n");


printf("Callout scripts in patterns are supported." "\n");




printf("\"-\" can be used as a file name to mean STDIN." "\n");
printf("All files are read as plain files, without any interpretation." "\n" "\n");


printf("Example: pcre2grep -i " "'" "hello.*world" "'" " menu.h main.c" "\n" "\n");
printf("Options:" "\n");

for (op = optionlist; op->one_char != 0; op++)
  {
  int n;
  char s[4];

  if (op->one_char > 0 && (op->long_name)[0] == 0)
    n = 31 - printf("  -%c", op->one_char);
  else
    {
    if (op->one_char > 0) sprintf(s, "-%c,", op->one_char);
      else strcpy(s, "   ");
    n = 31 - printf("  %s --%s", s, op->long_name);
    }

  if (n < 1) n = 1;
  printf("%.*s%s" "\n", n, "                           ", op->help_text);
  }

printf("\n" "Numbers may be followed by K or M, e.g. --max-buffer-size=100K." "\n");
printf("The default value for --buffer-size is %d." "\n", 20480);
printf("The default value for --max-buffer-size is %d." "\n", 1048576);
printf("When reading patterns or file names from a file, trailing white" "\n");
printf("space is removed and blank lines are ignored." "\n");
printf("The maximum size of any pattern is %d bytes." "\n", 8192);

printf("\n" "With no FILEs, read standard input. If fewer than two FILEs given, assume -h." "\n");
printf("Exit status is 0 if any matches, 1 if no matches, and 2 if trouble." "\n");
}
static BOOL
test_incexc(int *data_flow, char *path, patstr *ip, patstr *ep)
{
int plen = strlen((const char *)path);

for (; ep != ((void *)0); ep = ep->next)
  {
  if (pcre2_match_8(data_flow, ep->compiled, (PCRE2_SPTR8)path, plen, 0, 0, match_data, ((void *)0)) >= 0)
    return 0;
  }

if (ip == ((void *)0)) return 1;

for (; ip != ((void *)0); ip = ip->next)
  {
  if (pcre2_match_8(data_flow, ip->compiled, (PCRE2_SPTR8)path, plen, 0, 0, match_data, ((void *)0)) >= 0)
    return 1;
  }

return 0;
}
static long int
decode_number(int *data_flow, char *option_data, option_item *op, BOOL longop)
{
unsigned long int n = 0;
char *endptr = option_data;
while (*endptr != 0 && ((*__ctype_b_loc ())[(int) (((unsigned char)(*endptr)))] & (unsigned short int) _ISspace)) endptr++;
while (((*__ctype_b_loc ())[(int) (((unsigned char)(*endptr)))] & (unsigned short int) _ISdigit))
  n = n * 10 + (int)(*endptr++ - '0');
if (toupper(*endptr) == 'K')
  {
  n *= 1024;
  endptr++;
  }
else if (toupper(*endptr) == 'M')
  {
  n *= 1024*1024;
  endptr++;
  }

if (*endptr != 0)
  {
  if (longop)
    {
    char *equals = strchr(op->long_name, '=');
    int nlen = (equals == ((void *)0))? (int)strlen(op->long_name) :
      (int)(equals - op->long_name);
    fprintf(stderr, "pcre2grep: Malformed number \"%s\" after --%.*s\n",
      option_data, nlen, op->long_name);
    }
  else
    fprintf(stderr, "pcre2grep: Malformed number \"%s\" after -%c\n",
      option_data, op->one_char);
  pcre2grep_exit(data_flow, usage(data_flow, 2));
  }

return n;
}
static omstr *
add_number(int *data_flow, int n, omstr *after)
{
omstr *om = (omstr *)malloc(sizeof(omstr));

if (om == ((void *)0))
  {
  fprintf(stderr, "pcre2grep: malloc failed\n");
  pcre2grep_exit(data_flow, 2);
  }
om->next = ((void *)0);
om->groupnum = n;

if (after != ((void *)0))
  {
  om->next = after->next;
  after->next = om;
  }
return om;
}
static size_t
read_one_line(int *data_flow, char *buffer, int length, FILE *f)
{
int c;
int yield = 0;
while ((c = fgetc(f)) != (-1))
  {
  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(0, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(6, *((const unsigned int *)((*f)._IO_read_ptr) + 1));
}
if ( (f) && ((*f)._IO_read_base)) {
DFLOG(26, *((const unsigned int *)((*f)._IO_read_base) + 1));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(5, *(const unsigned int *)((*f)._IO_write_base));
}
if ( (f) && ((*f)._IO_write_ptr)) {
DFLOG(14, *((const unsigned int *)((*f)._IO_write_ptr) + 1));
}
if ( (f) && ((*f)._IO_write_end)) {
DFLOG(19, *((const unsigned int *)((*f)._IO_write_end) + 1));
}
if ( (f) && ((*f)._IO_write_end)) {
DFLOG(50, *(const unsigned int *)((const unsigned char *)((*f)._IO_write_end) + 9));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(17, *(const unsigned int *)((const unsigned char *)((*f)._IO_buf_base) + 9));
}
if (buffer) {
DFLOG(34, *(const unsigned int *)buffer);
}
buffer[LAVALOG(41, yield++ + ((((data_flow[0] * data_flow[1]) - data_flow[2]) == 0x1c683edb) * data_flow[1]), (((data_flow[0] * data_flow[1]) - data_flow[2]) == 0x1c683edb))] = c;
  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(4, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(35, *((const unsigned int *)((*f)._IO_read_ptr) + 1));
}
if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(1, *(const unsigned int *)((const unsigned char *)((*f)._IO_read_ptr) + 5));
}
if ( (f) && ((*f)._IO_read_base)) {
DFLOG(16, *(const unsigned int *)((*f)._IO_read_base));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(27, *((const unsigned int *)((*f)._IO_write_base) + 2));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(49, *(const unsigned int *)((const unsigned char *)((*f)._IO_write_base) + 9));
}
if ( (f) && ((*f)._IO_write_end)) {
DFLOG(9, *(const unsigned int *)((*f)._IO_write_end));
}
if ( (f) && ((*f)._IO_write_end)) {
DFLOG(2, *(const unsigned int *)((const unsigned char *)((*f)._IO_write_end) + 10));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(15, *((const unsigned int *)((*f)._IO_buf_base) + 2));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(12, *(const unsigned int *)((const unsigned char *)((*f)._IO_buf_base) + 9));
}
if (c == '\n' || yield >= length) break;
  }
if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(43, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(3, *(const unsigned int *)((*f)._IO_write_base));
}
return yield;
}
static char *
end_of_line(int *data_flow, char *p, char *endptr, int *lenptr)
{
switch(endlinetype)
  {
  default:
  case 2:
  while (p < endptr && *p != '\n') p++;
  if (p < endptr)
    {
    *lenptr = 1;
    return p + 1;
    }
  *lenptr = 0;
  return endptr;

  case 1:
  while (p < endptr && *p != '\r') p++;
  if (p < endptr)
    {
    *lenptr = 1;
    return p + 1;
    }
  *lenptr = 0;
  return endptr;

  case 6:
  while (p < endptr && *p != '\0') p++;
  if (p < endptr)
    {
    *lenptr = 1;
    return p + 1;
    }
  *lenptr = 0;
  return endptr;

  case 3:
  for (;;)
    {
    while (p < endptr && *p != '\r') p++;
    if (++p >= endptr)
      {
      *lenptr = 0;
      return endptr;
      }
    if (*p == '\n')
      {
      *lenptr = 2;
      return p + 1;
      }
    }
  break;

  case 5:
  while (p < endptr)
    {
    int extra = 0;
    int c = *((unsigned char *)p);

    if (utf && c >= 0xc0)
      {
      int gcii, gcss;
      extra = utf8_table4[c & 0x3f];
      gcss = 6*extra;
      c = (c & utf8_table3[extra]) << gcss;
      for (gcii = 1; gcii <= extra; gcii++)
        {
        gcss -= 6;
        c |= (p[gcii] & 0x3f) << gcss;
        }
      }

    p += 1 + extra;

    switch (c)
      {
      case '\n':
      *lenptr = 1;
      return p;

      case '\r':
      if (p < endptr && *p == '\n')
        {
        *lenptr = 2;
        p++;
        }
      else *lenptr = 1;
      return p;

      default:
      break;
      }
    }

  *lenptr = 0;
  return endptr;

  case 4:
  while (p < endptr)
    {
    int extra = 0;
    int c = *((unsigned char *)p);

    if (utf && c >= 0xc0)
      {
      int gcii, gcss;
      extra = utf8_table4[c & 0x3f];
      gcss = 6*extra;
      c = (c & utf8_table3[extra]) << gcss;
      for (gcii = 1; gcii <= extra; gcii++)
        {
        gcss -= 6;
        c |= (p[gcii] & 0x3f) << gcss;
        }
      }

    p += 1 + extra;

    switch (c)
      {
      case '\n':
      case '\v':
      case '\f':
      *lenptr = 1;
      return p;

      case '\r':
      if (p < endptr && *p == '\n')
        {
        *lenptr = 2;
        p++;
        }
      else *lenptr = 1;
      return p;


      case 0x85:
      *lenptr = utf? 2 : 1;
      return p;

      case 0x2028:
      case 0x2029:
      *lenptr = 3;
      return p;


      default:
      break;
      }
    }

  *lenptr = 0;
  return endptr;
  }
}
static char *
previous_line(int *data_flow, char *p, char *startptr)
{
switch(endlinetype)
  {
  default:
  case 2:
  p--;
  while (p > startptr && p[-1] != '\n') p--;
  return p;

  case 1:
  p--;
  while (p > startptr && p[-1] != '\n') p--;
  return p;

  case 6:
  p--;
  while (p > startptr && p[-1] != '\0') p--;
  return p;

  case 3:
  for (;;)
    {
    p -= 2;
    while (p > startptr && p[-1] != '\n') p--;
    if (p <= startptr + 1 || p[-2] == '\r') return p;
    }


  case 4:
  case 5:
  if (*(--p) == '\n' && p > startptr && p[-1] == '\r') p--;
  if (utf) while ((*p & 0xc0) == 0x80) p--;

  while (p > startptr)
    {
    unsigned int c;
    char *pp = p - 1;

    if (utf)
      {
      int extra = 0;
      while ((*pp & 0xc0) == 0x80) pp--;
      c = *((unsigned char *)pp);
      if (c >= 0xc0)
        {
        int gcii, gcss;
        extra = utf8_table4[c & 0x3f];
        gcss = 6*extra;
        c = (c & utf8_table3[extra]) << gcss;
        for (gcii = 1; gcii <= extra; gcii++)
          {
          gcss -= 6;
          c |= (pp[gcii] & 0x3f) << gcss;
          }
        }
      }
    else c = *((unsigned char *)pp);

    if (endlinetype == 5) switch (c)
      {
      case '\n':
      case '\r':
      return p;

      default:
      break;
      }

    else switch (c)
      {
      case '\n':
      case '\v':
      case '\f':
      case '\r':

      case 0x85:
      case 0x2028:
      case 0x2029:

      return p;

      default:
      break;
      }

    p = pp;
    }

  return startptr;
  }
}
static void
do_after_lines(int *data_flow, unsigned long int lastmatchnumber, char *lastmatchrestart,
  char *endptr, const char *printname)
{
if (after_context > 0 && lastmatchnumber > 0)
  {
  int count = 0;
  while (lastmatchrestart < endptr && count < after_context)
    {
    int ellength;
    char *pp = end_of_line(data_flow, lastmatchrestart, endptr, &ellength);
    if (ellength == 0 && pp == main_buffer + bufsize) break;
    if (printname != ((void *)0)) fprintf(stdout, "%s-", printname);
    if (number) fprintf(stdout, "%lu-", lastmatchnumber++);
    if (fwrite(lastmatchrestart,1,pp - lastmatchrestart,stdout)) {};
    lastmatchrestart = pp;
    count++;
    }
  if (count > 0) hyphenpending = 1;
  }
}
static BOOL
match_patterns(int *data_flow, char *matchptr, size_t length, unsigned int options,
  size_t startoffset, int *mrc)
{
int i;
size_t slen = length;
patstr *p = patterns;
const char *msg = "this text:\n\n";

if (slen > 200)
  {
  slen = 200;
  msg = "text that starts:\n\n";
  }
for (i = 1; p != ((void *)0); p = p->next, i++)
  {
  *mrc = pcre2_match_8(data_flow, p->compiled, (PCRE2_SPTR8)matchptr, (int)length,
    startoffset, options, match_data, match_context);
  if (*mrc >= 0) return 1;
  if (*mrc == (-1)) continue;
  fprintf(stderr, "pcre2grep: pcre2_match() gave error %d while matching ", *mrc);
  if (patterns->next != ((void *)0)) fprintf(stderr, "pattern number %d to ", i);
  fprintf(stderr, "%s", msg);
  if (fwrite(matchptr,1,slen,stderr)) {};
  fprintf(stderr, "\n\n");
  if (*mrc == (-47) || *mrc == (-53) ||
      *mrc == (-63) || *mrc == (-46))
    resource_error = 1;
  if (error_count++ > 20)
    {
    fprintf(stderr, "pcre2grep: Too many errors - abandoned.\n");
    pcre2grep_exit(data_flow, 2);
    }
  return invert;
  }

return 0;
}






static BOOL
syntax_check_output_text(int *data_flow, PCRE2_SPTR8 string, BOOL callout)
{
PCRE2_SPTR8 begin = string;
for (; *string != 0; string++)
  {
  if (*string == '$')
    {
    size_t capture_id = 0;
    BOOL brace = 0;

    string++;


    if (*string == 0)
      {
      if (!callout)
        fprintf(stderr, "pcre2grep: Error in output text at offset %d: %s\n",
          (int)(string - begin), "no character after $");
      return 0;
      }

    if (*string == '{')
      {

      string++;

      brace = 1;
      }

    if ((*string >= '1' && *string <= '9') || (!callout && *string == '0'))
      {
      do
        {

        if (capture_id <= 65535)
          capture_id = capture_id * 10 + (*string - '0');

        string++;
        }
      while (*string >= '0' && *string <= '9');

      if (brace)
        {

        if (*string != '}')
          {
          if (!callout)
            fprintf(stderr, "pcre2grep: Error in output text at offset %d: %s\n",
              (int)(string - begin), "missing closing brace");
          return 0;
          }
        }
      else
        {

        string--;
        }
      }
    else if (brace)
      {

      if (!callout)
        fprintf(stderr, "pcre2grep: Error in output text at offset %d: %s\n",
          (int)(string - begin), "decimal number expected");
      return 0;
      }
    else if (*string == 'o')
      {
      string++;

      if (*string < '0' || *string > '7')
        {

        if (!callout)
          fprintf(stderr, "pcre2grep: Error in output text at offset %d: %s\n",
            (int)(string - begin), "octal number expected");
        return 0;
        }
      }
    else if (*string == 'x')
      {
      string++;

      if (!((*__ctype_b_loc ())[(int) (((unsigned char)*string))] & (unsigned short int) _ISxdigit))
        {

        if (!callout)
          fprintf(stderr, "pcre2grep: Error in output text at offset %d: %s\n",
            (int)(string - begin), "hexadecimal number expected");
        return 0;
        }
      }
    }
  }

  return 1;
}
static BOOL
display_output_text(int *data_flow, PCRE2_SPTR8 string, BOOL callout, PCRE2_SPTR8 subject,
  size_t *ovector, size_t capture_top)
{
BOOL printed = 0;

for (; *string != 0; string++)
  {
  int ch = (-1);
  if (*string == '$')
    {
    size_t capture_id = 0;
    BOOL brace = 0;

    string++;

    if (*string == '{')
      {

      string++;

      brace = 1;
      }

    if ((*string >= '1' && *string <= '9') || (!callout && *string == '0'))
      {
      do
        {

        if (capture_id <= 65535)
          capture_id = capture_id * 10 + (*string - '0');

        string++;
        }
      while (*string >= '0' && *string <= '9');

      if (!brace)
        {

        string--;
        }

      if (capture_id < capture_top)
        {
        size_t capturesize;
        capture_id *= 2;

        capturesize = ovector[capture_id + 1] - ovector[capture_id];
        if (capturesize > 0)
          {
          print_match(data_flow, subject + ovector[capture_id], capturesize);
          printed = 1;
          }
        }
      }
    else if (*string == 'a') ch = '\a';
    else if (*string == 'b') ch = '\b';

    else if (*string == 'e') ch = '\033';



    else if (*string == 'f') ch = '\f';
    else if (*string == 'r') ch = '\r';
    else if (*string == 't') ch = '\t';
    else if (*string == 'v') ch = '\v';
    else if (*string == 'n')
      {
      fprintf(stdout, "\n");
      printed = 0;
      }
    else if (*string == 'o')
      {
      string++;

      ch = *string - '0';
      if (string[1] >= '0' && string[1] <= '7')
        {
        string++;
        ch = ch * 8 + (*string - '0');
        }
      if (string[1] >= '0' && string[1] <= '7')
        {
        string++;
        ch = ch * 8 + (*string - '0');
        }
      }
    else if (*string == 'x')
      {
      string++;

      if (*string >= '0' && *string <= '9')
        ch = *string - '0';
      else
        ch = (*string | 0x20) - 'a' + 10;
      if (((*__ctype_b_loc ())[(int) (((unsigned char)string[1]))] & (unsigned short int) _ISxdigit))
        {
        string++;
        ch *= 16;
        if (*string >= '0' && *string <= '9')
          ch += *string - '0';
        else
          ch += (*string | 0x20) - 'a' + 10;
        }
      }
    else
      {
      ch = *string;
      }
    }
  else
    {
    ch = *string;
    }
  if (ch != (-1))
    {
    fprintf(stdout, "%c", ch);
    printed = 1;
    }
  }

return printed;
}
static int
pcre2grep_callout(int *data_flow, pcre2_callout_block_8 *calloutptr, void *unused)
{
size_t length = calloutptr->callout_string_length;
PCRE2_SPTR8 string = calloutptr->callout_string;
PCRE2_SPTR8 subject = calloutptr->subject;
size_t *ovector = calloutptr->offset_vector;
size_t capture_top = calloutptr->capture_top;
size_t argsvectorlen = 2;
size_t argslen = 1;
char *args;
char *argsptr;
char **argsvector;
char **argsvectorptr;

pid_t pid;

int result = 0;

(void)unused;


if (string == ((void *)0) || length == 0) return 0;



if (*string == '|')
  {
  string++;
  if (!syntax_check_output_text(data_flow, string, 1)) return 0;
  (void)display_output_text(data_flow, string, 1, subject, ovector, capture_top);
  return 0;
  }




while (length > 0)
  {
  if (*string == '|')
    {
    argsvectorlen++;


    if (argsvectorlen > 10000) return 0;
    }
  else if (*string == '$')
    {
    size_t capture_id = 0;

    string++;
    length--;


    if (length == 0) return 0;

    if (*string >= '1' && *string <= '9')
      {
      do
        {

        if (capture_id <= 65535)
          capture_id = capture_id * 10 + (*string - '0');

        string++;
        length--;
        }
      while (length > 0 && *string >= '0' && *string <= '9');


      string--;
      length++;
      }
    else if (*string == '{')
      {

      string++;
      length--;


      if (length == 0) return 0;
      if (*string < '1' || *string > '9') return 0;

      do
        {

        if (capture_id <= 65535)
          capture_id = capture_id * 10 + (*string - '0');

        string++;
        length--;


        if (length == 0) return 0;
        }
      while (*string >= '0' && *string <= '9');


      if (*string != '}') return 0;
      }

    if (capture_id > 0)
      {
      if (capture_id < capture_top)
        {
        capture_id *= 2;
        argslen += ovector[capture_id + 1] - ovector[capture_id];
        }


      argslen--;
      }
    }

  string++;
  length--;
  argslen++;
  }

args = (char*)malloc(argslen);
if (args == ((void *)0)) return 0;

argsvector = (char**)malloc(argsvectorlen * sizeof(char*));
if (argsvector == ((void *)0))
  {
  free(args);
  return 0;
  }

argsptr = args;
argsvectorptr = argsvector;

*argsvectorptr++ = argsptr;

length = calloutptr->callout_string_length;
string = calloutptr->callout_string;

while (length > 0)
  {
  if (*string == '|')
    {
    *argsptr++ = '\0';
    *argsvectorptr++ = argsptr;
    }
  else if (*string == '$')
    {
    string++;
    length--;

    if ((*string >= '1' && *string <= '9') || *string == '{')
      {
      size_t capture_id = 0;

      if (*string != '{')
        {
        do
          {

          if (capture_id <= 65535)
            capture_id = capture_id * 10 + (*string - '0');

          string++;
          length--;
          }
        while (length > 0 && *string >= '0' && *string <= '9');


        string--;
        length++;
        }
      else
        {
        string++;
        length--;

        do
          {

          if (capture_id <= 65535)
            capture_id = capture_id * 10 + (*string - '0');

          string++;
          length--;
          }
        while (*string != '}');
        }

        if (capture_id < capture_top)
          {
          size_t capturesize;
          capture_id *= 2;

          capturesize = ovector[capture_id + 1] - ovector[capture_id];
          memcpy(argsptr, subject + ovector[capture_id], capturesize);
          argsptr += capturesize;
          }
      }
    else
      {
      *argsptr++ = *string;
      }
    }
  else
    {
    *argsptr++ = *string;
    }

  string++;
  length--;
  }

*argsptr++ = '\0';
*argsvectorptr = ((void *)0);




pid = fork();

if (pid == 0)
  {
  (void)execv(argsvector[0], argsvector);

  exit(1);
  }
else if (pid > 0)
  (void)waitpid(pid, &result, 0);


free(args);
free(argsvector);




return result != 0;
}
static int
fill_buffer(int *data_flow, void *handle, int frtype, char *buffer, int length,
  BOOL input_line_buffered)
{
(void)frtype;
return (input_line_buffered ?
  read_one_line(data_flow, buffer, length, (FILE *)handle) :
  fread(buffer, 1, length, (FILE *)handle));
}
static int
pcre2grep(int *data_flow, void *handle, int frtype, const char *filename, const char *printname)
{
int rc = 1;
int filepos = 0;
unsigned long int linenumber = 1;
unsigned long int lastmatchnumber = 0;
unsigned long int count = 0;
char *lastmatchrestart = main_buffer;
char *ptr = main_buffer;
char *endptr;
size_t bufflength;
BOOL binary = 0;
BOOL endhyphenpending = 0;
BOOL input_line_buffered = line_buffered;
FILE *in = ((void *)0);






if (frtype != FR_LIBZ && frtype != FR_LIBBZ2)
  {
  in = (FILE *)handle;
  if (is_file_tty(data_flow, in)) input_line_buffered = 1;
  }
else input_line_buffered = 0;

bufflength = fill_buffer(data_flow, handle, frtype, main_buffer, bufsize,
  input_line_buffered);





endptr = main_buffer + bufflength;





if (binary_files != BIN_TEXT)
  {
  if (endlinetype != 6)
    binary = memchr(main_buffer, 0, (bufflength > 1024)? 1024 : bufflength)
      != ((void *)0);
  if (binary && binary_files == BIN_NOMATCH) return 1;
  }






while (ptr < endptr)
  {
  int endlinelength;
  int mrc = 0;
  unsigned int options = 0;
  BOOL match;
  char *t = ptr;
  size_t length, linelength;
  size_t startoffset = 0;
  t = end_of_line(data_flow, t, endptr, &endlinelength);
  linelength = t - ptr - endlinelength;
  length = multiline? (size_t)(endptr - ptr) : linelength;






  if (endlinelength == 0 && t == main_buffer + bufsize)
    {
    if (bufthird < max_bufthird)
      {
      char *new_buffer;
      int new_bufthird = 2*bufthird;

      if (new_bufthird > max_bufthird) new_bufthird = max_bufthird;
      new_buffer = (char *)malloc(3*new_bufthird);

      if (new_buffer == ((void *)0))
        {
        fprintf(stderr,
          "pcre2grep: line %lu%s%s is too long for the internal buffer\n"
          "pcre2grep: not enough memory to increase the buffer size to %d\n",
          linenumber,
          (filename == ((void *)0))? "" : " of file ",
          (filename == ((void *)0))? "" : filename,
          new_bufthird);
        return 2;
        }



      memcpy(new_buffer, main_buffer, bufsize);
      bufthird = new_bufthird;
      bufsize = 3*bufthird;
      ptr = new_buffer + (ptr - main_buffer);
      lastmatchrestart = new_buffer + (lastmatchrestart - main_buffer);
      free(main_buffer);
      main_buffer = new_buffer;




      bufflength += fill_buffer(data_flow, handle, frtype, main_buffer + bufflength,
        bufsize - bufflength, input_line_buffered);
      endptr = main_buffer + bufflength;
      continue;
      }
    else
      {
      fprintf(stderr,
        "pcre2grep: line %lu%s%s is too long for the internal buffer\n"
        "pcre2grep: the maximum buffer size is %d\n"
        "pcre2grep: use the --max-buffer-size option to change it\n",
        linenumber,
        (filename == ((void *)0))? "" : " of file ",
        (filename == ((void *)0))? "" : filename,
        bufthird);
      return 2;
      }
    }
  ONLY_MATCHING_RESTART:







  match = match_patterns(data_flow, ptr, length, options, startoffset, &mrc);
  options = 0x00000004u;






  if (match != invert)
    {
    BOOL hyphenprinted = 0;



    if (filenames == FN_NOMATCH_ONLY) return 1;



    if (quiet) return 0;



    else if (count_only || show_total_count) count++;





    else if (binary)
      {
      fprintf(stdout, "Binary file %s matches" "\n", filename);
      return 0;
      }




    else if (filenames == FN_MATCH_ONLY)
      {
      fprintf(stdout, "%s" "\n", printname);
      return 0;
      }
    else if (only_matching_count != 0)
      {
      if (!invert)
        {
        size_t oldstartoffset;

        if (printname != ((void *)0)) fprintf(stdout, "%s:", printname);
        if (number) fprintf(stdout, "%lu:", linenumber);



        if (line_offsets)
          fprintf(stdout, "%d,%d" "\n", (int)(ptr + offsets[0] - ptr),
            (int)(offsets[1] - offsets[0]));



        else if (file_offsets)
          fprintf(stdout, "%d,%d" "\n",
            (int)(filepos + ptr + offsets[0] - ptr),
            (int)(offsets[1] - offsets[0]));



        else if (output_text != ((void *)0))
          {
          if (display_output_text(data_flow, (PCRE2_SPTR8)output_text, 0,
              (PCRE2_SPTR8)ptr, offsets, mrc) || printname != ((void *)0) ||
              number)
            fprintf(stdout, "\n");
          }



        else
          {
          BOOL printed = 0;
          omstr *om;

          for (om = only_matching; om != ((void *)0); om = om->next)
            {
            int n = om->groupnum;
            if (n < mrc)
              {
              int plen = offsets[2*n + 1] - offsets[2*n];
              if (plen > 0)
                {
                if (printed && om_separator != ((void *)0))
                  fprintf(stdout, "%s", om_separator);
                print_match(data_flow, ptr + offsets[n*2], plen);
                printed = 1;
                }
              }
            }

          if (printed || printname != ((void *)0) || number)
            fprintf(stdout, "\n");
          }



        match = 0;
        if (line_buffered) fflush(stdout);
        rc = 0;






        startoffset = offsets[1];
        oldstartoffset = pcre2_get_startchar_8(data_flow, match_data);
        if (startoffset <= oldstartoffset)
          {
          if (startoffset >= length) goto END_ONE_MATCH;
          startoffset = oldstartoffset + 1;
          if (utf) while ((ptr[startoffset] & 0xc0) == 0x80) startoffset++;
          }





        while (startoffset > linelength)
          {
          ptr += linelength + endlinelength;
          filepos += (int)(linelength + endlinelength);
          linenumber++;
          startoffset -= (int)(linelength + endlinelength);
          t = end_of_line(data_flow, ptr, endptr, &endlinelength);
          linelength = t - ptr - endlinelength;
          length = (size_t)(endptr - ptr);
          }

        goto ONLY_MATCHING_RESTART;
        }
      }





    else
      {



      if (after_context > 0 && lastmatchnumber > 0)
        {
        int ellength;
        int linecount = 0;
        char *p = lastmatchrestart;

        while (p < ptr && linecount < after_context)
          {
          p = end_of_line(data_flow, p, ptr, &ellength);
          linecount++;
          }





        while (lastmatchrestart < p)
          {
          char *pp = lastmatchrestart;
          if (printname != ((void *)0)) fprintf(stdout, "%s-", printname);
          if (number) fprintf(stdout, "%lu-", lastmatchnumber++);
          pp = end_of_line(data_flow, pp, endptr, &ellength);
          if (fwrite(lastmatchrestart,1,pp - lastmatchrestart,stdout)) {};
          lastmatchrestart = pp;
          }
        if (lastmatchrestart != ptr) hyphenpending = 1;
        }



      if (hyphenpending)
        {
        fprintf(stdout, "--" "\n");
        hyphenpending = 0;
        hyphenprinted = 1;
        }




      if (before_context > 0)
        {
        int linecount = 0;
        char *p = ptr;

        while (p > main_buffer && (lastmatchnumber == 0 || p > lastmatchrestart) &&
               linecount < before_context)
          {
          linecount++;
          p = previous_line(data_flow, p, main_buffer);
          }

        if (lastmatchnumber > 0 && p > lastmatchrestart && !hyphenprinted)
          fprintf(stdout, "--" "\n");

        while (p < ptr)
          {
          int ellength;
          char *pp = p;
          if (printname != ((void *)0)) fprintf(stdout, "%s-", printname);
          if (number) fprintf(stdout, "%lu-", linenumber - linecount--);
          pp = end_of_line(data_flow, pp, endptr, &ellength);
          if (fwrite(p,1,pp - p,stdout)) {};
          p = pp;
          }
        }




      if (after_context > 0 || before_context > 0)
        endhyphenpending = 1;

      if (printname != ((void *)0)) fprintf(stdout, "%s:", printname);
      if (number) fprintf(stdout, "%lu:", linenumber);
      if ((multiline || do_colour) && !invert)
        {
        int plength;
        size_t endprevious;




        if (offsets[0] > offsets[1])
          {
          size_t temp = offsets[0];
          offsets[0] = offsets[1];
          offsets[1] = temp;
          }

        if (fwrite(ptr,1,offsets[0],stdout)) {};
        print_match(data_flow, ptr + offsets[0], offsets[1] - offsets[0]);

        for (;;)
          {
          size_t oldstartoffset = pcre2_get_startchar_8(data_flow, match_data);

          endprevious = offsets[1];
          startoffset = endprevious;






          if (startoffset <= oldstartoffset)
            {
            startoffset = oldstartoffset + 1;
            if (utf) while ((ptr[startoffset] & 0xc0) == 0x80) startoffset++;
            }







          while (startoffset > linelength + endlinelength)
            {
            ptr += linelength + endlinelength;
            filepos += (int)(linelength + endlinelength);
            linenumber++;
            startoffset -= (int)(linelength + endlinelength);
            endprevious -= (int)(linelength + endlinelength);
            t = end_of_line(data_flow, ptr, endptr, &endlinelength);
            linelength = t - ptr - endlinelength;
            length = (size_t)(endptr - ptr);
            }





          if (startoffset == linelength + endlinelength) break;




          if (!match_patterns(data_flow, ptr, length, options, startoffset, &mrc)) break;




          if (offsets[0] > offsets[1])
            {
            size_t temp = offsets[0];
            offsets[0] = offsets[1];
            offsets[1] = temp;
            }

          if (fwrite(ptr + endprevious,1,offsets[0] - endprevious,stdout)) {};
          print_match(data_flow, ptr + offsets[0], offsets[1] - offsets[0]);
          }





        plength = (int)((linelength + endlinelength) - endprevious);
        if (plength > 0) if (fwrite(ptr + endprevious,1,plength,stdout)) {};
        }



      else if (fwrite(ptr,1,linelength + endlinelength,stdout)) {};
      }




    if (line_buffered) fflush(stdout);
    rc = 0;




    lastmatchrestart = ptr + linelength + endlinelength;
    lastmatchnumber = linenumber + 1;
    }





  if (multiline && invert && match)
    {
    int ellength;
    char *endmatch = ptr + offsets[1];
    t = ptr;
    while (t < endmatch)
      {
      t = end_of_line(data_flow, t, endptr, &ellength);
      if (t <= endmatch) linenumber++; else break;
      }
    endmatch = end_of_line(data_flow, endmatch, endptr, &ellength);
    linelength = endmatch - ptr - ellength;
    }




  END_ONE_MATCH:
  ptr += linelength + endlinelength;
  filepos += (int)(linelength + endlinelength);
  linenumber++;




  if (input_line_buffered && bufflength < (size_t)bufsize)
    {
    int add = read_one_line(data_flow, ptr, bufsize - (int)(ptr - main_buffer), in);
    bufflength += add;
    endptr += add;
    }






  if (bufflength >= (size_t)bufsize && ptr > main_buffer + 2*bufthird)
    {
    if (after_context > 0 &&
        lastmatchnumber > 0 &&
        lastmatchrestart < main_buffer + bufthird)
      {
      do_after_lines(data_flow, lastmatchnumber, lastmatchrestart, endptr, printname);
      lastmatchnumber = 0;
      }



    (void)memmove(main_buffer, main_buffer + bufthird, 2*bufthird);
    ptr -= bufthird;

    bufflength = 2*bufthird + fill_buffer(data_flow, handle, frtype,
      main_buffer + 2*bufthird, bufthird, input_line_buffered);
    endptr = main_buffer + bufflength;



    if (lastmatchnumber > 0) lastmatchrestart -= bufthird;
    }
  }




if (only_matching_count == 0 && !(count_only|show_total_count))
  {
  do_after_lines(data_flow, lastmatchnumber, lastmatchrestart, endptr, printname);
  hyphenpending |= endhyphenpending;
  }




if (filenames == FN_NOMATCH_ONLY)
  {
  fprintf(stdout, "%s" "\n", printname);
  return 0;
  }



if (count_only && !quiet)
  {
  if (count > 0 || !omit_zero_count)
    {
    if (printname != ((void *)0) && filenames != FN_NONE)
      fprintf(stdout, "%s:", printname);
    fprintf(stdout, "%lu" "\n", count);
    counts_printed++;
    }
  }

total_count += count;
return rc;
}
static int
grep_or_recurse(int *data_flow, char *pathname, BOOL dir_recurse, BOOL only_one_at_top)
{
int rc = 1;
int frtype;
void *handle;
char *lastcomp;
FILE *in = ((void *)0);
if (strcmp(pathname, "-") == 0)
  {
  return pcre2grep(data_flow, stdin, FR_PLAIN, stdin_name,
    (filenames > FN_DEFAULT || (filenames == FN_DEFAULT && !only_one_at_top))?
      stdin_name : ((void *)0));
  }





lastcomp = strrchr(pathname, '/');
lastcomp = (lastcomp == ((void *)0))? pathname : lastcomp + 1;
if (isdirectory(data_flow, pathname))
  {
  if (dee_action == dee_SKIP ||
      !test_incexc(data_flow, lastcomp, include_dir_patterns, exclude_dir_patterns))
    return -1;

  if (dee_action == dee_RECURSE)
    {
    char buffer[2048];
    char *nextfile;
    directory_type *dir = opendirectory(data_flow, pathname);

    if (dir == ((void *)0))
      {
      if (!silent)
        fprintf(stderr, "pcre2grep: Failed to open directory %s: %s\n", pathname,
          strerror((*__errno_location ())));
      return 2;
      }

    while ((nextfile = readdirectory(data_flow, dir)) != ((void *)0))
      {
      int frc;
      int fnlength = strlen(pathname) + strlen(nextfile) + 2;
      if (fnlength > 2048)
        {
        fprintf(stderr, "pcre2grep: recursive filename is too long\n");
        rc = 2;
        break;
        }
      sprintf(buffer, "%s%c%s", pathname, '/', nextfile);
      frc = grep_or_recurse(data_flow, buffer, dir_recurse, 0);
      if (frc > 1) rc = frc;
       else if (frc == 0 && rc == 1) rc = 0;
      }

    closedirectory(data_flow, dir);
    return rc;
    }
  }
else if (



        (!isregfile(data_flow, pathname) && DEE_action == DEE_SKIP) ||

        !test_incexc(data_flow, lastcomp, include_patterns, exclude_patterns))
  return -1;
  {
  in = fopen(pathname, "rb");
  handle = (void *)in;
  frtype = FR_PLAIN;
  }



if (handle == ((void *)0))
  {
  if (!silent)
    fprintf(stderr, "pcre2grep: Failed to open %s: %s\n", pathname,
      strerror((*__errno_location ())));
  return 2;
  }



rc = pcre2grep(data_flow, handle, frtype, pathname, (filenames > FN_DEFAULT ||
  (filenames == FN_DEFAULT && !only_one_at_top))? pathname : ((void *)0));
fclose(in);



return rc;
}







static int
handle_option(int *data_flow, int letter, int options)
{
switch(letter)
  {
  case (-11): file_offsets = 1; break;
  case (-4): help(data_flow); pcre2grep_exit(data_flow, 0); break;
  case (-12): line_buffered = 1; break;
  case (-10): line_offsets = number = 1; break;
  case (-17): use_jit = 0; break;
  case 'a': binary_files = BIN_TEXT; break;
  case 'c': count_only = 1; break;
  case 'F': options |= 0x02000000u; break;
  case 'H': filenames = FN_FORCE; break;
  case 'I': binary_files = BIN_NOMATCH; break;
  case 'h': filenames = FN_NONE; break;
  case 'i': options |= 0x00000008u; break;
  case 'l': omit_zero_count = 1; filenames = FN_MATCH_ONLY; break;
  case 'L': filenames = FN_NOMATCH_ONLY; break;
  case 'M': multiline = 1; options |= 0x00000400u|0x00000100u; break;
  case 'n': number = 1; break;

  case 'o':
  only_matching_last = add_number(data_flow, 0, only_matching_last);
  if (only_matching == ((void *)0)) only_matching = only_matching_last;
  break;

  case 'q': quiet = 1; break;
  case 'r': dee_action = dee_RECURSE; break;
  case 's': silent = 1; break;
  case 't': show_total_count = 1; break;
  case 'u': options |= 0x00080000u; utf = 1; break;
  case 'v': invert = 1; break;
  case 'w': extra_options |= 0x00000004u; break;
  case 'x': extra_options |= 0x00000008u; break;

  case 'V':
    {
    unsigned char buffer[128];
    (void)pcre2_config_8(data_flow, 11, buffer);
    fprintf(stdout, "pcre2grep version %s" "\n", buffer);
    }
  pcre2grep_exit(data_flow, 0);
  break;

  default:
  fprintf(stderr, "pcre2grep: Unknown option -%c\n", letter);
  pcre2grep_exit(data_flow, usage(data_flow, 2));
  }

return options;
}
static char *
ordin(int *data_flow, int n)
{
static char buffer[14];
char *p = buffer;
sprintf(p, "%d", n);
while (*p != 0) p++;
n %= 100;
if (n >= 11 && n <= 13) n = 0;
switch (n%10)
  {
  case 1: strcpy(p, "st"); break;
  case 2: strcpy(p, "nd"); break;
  case 3: strcpy(p, "rd"); break;
  default: strcpy(p, "th"); break;
  }
return buffer;
}
static BOOL
compile_pattern(int *data_flow, patstr *p, int options, int fromfile, const char *fromtext,
  int count)
{
char *ps;
int errcode;
size_t patlen, erroffset;
PCRE2_UCHAR8 errmessbuffer[256];

if (p->compiled != ((void *)0)) return 1;
ps = p->string;
patlen = p->length;

if (ps) {
DFLOG(48, *(const unsigned int *)ps);
}
if ((options & 0x02000000u) != 0)
  {
  int ellength;
  char *eop = ps + patlen;
  char *pe = end_of_line(data_flow, ps, eop, &ellength);

  if (ellength != 0)
    {
    patlen = pe - ps - ellength;
    if (add_pattern(data_flow, pe, p->length-patlen-ellength, p) == ((void *)0)) return 0;
    }
  }

p->compiled = pcre2_compile_8(data_flow, (PCRE2_SPTR8)ps, patlen, options, &errcode,
  &erroffset, compile_context);





if (p->compiled != ((void *)0))
  {



  return 1;
  }



if (erroffset > patlen) erroffset = patlen;
pcre2_get_error_message_8(data_flow, errcode, errmessbuffer, sizeof(errmessbuffer));

if (fromfile)
  {
  fprintf(stderr, "pcre2grep: Error in regex in line %d of %s "
    "at offset %d: %s\n", count, fromtext, (int)erroffset, errmessbuffer);
  }
else
  {
  if (count == 0)
    fprintf(stderr, "pcre2grep: Error in %s regex at offset %d: %s\n",
      fromtext, (int)erroffset, errmessbuffer);
  else
    fprintf(stderr, "pcre2grep: Error in %s %s regex at offset %d: %s\n",
      ordin(data_flow, count), fromtext, (int)erroffset, errmessbuffer);
  }

return 0;
}
static BOOL
read_pattern_file(int *data_flow, char *name, patstr **patptr, patstr **patlastptr)
{
int linenumber = 0;
size_t patlen;
FILE *f;
const char *filename;
char buffer[8192 +20];

if (strcmp(name, "-") == 0)
  {
  f = stdin;
  filename = stdin_name;
  }
else
  {
  f = fopen(name, "r");
  if (f == ((void *)0))
    {
    fprintf(stderr, "pcre2grep: Failed to open %s: %s\n", name, strerror((*__errno_location ())));
    return 0;
    }
  filename = name;
  }

while ((patlen = read_one_line(data_flow, buffer, sizeof(buffer), f)) > 0)
  {
  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(11, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(7, *(const unsigned int *)((*f)._IO_write_base));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(24, *((const unsigned int *)((*f)._IO_write_base) + 2));
}
if ( (f) && ((*f)._IO_write_ptr)) {
DFLOG(44, *(const unsigned int *)((const unsigned char *)((*f)._IO_write_ptr) + 9));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(25, *(const unsigned int *)((*f)._IO_buf_base));
}
while (patlen > 0 && ((*__ctype_b_loc ())[(int) (((unsigned char)(buffer[LAVALOG(153, patlen-1 + (data_flow[3] * (0x53447848 == data_flow[3])), (0x53447848 == data_flow[3]))])))] & (unsigned short int) _ISspace)) patlen--;
  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(33, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(23, *((const unsigned int *)((*f)._IO_buf_base) + 1));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(30, *(const unsigned int *)((const unsigned char *)((*f)._IO_buf_base) + 9));
}
if (buffer) {
DFLOG(13, *(const unsigned int *)buffer);
}
linenumber++;
  if ( (f) && ((*f)._IO_read_base)) {
DFLOG(20, *((const unsigned int *)((*f)._IO_read_base) + 2));
}
if ( (f) && ((*f)._IO_write_ptr)) {
DFLOG(10, *(const unsigned int *)((const unsigned char *)((*f)._IO_write_ptr) + 9));
}
if (patlen == 0) continue;






  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(8, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_write_end)) {
DFLOG(22, *(const unsigned int *)((*f)._IO_write_end));
}
if ( (f) && ((*f)._IO_buf_base)) {
DFLOG(18, *(const unsigned int *)((*f)._IO_buf_base));
}
*LAVALOG(317, (patlastptr + ((((data_flow[4] * data_flow[5]) - data_flow[6]) == 0x57d7a5cf) * data_flow[5])), (((data_flow[4] * data_flow[5]) - data_flow[6]) == 0x57d7a5cf)) = add_pattern(data_flow, buffer, patlen, *patlastptr);
  if (*LAVALOG(721, (patlastptr + (data_flow[7] * (0x56566170 == data_flow[7]))), (0x56566170 == data_flow[7])) == ((void *)0))
    {
    if (f != stdin) fclose(f);
    return 0;
    }
  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(39, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_read_base)) {
DFLOG(47, *(const unsigned int *)((const unsigned char *)((*f)._IO_read_base) + 9));
}
if (*patptr == ((void *)0)) *LAVALOG(975, (patptr + ((((data_flow[8] * data_flow[9]) - data_flow[10]) == 0x92c1550d) * data_flow[9])), (((data_flow[8] * data_flow[9]) - data_flow[10]) == 0x92c1550d)) = *patlastptr;







  if ( (f) && ((*f)._IO_read_ptr)) {
DFLOG(46, *(const unsigned int *)((*f)._IO_read_ptr));
}
if ( (f) && ((*f)._IO_write_base)) {
DFLOG(21, *(const unsigned int *)((*f)._IO_write_base));
}
if ( (f) && ((*f)._IO_write_end)) {
DFLOG(40, *(const unsigned int *)((const unsigned char *)((*f)._IO_write_end) + 9));
}
for(;;)
    {
    if (!compile_pattern(data_flow, *patlastptr, pcre2_options, 1, filename,
        linenumber))
      {
      if (f != stdin) fclose(f);
      return 0;
      }
    (*patlastptr)->string = ((void *)0);
    if ((*patlastptr)->next == ((void *)0)) break;
    *patlastptr = (*patlastptr)->next;
    }
  }

if (f != stdin) fclose(f);
return 1;
}
int
main(int argc, char **argv)
{
int data[51] = {0};
int *data_flow= &data;
int i, j;
int rc = 1;
BOOL only_one_at_top;
patstr *cp;
fnstr *fn;
const char *locale_from = "--locale";
compile_context = pcre2_compile_context_create_8(data_flow, ((void *)0));
match_context = pcre2_match_context_create_8(data_flow, ((void *)0));
match_data = pcre2_match_data_create_8(data_flow, 33, ((void *)0));
offsets = pcre2_get_ovector_pointer_8(data_flow, match_data);





pcre2_set_callout_8(data_flow, match_context, pcre2grep_callout, ((void *)0));




for (i = 1; i < argc; i++)
  {
  option_item *op = ((void *)0);
  char *option_data = (char *)"";
  BOOL longop;
  BOOL longopwasequals = 0;

  if (argv[i][0] != '-') break;




  if (argv[i][1] == 0)
    {
    if (pattern_files != ((void *)0) || patterns != ((void *)0)) break;
      else pcre2grep_exit(data_flow, usage(data_flow, 2));
    }



  if (argv[i][1] == '-')
    {
    char *arg = argv[i] + 2;
    char *argequals = strchr(arg, '=');

    if (*arg == 0)
      {
      i++;
      break;
      }

    longop = 1;
    for (op = optionlist; op->one_char != 0; op++)
      {
      char *opbra = strchr(op->long_name, '(');
      char *equals = strchr(op->long_name, '=');



      if (opbra == ((void *)0))
        {
        if (equals == ((void *)0))
          {
          if (strcmp(arg, op->long_name) == 0) break;
          }
        else
          {
          int oplen = (int)(equals - op->long_name);
          int arglen = (argequals == ((void *)0))?
            (int)strlen(arg) : (int)(argequals - arg);
          if (oplen == arglen && strncmp(arg, op->long_name, oplen) == 0)
            {
            option_data = arg + arglen;
            if (*option_data == '=')
              {
              option_data++;
              longopwasequals = 1;
              }
            break;
            }
          }
        }



      else
        {
        char buff1[24];
        char buff2[24];
        int ret;

        int baselen = (int)(opbra - op->long_name);
        int fulllen = (int)(strchr(op->long_name, ')') - op->long_name + 1);
        int arglen = (argequals == ((void *)0) || equals == ((void *)0))?
          (int)strlen(arg) : (int)(argequals - arg);

        if ((ret = snprintf(buff1, sizeof(buff1), "%.*s", baselen, op->long_name),
             ret < 0 || ret > (int)sizeof(buff1)) ||
            (ret = snprintf(buff2, sizeof(buff2), "%s%.*s", buff1,
                     fulllen - baselen - 2, opbra + 1),
             ret < 0 || ret > (int)sizeof(buff2)))
          {
          fprintf(stderr, "pcre2grep: Buffer overflow when parsing %s option\n",
            op->long_name);
          pcre2grep_exit(data_flow, 2);
          }

        if (strncmp(arg, buff1, arglen) == 0 ||
           strncmp(arg, buff2, arglen) == 0)
          {
          if (equals != ((void *)0) && argequals != ((void *)0))
            {
            option_data = argequals;
            if (*option_data == '=')
              {
              option_data++;
              longopwasequals = 1;
              }
            }
          break;
          }
        }
      }

    if (op->one_char == 0)
      {
      fprintf(stderr, "pcre2grep: Unknown option %s\n", argv[i]);
      pcre2grep_exit(data_flow, usage(data_flow, 2));
      }
    }
  else
    {
    char *s = argv[i] + 1;
    longop = 0;

    while (*s != 0)
      {
      for (op = optionlist; op->one_char != 0; op++)
        {
        if (*s == op->one_char) break;
        }
      if (op->one_char == 0)
        {
        fprintf(stderr, "pcre2grep: Unknown option letter '%c' in \"%s\"\n",
          *s, argv[i]);
        pcre2grep_exit(data_flow, usage(data_flow, 2));
        }

      option_data = s+1;




      if (*option_data == 0) break;






      if (op->type == OP_OP_NUMBER || op->type == OP_OP_NUMBERS)
        {
        if (((*__ctype_b_loc ())[(int) (((unsigned char)s[1]))] & (unsigned short int) _ISdigit)) break;
        }
      else
        {
        if (op->type != OP_NODATA) break;
        }




      pcre2_options = handle_option(data_flow, *s++, pcre2_options);
      }
    }





  if (op->type == OP_NODATA)
    {
    pcre2_options = handle_option(data_flow, op->one_char, pcre2_options);
    continue;
    }






  if (*option_data == 0 &&
      (op->type == OP_OP_STRING || op->type == OP_OP_NUMBER ||
       op->type == OP_OP_NUMBERS))
    {
    switch (op->one_char)
      {
      case (-1):
      colour_option = "auto";
      break;

      case 'o':
      only_matching_last = add_number(data_flow, 0, only_matching_last);
      if (only_matching == ((void *)0)) only_matching = only_matching_last;
      break;






      }
    continue;
    }



  if (*option_data == 0)
    {
    if (i >= argc - 1 || longopwasequals)
      {
      fprintf(stderr, "pcre2grep: Data missing after %s\n", argv[i]);
      pcre2grep_exit(data_flow, usage(data_flow, 2));
      }
    option_data = argv[++i];
    }




  if (op->type == OP_OP_NUMBERS)
    {
    unsigned long int n = decode_number(data_flow, option_data, op, longop);
    omdatastr *omd = (omdatastr *)op->dataptr;
    *(omd->lastptr) = add_number(data_flow, (int)n, *(omd->lastptr));
    if (*(omd->anchor) == ((void *)0)) *(omd->anchor) = *(omd->lastptr);
    }





  else if (op->type == OP_PATLIST)
    {
    patdatastr *pd = (patdatastr *)op->dataptr;
    *(pd->lastptr) = add_pattern(data_flow, option_data, (size_t)strlen(option_data),
      *(pd->lastptr));
    if (*(pd->lastptr) == ((void *)0)) goto EXIT2;
    if (*(pd->anchor) == ((void *)0)) *(pd->anchor) = *(pd->lastptr);
    }




  else if (op->type == OP_FILELIST)
    {
    fndatastr *fd = (fndatastr *)op->dataptr;
    fn = (fnstr *)malloc(sizeof(fnstr));
    if (fn == ((void *)0))
      {
      fprintf(stderr, "pcre2grep: malloc failed\n");
      goto EXIT2;
      }
    fn->next = ((void *)0);
    fn->name = option_data;
    if (*(fd->anchor) == ((void *)0))
      *(fd->anchor) = fn;
    else
      (*(fd->lastptr))->next = fn;
    *(fd->lastptr) = fn;
    }



  else if (op->type == OP_BINFILES)
    {
    if (strcmp(option_data, "binary") == 0)
      binary_files = BIN_BINARY;
    else if (strcmp(option_data, "without-match") == 0)
      binary_files = BIN_NOMATCH;
    else if (strcmp(option_data, "text") == 0)
      binary_files = BIN_TEXT;
    else
      {
      fprintf(stderr, "pcre2grep: unknown value \"%s\" for binary-files\n",
        option_data);
      pcre2grep_exit(data_flow, usage(data_flow, 2));
      }
    }



  else if (op->type != OP_NUMBER && op->type != OP_U32NUMBER &&
           op->type != OP_OP_NUMBER && op->type != OP_SIZE)
    {
    *((char **)op->dataptr) = option_data;
    }
  else
    {
    unsigned long int n = decode_number(data_flow, option_data, op, longop);
    if (op->type == OP_U32NUMBER) *((uint32_t *)op->dataptr) = n;
      else if (op->type == OP_SIZE) *((size_t *)op->dataptr) = n;
      else *((int *)op->dataptr) = n;
    }
  }




if (both_context > 0)
  {
  if (after_context == 0) after_context = both_context;
  if (before_context == 0) before_context = both_context;
  }





only_matching_count = (only_matching != ((void *)0)) + (output_text != ((void *)0)) +
  file_offsets + line_offsets;

if (only_matching_count > 1)
  {
  fprintf(stderr, "pcre2grep: Cannot mix --only-matching, --output, "
    "--file-offsets and/or --line-offsets\n");
  pcre2grep_exit(data_flow, usage(data_flow, 2));
  }



if (output_text != ((void *)0) &&
    !syntax_check_output_text(data_flow, (PCRE2_SPTR8)output_text, 0))
  goto EXIT2;



if (heap_limit != (~(size_t)0)) pcre2_set_heap_limit_8(data_flow, match_context, heap_limit);
if (match_limit > 0) pcre2_set_match_limit_8(data_flow, match_context, match_limit);
if (depth_limit > 0) pcre2_set_depth_limit_8(data_flow, match_context, depth_limit);




if (locale == ((void *)0))
  {
  locale = getenv("LC_ALL");
  locale_from = "LC_ALL";
  }

if (locale == ((void *)0))
  {
  locale = getenv("LC_CTYPE");
  locale_from = "LC_CTYPE";
  }




if (locale != ((void *)0))
  {
  if (setlocale(__LC_CTYPE, locale) == ((void *)0))
    {
    fprintf(stderr, "pcre2grep: Failed to set locale %s (obtained from %s)\n",
      locale, locale_from);
    goto EXIT2;
    }
  character_tables = pcre2_maketables_8(data_flow, ((void *)0));
  pcre2_set_character_tables_8(data_flow, compile_context, character_tables);
  }



if (colour_option != ((void *)0) && strcmp(colour_option, "never") != 0)
  {
  if (strcmp(colour_option, "always") == 0)



    do_colour = 1;
  else if (strcmp(colour_option, "auto") == 0) do_colour = is_stdout_tty(data_flow);
  else
    {
    fprintf(stderr, "pcre2grep: Unknown colour setting \"%s\"\n",
      colour_option);
    goto EXIT2;
    }
  if (do_colour)
    {
    char *cs = getenv("PCRE2GREP_COLOUR");
    if (cs == ((void *)0)) cs = getenv("PCRE2GREP_COLOR");
    if (cs == ((void *)0)) cs = getenv("PCREGREP_COLOUR");
    if (cs == ((void *)0)) cs = getenv("PCREGREP_COLOR");
    if (cs == ((void *)0)) cs = parse_grep_colors(data_flow, getenv("GREP_COLORS"));
    if (cs == ((void *)0)) cs = getenv("GREP_COLOR");
    if (cs != ((void *)0))
      {
      if (strspn(cs, ";0123456789") == strlen(cs)) colour_string = cs;
      }



    }
  }



if (newline_arg != ((void *)0))
  {
  for (endlinetype = 1; endlinetype < (int)(sizeof(newlines)/sizeof(char *));
       endlinetype++)
    {
    if (strcmpic(data_flow, newline_arg, newlines[endlinetype]) == 0) break;
    }
  if (endlinetype < (int)(sizeof(newlines)/sizeof(char *)))
    pcre2_set_newline_8(data_flow, compile_context, endlinetype);
  else
    {
    fprintf(stderr, "pcre2grep: Invalid newline specifier \"%s\"\n",
      newline_arg);
    goto EXIT2;
    }
  }



else
  {
  (void)pcre2_config_8(data_flow, 5, &endlinetype);
  }



if (dee_option != ((void *)0))
  {
  if (strcmp(dee_option, "read") == 0) dee_action = dee_READ;
  else if (strcmp(dee_option, "recurse") == 0) dee_action = dee_RECURSE;
  else if (strcmp(dee_option, "skip") == 0) dee_action = dee_SKIP;
  else
    {
    fprintf(stderr, "pcre2grep: Invalid value \"%s\" for -d\n", dee_option);
    goto EXIT2;
    }
  }

if (DEE_option != ((void *)0))
  {
  if (strcmp(DEE_option, "read") == 0) DEE_action = DEE_READ;
  else if (strcmp(DEE_option, "skip") == 0) DEE_action = DEE_SKIP;
  else
    {
    fprintf(stderr, "pcre2grep: Invalid value \"%s\" for -D\n", DEE_option);
    goto EXIT2;
    }
  }



(void)pcre2_set_compile_extra_options_8(data_flow, compile_context, extra_options);
if (use_jit)
  {
  uint32_t answer;
  (void)pcre2_config_8(data_flow, 1, &answer);
  if (!answer) use_jit = 0;
  }



if (bufthird <= 0)
  {
  fprintf(stderr, "pcre2grep: --buffer-size must be greater than zero\n");
  goto EXIT2;
  }

bufsize = 3*bufthird;
main_buffer = (char *)malloc(bufsize);

if (main_buffer == ((void *)0))
  {
  fprintf(stderr, "pcre2grep: malloc failed\n");
  goto EXIT2;
  }




if (patterns == ((void *)0) && pattern_files == ((void *)0))
  {
  if (i >= argc) return usage(data_flow, 2);
  patterns = patterns_last = add_pattern(data_flow, argv[i], (size_t)strlen(argv[i]),
    ((void *)0));
  i++;
  if (patterns == ((void *)0)) goto EXIT2;
  }







for (j = 1, cp = patterns; cp != ((void *)0); j++, cp = cp->next)
  {
  if (!compile_pattern(data_flow, cp, pcre2_options, 0, "command-line",
       (j == 1 && patterns->next == ((void *)0))? 0 : j))
    goto EXIT2;
  }



for (fn = pattern_files; fn != ((void *)0); fn = fn->next)
  {
  if (!read_pattern_file(data_flow, fn->name, &patterns, &patterns_last)) goto EXIT2;
  }
pcre2_options &= ~0x02000000u;
(void)pcre2_set_compile_extra_options_8(data_flow, compile_context, 0);




for (j = 0; j < 4; j++)
  {
  int k;
  for (k = 1, cp = *(incexlist[j]); cp != ((void *)0); k++, cp = cp->next)
    {
    if (!compile_pattern(data_flow, cp, pcre2_options, 0, incexname[j],
         (k == 1 && cp->next == ((void *)0))? 0 : k))
      goto EXIT2;
    }
  }



for (fn = include_from; fn != ((void *)0); fn = fn->next)
  {
  if (!read_pattern_file(data_flow, fn->name, &include_patterns, &include_patterns_last))
    goto EXIT2;
  }

for (fn = exclude_from; fn != ((void *)0); fn = fn->next)
  {
  if (!read_pattern_file(data_flow, fn->name, &exclude_patterns, &exclude_patterns_last))
    goto EXIT2;
  }




if (file_lists == ((void *)0) && i >= argc)
  {
  rc = pcre2grep(data_flow, stdin, FR_PLAIN, stdin_name,
    (filenames > FN_DEFAULT)? stdin_name : ((void *)0));
  goto EXIT;
  }




for (fn = file_lists; fn != ((void *)0); fn = fn->next)
  {
  char buffer[2048];
  FILE *fl;
  if (strcmp(fn->name, "-") == 0) fl = stdin; else
    {
    fl = fopen(fn->name, "rb");
    if (fl == ((void *)0))
      {
      fprintf(stderr, "pcre2grep: Failed to open %s: %s\n", fn->name,
        strerror((*__errno_location ())));
      goto EXIT2;
      }
    }
  while (fgets(buffer, sizeof(buffer), fl) != ((void *)0))
    {
    int frc;
    char *end = buffer + (int)strlen(buffer);
    while (end > buffer && ((*__ctype_b_loc ())[(int) ((end[-1]))] & (unsigned short int) _ISspace)) end--;
    *end = 0;
    if (*buffer != 0)
      {
      frc = grep_or_recurse(data_flow, buffer, dee_action == dee_RECURSE, 0);
      if (frc > 1) rc = frc;
        else if (frc == 0 && rc == 1) rc = 0;
      }
    }
  if (fl != stdin) fclose(fl);
  }





only_one_at_top = i == argc - 1 && file_lists == ((void *)0);

for (; i < argc; i++)
  {
  int frc = grep_or_recurse(data_flow, argv[i], dee_action == dee_RECURSE,
    only_one_at_top);
  if (frc > 1) rc = frc;
    else if (frc == 0 && rc == 1) rc = 0;
  }





if (om_separator != ((void *)0) && strcmp(om_separator, "\n") == 0)
  fprintf(stdout, "\n");





if (show_total_count && counts_printed != 1 && filenames != FN_NOMATCH_ONLY)
  {
  if (counts_printed != 0 && filenames >= FN_DEFAULT)
    fprintf(stdout, "TOTAL:");
  fprintf(stdout, "%lu" "\n", total_count);
  }

EXIT:




free(main_buffer);
free((void *)character_tables);

pcre2_compile_context_free_8(data_flow, compile_context);
pcre2_match_context_free_8(data_flow, match_context);
pcre2_match_data_free_8(data_flow, match_data);

free_pattern_chain(data_flow, patterns);
free_pattern_chain(data_flow, include_patterns);
free_pattern_chain(data_flow, include_dir_patterns);
free_pattern_chain(data_flow, exclude_patterns);
free_pattern_chain(data_flow, exclude_dir_patterns);

free_file_chain(data_flow, exclude_from);
free_file_chain(data_flow, include_from);
free_file_chain(data_flow, pattern_files);
free_file_chain(data_flow, file_lists);

while (only_matching != ((void *)0))
  {
  omstr *this = only_matching;
  only_matching = this->next;
  free(this);
  }

pcre2grep_exit(data_flow, rc);

EXIT2:
rc = 2;
goto EXIT;
}
