








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



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
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






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





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














struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__));







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));



extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) __attribute__ ((__nothrow__));






extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
extern int getdate_err;
extern struct tm *getdate (__const char *__string);
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);



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


















extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern char *program_invocation_name, *program_invocation_short_name;




typedef int error_t;




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


struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));






extern int futimesat (int __fd, __const char *__file,
        __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));

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


enum { PR_OK, PR_SKIP, PR_ABEND };

















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
struct pcre2_real_general_context_8; typedef struct pcre2_real_general_context_8 pcre2_general_context_8; struct pcre2_real_compile_context_8; typedef struct pcre2_real_compile_context_8 pcre2_compile_context_8; struct pcre2_real_match_context_8; typedef struct pcre2_real_match_context_8 pcre2_match_context_8; struct pcre2_real_convert_context_8; typedef struct pcre2_real_convert_context_8 pcre2_convert_context_8; struct pcre2_real_code_8; typedef struct pcre2_real_code_8 pcre2_code_8; struct pcre2_real_match_data_8; typedef struct pcre2_real_match_data_8 pcre2_match_data_8; struct pcre2_real_jit_stack_8; typedef struct pcre2_real_jit_stack_8 pcre2_jit_stack_8; typedef pcre2_jit_stack_8 *(*pcre2_jit_callback_8)(void *); typedef struct pcre2_callout_block_8 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR8 mark; PCRE2_SPTR8 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; uint32_t callout_flags; } pcre2_callout_block_8; typedef struct pcre2_callout_enumerate_block_8 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; } pcre2_callout_enumerate_block_8; typedef struct pcre2_substitute_callout_block_8 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_8; extern __attribute__ ((visibility ("default"))) int pcre2_config_8(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_copy_8(pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_create_8(void *(*)(size_t, void *), void (*)(void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_8(pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_copy_8(pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_create_8(pcre2_general_context_8 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_8(pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_8(pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_8(pcre2_compile_context_8 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_8(pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_8(pcre2_compile_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_8(pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_8(pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_8(pcre2_compile_context_8 *, int (*)(uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_copy_8(pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_create_8(pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_8(pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_8(pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_8(pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_8(PCRE2_SPTR8, size_t, uint32_t, PCRE2_UCHAR8 **, size_t *, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_8(PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_copy_8(pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_create_8(pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_8(pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_8(pcre2_match_context_8 *, int (*)(pcre2_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_8(pcre2_match_context_8 *, void (*)(pcre2_substitute_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_8(pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_8(pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_8(pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_8(pcre2_match_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_8(pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_8(pcre2_match_context_8 *, void *(*)(size_t, void *), void (*)(void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_compile_8(PCRE2_SPTR8, size_t, uint32_t, int *, size_t *, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_8(pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_8(const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_with_tables_8(const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_8(const pcre2_code_8 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_8(const pcre2_code_8 *, int (*)(pcre2_callout_enumerate_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_8(uint32_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_from_pattern_8(const pcre2_code_8 *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_8(pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR8 pcre2_get_mark_8(pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_8(pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_8(pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_8(pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_8(pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_8(pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_8(PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_8(pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_8(pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_8(pcre2_match_data_8 *, PCRE2_SPTR8, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_8(pcre2_match_data_8 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_8(const pcre2_code_8 *, PCRE2_SPTR8, PCRE2_SPTR8 *, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_8(const pcre2_code_8 *, PCRE2_SPTR8); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_8(PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_8(pcre2_match_data_8 *, PCRE2_UCHAR8 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_8(const pcre2_code_8 **, int32_t, uint8_t **, size_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_8(pcre2_code_8 **, int32_t, const uint8_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_8(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_8(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, PCRE2_SPTR8, size_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_8(pcre2_code_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_8(pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_8 *pcre2_jit_stack_create_8(size_t, size_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_8(pcre2_match_context_8 *, pcre2_jit_callback_8, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_8(pcre2_jit_stack_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_8(int, PCRE2_UCHAR8 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_8(pcre2_general_context_8 *);



struct pcre2_real_general_context_16; typedef struct pcre2_real_general_context_16 pcre2_general_context_16; struct pcre2_real_compile_context_16; typedef struct pcre2_real_compile_context_16 pcre2_compile_context_16; struct pcre2_real_match_context_16; typedef struct pcre2_real_match_context_16 pcre2_match_context_16; struct pcre2_real_convert_context_16; typedef struct pcre2_real_convert_context_16 pcre2_convert_context_16; struct pcre2_real_code_16; typedef struct pcre2_real_code_16 pcre2_code_16; struct pcre2_real_match_data_16; typedef struct pcre2_real_match_data_16 pcre2_match_data_16; struct pcre2_real_jit_stack_16; typedef struct pcre2_real_jit_stack_16 pcre2_jit_stack_16; typedef pcre2_jit_stack_16 *(*pcre2_jit_callback_16)(void *); typedef struct pcre2_callout_block_16 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR16 mark; PCRE2_SPTR16 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; uint32_t callout_flags; } pcre2_callout_block_16; typedef struct pcre2_callout_enumerate_block_16 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; } pcre2_callout_enumerate_block_16; typedef struct pcre2_substitute_callout_block_16 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_16; extern __attribute__ ((visibility ("default"))) int pcre2_config_16(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_copy_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_create_16(void *(*)(size_t, void *), void (*)(void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_copy_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_create_16(pcre2_general_context_16 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_16(pcre2_compile_context_16 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_16(pcre2_compile_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_16(pcre2_compile_context_16 *, int (*)(uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_copy_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_16(PCRE2_SPTR16, size_t, uint32_t, PCRE2_UCHAR16 **, size_t *, pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_copy_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_16(pcre2_match_context_16 *, int (*)(pcre2_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_16(pcre2_match_context_16 *, void (*)(pcre2_substitute_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_16(pcre2_match_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_16(pcre2_match_context_16 *, void *(*)(size_t, void *), void (*)(void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_compile_16(PCRE2_SPTR16, size_t, uint32_t, int *, size_t *, pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_16(pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_with_tables_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_16(const pcre2_code_16 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_16(const pcre2_code_16 *, int (*)(pcre2_callout_enumerate_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_16(uint32_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_from_pattern_16(const pcre2_code_16 *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR16 pcre2_get_mark_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_16(pcre2_match_data_16 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_16(const pcre2_code_16 *, PCRE2_SPTR16, PCRE2_SPTR16 *, PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_16(const pcre2_code_16 *, PCRE2_SPTR16); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_16(PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_16(pcre2_match_data_16 *, PCRE2_UCHAR16 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_16(const pcre2_code_16 **, int32_t, uint8_t **, size_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_16(pcre2_code_16 **, int32_t, const uint8_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_16(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_16(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, PCRE2_SPTR16, size_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_16(pcre2_code_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_16 *pcre2_jit_stack_create_16(size_t, size_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_16(pcre2_match_context_16 *, pcre2_jit_callback_16, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_16(pcre2_jit_stack_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_16(int, PCRE2_UCHAR16 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_16(pcre2_general_context_16 *);



struct pcre2_real_general_context_32; typedef struct pcre2_real_general_context_32 pcre2_general_context_32; struct pcre2_real_compile_context_32; typedef struct pcre2_real_compile_context_32 pcre2_compile_context_32; struct pcre2_real_match_context_32; typedef struct pcre2_real_match_context_32 pcre2_match_context_32; struct pcre2_real_convert_context_32; typedef struct pcre2_real_convert_context_32 pcre2_convert_context_32; struct pcre2_real_code_32; typedef struct pcre2_real_code_32 pcre2_code_32; struct pcre2_real_match_data_32; typedef struct pcre2_real_match_data_32 pcre2_match_data_32; struct pcre2_real_jit_stack_32; typedef struct pcre2_real_jit_stack_32 pcre2_jit_stack_32; typedef pcre2_jit_stack_32 *(*pcre2_jit_callback_32)(void *); typedef struct pcre2_callout_block_32 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR32 mark; PCRE2_SPTR32 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; uint32_t callout_flags; } pcre2_callout_block_32; typedef struct pcre2_callout_enumerate_block_32 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; } pcre2_callout_enumerate_block_32; typedef struct pcre2_substitute_callout_block_32 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_32; extern __attribute__ ((visibility ("default"))) int pcre2_config_32(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_copy_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_create_32(void *(*)(size_t, void *), void (*)(void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_copy_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_create_32(pcre2_general_context_32 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_32(pcre2_compile_context_32 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_32(pcre2_compile_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_32(pcre2_compile_context_32 *, int (*)(uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_copy_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_32(PCRE2_SPTR32, size_t, uint32_t, PCRE2_UCHAR32 **, size_t *, pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_copy_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_32(pcre2_match_context_32 *, int (*)(pcre2_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_32(pcre2_match_context_32 *, void (*)(pcre2_substitute_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_32(pcre2_match_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_32(pcre2_match_context_32 *, void *(*)(size_t, void *), void (*)(void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_compile_32(PCRE2_SPTR32, size_t, uint32_t, int *, size_t *, pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_32(pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_with_tables_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_32(const pcre2_code_32 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_32(const pcre2_code_32 *, int (*)(pcre2_callout_enumerate_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_32(uint32_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_from_pattern_32(const pcre2_code_32 *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR32 pcre2_get_mark_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_32(pcre2_match_data_32 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_32(const pcre2_code_32 *, PCRE2_SPTR32, PCRE2_SPTR32 *, PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_32(const pcre2_code_32 *, PCRE2_SPTR32); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_32(PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_32(pcre2_match_data_32 *, PCRE2_UCHAR32 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_32(const pcre2_code_32 **, int32_t, uint8_t **, size_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_32(pcre2_code_32 **, int32_t, const uint8_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_32(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_32(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, PCRE2_SPTR32, size_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_32(pcre2_code_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_32 *pcre2_jit_stack_create_32(size_t, size_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_32(pcre2_match_context_32 *, pcre2_jit_callback_32, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_32(pcre2_jit_stack_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_32(int, PCRE2_UCHAR32 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_32(pcre2_general_context_32 *);
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
extern __attribute__ ((visibility ("default"))) int pcre2_regcomp(regex_t *, const char *, int);
extern __attribute__ ((visibility ("default"))) int regcomp(regex_t *, const char *, int);

extern __attribute__ ((visibility ("default"))) int pcre2_regexec(const regex_t *, const char *, size_t,
                     regmatch_t *, int);
extern __attribute__ ((visibility ("default"))) int regexec(const regex_t *, const char *, size_t,
                     regmatch_t *, int);

extern __attribute__ ((visibility ("default"))) size_t pcre2_regerror(int, const regex_t *, char *, size_t);
extern __attribute__ ((visibility ("default"))) size_t regerror(int, const regex_t *, char *, size_t);

extern __attribute__ ((visibility ("default"))) void pcre2_regfree(regex_t *);
extern __attribute__ ((visibility ("default"))) void regfree(regex_t *);
typedef int ptrdiff_t;
typedef int BOOL;
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
  void * (*malloc)(size_t, void *);
  void (*free)(void *, void *);
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






const uint32_t hspace_list[] = { '\011', '\040', ((unsigned char)'\xa0'), 0x1680, 0x180e, 0x2000, 0x2001, 0x2002, 0x2003, 0x2004, 0x2005, 0x2006, 0x2007, 0x2008, 0x2009, 0x200A, 0x202f, 0x205f, 0x3000, 0xffffffff };
const uint32_t vspace_list[] = { '\012', '\013', '\014', '\015', ((unsigned char)'\x85'), 0x2028, 0x2029, 0xffffffff };





const uint32_t callout_start_delims[] = {
  '\140', '\047', '\042',
  '\136', '\045', '\043',
  '\044', '\173', 0 };

const uint32_t callout_end_delims[] = {
  '\140', '\047', '\042',
  '\136', '\045', '\043',
  '\044', '\175', 0 };
const int utf8_table1[] =
  { 0x7f, 0x7ff, 0xffff, 0x1fffff, 0x3ffffff, 0x7fffffff};

const int utf8_table1_size = sizeof(utf8_table1) / sizeof(int);




const int utf8_table2[] = { 0, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc};
const int utf8_table3[] = { 0xff, 0x1f, 0x0f, 0x07, 0x03, 0x01};




const uint8_t utf8_table4[] = {
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
  3,3,3,3,3,3,3,3,4,4,4,4,5,5,5,5 };
const uint32_t ucp_gentype[] = {
  ucp_C, ucp_C, ucp_C, ucp_C, ucp_C,
  ucp_L, ucp_L, ucp_L, ucp_L, ucp_L,
  ucp_M, ucp_M, ucp_M,
  ucp_N, ucp_N, ucp_N,
  ucp_P, ucp_P, ucp_P, ucp_P, ucp_P,
  ucp_P, ucp_P,
  ucp_S, ucp_S, ucp_S, ucp_S,
  ucp_Z, ucp_Z, ucp_Z
};
const uint32_t ucp_gbtable[] = {
   (1<<ucp_gbLF),
   0,
   0,
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbPrepend)|
       (1<<ucp_gbL)|(1<<ucp_gbV)|(1<<ucp_gbT)|
       (1<<ucp_gbLV)|(1<<ucp_gbLVT)|(1<<ucp_gbOther)|
       (1<<ucp_gbRegionalIndicator),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbL)|(1<<ucp_gbV)|(1<<ucp_gbLV)|
       (1<<ucp_gbLVT),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbV)|(1<<ucp_gbT),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbT),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbV)|(1<<ucp_gbT),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbT),
   (1<<ucp_gbRegionalIndicator),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ),
   (1<<ucp_gbExtend)|(1<<ucp_gbSpacingMark)|(1<<ucp_gbZWJ)|(1<<ucp_gbExtended_Pictographic)
};
const char utt_names[] =
  "\101" "\144" "\154" "\141" "\155" "\0"
  "\101" "\150" "\157" "\155" "\0"
  "\101" "\156" "\141" "\164" "\157" "\154" "\151" "\141" "\156" "\137" "\110" "\151" "\145" "\162" "\157" "\147" "\154" "\171" "\160" "\150" "\163" "\0"
  "\101" "\156" "\171" "\0"
  "\101" "\162" "\141" "\142" "\151" "\143" "\0"
  "\101" "\162" "\155" "\145" "\156" "\151" "\141" "\156" "\0"
  "\101" "\166" "\145" "\163" "\164" "\141" "\156" "\0"
  "\102" "\141" "\154" "\151" "\156" "\145" "\163" "\145" "\0"
  "\102" "\141" "\155" "\165" "\155" "\0"
  "\102" "\141" "\163" "\163" "\141" "\137" "\126" "\141" "\150" "\0"
  "\102" "\141" "\164" "\141" "\153" "\0"
  "\102" "\145" "\156" "\147" "\141" "\154" "\151" "\0"
  "\102" "\150" "\141" "\151" "\153" "\163" "\165" "\153" "\151" "\0"
  "\102" "\157" "\160" "\157" "\155" "\157" "\146" "\157" "\0"
  "\102" "\162" "\141" "\150" "\155" "\151" "\0"
  "\102" "\162" "\141" "\151" "\154" "\154" "\145" "\0"
  "\102" "\165" "\147" "\151" "\156" "\145" "\163" "\145" "\0"
  "\102" "\165" "\150" "\151" "\144" "\0"
  "\103" "\0"
  "\103" "\141" "\156" "\141" "\144" "\151" "\141" "\156" "\137" "\101" "\142" "\157" "\162" "\151" "\147" "\151" "\156" "\141" "\154" "\0"
  "\103" "\141" "\162" "\151" "\141" "\156" "\0"
  "\103" "\141" "\165" "\143" "\141" "\163" "\151" "\141" "\156" "\137" "\101" "\154" "\142" "\141" "\156" "\151" "\141" "\156" "\0"
  "\103" "\143" "\0"
  "\103" "\146" "\0"
  "\103" "\150" "\141" "\153" "\155" "\141" "\0"
  "\103" "\150" "\141" "\155" "\0"
  "\103" "\150" "\145" "\162" "\157" "\153" "\145" "\145" "\0"
  "\103" "\156" "\0"
  "\103" "\157" "\0"
  "\103" "\157" "\155" "\155" "\157" "\156" "\0"
  "\103" "\157" "\160" "\164" "\151" "\143" "\0"
  "\103" "\163" "\0"
  "\103" "\165" "\156" "\145" "\151" "\146" "\157" "\162" "\155" "\0"
  "\103" "\171" "\160" "\162" "\151" "\157" "\164" "\0"
  "\103" "\171" "\162" "\151" "\154" "\154" "\151" "\143" "\0"
  "\104" "\145" "\163" "\145" "\162" "\145" "\164" "\0"
  "\104" "\145" "\166" "\141" "\156" "\141" "\147" "\141" "\162" "\151" "\0"
  "\104" "\157" "\147" "\162" "\141" "\0"
  "\104" "\165" "\160" "\154" "\157" "\171" "\141" "\156" "\0"
  "\105" "\147" "\171" "\160" "\164" "\151" "\141" "\156" "\137" "\110" "\151" "\145" "\162" "\157" "\147" "\154" "\171" "\160" "\150" "\163" "\0"
  "\105" "\154" "\142" "\141" "\163" "\141" "\156" "\0"
  "\105" "\164" "\150" "\151" "\157" "\160" "\151" "\143" "\0"
  "\107" "\145" "\157" "\162" "\147" "\151" "\141" "\156" "\0"
  "\107" "\154" "\141" "\147" "\157" "\154" "\151" "\164" "\151" "\143" "\0"
  "\107" "\157" "\164" "\150" "\151" "\143" "\0"
  "\107" "\162" "\141" "\156" "\164" "\150" "\141" "\0"
  "\107" "\162" "\145" "\145" "\153" "\0"
  "\107" "\165" "\152" "\141" "\162" "\141" "\164" "\151" "\0"
  "\107" "\165" "\156" "\152" "\141" "\154" "\141" "\137" "\107" "\157" "\156" "\144" "\151" "\0"
  "\107" "\165" "\162" "\155" "\165" "\153" "\150" "\151" "\0"
  "\110" "\141" "\156" "\0"
  "\110" "\141" "\156" "\147" "\165" "\154" "\0"
  "\110" "\141" "\156" "\151" "\146" "\151" "\137" "\122" "\157" "\150" "\151" "\156" "\147" "\171" "\141" "\0"
  "\110" "\141" "\156" "\165" "\156" "\157" "\157" "\0"
  "\110" "\141" "\164" "\162" "\141" "\156" "\0"
  "\110" "\145" "\142" "\162" "\145" "\167" "\0"
  "\110" "\151" "\162" "\141" "\147" "\141" "\156" "\141" "\0"
  "\111" "\155" "\160" "\145" "\162" "\151" "\141" "\154" "\137" "\101" "\162" "\141" "\155" "\141" "\151" "\143" "\0"
  "\111" "\156" "\150" "\145" "\162" "\151" "\164" "\145" "\144" "\0"
  "\111" "\156" "\163" "\143" "\162" "\151" "\160" "\164" "\151" "\157" "\156" "\141" "\154" "\137" "\120" "\141" "\150" "\154" "\141" "\166" "\151" "\0"
  "\111" "\156" "\163" "\143" "\162" "\151" "\160" "\164" "\151" "\157" "\156" "\141" "\154" "\137" "\120" "\141" "\162" "\164" "\150" "\151" "\141" "\156" "\0"
  "\112" "\141" "\166" "\141" "\156" "\145" "\163" "\145" "\0"
  "\113" "\141" "\151" "\164" "\150" "\151" "\0"
  "\113" "\141" "\156" "\156" "\141" "\144" "\141" "\0"
  "\113" "\141" "\164" "\141" "\153" "\141" "\156" "\141" "\0"
  "\113" "\141" "\171" "\141" "\150" "\137" "\114" "\151" "\0"
  "\113" "\150" "\141" "\162" "\157" "\163" "\150" "\164" "\150" "\151" "\0"
  "\113" "\150" "\155" "\145" "\162" "\0"
  "\113" "\150" "\157" "\152" "\153" "\151" "\0"
  "\113" "\150" "\165" "\144" "\141" "\167" "\141" "\144" "\151" "\0"
  "\114" "\0"
  "\114" "\046" "\0"
  "\114" "\141" "\157" "\0"
  "\114" "\141" "\164" "\151" "\156" "\0"
  "\114" "\145" "\160" "\143" "\150" "\141" "\0"
  "\114" "\151" "\155" "\142" "\165" "\0"
  "\114" "\151" "\156" "\145" "\141" "\162" "\137" "\101" "\0"
  "\114" "\151" "\156" "\145" "\141" "\162" "\137" "\102" "\0"
  "\114" "\151" "\163" "\165" "\0"
  "\114" "\154" "\0"
  "\114" "\155" "\0"
  "\114" "\157" "\0"
  "\114" "\164" "\0"
  "\114" "\165" "\0"
  "\114" "\171" "\143" "\151" "\141" "\156" "\0"
  "\114" "\171" "\144" "\151" "\141" "\156" "\0"
  "\115" "\0"
  "\115" "\141" "\150" "\141" "\152" "\141" "\156" "\151" "\0"
  "\115" "\141" "\153" "\141" "\163" "\141" "\162" "\0"
  "\115" "\141" "\154" "\141" "\171" "\141" "\154" "\141" "\155" "\0"
  "\115" "\141" "\156" "\144" "\141" "\151" "\143" "\0"
  "\115" "\141" "\156" "\151" "\143" "\150" "\141" "\145" "\141" "\156" "\0"
  "\115" "\141" "\162" "\143" "\150" "\145" "\156" "\0"
  "\115" "\141" "\163" "\141" "\162" "\141" "\155" "\137" "\107" "\157" "\156" "\144" "\151" "\0"
  "\115" "\143" "\0"
  "\115" "\145" "\0"
  "\115" "\145" "\144" "\145" "\146" "\141" "\151" "\144" "\162" "\151" "\156" "\0"
  "\115" "\145" "\145" "\164" "\145" "\151" "\137" "\115" "\141" "\171" "\145" "\153" "\0"
  "\115" "\145" "\156" "\144" "\145" "\137" "\113" "\151" "\153" "\141" "\153" "\165" "\151" "\0"
  "\115" "\145" "\162" "\157" "\151" "\164" "\151" "\143" "\137" "\103" "\165" "\162" "\163" "\151" "\166" "\145" "\0"
  "\115" "\145" "\162" "\157" "\151" "\164" "\151" "\143" "\137" "\110" "\151" "\145" "\162" "\157" "\147" "\154" "\171" "\160" "\150" "\163" "\0"
  "\115" "\151" "\141" "\157" "\0"
  "\115" "\156" "\0"
  "\115" "\157" "\144" "\151" "\0"
  "\115" "\157" "\156" "\147" "\157" "\154" "\151" "\141" "\156" "\0"
  "\115" "\162" "\157" "\0"
  "\115" "\165" "\154" "\164" "\141" "\156" "\151" "\0"
  "\115" "\171" "\141" "\156" "\155" "\141" "\162" "\0"
  "\116" "\0"
  "\116" "\141" "\142" "\141" "\164" "\141" "\145" "\141" "\156" "\0"
  "\116" "\144" "\0"
  "\116" "\145" "\167" "\137" "\124" "\141" "\151" "\137" "\114" "\165" "\145" "\0"
  "\116" "\145" "\167" "\141" "\0"
  "\116" "\153" "\157" "\0"
  "\116" "\154" "\0"
  "\116" "\157" "\0"
  "\116" "\165" "\163" "\150" "\165" "\0"
  "\117" "\147" "\150" "\141" "\155" "\0"
  "\117" "\154" "\137" "\103" "\150" "\151" "\153" "\151" "\0"
  "\117" "\154" "\144" "\137" "\110" "\165" "\156" "\147" "\141" "\162" "\151" "\141" "\156" "\0"
  "\117" "\154" "\144" "\137" "\111" "\164" "\141" "\154" "\151" "\143" "\0"
  "\117" "\154" "\144" "\137" "\116" "\157" "\162" "\164" "\150" "\137" "\101" "\162" "\141" "\142" "\151" "\141" "\156" "\0"
  "\117" "\154" "\144" "\137" "\120" "\145" "\162" "\155" "\151" "\143" "\0"
  "\117" "\154" "\144" "\137" "\120" "\145" "\162" "\163" "\151" "\141" "\156" "\0"
  "\117" "\154" "\144" "\137" "\123" "\157" "\147" "\144" "\151" "\141" "\156" "\0"
  "\117" "\154" "\144" "\137" "\123" "\157" "\165" "\164" "\150" "\137" "\101" "\162" "\141" "\142" "\151" "\141" "\156" "\0"
  "\117" "\154" "\144" "\137" "\124" "\165" "\162" "\153" "\151" "\143" "\0"
  "\117" "\162" "\151" "\171" "\141" "\0"
  "\117" "\163" "\141" "\147" "\145" "\0"
  "\117" "\163" "\155" "\141" "\156" "\171" "\141" "\0"
  "\120" "\0"
  "\120" "\141" "\150" "\141" "\167" "\150" "\137" "\110" "\155" "\157" "\156" "\147" "\0"
  "\120" "\141" "\154" "\155" "\171" "\162" "\145" "\156" "\145" "\0"
  "\120" "\141" "\165" "\137" "\103" "\151" "\156" "\137" "\110" "\141" "\165" "\0"
  "\120" "\143" "\0"
  "\120" "\144" "\0"
  "\120" "\145" "\0"
  "\120" "\146" "\0"
  "\120" "\150" "\141" "\147" "\163" "\137" "\120" "\141" "\0"
  "\120" "\150" "\157" "\145" "\156" "\151" "\143" "\151" "\141" "\156" "\0"
  "\120" "\151" "\0"
  "\120" "\157" "\0"
  "\120" "\163" "\0"
  "\120" "\163" "\141" "\154" "\164" "\145" "\162" "\137" "\120" "\141" "\150" "\154" "\141" "\166" "\151" "\0"
  "\122" "\145" "\152" "\141" "\156" "\147" "\0"
  "\122" "\165" "\156" "\151" "\143" "\0"
  "\123" "\0"
  "\123" "\141" "\155" "\141" "\162" "\151" "\164" "\141" "\156" "\0"
  "\123" "\141" "\165" "\162" "\141" "\163" "\150" "\164" "\162" "\141" "\0"
  "\123" "\143" "\0"
  "\123" "\150" "\141" "\162" "\141" "\144" "\141" "\0"
  "\123" "\150" "\141" "\166" "\151" "\141" "\156" "\0"
  "\123" "\151" "\144" "\144" "\150" "\141" "\155" "\0"
  "\123" "\151" "\147" "\156" "\127" "\162" "\151" "\164" "\151" "\156" "\147" "\0"
  "\123" "\151" "\156" "\150" "\141" "\154" "\141" "\0"
  "\123" "\153" "\0"
  "\123" "\155" "\0"
  "\123" "\157" "\0"
  "\123" "\157" "\147" "\144" "\151" "\141" "\156" "\0"
  "\123" "\157" "\162" "\141" "\137" "\123" "\157" "\155" "\160" "\145" "\156" "\147" "\0"
  "\123" "\157" "\171" "\157" "\155" "\142" "\157" "\0"
  "\123" "\165" "\156" "\144" "\141" "\156" "\145" "\163" "\145" "\0"
  "\123" "\171" "\154" "\157" "\164" "\151" "\137" "\116" "\141" "\147" "\162" "\151" "\0"
  "\123" "\171" "\162" "\151" "\141" "\143" "\0"
  "\124" "\141" "\147" "\141" "\154" "\157" "\147" "\0"
  "\124" "\141" "\147" "\142" "\141" "\156" "\167" "\141" "\0"
  "\124" "\141" "\151" "\137" "\114" "\145" "\0"
  "\124" "\141" "\151" "\137" "\124" "\150" "\141" "\155" "\0"
  "\124" "\141" "\151" "\137" "\126" "\151" "\145" "\164" "\0"
  "\124" "\141" "\153" "\162" "\151" "\0"
  "\124" "\141" "\155" "\151" "\154" "\0"
  "\124" "\141" "\156" "\147" "\165" "\164" "\0"
  "\124" "\145" "\154" "\165" "\147" "\165" "\0"
  "\124" "\150" "\141" "\141" "\156" "\141" "\0"
  "\124" "\150" "\141" "\151" "\0"
  "\124" "\151" "\142" "\145" "\164" "\141" "\156" "\0"
  "\124" "\151" "\146" "\151" "\156" "\141" "\147" "\150" "\0"
  "\124" "\151" "\162" "\150" "\165" "\164" "\141" "\0"
  "\125" "\147" "\141" "\162" "\151" "\164" "\151" "\143" "\0"
  "\125" "\156" "\153" "\156" "\157" "\167" "\156" "\0"
  "\126" "\141" "\151" "\0"
  "\127" "\141" "\162" "\141" "\156" "\147" "\137" "\103" "\151" "\164" "\151" "\0"
  "\130" "\141" "\156" "\0"
  "\130" "\160" "\163" "\0"
  "\130" "\163" "\160" "\0"
  "\130" "\165" "\143" "\0"
  "\130" "\167" "\144" "\0"
  "\131" "\151" "\0"
  "\132" "\0"
  "\132" "\141" "\156" "\141" "\142" "\141" "\172" "\141" "\162" "\137" "\123" "\161" "\165" "\141" "\162" "\145" "\0"
  "\132" "\154" "\0"
  "\132" "\160" "\0"
  "\132" "\163" "\0";

const ucp_type_table utt[] = {
  { 0, 4, ucp_Adlam },
  { 6, 4, ucp_Ahom },
  { 11, 4, ucp_Anatolian_Hieroglyphs },
  { 33, 0, 0 },
  { 37, 4, ucp_Arabic },
  { 44, 4, ucp_Armenian },
  { 53, 4, ucp_Avestan },
  { 61, 4, ucp_Balinese },
  { 70, 4, ucp_Bamum },
  { 76, 4, ucp_Bassa_Vah },
  { 86, 4, ucp_Batak },
  { 92, 4, ucp_Bengali },
  { 100, 4, ucp_Bhaiksuki },
  { 110, 4, ucp_Bopomofo },
  { 119, 4, ucp_Brahmi },
  { 126, 4, ucp_Braille },
  { 134, 4, ucp_Buginese },
  { 143, 4, ucp_Buhid },
  { 149, 2, ucp_C },
  { 151, 4, ucp_Canadian_Aboriginal },
  { 171, 4, ucp_Carian },
  { 178, 4, ucp_Caucasian_Albanian },
  { 197, 3, ucp_Cc },
  { 200, 3, ucp_Cf },
  { 203, 4, ucp_Chakma },
  { 210, 4, ucp_Cham },
  { 215, 4, ucp_Cherokee },
  { 224, 3, ucp_Cn },
  { 227, 3, ucp_Co },
  { 230, 4, ucp_Common },
  { 237, 4, ucp_Coptic },
  { 244, 3, ucp_Cs },
  { 247, 4, ucp_Cuneiform },
  { 257, 4, ucp_Cypriot },
  { 265, 4, ucp_Cyrillic },
  { 274, 4, ucp_Deseret },
  { 282, 4, ucp_Devanagari },
  { 293, 4, ucp_Dogra },
  { 299, 4, ucp_Duployan },
  { 308, 4, ucp_Egyptian_Hieroglyphs },
  { 329, 4, ucp_Elbasan },
  { 337, 4, ucp_Ethiopic },
  { 346, 4, ucp_Georgian },
  { 355, 4, ucp_Glagolitic },
  { 366, 4, ucp_Gothic },
  { 373, 4, ucp_Grantha },
  { 381, 4, ucp_Greek },
  { 387, 4, ucp_Gujarati },
  { 396, 4, ucp_Gunjala_Gondi },
  { 410, 4, ucp_Gurmukhi },
  { 419, 4, ucp_Han },
  { 423, 4, ucp_Hangul },
  { 430, 4, ucp_Hanifi_Rohingya },
  { 446, 4, ucp_Hanunoo },
  { 454, 4, ucp_Hatran },
  { 461, 4, ucp_Hebrew },
  { 468, 4, ucp_Hiragana },
  { 477, 4, ucp_Imperial_Aramaic },
  { 494, 4, ucp_Inherited },
  { 504, 4, ucp_Inscriptional_Pahlavi },
  { 526, 4, ucp_Inscriptional_Parthian },
  { 549, 4, ucp_Javanese },
  { 558, 4, ucp_Kaithi },
  { 565, 4, ucp_Kannada },
  { 573, 4, ucp_Katakana },
  { 582, 4, ucp_Kayah_Li },
  { 591, 4, ucp_Kharoshthi },
  { 602, 4, ucp_Khmer },
  { 608, 4, ucp_Khojki },
  { 615, 4, ucp_Khudawadi },
  { 625, 2, ucp_L },
  { 627, 1, 0 },
  { 630, 4, ucp_Lao },
  { 634, 4, ucp_Latin },
  { 640, 4, ucp_Lepcha },
  { 647, 4, ucp_Limbu },
  { 653, 4, ucp_Linear_A },
  { 662, 4, ucp_Linear_B },
  { 671, 4, ucp_Lisu },
  { 676, 3, ucp_Ll },
  { 679, 3, ucp_Lm },
  { 682, 3, ucp_Lo },
  { 685, 3, ucp_Lt },
  { 688, 3, ucp_Lu },
  { 691, 4, ucp_Lycian },
  { 698, 4, ucp_Lydian },
  { 705, 2, ucp_M },
  { 707, 4, ucp_Mahajani },
  { 716, 4, ucp_Makasar },
  { 724, 4, ucp_Malayalam },
  { 734, 4, ucp_Mandaic },
  { 742, 4, ucp_Manichaean },
  { 753, 4, ucp_Marchen },
  { 761, 4, ucp_Masaram_Gondi },
  { 775, 3, ucp_Mc },
  { 778, 3, ucp_Me },
  { 781, 4, ucp_Medefaidrin },
  { 793, 4, ucp_Meetei_Mayek },
  { 806, 4, ucp_Mende_Kikakui },
  { 820, 4, ucp_Meroitic_Cursive },
  { 837, 4, ucp_Meroitic_Hieroglyphs },
  { 858, 4, ucp_Miao },
  { 863, 3, ucp_Mn },
  { 866, 4, ucp_Modi },
  { 871, 4, ucp_Mongolian },
  { 881, 4, ucp_Mro },
  { 885, 4, ucp_Multani },
  { 893, 4, ucp_Myanmar },
  { 901, 2, ucp_N },
  { 903, 4, ucp_Nabataean },
  { 913, 3, ucp_Nd },
  { 916, 4, ucp_New_Tai_Lue },
  { 928, 4, ucp_Newa },
  { 933, 4, ucp_Nko },
  { 937, 3, ucp_Nl },
  { 940, 3, ucp_No },
  { 943, 4, ucp_Nushu },
  { 949, 4, ucp_Ogham },
  { 955, 4, ucp_Ol_Chiki },
  { 964, 4, ucp_Old_Hungarian },
  { 978, 4, ucp_Old_Italic },
  { 989, 4, ucp_Old_North_Arabian },
  { 1007, 4, ucp_Old_Permic },
  { 1018, 4, ucp_Old_Persian },
  { 1030, 4, ucp_Old_Sogdian },
  { 1042, 4, ucp_Old_South_Arabian },
  { 1060, 4, ucp_Old_Turkic },
  { 1071, 4, ucp_Oriya },
  { 1077, 4, ucp_Osage },
  { 1083, 4, ucp_Osmanya },
  { 1091, 2, ucp_P },
  { 1093, 4, ucp_Pahawh_Hmong },
  { 1106, 4, ucp_Palmyrene },
  { 1116, 4, ucp_Pau_Cin_Hau },
  { 1128, 3, ucp_Pc },
  { 1131, 3, ucp_Pd },
  { 1134, 3, ucp_Pe },
  { 1137, 3, ucp_Pf },
  { 1140, 4, ucp_Phags_Pa },
  { 1149, 4, ucp_Phoenician },
  { 1160, 3, ucp_Pi },
  { 1163, 3, ucp_Po },
  { 1166, 3, ucp_Ps },
  { 1169, 4, ucp_Psalter_Pahlavi },
  { 1185, 4, ucp_Rejang },
  { 1192, 4, ucp_Runic },
  { 1198, 2, ucp_S },
  { 1200, 4, ucp_Samaritan },
  { 1210, 4, ucp_Saurashtra },
  { 1221, 3, ucp_Sc },
  { 1224, 4, ucp_Sharada },
  { 1232, 4, ucp_Shavian },
  { 1240, 4, ucp_Siddham },
  { 1248, 4, ucp_SignWriting },
  { 1260, 4, ucp_Sinhala },
  { 1268, 3, ucp_Sk },
  { 1271, 3, ucp_Sm },
  { 1274, 3, ucp_So },
  { 1277, 4, ucp_Sogdian },
  { 1285, 4, ucp_Sora_Sompeng },
  { 1298, 4, ucp_Soyombo },
  { 1306, 4, ucp_Sundanese },
  { 1316, 4, ucp_Syloti_Nagri },
  { 1329, 4, ucp_Syriac },
  { 1336, 4, ucp_Tagalog },
  { 1344, 4, ucp_Tagbanwa },
  { 1353, 4, ucp_Tai_Le },
  { 1360, 4, ucp_Tai_Tham },
  { 1369, 4, ucp_Tai_Viet },
  { 1378, 4, ucp_Takri },
  { 1384, 4, ucp_Tamil },
  { 1390, 4, ucp_Tangut },
  { 1397, 4, ucp_Telugu },
  { 1404, 4, ucp_Thaana },
  { 1411, 4, ucp_Thai },
  { 1416, 4, ucp_Tibetan },
  { 1424, 4, ucp_Tifinagh },
  { 1433, 4, ucp_Tirhuta },
  { 1441, 4, ucp_Ugaritic },
  { 1450, 4, ucp_Unknown },
  { 1458, 4, ucp_Vai },
  { 1462, 4, ucp_Warang_Citi },
  { 1474, 5, 0 },
  { 1478, 7, 0 },
  { 1482, 6, 0 },
  { 1486, 10, 0 },
  { 1490, 8, 0 },
  { 1494, 4, ucp_Yi },
  { 1497, 2, ucp_Z },
  { 1499, 4, ucp_Zanabazar_Square },
  { 1516, 3, ucp_Zl },
  { 1519, 3, ucp_Zp },
  { 1522, 3, ucp_Zs }
};

const size_t utt_size = sizeof(utt) / sizeof(ucp_type_table);
const char *unicode_version = "11.0.0";
const uint32_t ucd_caseless_sets[] = {
  0xffffffff,
  0x0053, 0x0073, 0x017f, 0xffffffff,
  0x01c4, 0x01c5, 0x01c6, 0xffffffff,
  0x01c7, 0x01c8, 0x01c9, 0xffffffff,
  0x01ca, 0x01cb, 0x01cc, 0xffffffff,
  0x01f1, 0x01f2, 0x01f3, 0xffffffff,
  0x0345, 0x0399, 0x03b9, 0x1fbe, 0xffffffff,
  0x00b5, 0x039c, 0x03bc, 0xffffffff,
  0x03a3, 0x03c2, 0x03c3, 0xffffffff,
  0x0392, 0x03b2, 0x03d0, 0xffffffff,
  0x0398, 0x03b8, 0x03d1, 0x03f4, 0xffffffff,
  0x03a6, 0x03c6, 0x03d5, 0xffffffff,
  0x03a0, 0x03c0, 0x03d6, 0xffffffff,
  0x039a, 0x03ba, 0x03f0, 0xffffffff,
  0x03a1, 0x03c1, 0x03f1, 0xffffffff,
  0x0395, 0x03b5, 0x03f5, 0xffffffff,
  0x0412, 0x0432, 0x1c80, 0xffffffff,
  0x0414, 0x0434, 0x1c81, 0xffffffff,
  0x041e, 0x043e, 0x1c82, 0xffffffff,
  0x0421, 0x0441, 0x1c83, 0xffffffff,
  0x0422, 0x0442, 0x1c84, 0x1c85, 0xffffffff,
  0x042a, 0x044a, 0x1c86, 0xffffffff,
  0x0462, 0x0463, 0x1c87, 0xffffffff,
  0x1e60, 0x1e61, 0x1e9b, 0xffffffff,
  0x03a9, 0x03c9, 0x2126, 0xffffffff,
  0x004b, 0x006b, 0x212a, 0xffffffff,
  0x00c5, 0x00e5, 0x212b, 0xffffffff,
  0x1c88, 0xa64a, 0xa64b, 0xffffffff,
};
typedef struct pcre2_real_general_context_8 {
  pcre2_memctl memctl;
} pcre2_real_general_context_8;



typedef struct pcre2_real_compile_context_8 {
  pcre2_memctl memctl;
  int (*stack_guard)(uint32_t, void *);
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




  int (*callout)(pcre2_callout_block_8 *, void *);
  void *callout_data;
  void (*substitute_callout)(pcre2_substitute_callout_block_8 *, void *);
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
static const char *OP_names[] = { "End", "\\A", "\\G", "\\K", "\\B", "\\b", "\\D", "\\d", "\\S", "\\s", "\\W", "\\w", "Any", "AllAny", "Anybyte", "notprop", "prop", "\\R", "\\H", "\\h", "\\V", "\\v", "extuni", "\\Z", "\\z", "$", "$", "^", "^", "char", "chari", "not", "noti", "*", "*?", "+", "+?", "?", "??", "{", "{", "{", "*+","++", "?+", "{", "*", "*?", "+", "+?", "?", "??", "{", "{", "{", "*+","++", "?+", "{", "*", "*?", "+", "+?", "?", "??", "{", "{", "{", "*+","++", "?+", "{", "*", "*?", "+", "+?", "?", "??", "{", "{", "{", "*+","++", "?+", "{", "*", "*?", "+", "+?", "?", "??", "{", "{", "{", "*+","++", "?+", "{", "*", "*?", "+", "+?", "?", "??", "{", "{", "*+","++", "?+", "{", "class", "nclass", "xclass", "Ref", "Refi", "DnRef", "DnRefi", "Recurse", "Callout", "CalloutStr", "Alt", "Ket", "KetRmax", "KetRmin", "KetRpos", "Reverse", "Assert", "Assert not", "AssertB", "AssertB not", "Once", "Script run", "Bra", "BraPos", "CBra", "CBraPos", "Cond", "SBra", "SBraPos", "SCBra", "SCBraPos", "SCond", "Cond ref", "Cond dnref", "Cond rec", "Cond dnrec", "Cond false", "Cond true", "Brazero", "Braminzero", "Braposzero", "*MARK", "*PRUNE", "*PRUNE", "*SKIP", "*SKIP", "*THEN", "*THEN", "*COMMIT", "*COMMIT", "*FAIL", "*ACCEPT", "*ASSERT_ACCEPT", "Close", "Skip zero", "Define" };
static const uint8_t OP_lengths_8[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2+2, 2+2, 2+2, 2, 2, 2, 2+2, 2, 2, 2, 2, 2, 2, 2+2, 2+2, 2+2, 2, 2, 2, 2+2, 2, 2, 2, 2, 2, 2, 2+2, 2+2, 2+2, 2, 2, 2, 2+2, 2, 2, 2, 2, 2, 2, 2+2, 2+2, 2+2, 2, 2, 2, 2+2, 2, 2, 2, 2, 2, 2, 2+2, 2+2, 2+2, 2, 2, 2, 2+2, 1, 1, 1, 1, 1, 1, 1+2*2, 1+2*2, 1, 1, 1, 1+2*2, 1+(32/sizeof(PCRE2_UCHAR8)), 1+(32/sizeof(PCRE2_UCHAR8)), 0, 1+2, 1+2, 1+2*2, 1+2*2, 1+2, 1+2*2 +1, 0, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2, 1+2 +2, 1+2 +2, 1+2, 1+2, 1+2, 1+2 +2, 1+2 +2, 1+2, 1+2, 1+2*2, 1+2, 1+2*2, 1, 1, 1, 1, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 1, 1, 1+2, 1, 1 };
static unsigned int
print_char_8(FILE *f, PCRE2_SPTR8 ptr, BOOL utf)
{
uint32_t c = *ptr;
BOOL one_code_unit = !utf;




if (utf)
  {

  one_code_unit = c < 0x80;





  }




if (one_code_unit)
  {
  if (((c) >= 32 && (c) < 127)) fprintf(f, "%c", (char)c);
  else if (c < 0x80) fprintf(f, "\\x%02x", c);
  else fprintf(f, "\\x{%02x}", c);
  return 0;
  }
if ((c & 0xc0) != 0xc0)
  {
  fprintf(f, "\\X{%x}", c);
  return 0;
  }
else
  {
  int i;
  int a = utf8_table4[c & 0x3f];
  int s = 6*a;
  c = (c & utf8_table3[a]) << s;
  for (i = 1; i <= a; i++)
    {
    if ((ptr[i] & 0xc0) != 0x80)
      {
      fprintf(f, "\\X{%x}", c);
      return i - 1;
      }
    s -= 6;
    c |= (ptr[i] & 0x3f) << s;
    }
  fprintf(f, "\\x{%x}", c);
  return a;
}
}
static void
print_custring_8(FILE *f, PCRE2_SPTR8 ptr)
{
while (*ptr != '\0')
  {
  uint32_t c = *ptr++;
  if (((c) >= 32 && (c) < 127)) fprintf(f, "%c", c); else fprintf(f, "\\x{%x}", c);
  }
}

static void
print_custring_bylen_8(FILE *f, PCRE2_SPTR8 ptr, PCRE2_UCHAR8 len)
{
for (; len > 0; len--)
  {
  uint32_t c = *ptr++;
  if (((c) >= 32 && (c) < 127)) fprintf(f, "%c", c); else fprintf(f, "\\x{%x}", c);
  }
}
static const char *
get_ucpname_8(unsigned int ptype, unsigned int pvalue)
{

int i;
for (i = utt_size - 1; i >= 0; i--)
  {
  if (ptype == utt[i].type && pvalue == utt[i].value) break;
  }
return (i >= 0)? utt_names + utt[i].name_offset : "??";





}
static void
print_prop_8(FILE *f, PCRE2_SPTR8 code, const char *before, const char *after)
{
if (code[1] != 9)
  {
  fprintf(f, "%s%s %s%s", before, OP_names[*code], get_ucpname_8(code[1],
    code[2]), after);
  }
else
  {
  const char *not = (*code == OP_PROP)? "" : "not ";
  const uint32_t *p = ucd_caseless_sets + code[2];
  fprintf (f, "%s%sclist", before, not);
  while (*p < 0xffffffff) fprintf(f, " %04x", *p++);
  fprintf(f, "%s", after);
  }
}
static void
pcre2_printint_8(pcre2_code_8 *re, FILE *f, BOOL print_lengths)
{
PCRE2_SPTR8 codestart, nametable, code;
uint32_t nesize = re->name_entry_size;
BOOL utf = (re->overall_options & 0x00080000u) != 0;

nametable = (PCRE2_SPTR8)((uint8_t *)re + sizeof(pcre2_real_code_8));
code = codestart = nametable + re->name_count * re->name_entry_size;

for(;;)
  {
  PCRE2_SPTR8 ccode;
  uint32_t c;
  int i;
  const char *flag = "  ";
  unsigned int extra = 0;

  if (print_lengths)
    fprintf(f, "%3d ", (int)(code - codestart));
  else
    fprintf(f, "    ");

  switch(*code)
    {







      case OP_TABLE_LENGTH:
      case OP_TABLE_LENGTH +
        ((sizeof(OP_names)/sizeof(const char *) == OP_TABLE_LENGTH) &&
        (sizeof(OP_lengths_8) == OP_TABLE_LENGTH)):
      return;


    case OP_END:
    fprintf(f, "    %s\n", OP_names[*code]);
    fprintf(f, "------------------------------------------------------------------\n");
    return;

    case OP_CHAR:
    fprintf(f, "    ");
    do
      {
      code++;
      code += 1 + print_char_8(f, code, utf);
      }
    while (*code == OP_CHAR);
    fprintf(f, "\n");
    continue;

    case OP_CHARI:
    fprintf(f, " /i ");
    do
      {
      code++;
      code += 1 + print_char_8(f, code, utf);
      }
    while (*code == OP_CHARI);
    fprintf(f, "\n");
    continue;

    case OP_CBRA:
    case OP_CBRAPOS:
    case OP_SCBRA:
    case OP_SCBRAPOS:
    if (print_lengths) fprintf(f, "%3d ", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
      else fprintf(f, "    ");
    fprintf(f, "%s %d", OP_names[*code], (unsigned int)(((code)[1+2] << 8) | (code)[(1+2)+1]));
    break;

    case OP_BRA:
    case OP_BRAPOS:
    case OP_SBRA:
    case OP_SBRAPOS:
    case OP_KETRMAX:
    case OP_KETRMIN:
    case OP_KETRPOS:
    case OP_ALT:
    case OP_KET:
    case OP_ASSERT:
    case OP_ASSERT_NOT:
    case OP_ASSERTBACK:
    case OP_ASSERTBACK_NOT:
    case OP_ONCE:
    case OP_SCRIPT_RUN:
    case OP_COND:
    case OP_SCOND:
    case OP_REVERSE:
    if (print_lengths) fprintf(f, "%3d ", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
      else fprintf(f, "    ");
    fprintf(f, "%s", OP_names[*code]);
    break;

    case OP_CLOSE:
    fprintf(f, "    %s %d", OP_names[*code], (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
    break;

    case OP_CREF:
    fprintf(f, "%3d %s", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]), OP_names[*code]);
    break;

    case OP_DNCREF:
      {
      PCRE2_SPTR8 entry = nametable + ((unsigned int)(((code)[1] << 8) | (code)[(1)+1]) * nesize) + 2;
      fprintf(f, " %s Cond ref <", flag);
      print_custring_8(f, entry);
      fprintf(f, ">%d", (unsigned int)(((code)[1 + 2] << 8) | (code)[(1 + 2)+1]));
      }
    break;

    case OP_RREF:
    c = (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
    if (c == 0xffff)
      fprintf(f, "    Cond recurse any");
    else
      fprintf(f, "    Cond recurse %d", c);
    break;

    case OP_DNRREF:
      {
      PCRE2_SPTR8 entry = nametable + ((unsigned int)(((code)[1] << 8) | (code)[(1)+1]) * nesize) + 2;
      fprintf(f, " %s Cond recurse <", flag);
      print_custring_8(f, entry);
      fprintf(f, ">%d", (unsigned int)(((code)[1 + 2] << 8) | (code)[(1 + 2)+1]));
      }
    break;

    case OP_FALSE:
    fprintf(f, "    Cond false");
    break;

    case OP_TRUE:
    fprintf(f, "    Cond true");
    break;

    case OP_STARI:
    case OP_MINSTARI:
    case OP_POSSTARI:
    case OP_PLUSI:
    case OP_MINPLUSI:
    case OP_POSPLUSI:
    case OP_QUERYI:
    case OP_MINQUERYI:
    case OP_POSQUERYI:
    flag = "/i";

    case OP_STAR:
    case OP_MINSTAR:
    case OP_POSSTAR:
    case OP_PLUS:
    case OP_MINPLUS:
    case OP_POSPLUS:
    case OP_QUERY:
    case OP_MINQUERY:
    case OP_POSQUERY:
    case OP_TYPESTAR:
    case OP_TYPEMINSTAR:
    case OP_TYPEPOSSTAR:
    case OP_TYPEPLUS:
    case OP_TYPEMINPLUS:
    case OP_TYPEPOSPLUS:
    case OP_TYPEQUERY:
    case OP_TYPEMINQUERY:
    case OP_TYPEPOSQUERY:
    fprintf(f, " %s ", flag);

    if (*code >= OP_TYPESTAR)
      {
      if (code[1] == OP_PROP || code[1] == OP_NOTPROP)
        {
        print_prop_8(f, code + 1, "", " ");
        extra = 2;
        }
      else fprintf(f, "%s", OP_names[code[1]]);
      }
    else extra = print_char_8(f, code+1, utf);
    fprintf(f, "%s", OP_names[*code]);
    break;

    case OP_EXACTI:
    case OP_UPTOI:
    case OP_MINUPTOI:
    case OP_POSUPTOI:
    flag = "/i";

    case OP_EXACT:
    case OP_UPTO:
    case OP_MINUPTO:
    case OP_POSUPTO:
    fprintf(f, " %s ", flag);
    extra = print_char_8(f, code + 1 + 2, utf);
    fprintf(f, "{");
    if (*code != OP_EXACT && *code != OP_EXACTI) fprintf(f, "0,");
    fprintf(f, "%d}", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
    if (*code == OP_MINUPTO || *code == OP_MINUPTOI) fprintf(f, "?");
      else if (*code == OP_POSUPTO || *code == OP_POSUPTOI) fprintf(f, "+");
    break;

    case OP_TYPEEXACT:
    case OP_TYPEUPTO:
    case OP_TYPEMINUPTO:
    case OP_TYPEPOSUPTO:
    if (code[1 + 2] == OP_PROP || code[1 + 2] == OP_NOTPROP)
      {
      print_prop_8(f, code + 2 + 1, "    ", " ");
      extra = 2;
      }
    else fprintf(f, "    %s", OP_names[code[1 + 2]]);
    fprintf(f, "{");
    if (*code != OP_TYPEEXACT) fprintf(f, "0,");
    fprintf(f, "%d}", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
    if (*code == OP_TYPEMINUPTO) fprintf(f, "?");
      else if (*code == OP_TYPEPOSUPTO) fprintf(f, "+");
    break;

    case OP_NOTI:
    flag = "/i";

    case OP_NOT:
    fprintf(f, " %s [^", flag);
    extra = print_char_8(f, code + 1, utf);
    fprintf(f, "]");
    break;

    case OP_NOTSTARI:
    case OP_NOTMINSTARI:
    case OP_NOTPOSSTARI:
    case OP_NOTPLUSI:
    case OP_NOTMINPLUSI:
    case OP_NOTPOSPLUSI:
    case OP_NOTQUERYI:
    case OP_NOTMINQUERYI:
    case OP_NOTPOSQUERYI:
    flag = "/i";


    case OP_NOTSTAR:
    case OP_NOTMINSTAR:
    case OP_NOTPOSSTAR:
    case OP_NOTPLUS:
    case OP_NOTMINPLUS:
    case OP_NOTPOSPLUS:
    case OP_NOTQUERY:
    case OP_NOTMINQUERY:
    case OP_NOTPOSQUERY:
    fprintf(f, " %s [^", flag);
    extra = print_char_8(f, code + 1, utf);
    fprintf(f, "]%s", OP_names[*code]);
    break;

    case OP_NOTEXACTI:
    case OP_NOTUPTOI:
    case OP_NOTMINUPTOI:
    case OP_NOTPOSUPTOI:
    flag = "/i";


    case OP_NOTEXACT:
    case OP_NOTUPTO:
    case OP_NOTMINUPTO:
    case OP_NOTPOSUPTO:
    fprintf(f, " %s [^", flag);
    extra = print_char_8(f, code + 1 + 2, utf);
    fprintf(f, "]{");
    if (*code != OP_NOTEXACT && *code != OP_NOTEXACTI) fprintf(f, "0,");
    fprintf(f, "%d}", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
    if (*code == OP_NOTMINUPTO || *code == OP_NOTMINUPTOI) fprintf(f, "?");
      else
    if (*code == OP_NOTPOSUPTO || *code == OP_NOTPOSUPTOI) fprintf(f, "+");
    break;

    case OP_RECURSE:
    if (print_lengths) fprintf(f, "%3d ", (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
      else fprintf(f, "    ");
    fprintf(f, "%s", OP_names[*code]);
    break;

    case OP_REFI:
    flag = "/i";

    case OP_REF:
    fprintf(f, " %s \\%d", flag, (unsigned int)(((code)[1] << 8) | (code)[(1)+1]));
    ccode = code + OP_lengths_8[*code];
    goto CLASS_REF_REPEAT;

    case OP_DNREFI:
    flag = "/i";

    case OP_DNREF:
      {
      PCRE2_SPTR8 entry = nametable + ((unsigned int)(((code)[1] << 8) | (code)[(1)+1]) * nesize) + 2;
      fprintf(f, " %s \\k<", flag);
      print_custring_8(f, entry);
      fprintf(f, ">%d", (unsigned int)(((code)[1 + 2] << 8) | (code)[(1 + 2)+1]));
      }
    ccode = code + OP_lengths_8[*code];
    goto CLASS_REF_REPEAT;

    case OP_CALLOUT:
    fprintf(f, "    %s %d %d %d", OP_names[*code], code[1 + 2*2],
      (unsigned int)(((code)[1] << 8) | (code)[(1)+1]), (unsigned int)(((code)[1 + 2] << 8) | (code)[(1 + 2)+1]));
    break;

    case OP_CALLOUT_STR:
    c = code[1 + 4*2];
    fprintf(f, "    %s %c", OP_names[*code], c);
    extra = (unsigned int)(((code)[1 + 2*2] << 8) | (code)[(1 + 2*2)+1]);
    print_custring_bylen_8(f, code + 2 + 4*2, extra - 3 - 4*2);
    for (i = 0; callout_start_delims[i] != 0; i++)
      if (c == callout_start_delims[i])
        {
        c = callout_end_delims[i];
        break;
        }
    fprintf(f, "%c %d %d %d", c, (unsigned int)(((code)[1 + 3*2] << 8) | (code)[(1 + 3*2)+1]), (unsigned int)(((code)[1] << 8) | (code)[(1)+1]),
      (unsigned int)(((code)[1 + 2] << 8) | (code)[(1 + 2)+1]));
    break;

    case OP_PROP:
    case OP_NOTPROP:
    print_prop_8(f, code, "    ", "");
    break;





    case OP_CLASS:
    case OP_NCLASS:
    case OP_XCLASS:
      {
      unsigned int min, max;
      BOOL printmap;
      BOOL invertmap = 0;
      uint8_t *map;
      uint8_t inverted_map[32];

      fprintf(f, "    [");

      if (*code == OP_XCLASS)
        {
        extra = (unsigned int)(((code)[1] << 8) | (code)[(1)+1]);
        ccode = code + 2 + 1;
        printmap = (*ccode & 0x02) != 0;
        if ((*ccode & 0x01) != 0)
          {
          invertmap = (*ccode & 0x04) == 0;
          fprintf(f, "^");
          }
        ccode++;
        }
      else
        {
        printmap = 1;
        ccode = code + 1;
        }



      if (printmap)
        {
        map = (uint8_t *)ccode;
        if (invertmap)
          {
          for (i = 0; i < 32; i++) inverted_map[i] = ~map[i];
          map = inverted_map;
          }

        for (i = 0; i < 256; i++)
          {
          if ((map[i/8] & (1 << (i&7))) != 0)
            {
            int j;
            for (j = i+1; j < 256; j++)
              if ((map[j/8] & (1 << (j&7))) == 0) break;
            if (i == '-' || i == ']') fprintf(f, "\\");
            if (((i) >= 32 && (i) < 127)) fprintf(f, "%c", i);
              else fprintf(f, "\\x%02x", i);
            if (--j > i)
              {
              if (j != i + 1) fprintf(f, "-");
              if (j == '-' || j == ']') fprintf(f, "\\");
              if (((j) >= 32 && (j) < 127)) fprintf(f, "%c", j);
                else fprintf(f, "\\x%02x", j);
              }
            i = j;
            }
          }
        ccode += 32 / sizeof(PCRE2_UCHAR8);
        }



      if (*code == OP_XCLASS)
        {
        PCRE2_UCHAR8 ch;
        while ((ch = *ccode++) != 0)
          {
          BOOL not = 0;
          const char *notch = "";

          switch(ch)
            {
            case 4:
            not = 1;
            notch = "^";


            case 3:
              {
              unsigned int ptype = *ccode++;
              unsigned int pvalue = *ccode++;

              switch(ptype)
                {
                case 11:
                fprintf(f, "[:%sgraph:]", notch);
                break;

                case 12:
                fprintf(f, "[:%sprint:]", notch);
                break;

                case 13:
                fprintf(f, "[:%spunct:]", notch);
                break;

                default:
                fprintf(f, "\\%c{%s}", (not? 'P':'p'),
                  get_ucpname_8(ptype, pvalue));
                break;
                }
              }
            break;

            default:
            ccode += 1 + print_char_8(f, ccode, utf);
            if (ch == 2)
              {
              fprintf(f, "-");
              ccode += 1 + print_char_8(f, ccode, utf);
              }
            break;
            }
          }
        }



      fprintf(f, "]%s", (*code == OP_NCLASS)? " (neg)" : "");



      CLASS_REF_REPEAT:
      switch(*ccode)
        {
        case OP_CRSTAR:
        case OP_CRMINSTAR:
        case OP_CRPLUS:
        case OP_CRMINPLUS:
        case OP_CRQUERY:
        case OP_CRMINQUERY:
        case OP_CRPOSSTAR:
        case OP_CRPOSPLUS:
        case OP_CRPOSQUERY:
        fprintf(f, "%s", OP_names[*ccode]);
        extra += OP_lengths_8[*ccode];
        break;

        case OP_CRRANGE:
        case OP_CRMINRANGE:
        case OP_CRPOSRANGE:
        min = (unsigned int)(((ccode)[1] << 8) | (ccode)[(1)+1]);
        max = (unsigned int)(((ccode)[1 + 2] << 8) | (ccode)[(1 + 2)+1]);
        if (max == 0) fprintf(f, "{%u,}", min);
        else fprintf(f, "{%u,%u}", min, max);
        if (*ccode == OP_CRMINRANGE) fprintf(f, "?");
        else if (*ccode == OP_CRPOSRANGE) fprintf(f, "+");
        extra += OP_lengths_8[*ccode];
        break;




        default:
        break;
        }
      }
    break;

    case OP_MARK:
    case OP_COMMIT_ARG:
    case OP_PRUNE_ARG:
    case OP_SKIP_ARG:
    case OP_THEN_ARG:
    fprintf(f, "    %s ", OP_names[*code]);
    print_custring_bylen_8(f, code + 2, code[1]);
    extra += code[1];
    break;

    case OP_THEN:
    fprintf(f, "    %s", OP_names[*code]);
    break;

    case OP_CIRCM:
    case OP_DOLLM:
    flag = "/m";




    default:
    fprintf(f, " %s %s", flag, OP_names[*code]);
    break;
    }

  code += OP_lengths_8[*code] + extra;
  fprintf(f, "\n");
  }
}
extern int valid_utf(PCRE2_SPTR8, size_t, size_t *);




int
valid_utf(PCRE2_SPTR8 string, size_t length, size_t *erroroffset)
{
PCRE2_SPTR8 p;
uint32_t c;
for (p = string; length > 0; p++)
  {
  uint32_t ab, d;

  c = *p;
  length--;

  if (c < 128) continue;

  if (c < 0xc0)
    {
    *erroroffset = (size_t)(p - string);
    return (-22);
    }

  if (c >= 0xfe)
    {
    *erroroffset = (size_t)(p - string);
    return (-23);
    }

  ab = utf8_table4[c & 0x3f];
  if (length < ab)
    {
    *erroroffset = (size_t)(p - string);
    switch(ab - length)
      {
      case 1: return (-3);
      case 2: return (-4);
      case 3: return (-5);
      case 4: return (-6);
      case 5: return (-7);
      }
    }
  length -= ab;



  if (((d = *(++p)) & 0xc0) != 0x80)
    {
    *erroroffset = (int)(p - string) - 1;
    return (-8);
    }





  switch (ab)
    {



    case 1: if ((c & 0x3e) == 0)
      {
      *erroroffset = (int)(p - string) - 1;
      return (-17);
      }
    break;





    case 2:
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 2;
      return (-9);
      }
    if (c == 0xe0 && (d & 0x20) == 0)
      {
      *erroroffset = (int)(p - string) - 2;
      return (-18);
      }
    if (c == 0xed && d >= 0xa0)
      {
      *erroroffset = (int)(p - string) - 2;
      return (-16);
      }
    break;





    case 3:
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 2;
      return (-9);
      }
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 3;
      return (-10);
      }
    if (c == 0xf0 && (d & 0x30) == 0)
      {
      *erroroffset = (int)(p - string) - 3;
      return (-19);
      }
    if (c > 0xf4 || (c == 0xf4 && d > 0x8f))
      {
      *erroroffset = (int)(p - string) - 3;
      return (-15);
      }
    break;
    case 4:
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 2;
      return (-9);
      }
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 3;
      return (-10);
      }
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 4;
      return (-11);
      }
    if (c == 0xf8 && (d & 0x38) == 0)
      {
      *erroroffset = (int)(p - string) - 4;
      return (-20);
      }
    break;




    case 5:
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 2;
      return (-9);
      }
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 3;
      return (-10);
      }
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 4;
      return (-11);
      }
    if ((*(++p) & 0xc0) != 0x80)
      {
      *erroroffset = (int)(p - string) - 5;
      return (-12);
      }
    if (c == 0xfc && (d & 0x3c) == 0)
      {
      *erroroffset = (int)(p - string) - 5;
      return (-21);
      }
    break;
    }





  if (ab > 3)
    {
    *erroroffset = (int)(p - string) - ab;
    return (ab == 4)? (-13) : (-14);
    }
  }
return 0;
}
typedef struct cmdstruct {
  const char *name;
  int value;
} cmdstruct;

enum { CMD_FORBID_UTF, CMD_LOAD, CMD_NEWLINE_DEFAULT, CMD_PATTERN,
  CMD_PERLTEST, CMD_POP, CMD_POPCOPY, CMD_SAVE, CMD_SUBJECT, CMD_UNKNOWN };

static cmdstruct cmdlist[] = {
  { "forbid_utf", CMD_FORBID_UTF },
  { "load", CMD_LOAD },
  { "newline_default", CMD_NEWLINE_DEFAULT },
  { "pattern", CMD_PATTERN },
  { "perltest", CMD_PERLTEST },
  { "pop", CMD_POP },
  { "popcopy", CMD_POPCOPY },
  { "save", CMD_SAVE },
  { "subject", CMD_SUBJECT }};
static const char *newlines[] = {
  "DEFAULT", "CR", "LF", "CRLF", "ANY", "ANYCRLF", "NUL" };



typedef struct convertstruct {
  const char *name;
  uint32_t option;
} convertstruct;

static convertstruct convertlist[] = {
  { "glob", 0x00000010u },
  { "glob_no_starstar", 0x00000050u },
  { "glob_no_wild_separator", 0x00000030u },
  { "posix_basic", 0x00000004u },
  { "posix_extended", 0x00000008u },
  { "unset", (4294967295U) }};





enum { MOD_CTC,
       MOD_CTM,
       MOD_PAT,
       MOD_PATP,
       MOD_DAT,
       MOD_PD,
       MOD_PDP,
       MOD_PND,
       MOD_PNDP,
       MOD_CHR,
       MOD_CON,
       MOD_CTL,
       MOD_BSR,
       MOD_IN2,
       MOD_INS,
       MOD_INT,
       MOD_IND,
       MOD_NL,
       MOD_NN,
       MOD_OPT,
       MOD_SIZ,
       MOD_STR };
typedef struct patctl {
  uint32_t options;
  uint32_t control;
  uint32_t control2;
  uint32_t jitstack;
   uint8_t replacement[100];
  uint32_t jit;
  uint32_t stackguard_test;
  uint32_t tables_id;
  uint32_t convert_type;
  uint32_t convert_length;
  uint32_t convert_glob_escape;
  uint32_t convert_glob_separator;
  uint32_t regerror_buffsize;
   uint8_t locale[32];
} patctl;




typedef struct datctl {
  uint32_t options;
  uint32_t control;
  uint32_t control2;
  uint32_t jitstack;
   uint8_t replacement[100];
  uint32_t startend[2];
  uint32_t cerror[2];
  uint32_t cfail[2];
   int32_t callout_data;
   int32_t copy_numbers[10];
   int32_t get_numbers[10];
  uint32_t oveccount;
  uint32_t offset;
  uint8_t copy_names[64];
  uint8_t get_names[64];
} datctl;



enum { CTX_PAT,
       CTX_POPPAT,
       CTX_DEFPAT,
       CTX_DAT,
       CTX_DEFDAT };
typedef struct modstruct {
  const char *name;
  uint16_t which;
  uint16_t type;
  uint32_t value;
  size_t offset;
} modstruct;

static modstruct modlist[] = {
  { "aftertext", MOD_PNDP, MOD_CTL, 0x00000001u, __builtin_offsetof (patctl, control) },
  { "allaftertext", MOD_PNDP, MOD_CTL, 0x00000002u, __builtin_offsetof (patctl, control) },
  { "allcaptures", MOD_PND, MOD_CTL, 0x00000004u, __builtin_offsetof (patctl, control) },
  { "allow_empty_class", MOD_PAT, MOD_OPT, 0x00000001u, __builtin_offsetof (patctl, options) },
  { "allow_surrogate_escapes", MOD_CTC, MOD_OPT, 0x00000001u, __builtin_offsetof (pcre2_real_compile_context_8, extra_options) },
  { "allusedtext", MOD_PNDP, MOD_CTL, 0x00000008u, __builtin_offsetof (patctl, control) },
  { "allvector", MOD_PND, MOD_CTL, 0x00000100u, __builtin_offsetof (patctl, control2) },
  { "alt_bsux", MOD_PAT, MOD_OPT, 0x00000002u, __builtin_offsetof (patctl, options) },
  { "alt_circumflex", MOD_PAT, MOD_OPT, 0x00200000u, __builtin_offsetof (patctl, options) },
  { "alt_verbnames", MOD_PAT, MOD_OPT, 0x00400000u, __builtin_offsetof (patctl, options) },
  { "altglobal", MOD_PND, MOD_CTL, 0x00000010u, __builtin_offsetof (patctl, control) },
  { "anchored", MOD_PD, MOD_OPT, 0x80000000u, __builtin_offsetof (patctl, options) },
  { "auto_callout", MOD_PAT, MOD_OPT, 0x00000004u, __builtin_offsetof (patctl, options) },
  { "bad_escape_is_literal", MOD_CTC, MOD_OPT, 0x00000002u, __builtin_offsetof (pcre2_real_compile_context_8, extra_options) },
  { "bincode", MOD_PAT, MOD_CTL, 0x00000020u, __builtin_offsetof (patctl, control) },
  { "bsr", MOD_CTC, MOD_BSR, 0, __builtin_offsetof (pcre2_real_compile_context_8, bsr_convention) },
  { "callout_capture", MOD_DAT, MOD_CTL, 0x00000040u, __builtin_offsetof (datctl, control) },
  { "callout_data", MOD_DAT, MOD_INS, 0, __builtin_offsetof (datctl, callout_data) },
  { "callout_error", MOD_DAT, MOD_IN2, 0, __builtin_offsetof (datctl, cerror) },
  { "callout_extra", MOD_DAT, MOD_CTL, 0x00000080u, __builtin_offsetof (datctl, control2) },
  { "callout_fail", MOD_DAT, MOD_IN2, 0, __builtin_offsetof (datctl, cfail) },
  { "callout_info", MOD_PAT, MOD_CTL, 0x00000080u, __builtin_offsetof (patctl, control) },
  { "callout_no_where", MOD_DAT, MOD_CTL, 0x00000040u, __builtin_offsetof (datctl, control2) },
  { "callout_none", MOD_DAT, MOD_CTL, 0x00000100u, __builtin_offsetof (datctl, control) },
  { "caseless", MOD_PATP, MOD_OPT, 0x00000008u, __builtin_offsetof (patctl, options) },
  { "convert", MOD_PAT, MOD_CON, 0, __builtin_offsetof (patctl, convert_type) },
  { "convert_glob_escape", MOD_PAT, MOD_CHR, 0, __builtin_offsetof (patctl, convert_glob_escape) },
  { "convert_glob_separator", MOD_PAT, MOD_CHR, 0, __builtin_offsetof (patctl, convert_glob_separator) },
  { "convert_length", MOD_PAT, MOD_INT, 0, __builtin_offsetof (patctl, convert_length) },
  { "copy", MOD_DAT, MOD_NN, __builtin_offsetof (datctl, copy_numbers), __builtin_offsetof (datctl, copy_names) },
  { "debug", MOD_PAT, MOD_CTL, (0x00002000u|0x00020000u), __builtin_offsetof (patctl, control) },
  { "depth_limit", MOD_CTM, MOD_INT, 0, __builtin_offsetof (pcre2_real_match_context_8, depth_limit) },
  { "dfa", MOD_DAT, MOD_CTL, 0x00000200u, __builtin_offsetof (datctl, control) },
  { "dfa_restart", MOD_DAT, MOD_OPT, 0x00000040u, __builtin_offsetof (datctl, options) },
  { "dfa_shortest", MOD_DAT, MOD_OPT, 0x00000080u, __builtin_offsetof (datctl, options) },
  { "dollar_endonly", MOD_PAT, MOD_OPT, 0x00000010u, __builtin_offsetof (patctl, options) },
  { "dotall", MOD_PATP, MOD_OPT, 0x00000020u, __builtin_offsetof (patctl, options) },
  { "dupnames", MOD_PATP, MOD_OPT, 0x00000040u, __builtin_offsetof (patctl, options) },
  { "endanchored", MOD_PD, MOD_OPT, 0x20000000u, __builtin_offsetof (patctl, options) },
  { "escaped_cr_is_lf", MOD_CTC, MOD_OPT, 0x00000010u, __builtin_offsetof (pcre2_real_compile_context_8, extra_options) },
  { "expand", MOD_PAT, MOD_CTL, 0x00000400u, __builtin_offsetof (patctl, control) },
  { "extended", MOD_PATP, MOD_OPT, 0x00000080u, __builtin_offsetof (patctl, options) },
  { "extended_more", MOD_PATP, MOD_OPT, 0x01000000u, __builtin_offsetof (patctl, options) },
  { "find_limits", MOD_DAT, MOD_CTL, 0x00000800u, __builtin_offsetof (datctl, control) },
  { "firstline", MOD_PAT, MOD_OPT, 0x00000100u, __builtin_offsetof (patctl, options) },
  { "framesize", MOD_PAT, MOD_CTL, 0x00001000u, __builtin_offsetof (patctl, control) },
  { "fullbincode", MOD_PAT, MOD_CTL, 0x00002000u, __builtin_offsetof (patctl, control) },
  { "get", MOD_DAT, MOD_NN, __builtin_offsetof (datctl, get_numbers), __builtin_offsetof (datctl, get_names) },
  { "getall", MOD_DAT, MOD_CTL, 0x00004000u, __builtin_offsetof (datctl, control) },
  { "global", MOD_PNDP, MOD_CTL, 0x00008000u, __builtin_offsetof (patctl, control) },
  { "heap_limit", MOD_CTM, MOD_INT, 0, __builtin_offsetof (pcre2_real_match_context_8, heap_limit) },
  { "hex", MOD_PAT, MOD_CTL, 0x00010000u, __builtin_offsetof (patctl, control) },
  { "info", MOD_PAT, MOD_CTL, 0x00020000u, __builtin_offsetof (patctl, control) },
  { "jit", MOD_PAT, MOD_IND, 7, __builtin_offsetof (patctl, jit) },
  { "jitfast", MOD_PAT, MOD_CTL, 0x00040000u, __builtin_offsetof (patctl, control) },
  { "jitstack", MOD_PNDP, MOD_INT, 0, __builtin_offsetof (patctl, jitstack) },
  { "jitverify", MOD_PAT, MOD_CTL, 0x00080000u, __builtin_offsetof (patctl, control) },
  { "literal", MOD_PAT, MOD_OPT, 0x02000000u, __builtin_offsetof (patctl, options) },
  { "locale", MOD_PAT, MOD_STR, 32, __builtin_offsetof (patctl, locale) },
  { "mark", MOD_PNDP, MOD_CTL, 0x00100000u, __builtin_offsetof (patctl, control) },
  { "match_limit", MOD_CTM, MOD_INT, 0, __builtin_offsetof (pcre2_real_match_context_8, match_limit) },
  { "match_line", MOD_CTC, MOD_OPT, 0x00000008u, __builtin_offsetof (pcre2_real_compile_context_8, extra_options) },
  { "match_unset_backref", MOD_PAT, MOD_OPT, 0x00000200u, __builtin_offsetof (patctl, options) },
  { "match_word", MOD_CTC, MOD_OPT, 0x00000004u, __builtin_offsetof (pcre2_real_compile_context_8, extra_options) },
  { "max_pattern_length", MOD_CTC, MOD_SIZ, 0, __builtin_offsetof (pcre2_real_compile_context_8, max_pattern_length) },
  { "memory", MOD_PD, MOD_CTL, 0x00200000u, __builtin_offsetof (patctl, control) },
  { "multiline", MOD_PATP, MOD_OPT, 0x00000400u, __builtin_offsetof (patctl, options) },
  { "never_backslash_c", MOD_PAT, MOD_OPT, 0x00100000u, __builtin_offsetof (patctl, options) },
  { "never_ucp", MOD_PAT, MOD_OPT, 0x00000800u, __builtin_offsetof (patctl, options) },
  { "never_utf", MOD_PAT, MOD_OPT, 0x00001000u, __builtin_offsetof (patctl, options) },
  { "newline", MOD_CTC, MOD_NL, 0, __builtin_offsetof (pcre2_real_compile_context_8, newline_convention) },
  { "no_auto_capture", MOD_PAT, MOD_OPT, 0x00002000u, __builtin_offsetof (patctl, options) },
  { "no_auto_possess", MOD_PATP, MOD_OPT, 0x00004000u, __builtin_offsetof (patctl, options) },
  { "no_dotstar_anchor", MOD_PAT, MOD_OPT, 0x00008000u, __builtin_offsetof (patctl, options) },
  { "no_jit", MOD_DAT, MOD_OPT, 0x00002000u, __builtin_offsetof (datctl, options) },
  { "no_start_optimize", MOD_PATP, MOD_OPT, 0x00010000u, __builtin_offsetof (patctl, options) },
  { "no_utf_check", MOD_PD, MOD_OPT, 0x40000000u, __builtin_offsetof (patctl, options) },
  { "notbol", MOD_DAT, MOD_OPT, 0x00000001u, __builtin_offsetof (datctl, options) },
  { "notempty", MOD_DAT, MOD_OPT, 0x00000004u, __builtin_offsetof (datctl, options) },
  { "notempty_atstart", MOD_DAT, MOD_OPT, 0x00000008u, __builtin_offsetof (datctl, options) },
  { "noteol", MOD_DAT, MOD_OPT, 0x00000002u, __builtin_offsetof (datctl, options) },
  { "null_context", MOD_PD, MOD_CTL, 0x00400000u, __builtin_offsetof (patctl, control) },
  { "offset", MOD_DAT, MOD_INT, 0, __builtin_offsetof (datctl, offset) },
  { "offset_limit", MOD_CTM, MOD_SIZ, 0, __builtin_offsetof (pcre2_real_match_context_8, offset_limit)},
  { "ovector", MOD_DAT, MOD_INT, 0, __builtin_offsetof (datctl, oveccount) },
  { "parens_nest_limit", MOD_CTC, MOD_INT, 0, __builtin_offsetof (pcre2_real_compile_context_8, parens_nest_limit) },
  { "partial_hard", MOD_DAT, MOD_OPT, 0x00000020u, __builtin_offsetof (datctl, options) },
  { "partial_soft", MOD_DAT, MOD_OPT, 0x00000010u, __builtin_offsetof (datctl, options) },
  { "ph", MOD_DAT, MOD_OPT, 0x00000020u, __builtin_offsetof (datctl, options) },
  { "posix", MOD_PAT, MOD_CTL, 0x00800000u, __builtin_offsetof (patctl, control) },
  { "posix_nosub", MOD_PAT, MOD_CTL, 0x00800000u|0x01000000u, __builtin_offsetof (patctl, control) },
  { "posix_startend", MOD_DAT, MOD_IN2, 0, __builtin_offsetof (datctl, startend) },
  { "ps", MOD_DAT, MOD_OPT, 0x00000010u, __builtin_offsetof (datctl, options) },
  { "push", MOD_PAT, MOD_CTL, 0x02000000u, __builtin_offsetof (patctl, control) },
  { "pushcopy", MOD_PAT, MOD_CTL, 0x04000000u, __builtin_offsetof (patctl, control) },
  { "pushtablescopy", MOD_PAT, MOD_CTL, 0x08000000u, __builtin_offsetof (patctl, control) },
  { "recursion_limit", MOD_CTM, MOD_INT, 0, __builtin_offsetof (pcre2_real_match_context_8, depth_limit) },
  { "regerror_buffsize", MOD_PAT, MOD_INT, 0, __builtin_offsetof (patctl, regerror_buffsize) },
  { "replace", MOD_PND, MOD_STR, 100, __builtin_offsetof (patctl, replacement) },
  { "stackguard", MOD_PAT, MOD_INT, 0, __builtin_offsetof (patctl, stackguard_test) },
  { "startchar", MOD_PND, MOD_CTL, 0x10000000u, __builtin_offsetof (patctl, control) },
  { "startoffset", MOD_DAT, MOD_INT, 0, __builtin_offsetof (datctl, offset) },
  { "subject_literal", MOD_PATP, MOD_CTL, 0x00000020u, __builtin_offsetof (patctl, control2) },
  { "substitute_callout", MOD_PND, MOD_CTL, 0x00000001u, __builtin_offsetof (patctl, control2) },
  { "substitute_extended", MOD_PND, MOD_CTL, 0x00000002u, __builtin_offsetof (patctl, control2) },
  { "substitute_overflow_length", MOD_PND, MOD_CTL, 0x00000004u, __builtin_offsetof (patctl, control2) },
  { "substitute_unknown_unset", MOD_PND, MOD_CTL, 0x00000008u, __builtin_offsetof (patctl, control2) },
  { "substitute_unset_empty", MOD_PND, MOD_CTL, 0x00000010u, __builtin_offsetof (patctl, control2) },
  { "tables", MOD_PAT, MOD_INT, 0, __builtin_offsetof (patctl, tables_id) },
  { "ucp", MOD_PATP, MOD_OPT, 0x00020000u, __builtin_offsetof (patctl, options) },
  { "ungreedy", MOD_PAT, MOD_OPT, 0x00040000u, __builtin_offsetof (patctl, options) },
  { "use_length", MOD_PAT, MOD_CTL, 0x20000000u, __builtin_offsetof (patctl, control) },
  { "use_offset_limit", MOD_PAT, MOD_OPT, 0x00800000u, __builtin_offsetof (patctl, options) },
  { "utf", MOD_PATP, MOD_OPT, 0x00080000u, __builtin_offsetof (patctl, options) },
  { "utf8_input", MOD_PAT, MOD_CTL, 0x40000000u, __builtin_offsetof (patctl, control) },
  { "zero_terminate", MOD_DAT, MOD_CTL, 0x80000000u, __builtin_offsetof (datctl, control) }
};
static uint32_t exclusive_pat_controls[] = {
  0x00800000u | 0x02000000u,
  0x00800000u | 0x04000000u,
  0x00800000u | 0x08000000u,
  0x02000000u | 0x04000000u,
  0x02000000u | 0x08000000u,
  0x04000000u | 0x08000000u,
  0x00000400u | 0x00010000u };




static uint32_t exclusive_dat_controls[] = {
  0x00000008u | 0x10000000u,
  0x00000800u | 0x00400000u };







typedef struct c1modstruct {
  const char *fullname;
  uint32_t onechar;
  int index;
} c1modstruct;

static c1modstruct c1modlist[] = {
  { "bincode", 'B', -1 },
  { "info", 'I', -1 },
  { "global", 'g', -1 },
  { "caseless", 'i', -1 },
  { "multiline", 'm', -1 },
  { "no_auto_capture", 'n', -1 },
  { "dotall", 's', -1 },
  { "extended", 'x', -1 }
};
typedef struct coptstruct {
  const char *name;
  uint32_t type;
  uint32_t value;
} coptstruct;

enum { CONF_BSR,
       CONF_FIX,
       CONF_FIZ,
       CONF_INT,
       CONF_NL
};

static coptstruct coptlist[] = {
  { "backslash-C", CONF_FIX, 1 },
  { "bsr", CONF_BSR, 0 },
  { "ebcdic", CONF_FIX, 0 },
  { "ebcdic-nl", CONF_FIZ, 0 },
  { "jit", CONF_INT, 1 },
  { "linksize", CONF_INT, 3 },
  { "newline", CONF_NL, 5 },
  { "pcre2-16", CONF_FIX, 0 },
  { "pcre2-32", CONF_FIX, 0 },
  { "pcre2-8", CONF_FIX, 1 },
  { "unicode", CONF_INT, 9 }
};
static FILE *infile;
static FILE *outfile;

static const void *last_callout_mark;
static pcre2_jit_stack_8 *jit_stack = ((void *)0);
static size_t jit_stack_size = 0;

static BOOL first_callout;
static BOOL jit_was_used;
static BOOL restrict_for_perl_test = 0;
static BOOL show_memory = 0;

static int code_unit_size;
static int jitrc;
static int test_mode = 8;
static int timeit = 0;
static int timeitm = 0;

clock_t total_compile_time = 0;
clock_t total_jit_compile_time = 0;
clock_t total_match_time = 0;

static uint32_t dfa_matched;
static uint32_t forbid_utf = 0;
static uint32_t maxlookbehind;
static uint32_t max_oveccount;
static uint32_t callout_count;
static uint32_t maxcapcount;

static uint16_t local_newline_default = 0;

static PCRE2_UCHAR8 jittarget[64];
static PCRE2_UCHAR8 version[64];
static PCRE2_UCHAR8 uversion[64];

static patctl def_patctl;
static patctl pat_patctl;
static datctl def_datctl;
static datctl dat_datctl;

static void *patstack[20];
static int patstacknext = 0;

static void *malloclist[20];
static size_t malloclistlength[20];
static uint32_t malloclistptr = 0;


static regex_t preg = { ((void *)0), ((void *)0), 0, 0, 0, 0 };


static int *dfa_workspace = ((void *)0);
static const uint8_t *locale_tables = ((void *)0);
static const uint8_t *use_tables = ((void *)0);
static uint8_t locale_name[32];







static size_t pbuffer8_size = 50000;
static uint8_t *pbuffer8 = ((void *)0);
static uint8_t *buffer = ((void *)0);




static size_t dbuffer_size = 1u << 14;
static uint8_t *dbuffer = ((void *)0);





static pcre2_code_8 *compiled_code8;
static pcre2_general_context_8 *general_context8, *general_context_copy8;
static pcre2_compile_context_8 *pat_context8, *default_pat_context8;
static pcre2_convert_context_8 *con_context8, *default_con_context8;
static pcre2_match_context_8 *dat_context8, *default_dat_context8;
static pcre2_match_data_8 *match_data8;
static const uint8_t tables1[] = {



    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15,
   16, 17, 18, 19, 20, 21, 22, 23,
   24, 25, 26, 27, 28, 29, 30, 31,
   32, 33, 34, 35, 36, 37, 38, 39,
   40, 41, 42, 43, 44, 45, 46, 47,
   48, 49, 50, 51, 52, 53, 54, 55,
   56, 57, 58, 59, 60, 61, 62, 63,
   64, 97, 98, 99,100,101,102,103,
  104,105,106,107,108,109,110,111,
  112,113,114,115,116,117,118,119,
  120,121,122, 91, 92, 93, 94, 95,
   96, 97, 98, 99,100,101,102,103,
  104,105,106,107,108,109,110,111,
  112,113,114,115,116,117,118,119,
  120,121,122,123,124,125,126,127,
  128,129,130,131,132,133,134,135,
  136,137,138,139,140,141,142,143,
  144,145,146,147,148,149,150,151,
  152,153,154,155,156,157,158,159,
  160,161,162,163,164,165,166,167,
  168,169,170,171,172,173,174,175,
  176,177,178,179,180,181,182,183,
  184,185,186,187,188,189,190,191,
  192,193,194,195,196,197,198,199,
  200,201,202,203,204,205,206,207,
  208,209,210,211,212,213,214,215,
  216,217,218,219,220,221,222,223,
  224,225,226,227,228,229,230,231,
  232,233,234,235,236,237,238,239,
  240,241,242,243,244,245,246,247,
  248,249,250,251,252,253,254,255,



    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15,
   16, 17, 18, 19, 20, 21, 22, 23,
   24, 25, 26, 27, 28, 29, 30, 31,
   32, 33, 34, 35, 36, 37, 38, 39,
   40, 41, 42, 43, 44, 45, 46, 47,
   48, 49, 50, 51, 52, 53, 54, 55,
   56, 57, 58, 59, 60, 61, 62, 63,
   64, 97, 98, 99,100,101,102,103,
  104,105,106,107,108,109,110,111,
  112,113,114,115,116,117,118,119,
  120,121,122, 91, 92, 93, 94, 95,
   96, 65, 66, 67, 68, 69, 70, 71,
   72, 73, 74, 75, 76, 77, 78, 79,
   80, 81, 82, 83, 84, 85, 86, 87,
   88, 89, 90,123,124,125,126,127,
  128,129,130,131,132,133,134,135,
  136,137,138,139,140,141,142,143,
  144,145,146,147,148,149,150,151,
  152,153,154,155,156,157,158,159,
  160,161,162,163,164,165,166,167,
  168,169,170,171,172,173,174,175,
  176,177,178,179,180,181,182,183,
  184,185,186,187,188,189,190,191,
  192,193,194,195,196,197,198,199,
  200,201,202,203,204,205,206,207,
  208,209,210,211,212,213,214,215,
  216,217,218,219,220,221,222,223,
  224,225,226,227,228,229,230,231,
  232,233,234,235,236,237,238,239,
  240,241,242,243,244,245,246,247,
  248,249,250,251,252,253,254,255,






  0x00,0x3e,0x00,0x00,0x01,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x03,
  0x7e,0x00,0x00,0x00,0x7e,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xfe,0xff,0xff,0x07,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0x07,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x03,
  0xfe,0xff,0xff,0x87,0xfe,0xff,0xff,0x07,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0xfe,0xff,0x00,0xfc,
  0x01,0x00,0x00,0xf8,0x01,0x00,0x00,0x78,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
  0x80,0x80,0x80,0x80,0x00,0x00,0x80,0x00,
  0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,
  0x1c,0x1c,0x00,0x00,0x00,0x00,0x00,0x80,
  0x00,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x12,
  0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
  0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
  0x12,0x12,0x12,0x80,0x80,0x00,0x80,0x10,
  0x00,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x12,
  0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
  0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
  0x12,0x12,0x12,0x80,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};





static const uint8_t tables2[] = {
0,1,2,3,4,5,6,7,
8,9,10,11,12,13,14,15,
16,17,18,19,20,21,22,23,
24,25,26,27,28,29,30,31,
32,33,34,35,36,37,38,39,
40,41,42,43,44,45,46,47,
48,49,50,51,52,53,54,55,
56,57,58,59,60,61,62,63,
64,97,98,99,100,101,102,103,
104,105,106,107,108,109,110,111,
112,113,114,115,116,117,118,119,
120,121,122,91,92,93,94,95,
96,97,98,99,100,101,102,103,
104,105,106,107,108,109,110,111,
112,113,114,115,116,117,118,119,
120,121,122,123,124,125,126,127,
128,129,130,131,132,133,134,135,
136,137,138,139,140,141,142,143,
144,145,146,147,148,149,150,151,
152,153,154,155,156,157,158,159,
160,161,162,163,164,165,166,167,
168,169,170,171,172,173,174,175,
176,177,178,179,180,181,182,183,
184,185,186,187,188,189,190,191,
224,225,226,227,228,229,230,231,
232,233,234,235,236,237,238,239,
240,241,242,243,244,245,246,215,
248,249,250,251,252,253,254,223,
224,225,226,227,228,229,230,231,
232,233,234,235,236,237,238,239,
240,241,242,243,244,245,246,247,
248,249,250,251,252,253,254,255,
0,1,2,3,4,5,6,7,
8,9,10,11,12,13,14,15,
16,17,18,19,20,21,22,23,
24,25,26,27,28,29,30,31,
32,33,34,35,36,37,38,39,
40,41,42,43,44,45,46,47,
48,49,50,51,52,53,54,55,
56,57,58,59,60,61,62,63,
64,97,98,99,100,101,102,103,
104,105,106,107,108,109,110,111,
112,113,114,115,116,117,118,119,
120,121,122,91,92,93,94,95,
96,65,66,67,68,69,70,71,
72,73,74,75,76,77,78,79,
80,81,82,83,84,85,86,87,
88,89,90,123,124,125,126,127,
128,129,130,131,132,133,134,135,
136,137,138,139,140,141,142,143,
144,145,146,147,148,149,150,151,
152,153,154,155,156,157,158,159,
160,161,162,163,164,165,166,167,
168,169,170,171,172,173,174,175,
176,177,178,179,180,181,182,183,
184,185,186,187,188,189,190,191,
224,225,226,227,228,229,230,231,
232,233,234,235,236,237,238,239,
240,241,242,243,244,245,246,215,
248,249,250,251,252,253,254,223,
192,193,194,195,196,197,198,199,
200,201,202,203,204,205,206,207,
208,209,210,211,212,213,214,247,
216,217,218,219,220,221,222,255,
0,62,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,
32,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,255,3,
126,0,0,0,126,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,255,3,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,12,2,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
254,255,255,7,0,0,0,0,
0,0,0,0,0,0,0,0,
255,255,127,127,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,254,255,255,7,
0,0,0,0,0,4,32,4,
0,0,0,128,255,255,127,255,
0,0,0,0,0,0,255,3,
254,255,255,135,254,255,255,7,
0,0,0,0,0,4,44,6,
255,255,127,255,255,255,127,255,
0,0,0,0,254,255,255,255,
255,255,255,255,255,255,255,127,
0,0,0,0,254,255,255,255,
255,255,255,255,255,255,255,255,
0,2,0,0,255,255,255,255,
255,255,255,255,255,255,255,127,
0,0,0,0,255,255,255,255,
255,255,255,255,255,255,255,255,
0,0,0,0,254,255,0,252,
1,0,0,248,1,0,0,120,
0,0,0,0,254,255,255,255,
0,0,128,0,0,0,128,0,
255,255,255,255,0,0,0,0,
0,0,0,0,0,0,0,128,
255,255,255,255,0,0,0,0,
0,0,0,0,0,0,0,0,
128,0,0,0,0,0,0,0,
0,1,1,0,1,1,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
1,0,0,0,128,0,0,0,
128,128,128,128,0,0,128,0,
28,28,28,28,28,28,28,28,
28,28,0,0,0,0,0,128,
0,26,26,26,26,26,26,18,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,18,
18,18,18,128,128,0,128,16,
0,26,26,26,26,26,26,18,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,18,
18,18,18,128,128,0,0,0,
0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,
0,0,18,0,0,0,0,0,
0,0,20,20,0,18,0,0,
0,20,18,0,0,0,0,0,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,0,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,0,
18,18,18,18,18,18,18,18
};
static void *my_malloc(size_t size, void *data)
{
void *block = malloc(size);
(void)data;
if (show_memory)
  {
  if (block == ((void *)0))
    {
    fprintf(outfile, "** malloc() failed for %" "lu" "\n", (unsigned long int) size);
    }
  else
    {
    fprintf(outfile, "malloc  %5" "lu", (unsigned long int) size);



    if (malloclistptr < 20)
      {
      malloclist[malloclistptr] = block;
      malloclistlength[malloclistptr++] = size;
      }
    else
      fprintf(outfile, " (not remembered)");
    fprintf(outfile, "\n");
    }
  }
return block;
}

static void my_free(void *block, void *data)
{
(void)data;
if (show_memory)
  {
  uint32_t i, j;
  BOOL found = 0;

  fprintf(outfile, "free");
  for (i = 0; i < malloclistptr; i++)
    {
    if (block == malloclist[i])
      {
      fprintf(outfile, "    %5" "lu", (unsigned long int) malloclistlength[i]);
      malloclistptr--;
      for (j = i; j < malloclistptr; j++)
        {
        malloclist[j] = malloclist[j+1];
        malloclistlength[j] = malloclistlength[j+1];
        }
      found = 1;
      break;
      }
    }
  if (!found) fprintf(outfile, " unremembered block");



  fprintf(outfile, "\n");
  }
free(block);
}
static int
stack_guard(uint32_t depth, void *user_data)
{
(void)user_data;
return depth > pat_patctl.stackguard_test;
}






static pcre2_jit_stack_8*
jit_callback(void *arg)
{
jit_was_used = 1;
return (pcre2_jit_stack_8 *)arg;
}
static int
utf82ord(PCRE2_SPTR8 utf8bytes, uint32_t *vptr)
{
uint32_t c = *utf8bytes++;
uint32_t d = c;
int i, j, s;

for (i = -1; i < 6; i++)
  {
  if ((d & 0x80) == 0) break;
  d <<= 1;
  }

if (i == -1) { *vptr = c; return 1; }
if (i == 0 || i == 6) return 0;



s = 6*i;
d = (c & utf8_table3[i]) << s;

for (j = 0; j < i; j++)
  {
  c = *utf8bytes++;
  if ((c & 0xc0) != 0x80) return -(j+1);
  s -= 6;
  d |= (c & 0x3f) << s;
  }



for (j = 0; j < utf8_table1_size; j++)
  if (d <= (uint32_t)utf8_table1[j]) break;
if (j != i) return -(i+1);



*vptr = d;
return i+1;
}
static int
pchar(uint32_t c, BOOL utf, FILE *f)
{
int n = 0;
char tempbuffer[16];

if (((use_tables != ((void *)0) && c < 256)? ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISprint) : ((c) >= 32 && (c) < 127)))
  {
  if (f != ((void *)0)) fprintf(f, "%c", c);
  return 1;
  }

if (c < 0x100)
  {
  if (utf)
    {
    if (f != ((void *)0)) fprintf(f, "\\x{%02x}", c);
    return 6;
    }
  else
    {
    if (f != ((void *)0)) fprintf(f, "\\x%02x", c);
    return 4;
    }
  }

if (f != ((void *)0)) n = fprintf(f, "\\x{%02x}", c);
  else n = sprintf(tempbuffer, "\\x{%02x}", c);

return n >= 0 ? n : 0;
}
static int pchars8(PCRE2_SPTR8 p, int length, BOOL utf, FILE *f)
{
uint32_t c = 0;
int yield = 0;

if (length < 0) length = p[-1];
while (length-- > 0)
  {
  if (utf)
    {
    int rc = utf82ord(p, &c);
    if (rc > 0 && rc <= length + 1)
      {
      length -= rc - 1;
      p += rc;
      yield += pchar(c, utf, f);
      continue;
      }
    }
  c = *p++;
  yield += pchar(c, utf, f);
  }

return yield;
}
static int
ord2utf8(uint32_t cvalue, uint8_t *utf8bytes)
{
int i, j;
if (cvalue > 0x7fffffffu)
  return -1;
for (i = 0; i < utf8_table1_size; i++)
  if (cvalue <= (uint32_t)utf8_table1[i]) break;
utf8bytes += i;
for (j = i; j > 0; j--)
 {
 *utf8bytes-- = 0x80 | (cvalue & 0x3f);
 cvalue >>= 6;
 }
*utf8bytes = utf8_table2[i] | cvalue;
return i + 1;
}
static size_t
backchars(uint8_t *subject, size_t offset, uint32_t count, BOOL utf)
{
if (!utf || test_mode == 32)
  return (count >= offset)? 0 : (offset - count);

else if (test_mode == 8)
  {
  PCRE2_SPTR8 pp = (PCRE2_SPTR8)subject + offset;
  for (; count > 0 && pp > (PCRE2_SPTR8)subject; count--)
    {
    pp--;
    while ((*pp & 0xc0) == 0x80) pp--;
    }
  return pp - (PCRE2_SPTR8)subject;
  }

else
  {
  PCRE2_SPTR16 pp = (PCRE2_SPTR16)subject + offset;
  for (; count > 0 && pp > (PCRE2_SPTR16)subject; count--)
    {
    pp--;
    if ((*pp & 0xfc00) == 0xdc00) pp--;
    }
  return pp - (PCRE2_SPTR16)subject;
  }
}
static void
expand_input_buffers(void)
{
int new_pbuffer8_size = 2*pbuffer8_size;
uint8_t *new_buffer = (uint8_t *)malloc(new_pbuffer8_size);
uint8_t *new_pbuffer8 = (uint8_t *)malloc(new_pbuffer8_size);

if (new_buffer == ((void *)0) || new_pbuffer8 == ((void *)0))
  {
  fprintf(stderr, "pcre2test: malloc(%d) failed\n", new_pbuffer8_size);
  exit(1);
  }

memcpy(new_buffer, buffer, pbuffer8_size);
memcpy(new_pbuffer8, pbuffer8, pbuffer8_size);

pbuffer8_size = new_pbuffer8_size;

free(buffer);
free(pbuffer8);

buffer = new_buffer;
pbuffer8 = new_pbuffer8;
}
static uint8_t *
extend_inputline(FILE *f, uint8_t *start, const char *prompt)
{
uint8_t *here = start;

for (;;)
  {
  size_t rlen = (size_t)(pbuffer8_size - (here - buffer));

  if (rlen > 1000)
    {
    size_t dlen;
      {
      if (isatty(fileno(f))) printf("%s", prompt);
      if (fgets((char *)here, rlen, f) == ((void *)0))
        return (here == start)? ((void *)0) : start;
      }

    dlen = strlen((char *)here);
    here += dlen;




    if (here > start && here[-1] == '\n') return start;
    if (!isatty(fileno(f)) && dlen < rlen - 1 && !feof(f))
      {
      fprintf(outfile, "** Binary zero encountered in input\n");
      fprintf(outfile, "** pcre2test run abandoned\n");
      exit(1);
      }
    }

  else
    {
    size_t start_offset = start - buffer;
    size_t here_offset = here - buffer;
    expand_input_buffers();
    start = buffer + start_offset;
    here = buffer + here_offset;
    }
  }


}
static int
strncmpic(const uint8_t *s, const uint8_t *t, int n)
{
while (n--)
  {
  int c = tolower(*s++) - tolower(*t++);
  if (c != 0) return c;
  }
return 0;
}
static int
scan_modifiers(const uint8_t *p, unsigned int len)
{
int bot = 0;
int top = sizeof(modlist)/sizeof(modstruct);

while (top > bot)
  {
  int mid = (bot + top)/2;
  unsigned int mlen = strlen(modlist[mid].name);
  int c = strncmp((char *)p, modlist[mid].name, (len < mlen)? len : mlen);
  if (c == 0)
    {
    if (len == mlen) return mid;
    c = (int)len - (int)mlen;
    }
  if (c > 0) bot = mid + 1; else top = mid;
  }

return -1;

}
static void *
check_modifier(modstruct *m, int ctx, patctl *pctl, datctl *dctl, uint32_t c)
{
void *field = ((void *)0);
size_t offset = m->offset;

if (restrict_for_perl_test) switch(m->which)
  {
  case MOD_PNDP:
  case MOD_PATP:
  case MOD_PDP:
  break;

  default:
  fprintf(outfile, "** '%s' is not allowed in a Perl-compatible test\n",
    m->name);
  return ((void *)0);
  }

switch (m->which)
  {
  case MOD_CTC:
  if (ctx == CTX_DEFPAT) field = (void *)default_pat_context8;
    else if (ctx == CTX_PAT) field = (void *)pat_context8;
  break;

  case MOD_CTM:
  if (ctx == CTX_DEFDAT) field = (void *)default_dat_context8;
    else if (ctx == CTX_DAT) field = (void *)dat_context8;
  break;

  case MOD_DAT:
  if (dctl != ((void *)0)) field = dctl;
  break;

  case MOD_PAT:
  case MOD_PATP:
  if (pctl != ((void *)0)) field = pctl;
  break;

  case MOD_PD:
  case MOD_PDP:
  case MOD_PND:
  case MOD_PNDP:
  if (dctl != ((void *)0)) field = dctl;
    else if (pctl != ((void *)0) && (m->which == MOD_PD || m->which == MOD_PDP ||
             ctx != CTX_DEFPAT))
      field = pctl;
  break;
  }

if (field == ((void *)0))
  {
  if (c == 0)
    fprintf(outfile, "** '%s' is not valid here\n", m->name);
  else
    fprintf(outfile, "** /%c is not valid here\n", c);
  return ((void *)0);
  }

return (char *)field + offset;
}
static BOOL
decode_modifiers(uint8_t *p, int ctx, patctl *pctl, datctl *dctl)
{
uint8_t *ep, *pp;
long li;
unsigned long uli;
BOOL first = 1;

for (;;)
  {
  void *field;
  modstruct *m;
  BOOL off = 0;
  unsigned int i, len;
  int index;
  char *endptr;



  while (((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISspace) || *p == ',') p++;
  if (*p == 0) break;



  for (ep = p; *ep != 0 && *ep != ','; ep++);
  if (*ep == 0)
    {
    while (ep > p && ((*__ctype_b_loc ())[(int) ((ep[-1]))] & (unsigned short int) _ISspace)) ep--;
    *ep = 0;
    }



  if (*p == '-')
    {
    off = 1;
    p++;
    }



  pp = p;
  while (pp < ep && *pp != '=') pp++;
  index = scan_modifiers(p, pp - p);





  if (index < 0)
    {
    uint32_t cc;
    uint8_t *mp = p;

    if (!first)
      {
      fprintf(outfile, "** Unrecognized modifier '%.*s'\n", (int)(ep-p), p);
      if (ep - p == 1)
        fprintf(outfile, "** Single-character modifiers must come first\n");
      return 0;
      }

    for (cc = *p; cc != ',' && cc != '\n' && cc != 0; cc = *(++p))
      {
      for (i = 0; i < sizeof(c1modlist)/sizeof(c1modstruct); i++)
        if (cc == c1modlist[i].onechar) break;

      if (i >= sizeof(c1modlist)/sizeof(c1modstruct))
        {
        fprintf(outfile, "** Unrecognized modifier '%c' in '%.*s'\n",
          *p, (int)(ep-mp), mp);
        return 0;
        }

      if (c1modlist[i].index >= 0)
        {
        index = c1modlist[i].index;
        }

      else
        {
        index = scan_modifiers((uint8_t *)(c1modlist[i].fullname),
          strlen(c1modlist[i].fullname));
        if (index < 0)
          {
          fprintf(outfile, "** Internal error: single-character equivalent "
            "modifier '%s' not found\n", c1modlist[i].fullname);
          return 0;
          }
        c1modlist[i].index = index;
        }

      field = check_modifier(modlist + index, ctx, pctl, dctl, *p);
      if (field == ((void *)0)) return 0;




      if (cc == 'x' && (*((uint32_t *)field) & 0x00000080u) != 0)
        {
        *((uint32_t *)field) &= ~0x00000080u;
        *((uint32_t *)field) |= 0x01000000u;
        }
      else
        *((uint32_t *)field) |= modlist[index].value;
      }

    continue;
    }




  m = modlist + index;
  if (m->type != MOD_CTL && m->type != MOD_OPT &&
      (m->type != MOD_IND || *pp == '='))
    {
    if (*pp++ != '=')
      {
      fprintf(outfile, "** '=' expected after '%s'\n", m->name);
      return 0;
      }
    if (off)
      {
      fprintf(outfile, "** '-' is not valid for '%s'\n", m->name);
      return 0;
      }
    }



  else if (*pp != ',' && *pp != '\n' && *pp != ' ' && *pp != 0)
    {
    fprintf(outfile, "** Unrecognized modifier '%.*s'\n", (int)(ep-p), p);
    return 0;
    }





  len = ep - pp;
  field = check_modifier(m, ctx, pctl, dctl, 0);
  if (field == ((void *)0)) return 0;



  switch (m->type)
    {
    case MOD_CTL:
    case MOD_OPT:
    if (off) *((uint32_t *)field) &= ~m->value;
      else *((uint32_t *)field) |= m->value;
    break;

    case MOD_BSR:
    if (len == 7 && strncmpic(pp, (const uint8_t *)"default", 7) == 0)
      {



      *((uint16_t *)field) = 1;

      if (ctx == CTX_PAT || ctx == CTX_DEFPAT) pctl->control2 &= ~0x80000000u;
        else dctl->control2 &= ~0x80000000u;
      }
    else
      {
      if (len == 7 && strncmpic(pp, (const uint8_t *)"anycrlf", 7) == 0)
        *((uint16_t *)field) = 2;
      else if (len == 7 && strncmpic(pp, (const uint8_t *)"unicode", 7) == 0)
        *((uint16_t *)field) = 1;
      else goto INVALID_VALUE;
      if (ctx == CTX_PAT || ctx == CTX_DEFPAT) pctl->control2 |= 0x80000000u;
        else dctl->control2 |= 0x80000000u;
      }
    pp = ep;
    break;

    case MOD_CHR:
    *((uint32_t *)field) = *pp++;
    break;

    case MOD_CON:
    for (;; pp++)
      {
      uint8_t *colon = (uint8_t *)strchr((const char *)pp, ':');
      len = ((colon != ((void *)0) && colon < ep)? colon:ep) - pp;
      for (i = 0; i < (sizeof(convertlist)/sizeof(convertstruct)); i++)
        {
        if (strncmpic(pp, (const uint8_t *)convertlist[i].name, len) == 0)
          {
          if (*((uint32_t *)field) == (4294967295U))
            *((uint32_t *)field) = convertlist[i].option;
          else
            *((uint32_t *)field) |= convertlist[i].option;
          break;
          }
        }
      if (i >= (sizeof(convertlist)/sizeof(convertstruct))) goto INVALID_VALUE;
      pp += len;
      if (*pp != ':') break;
      }
    break;

    case MOD_IN2:
    if (!((*__ctype_b_loc ())[(int) ((*pp))] & (unsigned short int) _ISdigit)) goto INVALID_VALUE;
    uli = strtoul((const char *)pp, &endptr, 10);
    if ((uli == (4294967295U))) goto INVALID_VALUE;
    ((uint32_t *)field)[0] = (uint32_t)uli;
    if (*endptr == ':')
      {
      uli = strtoul((const char *)endptr+1, &endptr, 10);
      if ((uli == (4294967295U))) goto INVALID_VALUE;
      ((uint32_t *)field)[1] = (uint32_t)uli;
      }
    else ((uint32_t *)field)[1] = 0;
    pp = (uint8_t *)endptr;
    break;





    case MOD_SIZ:
    if (!((*__ctype_b_loc ())[(int) ((*pp))] & (unsigned short int) _ISdigit)) goto INVALID_VALUE;
    uli = strtoul((const char *)pp, &endptr, 10);
    if (uli == (2147483647L * 2UL + 1UL)) goto INVALID_VALUE;



    *((size_t *)field) = (size_t)uli;
    pp = (uint8_t *)endptr;
    break;

    case MOD_IND:
    if (len == 0)
      {
      *((uint32_t *)field) = (uint32_t)(m->value);
      break;
      }


    case MOD_INT:
    if (!((*__ctype_b_loc ())[(int) ((*pp))] & (unsigned short int) _ISdigit)) goto INVALID_VALUE;
    uli = strtoul((const char *)pp, &endptr, 10);
    if ((uli == (4294967295U))) goto INVALID_VALUE;
    *((uint32_t *)field) = (uint32_t)uli;
    pp = (uint8_t *)endptr;
    break;

    case MOD_INS:
    if (!((*__ctype_b_loc ())[(int) ((*pp))] & (unsigned short int) _ISdigit) && *pp != '-') goto INVALID_VALUE;
    li = strtol((const char *)pp, &endptr, 10);
    if ((li == (2147483647) || li == (-2147483647-1))) goto INVALID_VALUE;
    *((int32_t *)field) = (int32_t)li;
    pp = (uint8_t *)endptr;
    break;

    case MOD_NL:
    for (i = 0; i < sizeof(newlines)/sizeof(char *); i++)
      if (len == strlen(newlines[i]) &&
        strncmpic(pp, (const uint8_t *)newlines[i], len) == 0) break;
    if (i >= sizeof(newlines)/sizeof(char *)) goto INVALID_VALUE;
    if (i == 0)
      {
      *((uint16_t *)field) = 2;
      if (ctx == CTX_PAT || ctx == CTX_DEFPAT) pctl->control2 &= ~0x40000000u;
        else dctl->control2 &= ~0x40000000u;
      }
    else
      {
      *((uint16_t *)field) = i;
      if (ctx == CTX_PAT || ctx == CTX_DEFPAT) pctl->control2 |= 0x40000000u;
        else dctl->control2 |= 0x40000000u;
      }
    pp = ep;
    break;

    case MOD_NN:
    if (((*__ctype_b_loc ())[(int) ((*pp))] & (unsigned short int) _ISdigit) || *pp == '-')
      {
      int ct = 10 - 1;
      int32_t value;
      li = strtol((const char *)pp, &endptr, 10);
      if ((li == (2147483647) || li == (-2147483647-1))) goto INVALID_VALUE;
      value = (int32_t)li;
      field = (char *)field - m->offset + m->value;
      if (value >= 0)
        {
        while (*((int32_t *)field) >= 0 && ct-- > 0)
          field = (char *)field + sizeof(int32_t);
        if (ct <= 0)
          {
          fprintf(outfile, "** Too many numeric '%s' modifiers\n", m->name);
          return 0;
          }
        }
      *((int32_t *)field) = value;
      if (ct > 0) ((int32_t *)field)[1] = -1;
      pp = (uint8_t *)endptr;
      }



    else
      {
      char *nn = (char *)field;
      if (len > 0)
        {
        if (len > 32)
          {
          fprintf(outfile, "** Group name in '%s' is too long\n", m->name);
          return 0;
          }
        while (*nn != 0) nn += strlen(nn) + 1;
        if (nn + len + 2 - (char *)field > 64)
          {
          fprintf(outfile, "** Too many characters in named '%s' modifiers\n",
            m->name);
          return 0;
          }
        memcpy(nn, pp, len);
        }
      nn[len] = 0 ;
      nn[len+1] = 0;
      pp = ep;
      }
    break;

    case MOD_STR:
    if (len + 1 > m->value)
      {
      fprintf(outfile, "** Overlong value for '%s' (max %d code units)\n",
        m->name, m->value - 1);
      return 0;
      }
    memcpy(field, pp, len);
    ((uint8_t *)field)[len] = 0;
    pp = ep;
    break;
    }

  if (*pp != ',' && *pp != '\n' && *pp != ' ' && *pp != 0)
    {
    fprintf(outfile, "** Comma expected after modifier item '%s'\n", m->name);
    return 0;
    }

  p = pp;
  first = 0;

  if (ctx == CTX_POPPAT &&
     (pctl->options != 0 ||
      pctl->tables_id != 0 ||
      pctl->locale[0] != 0 ||
      (pctl->control & (0x00010000u|0x00800000u|0x01000000u|0x02000000u| 0x04000000u|0x08000000u|0x20000000u)) != 0))
    {
    fprintf(outfile, "** '%s' is not valid here\n", m->name);
    return 0;
    }
  }

return 1;

INVALID_VALUE:
fprintf(outfile, "** Invalid value in '%.*s'\n", (int)(ep-p), p);
return 0;
}
static int
pattern_info(int what, void *where, BOOL unsetok)
{
int rc;
rc = pcre2_pattern_info_8(compiled_code8,what,((void *)0));
rc = pcre2_pattern_info_8(compiled_code8,what,where);
if (rc >= 0) return 0;
if (rc != (-55) || !unsetok)
  {
  fprintf(outfile, "Error %d from pcre2_pattern_info_%d(%d)\n", rc, test_mode,
    what);
  if (rc == (-32))
    fprintf(outfile, "Running in %d-bit mode but pattern was compiled in "
      "%d-bit mode\n", test_mode,
      8 * (compiled_code8->flags & (0x00000001 | 0x00000002 | 0x00000004)));
  }
return rc;
}
static void
prmsg(const char **msg, const char *s)
{
fprintf(outfile, "%s %s", *msg, s);
*msg = "";
}
static void
show_controls(uint32_t controls, uint32_t controls2, const char *before)
{
fprintf(outfile, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
  before,
  ((controls & 0x00000001u) != 0)? " aftertext" : "",
  ((controls & 0x00000002u) != 0)? " allaftertext" : "",
  ((controls & 0x00000004u) != 0)? " allcaptures" : "",
  ((controls & 0x00000008u) != 0)? " allusedtext" : "",
  ((controls2 & 0x00000100u) != 0)? " allvector" : "",
  ((controls & 0x00000010u) != 0)? " altglobal" : "",
  ((controls & 0x00000020u) != 0)? " bincode" : "",
  ((controls2 & 0x80000000u) != 0)? " bsr" : "",
  ((controls & 0x00000040u) != 0)? " callout_capture" : "",
  ((controls2 & 0x00000080u) != 0)? " callout_extra" : "",
  ((controls & 0x00000080u) != 0)? " callout_info" : "",
  ((controls & 0x00000100u) != 0)? " callout_none" : "",
  ((controls2 & 0x00000040u) != 0)? " callout_no_where" : "",
  ((controls & 0x00000200u) != 0)? " dfa" : "",
  ((controls & 0x00000400u) != 0)? " expand" : "",
  ((controls & 0x00000800u) != 0)? " find_limits" : "",
  ((controls & 0x00001000u) != 0)? " framesize" : "",
  ((controls & 0x00002000u) != 0)? " fullbincode" : "",
  ((controls & 0x00004000u) != 0)? " getall" : "",
  ((controls & 0x00008000u) != 0)? " global" : "",
  ((controls & 0x00010000u) != 0)? " hex" : "",
  ((controls & 0x00020000u) != 0)? " info" : "",
  ((controls & 0x00040000u) != 0)? " jitfast" : "",
  ((controls & 0x00080000u) != 0)? " jitverify" : "",
  ((controls & 0x00100000u) != 0)? " mark" : "",
  ((controls & 0x00200000u) != 0)? " memory" : "",
  ((controls2 & 0x40000000u) != 0)? " newline" : "",
  ((controls & 0x00400000u) != 0)? " null_context" : "",
  ((controls & 0x00800000u) != 0)? " posix" : "",
  ((controls & 0x01000000u) != 0)? " posix_nosub" : "",
  ((controls & 0x02000000u) != 0)? " push" : "",
  ((controls & 0x04000000u) != 0)? " pushcopy" : "",
  ((controls & 0x08000000u) != 0)? " pushtablescopy" : "",
  ((controls & 0x10000000u) != 0)? " startchar" : "",
  ((controls2 & 0x00000001u) != 0)? " substitute_callout" : "",
  ((controls2 & 0x00000002u) != 0)? " substitute_extended" : "",
  ((controls2 & 0x00000004u) != 0)? " substitute_overflow_length" : "",
  ((controls2 & 0x00000008u) != 0)? " substitute_unknown_unset" : "",
  ((controls2 & 0x00000010u) != 0)? " substitute_unset_empty" : "",
  ((controls & 0x20000000u) != 0)? " use_length" : "",
  ((controls & 0x40000000u) != 0)? " utf8_input" : "",
  ((controls & 0x80000000u) != 0)? " zero_terminate" : "");
}
static void
show_compile_options(uint32_t options, const char *before, const char *after)
{
if (options == 0) fprintf(outfile, "%s <none>%s", before, after);
else fprintf(outfile, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
  before,
  ((options & 0x00000002u) != 0)? " alt_bsux" : "",
  ((options & 0x00200000u) != 0)? " alt_circumflex" : "",
  ((options & 0x00400000u) != 0)? " alt_verbnames" : "",
  ((options & 0x00000001u) != 0)? " allow_empty_class" : "",
  ((options & 0x80000000u) != 0)? " anchored" : "",
  ((options & 0x00000004u) != 0)? " auto_callout" : "",
  ((options & 0x00000008u) != 0)? " caseless" : "",
  ((options & 0x00000010u) != 0)? " dollar_endonly" : "",
  ((options & 0x00000020u) != 0)? " dotall" : "",
  ((options & 0x00000040u) != 0)? " dupnames" : "",
  ((options & 0x20000000u) != 0)? " endanchored" : "",
  ((options & 0x00000080u) != 0)? " extended" : "",
  ((options & 0x01000000u) != 0)? " extended_more" : "",
  ((options & 0x00000100u) != 0)? " firstline" : "",
  ((options & 0x02000000u) != 0)? " literal" : "",
  ((options & 0x00000200u) != 0)? " match_unset_backref" : "",
  ((options & 0x00000400u) != 0)? " multiline" : "",
  ((options & 0x00100000u) != 0)? " never_backslash_c" : "",
  ((options & 0x00000800u) != 0)? " never_ucp" : "",
  ((options & 0x00001000u) != 0)? " never_utf" : "",
  ((options & 0x00002000u) != 0)? " no_auto_capture" : "",
  ((options & 0x00004000u) != 0)? " no_auto_possess" : "",
  ((options & 0x00008000u) != 0)? " no_dotstar_anchor" : "",
  ((options & 0x40000000u) != 0)? " no_utf_check" : "",
  ((options & 0x00010000u) != 0)? " no_start_optimize" : "",
  ((options & 0x00020000u) != 0)? " ucp" : "",
  ((options & 0x00040000u) != 0)? " ungreedy" : "",
  ((options & 0x00800000u) != 0)? " use_offset_limit" : "",
  ((options & 0x00080000u) != 0)? " utf" : "",
  after);
}
static void
show_compile_extra_options(uint32_t options, const char *before,
  const char *after)
{
if (options == 0) fprintf(outfile, "%s <none>%s", before, after);
else fprintf(outfile, "%s%s%s%s%s%s%s",
  before,
  ((options & 0x00000001u) != 0)? " allow_surrogate_escapes" : "",
  ((options & 0x00000002u) != 0)? " bad_escape_is_literal" : "",
  ((options & 0x00000004u) != 0)? " match_word" : "",
  ((options & 0x00000008u) != 0)? " match_line" : "",
  ((options & 0x00000010u) != 0)? " escaped_cr_is_lf" : "",
  after);
}
static void
show_match_options(uint32_t options)
{
fprintf(outfile, "%s%s%s%s%s%s%s%s%s%s%s",
  ((options & 0x80000000u) != 0)? " anchored" : "",
  ((options & 0x00000040u) != 0)? " dfa_restart" : "",
  ((options & 0x00000080u) != 0)? " dfa_shortest" : "",
  ((options & 0x20000000u) != 0)? " endanchored" : "",
  ((options & 0x40000000u) != 0)? " no_utf_check" : "",
  ((options & 0x00000001u) != 0)? " notbol" : "",
  ((options & 0x00000004u) != 0)? " notempty" : "",
  ((options & 0x00000008u) != 0)? " notempty_atstart" : "",
  ((options & 0x00000002u) != 0)? " noteol" : "",
  ((options & 0x00000020u) != 0)? " partial_hard" : "",
  ((options & 0x00000010u) != 0)? " partial_soft" : "");
}
static void
show_memory_info(void)
{
uint32_t name_count, name_entry_size;
size_t size, cblock_size;




cblock_size = 0;

if (test_mode == 8) cblock_size = sizeof(pcre2_real_code_8);
(void)pattern_info(22, &size, 0);
(void)pattern_info(17, &name_count, 0);
(void)pattern_info(18, &name_entry_size, 0);
fprintf(outfile, "Memory allocation (code space): %d\n",
  (int)(size - name_count*name_entry_size*code_unit_size - cblock_size));
if (pat_patctl.jit != 0)
  {
  (void)pattern_info(10, &size, 0);
  fprintf(outfile, "Memory allocation (JIT code): %d\n", (int)size);
  }
}







static void
show_framesize(void)
{
size_t frame_size;
(void)pattern_info(24, &frame_size, 0);
fprintf(outfile, "Frame size for pcre2_match(): %d\n", (int)frame_size);
}







static BOOL
print_error_message(int errorcode, const char *before, const char *after)
{
int len;
len = pcre2_get_error_message_8(errorcode,pbuffer8,pbuffer8_size);
if (len < 0)
  {
  fprintf(outfile, "\n** pcre2test internal error: cannot interpret error "
    "number\n** Unexpected return (%d) from pcre2_get_error_message()\n", len);
  }
else
  {
  fprintf(outfile, "%s", before);
  (void)pchars8((PCRE2_SPTR8)((void *)pbuffer8)+0, len, 0, outfile);
  fprintf(outfile, "%s", after);
  }
return len >= 0;
}
static int callout_callback(pcre2_callout_enumerate_block_8 *cb,
  void *callout_data)
{
uint32_t i;
BOOL utf = (compiled_code8->overall_options & 0x00080000u) != 0;

(void)callout_data;

fprintf(outfile, "Callout ");
if (cb->callout_string != ((void *)0))
  {
  uint32_t delimiter = (uint32_t)(((PCRE2_SPTR8)(cb->callout_string))[-1]);
  fprintf(outfile, "%c", delimiter);
  (void)pchars8((PCRE2_SPTR8)(cb->callout_string)+0, cb->callout_string_length, utf, outfile)
                                            ;
  for (i = 0; callout_start_delims[i] != 0; i++)
    if (delimiter == callout_start_delims[i])
      {
      delimiter = callout_end_delims[i];
      break;
      }
  fprintf(outfile, "%c  ", delimiter);
  }
else fprintf(outfile, "%d  ", cb->callout_number);

fprintf(outfile, "%.*s\n",
  (int)((cb->next_item_length == 0)? 1 : cb->next_item_length),
  pbuffer8 + cb->pattern_position);

return 0;
}
static int
show_pattern_info(void)
{
uint32_t compile_options, overall_options, extra_options;

if ((pat_patctl.control & (0x00000020u|0x00002000u)) != 0)
  {
  fprintf(outfile, "------------------------------------------------------------------\n");
  pcre2_printint_8(compiled_code8,outfile,(pat_patctl.control & 0x00002000u) != 0);
  }

if ((pat_patctl.control & 0x00020000u) != 0)
  {
  int rc;
  void *nametable;
  uint8_t *start_bits;
  BOOL heap_limit_set, match_limit_set, depth_limit_set;
  uint32_t backrefmax, bsr_convention, capture_count, first_ctype, first_cunit,
    hasbackslashc, hascrorlf, jchanged, last_ctype, last_cunit, match_empty,
    depth_limit, heap_limit, match_limit, minlength, nameentrysize, namecount,
    newline_convention;



  rc = pcre2_pattern_info_8(compiled_code8,999,((void *)0));
  (void)rc;



  switch(pattern_info(25, &heap_limit, 1))
    {
    case 0:
    heap_limit_set = 1;
    break;

    case (-55):
    heap_limit_set = 0;
    break;

    default:
    return PR_ABEND;
    }

  switch(pattern_info(14, &match_limit, 1))
    {
    case 0:
    match_limit_set = 1;
    break;

    case (-55):
    match_limit_set = 0;
    break;

    default:
    return PR_ABEND;
    }

  switch(pattern_info(21, &depth_limit, 1))
    {
    case 0:
    depth_limit_set = 1;
    break;

    case (-55):
    depth_limit_set = 0;
    break;

    default:
    return PR_ABEND;
    }



  if (pattern_info(2, &backrefmax, 0) +
      pattern_info(3, &bsr_convention, 0) +
      pattern_info(4, &capture_count, 0) +
      pattern_info(7, &start_bits, 0) +
      pattern_info(5, &first_cunit, 0) +
      pattern_info(6, &first_ctype, 0) +
      pattern_info(23, &hasbackslashc, 0) +
      pattern_info(8, &hascrorlf, 0) +
      pattern_info(9, &jchanged, 0) +
      pattern_info(11, &last_cunit, 0) +
      pattern_info(12, &last_ctype, 0) +
      pattern_info(13, &match_empty, 0) +
      pattern_info(16, &minlength, 0) +
      pattern_info(17, &namecount, 0) +
      pattern_info(18, &nameentrysize, 0) +
      pattern_info(19, &nametable, 0) +
      pattern_info(20, &newline_convention, 0)
      != 0)
    return PR_ABEND;

  fprintf(outfile, "Capturing subpattern count = %d\n", capture_count);

  if (backrefmax > 0)
    fprintf(outfile, "Max back reference = %d\n", backrefmax);

  if (maxlookbehind > 0)
    fprintf(outfile, "Max lookbehind = %d\n", maxlookbehind);

  if (heap_limit_set)
    fprintf(outfile, "Heap limit = %u\n", heap_limit);

  if (match_limit_set)
    fprintf(outfile, "Match limit = %u\n", match_limit);

  if (depth_limit_set)
    fprintf(outfile, "Depth limit = %u\n", depth_limit);

  if (namecount > 0)
    {
    fprintf(outfile, "Named capturing subpatterns:\n");
    for (; namecount > 0; namecount--)
      {
      int imm2_size = test_mode == 8 ? 2 : 1;
      uint32_t length = (uint32_t)(int)strlen((char *)nametable + imm2_size);
      fprintf(outfile, "  ");
      (void)pchars8((PCRE2_SPTR8)(nametable)+imm2_size, length, 0, outfile);
      while (length++ < nameentrysize - imm2_size) _IO_putc (' ', outfile);
      if (test_mode == 8)
        fprintf(outfile, "%3d\n", (int)(
        ((((PCRE2_SPTR8)nametable)[0]) << 8) | ((PCRE2_SPTR8)nametable)[1]));

      nametable = (void*)((PCRE2_SPTR8)nametable + nameentrysize * code_unit_size);
      }
    }

  if (hascrorlf) fprintf(outfile, "Contains explicit CR or LF match\n");
  if (hasbackslashc) fprintf(outfile, "Contains \\C\n");
  if (match_empty) fprintf(outfile, "May match empty string\n");

  pattern_info(1, &compile_options, 0);
  pattern_info(0, &overall_options, 0);
  pattern_info(26, &extra_options, 0);




  if ((pat_patctl.options & 0x00001000u) == 0)
    {
    compile_options &= ~0x00001000u;
    overall_options &= ~0x00001000u;
    }

  if ((pat_patctl.options & 0x00000800u) == 0)
    {
    compile_options &= ~0x00000800u;
    overall_options &= ~0x00000800u;
    }

  if ((compile_options|overall_options) != 0)
    {
    if (compile_options == overall_options)
      show_compile_options(compile_options, "Options:", "\n");
    else
      {
      show_compile_options(compile_options, "Compile options:", "\n");
      show_compile_options(overall_options, "Overall options:", "\n");
      }
    }

  if (extra_options != 0)
    show_compile_extra_options(extra_options, "Extra options:", "\n");

  if (jchanged) fprintf(outfile, "Duplicate name status changes\n");

  if ((pat_patctl.control2 & 0x80000000u) != 0 ||
      (compiled_code8->flags & 0x00004000) != 0)
    fprintf(outfile, "\\R matches %s\n", (bsr_convention == 1)?
      "any Unicode newline" : "CR, LF, or CRLF");

  if ((compiled_code8->flags & 0x00008000) != 0)
    {
    switch (newline_convention)
      {
      case 1:
      fprintf(outfile, "Forced newline is CR\n");
      break;

      case 2:
      fprintf(outfile, "Forced newline is LF\n");
      break;

      case 3:
      fprintf(outfile, "Forced newline is CRLF\n");
      break;

      case 5:
      fprintf(outfile, "Forced newline is CR, LF, or CRLF\n");
      break;

      case 4:
      fprintf(outfile, "Forced newline is any Unicode newline\n");
      break;

      case 6:
      fprintf(outfile, "Forced newline is NUL\n");
      break;

      default:
      break;
      }
    }

  if (first_ctype == 2)
    {
    fprintf(outfile, "First code unit at start or follows newline\n");
    }
  else if (first_ctype == 1)
    {
    const char *caseless =
      ((compiled_code8->flags & 0x00000020) == 0)?
      "" : " (caseless)";
    if (((use_tables != ((void *)0) && first_cunit < 256)? ((*__ctype_b_loc ())[(int) ((first_cunit))] & (unsigned short int) _ISprint) : ((first_cunit) >= 32 && (first_cunit) < 127)))
      fprintf(outfile, "First code unit = \'%c\'%s\n", first_cunit, caseless);
    else
      {
      fprintf(outfile, "First code unit = ");
      pchar(first_cunit, 0, outfile);
      fprintf(outfile, "%s\n", caseless);
      }
    }
  else if (start_bits != ((void *)0))
    {
    int i;
    int c = 24;
    fprintf(outfile, "Starting code units: ");
    for (i = 0; i < 256; i++)
      {
      if ((start_bits[i/8] & (1<<(i&7))) != 0)
        {
        if (c > 75)
          {
          fprintf(outfile, "\n  ");
          c = 2;
          }
        if (((use_tables != ((void *)0) && i < 256)? ((*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) _ISprint) : ((i) >= 32 && (i) < 127)) && i != ' ')
          {
          fprintf(outfile, "%c ", i);
          c += 2;
          }
        else
          {
          fprintf(outfile, "\\x%02x ", i);
          c += 5;
          }
        }
      }
    fprintf(outfile, "\n");
    }

  if (last_ctype != 0)
    {
    const char *caseless =
      ((compiled_code8->flags & 0x00000100) == 0)?
      "" : " (caseless)";
    if (((use_tables != ((void *)0) && last_cunit < 256)? ((*__ctype_b_loc ())[(int) ((last_cunit))] & (unsigned short int) _ISprint) : ((last_cunit) >= 32 && (last_cunit) < 127)))
      fprintf(outfile, "Last code unit = \'%c\'%s\n", last_cunit, caseless);
    else
      {
      fprintf(outfile, "Last code unit = ");
      pchar(last_cunit, 0, outfile);
      fprintf(outfile, "%s\n", caseless);
      }
    }

  fprintf(outfile, "Subject length lower bound = %d\n", minlength);

  if (pat_patctl.jit != 0 && (pat_patctl.control & 0x00080000u) != 0)
    {
    if (compiled_code8->executable_jit != ((void *)0))
      fprintf(outfile, "JIT compilation was successful\n");
    else
      {






      fprintf(outfile, "JIT support is not available in this version of PCRE2\n");

      }
    }
  }

if ((pat_patctl.control & 0x00000080u) != 0)
  {
  int errorcode;
  errorcode = pcre2_callout_enumerate_8(compiled_code8, (int (*)(struct pcre2_callout_enumerate_block_8 *, void *))callout_callback,0);
  if (errorcode != 0)
    {
    fprintf(outfile, "Callout enumerate failed: error %d: ", errorcode);
    if (errorcode < 0 && !print_error_message(errorcode, "", "\n"))
      return PR_ABEND;
    return PR_SKIP;
    }
  }

return PR_OK;
}
static BOOL
serial_error(int rc, const char *msg)
{
fprintf(outfile, "%s failed: error %d: ", msg, rc);
return print_error_message(rc, "", "\n");
}
static int
open_file(uint8_t *buffptr, const char *mode, FILE **fptr)
{
char *endf;
char *filename = (char *)buffptr;
while (((*__ctype_b_loc ())[(int) ((*filename))] & (unsigned short int) _ISspace)) filename++;
endf = filename + strlen((char *)filename);
while (endf > filename && ((*__ctype_b_loc ())[(int) ((endf[-1]))] & (unsigned short int) _ISspace)) endf--;

if (endf == filename)
  {
  fprintf(outfile, "** File name expected after #save\n");
  return PR_ABEND;
  }

*endf = 0;
*fptr = fopen((const char *)filename, mode);
if (*fptr == ((void *)0))
  {
  fprintf(outfile, "** Failed to open '%s': %s\n", filename, strerror((*__errno_location ())));
  return PR_ABEND;
  }

return PR_OK;
}
static int
process_command(void)
{
FILE *f;
size_t serial_size;
size_t i;
int rc, cmd, cmdlen, yield;
uint16_t first_listed_newline;
const char *cmdname;
uint8_t *argptr, *serial;

yield = PR_OK;
cmd = CMD_UNKNOWN;
cmdlen = 0;

for (i = 0; i < (sizeof(cmdlist)/sizeof(cmdstruct)); i++)
  {
  cmdname = cmdlist[i].name;
  cmdlen = strlen(cmdname);
  if (strncmp((char *)(buffer+1), cmdname, cmdlen) == 0 &&
      ((*__ctype_b_loc ())[(int) ((buffer[cmdlen+1]))] & (unsigned short int) _ISspace))
    {
    cmd = cmdlist[i].value;
    break;
    }
  }

argptr = buffer + cmdlen + 1;

if (restrict_for_perl_test && cmd != CMD_PATTERN && cmd != CMD_SUBJECT)
  {
  fprintf(outfile, "** #%s is not allowed after #perltest\n", cmdname);
  return PR_ABEND;
  }

switch(cmd)
  {
  case CMD_UNKNOWN:
  fprintf(outfile, "** Unknown command: %s", buffer);
  break;

  case CMD_FORBID_UTF:
  forbid_utf = 0x00001000u|0x00000800u;
  break;

  case CMD_PERLTEST:
  restrict_for_perl_test = 1;
  break;



  case CMD_PATTERN:
  (void)decode_modifiers(argptr, CTX_DEFPAT, &def_patctl, ((void *)0));
  if (def_patctl.jit == 0 && (def_patctl.control & 0x00080000u) != 0)
    def_patctl.jit = 7;
  break;



  case CMD_SUBJECT:
  (void)decode_modifiers(argptr, CTX_DEFDAT, ((void *)0), &def_datctl);
  break;




  case CMD_NEWLINE_DEFAULT:
  local_newline_default = 0;
  first_listed_newline = 0;
  for (;;)
    {
    while (((*__ctype_b_loc ())[(int) ((*argptr))] & (unsigned short int) _ISspace)) argptr++;
    if (*argptr == 0) break;
    for (i = 1; i < sizeof(newlines)/sizeof(char *); i++)
      {
      size_t nlen = strlen(newlines[i]);
      if (strncmpic(argptr, (const uint8_t *)newlines[i], nlen) == 0 &&
          ((*__ctype_b_loc ())[(int) ((argptr[nlen]))] & (unsigned short int) _ISspace))
        {
        if (i == 2) return PR_OK;
        if (first_listed_newline == 0) first_listed_newline = i;
        }
      }
    while (*argptr != 0 && !((*__ctype_b_loc ())[(int) ((*argptr))] & (unsigned short int) _ISspace)) argptr++;
    }
  local_newline_default = first_listed_newline;
  break;





  case CMD_POP:
  case CMD_POPCOPY:
  if (patstacknext <= 0)
    {
    fprintf(outfile, "** Can't pop off an empty stack\n");
    return PR_SKIP;
    }
  memset(&pat_patctl, 0, sizeof(patctl));
  if (!decode_modifiers(argptr, CTX_POPPAT, &pat_patctl, ((void *)0)))
    return PR_SKIP;

  if (cmd == CMD_POP)
    {
    compiled_code8 = patstack[--patstacknext];
    }
  else
    {
    compiled_code8 = pcre2_code_copy_8(patstack[patstacknext - 1]);
    }

  if (pat_patctl.jit != 0)
    {
    jitrc = pcre2_jit_compile_8(compiled_code8,pat_patctl.jit);
    }
  if ((pat_patctl.control & 0x00200000u) != 0) show_memory_info();
  if ((pat_patctl.control & 0x00001000u) != 0) show_framesize();
  if ((pat_patctl.control & ((0x00002000u|0x00020000u)|0x00000020u|0x00000080u)) != 0)
    {
    rc = show_pattern_info();
    if (rc != PR_OK) return rc;
    }
  break;



  case CMD_SAVE:
  if (patstacknext <= 0)
    {
    fprintf(outfile, "** No stacked patterns to save\n");
    return PR_OK;
    }

  rc = open_file(argptr+1, "wb", &f);
  if (rc != PR_OK) return rc;

  rc = pcre2_serialize_encode_8((const pcre2_code_8 **)patstack,patstacknext,&serial,&serial_size,
 general_context8
  )
                    ;
  if (rc < 0)
    {
    fclose(f);
    if (!serial_error(rc, "Serialization")) return PR_ABEND;
    break;
    }







  for (i = 0; i < 4; i++) fputc((serial_size >> (i*8)) & 255, f);
  if (fwrite(serial, 1, serial_size, f) != serial_size)
    {
    fprintf(outfile, "** Wrong return from fwrite()\n");
    fclose(f);
    return PR_ABEND;
    }

  fclose(f);
  pcre2_serialize_free_8(serial);
  while(patstacknext > 0)
    {
    compiled_code8 = patstack[--patstacknext];
    pcre2_code_free_8(compiled_code8);
    }
  compiled_code8 = ((void *)0);
  break;



  case CMD_LOAD:
  rc = open_file(argptr+1, "rb", &f);
  if (rc != PR_OK) return rc;

  serial_size = 0;
  for (i = 0; i < 4; i++) serial_size |= fgetc(f) << (i*8);

  serial = malloc(serial_size);
  if (serial == ((void *)0))
    {
    fprintf(outfile, "** Failed to get memory (size %" "lu" ") for #load\n",
      (unsigned long int) serial_size);
    fclose(f);
    return PR_ABEND;
    }

  i = fread(serial, 1, serial_size, f);
  fclose(f);

  if (i != serial_size)
    {
    fprintf(outfile, "** Wrong return from fread()\n");
    yield = PR_ABEND;
    }
  else
    {
    rc = pcre2_serialize_get_number_of_codes_8(serial);
    if (rc < 0)
      {
      if (!serial_error(rc, "Get number of codes")) yield = PR_ABEND;
      }
    else
      {
      if (rc + patstacknext > 20)
        {
        fprintf(outfile, "** Not enough space on pattern stack for %d pattern%s\n",
          rc, (rc == 1)? "" : "s");
        rc = 20 - patstacknext;
        fprintf(outfile, "** Decoding %d pattern%s\n", rc,
          (rc == 1)? "" : "s");
        }
      rc = pcre2_serialize_decode_8((pcre2_code_8 **)patstack + patstacknext,rc,serial,
 general_context8
      )
                        ;
      if (rc < 0)
        {
        if (!serial_error(rc, "Deserialization")) yield = PR_ABEND;
        }
      else patstacknext += rc;
      }
    }

  free(serial);
  break;
  }

return yield;
}
static int
process_pattern(void)
{
BOOL utf;
uint32_t k;
uint8_t *p = buffer;
unsigned int delimiter = *p++;
int errorcode;
void *use_pat_context;
uint32_t use_forbid_utf = forbid_utf;
size_t patlen;
size_t valgrind_access_length;
size_t erroroffset;




memcpy(pat_context8,default_pat_context8,sizeof(pcre2_compile_context_8));
memcpy(&pat_patctl, &def_patctl, sizeof(patctl));



for(;;)
  {
  while (*p != 0)
    {
    if (*p == '\\' && p[1] != 0) p++;
      else if (*p == delimiter) break;
    p++;
    }
  if (*p != 0) break;
  if ((p = extend_inputline(infile, p, "    > ")) == ((void *)0))
    {
    fprintf(outfile, "** Unexpected EOF\n");
    return PR_ABEND;
    }
  if (!isatty(fileno(infile))) fprintf(outfile, "%s", (char *)p);
  }





if (p[1] == '\\') *p++ = '\\';



*p++ = 0;
patlen = p - buffer - 2;



if (!decode_modifiers(p, CTX_PAT, &pat_patctl, ((void *)0))) return PR_SKIP;
utf = (pat_patctl.options & 0x00080000u) != 0;




if ((pat_patctl.control & 0x40000000u) != 0)
  {
  if (test_mode == 8)
    {
    fprintf(outfile, "** The utf8_input modifier is not allowed in 8-bit mode\n");
    return PR_SKIP;
    }
  if (utf)
    {
    fprintf(outfile, "** The utf and utf8_input modifiers are mutually exclusive\n");
    return PR_SKIP;
    }
  }



if (pat_patctl.convert_type != (4294967295U) &&
    (pat_patctl.control & 0x00800000u) != 0)
  {
  fprintf(outfile, "** The convert and posix modifiers are mutually exclusive\n");
  return PR_SKIP;
  }




for (k = 0; k < sizeof(exclusive_pat_controls)/sizeof(uint32_t); k++)
  {
  uint32_t c = pat_patctl.control & exclusive_pat_controls[k];
  if (c != 0 && c != (c & (~c+1)))
    {
    show_controls(c, 0, "** Not allowed together:");
    fprintf(outfile, "\n");
    return PR_SKIP;
    }
  }




if (pat_patctl.jit == 0 &&
    (pat_patctl.control & (0x00080000u|0x00040000u)) != 0)
  pat_patctl.jit = 7;






if ((pat_patctl.control & 0x00010000u) != 0)
  {
  uint8_t *pp, *pt;
  uint32_t c, d;

  pt = pbuffer8;
  for (pp = buffer + 1; *pp != 0; pp++)
    {
    if (((*__ctype_b_loc ())[(int) ((*pp))] & (unsigned short int) _ISspace)) continue;
    c = *pp++;



    if (c == '\'' || c == '"')
      {
      uint8_t *pq = pp;
      for (;; pp++)
        {
        d = *pp;
        if (d == 0)
          {
          fprintf(outfile, "** Missing closing quote in hex pattern: "
            "opening quote is at offset %" "lu" ".\n", pq - buffer - 2);
          return PR_SKIP;
          }
        if (d == c) break;
        *pt++ = d;
        }
      }



    else
      {
      if (!((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISxdigit))
        {
        fprintf(outfile, "** Unexpected non-hex-digit '%c' at offset %"
          "lu" " in hex pattern: quote missing?\n", c, pp - buffer - 2);
        return PR_SKIP;
        }
      if (*pp == 0)
        {
        fprintf(outfile, "** Odd number of digits in hex pattern\n");
        return PR_SKIP;
        }
      d = *pp;
      if (!((*__ctype_b_loc ())[(int) ((d))] & (unsigned short int) _ISxdigit))
        {
        fprintf(outfile, "** Unexpected non-hex-digit '%c' at offset %"
          "lu" " in hex pattern: quote missing?\n", d, pp - buffer - 1);
        return PR_SKIP;
        }
      c = toupper(c);
      d = toupper(d);
      *pt++ = ((((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit)? (c - '0') : (c - 'A' + 10)) << 4) +
               (((*__ctype_b_loc ())[(int) ((d))] & (unsigned short int) _ISdigit)? (d - '0') : (d - 'A' + 10));
      }
    }
  *pt = 0;
  patlen = pt - pbuffer8;
  }



else if ((pat_patctl.control & 0x00000400u) != 0)
  {
  uint8_t *pp, *pt;

  pt = pbuffer8;
  for (pp = buffer + 1; *pp != 0; pp++)
    {
    uint8_t *pc = pp;
    uint32_t count = 1;
    size_t length = 1;




    if (pp[0] == '\\' && pp[1] == '[')
      {
      uint8_t *pe;
      for (pe = pp + 2; *pe != 0; pe++)
        {
        if (pe[0] == ']' && pe[1] == '{')
          {
          uint32_t clen = pe - pc - 2;
          uint32_t i = 0;
          unsigned long uli;
          char *endptr;

          pe += 2;
          uli = strtoul((const char *)pe, &endptr, 10);
          if ((uli == (4294967295U)))
            {
            fprintf(outfile, "** Pattern repeat count too large\n");
            return PR_SKIP;
            }

          i = (uint32_t)uli;
          pe = (uint8_t *)endptr;
          if (*pe == '}')
            {
            if (i == 0)
              {
              fprintf(outfile, "** Zero repeat not allowed\n");
              return PR_SKIP;
              }
            pc += 2;
            count = i;
            length = clen;
            pp = pe;
            break;
            }
          }
        }
      }





    while (pt + count * length > pbuffer8 + pbuffer8_size)
      {
      size_t pc_offset = pc - buffer;
      size_t pp_offset = pp - buffer;
      size_t pt_offset = pt - pbuffer8;
      expand_input_buffers();
      pc = buffer + pc_offset;
      pp = buffer + pp_offset;
      pt = pbuffer8 + pt_offset;
      }

    for (; count > 0; count--)
      {
      memcpy(pt, pc, length);
      pt += length;
      }
    }

  *pt = 0;
  patlen = pt - pbuffer8;

  if ((pat_patctl.control & 0x00020000u) != 0)
    fprintf(outfile, "Expanded: %s\n", pbuffer8);
  }



else
  {
  strncpy((char *)pbuffer8, (char *)(buffer+1), patlen + 1);
  }



if (pat_patctl.locale[0] != 0)
  {
  if (pat_patctl.tables_id != 0)
    {
    fprintf(outfile, "** 'Locale' and 'tables' must not both be set\n");
    return PR_SKIP;
    }
  if (setlocale(__LC_CTYPE, (const char *)pat_patctl.locale) == ((void *)0))
    {
    fprintf(outfile, "** Failed to set locale '%s'\n", pat_patctl.locale);
    return PR_SKIP;
    }
  if (strcmp((const char *)pat_patctl.locale, (const char *)locale_name) != 0)
    {
    strcpy((char *)locale_name, (char *)pat_patctl.locale);
    if (locale_tables != ((void *)0)) free((void *)locale_tables);
    locale_tables = pcre2_maketables_8(((void *)0));
    }
  use_tables = locale_tables;
  }

else switch (pat_patctl.tables_id)
  {
  case 0: use_tables = ((void *)0); break;
  case 1: use_tables = tables1; break;
  case 2: use_tables = tables2; break;
  default:
  fprintf(outfile, "** 'Tables' must specify 0, 1, or 2.\n");
  return PR_SKIP;
  }

pcre2_set_character_tables_8(pat_context8,use_tables);



if (pat_patctl.stackguard_test != 0)
  {
  pcre2_set_compile_recursion_guard_8(pat_context8,stack_guard,((void *)0));
  }





if ((pat_patctl.control & 0x00800000u) != 0)
  {

  int rc;
  int cflags = 0;
  const char *msg = "** Ignored with POSIX interface:";


  if (test_mode != 8)
    {
    fprintf(outfile, "** The POSIX interface is available only in 8-bit mode\n");
    return PR_SKIP;
    }




  if (pat_patctl.locale[0] != 0) prmsg(&msg, "locale");
  if (pat_patctl.replacement[0] != 0) prmsg(&msg, "replace");
  if (pat_patctl.tables_id != 0) prmsg(&msg, "tables");
  if (pat_patctl.stackguard_test != 0) prmsg(&msg, "stackguard");
  if (timeit > 0) prmsg(&msg, "timing");
  if (pat_patctl.jit != 0) prmsg(&msg, "JIT");

  if ((pat_patctl.options & ~( 0x00000008u|0x00000020u|0x02000000u|0x00000400u|0x00020000u| 0x00080000u|0x00040000u)) != 0)
    {
    show_compile_options(
      pat_patctl.options & ~( 0x00000008u|0x00000020u|0x02000000u|0x00000400u|0x00020000u| 0x00080000u|0x00040000u), msg, "");
    msg = "";
    }

  if ((pat_context8->extra_options &
       ~(0)) != 0)
    {
    show_compile_extra_options(
      pat_context8->extra_options & ~(0),
        msg, "");
    msg = "";
    }

  if ((pat_patctl.control & ~( 0x00000001u|0x00000002u|0x00000400u|0x00010000u|0x00800000u| 0x01000000u|0x20000000u)) != 0 ||
      (pat_patctl.control2 & ~(0)) != 0)
    {
    show_controls(pat_patctl.control & ~( 0x00000001u|0x00000002u|0x00000400u|0x00010000u|0x00800000u| 0x01000000u|0x20000000u),
      pat_patctl.control2 & ~(0), msg);
    msg = "";
    }

  if (local_newline_default != 0) prmsg(&msg, "#newline_default");
  if (pat_context8->max_pattern_length != (~(size_t)0))
    prmsg(&msg, "max_pattern_length");
  if (pat_context8->parens_nest_limit != 220)
    prmsg(&msg, "parens_nest_limit");

  if (msg[0] == 0) fprintf(outfile, "\n");



  if (utf) cflags |= 0x0040;
  if ((pat_patctl.control & 0x01000000u) != 0) cflags |= 0x0020;
  if ((pat_patctl.options & 0x00020000u) != 0) cflags |= 0x0400;
  if ((pat_patctl.options & 0x00000008u) != 0) cflags |= 0x0001;
  if ((pat_patctl.options & 0x02000000u) != 0) cflags |= 0x1000;
  if ((pat_patctl.options & 0x00000400u) != 0) cflags |= 0x0002;
  if ((pat_patctl.options & 0x00000020u) != 0) cflags |= 0x0010;
  if ((pat_patctl.options & 0x00040000u) != 0) cflags |= 0x0200;

  if ((pat_patctl.control & (0x00010000u|0x20000000u)) != 0)
    {
    preg.re_endp = (char *)pbuffer8 + patlen;
    cflags |= 0x0800;
    }

  rc = regcomp(&preg, (char *)pbuffer8, cflags);



  if (rc != 0)
    {
    size_t bsize, usize;
    int psize;

    preg.re_pcre2_code = ((void *)0);
    preg.re_match_data = ((void *)0);

    bsize = (pat_patctl.regerror_buffsize != 0)?
      pat_patctl.regerror_buffsize : pbuffer8_size;
    if (bsize + 8 < pbuffer8_size)
      memcpy(pbuffer8 + bsize, "DEADBEEF", 8);
    usize = regerror(rc, &preg, (char *)pbuffer8, bsize);





    psize = (int)bsize - 1;
    fprintf(outfile, "Failed: POSIX code %d: %.*s\n", rc, psize, pbuffer8);
    if (usize > bsize)
      {
      fprintf(outfile, "** regerror() message truncated\n");
      if (memcmp(pbuffer8 + bsize, "DEADBEEF", 8) != 0)
        fprintf(outfile, "** regerror() buffer overflow\n");
      }
    return PR_SKIP;
    }
  if (preg.re_pcre2_code == ((void *)0) ||
      ((pcre2_real_code_8 *)preg.re_pcre2_code)->magic_number != 0x50435245UL ||
      ((pcre2_real_code_8 *)preg.re_pcre2_code)->top_bracket != preg.re_nsub ||
      preg.re_match_data == ((void *)0) ||
      preg.re_cflags != cflags)
    {
    fprintf(outfile,
      "** The regcomp() function returned zero (success), but the values set\n"
      "** in the preg block are not valid for PCRE2. Check that pcre2test is\n"
      "** linked with PCRE2's pcre2posix module (-lpcre2-posix) and not with\n"
      "** some other POSIX regex library.\n**\n");
    preg.re_pcre2_code = ((void *)0);
    return PR_ABEND;
    }

  return PR_OK;

  }




if ((pat_patctl.control & (0x02000000u|0x04000000u|0x08000000u)) != 0)
  {
  if (pat_patctl.replacement[0] != 0)
    {
    fprintf(outfile, "** Replacement text is not supported with 'push'.\n");
    return PR_OK;
    }
  if ((pat_patctl.control & ~( 0x00000020u|0x00000080u|0x00002000u|0x00010000u|0x00020000u| 0x00080000u|0x00200000u|0x00001000u|0x02000000u|0x04000000u| 0x08000000u|0x20000000u)) != 0 ||
      (pat_patctl.control2 & ~(0x80000000u|0x40000000u)) != 0)
    {
    show_controls(pat_patctl.control & ~( 0x00000020u|0x00000080u|0x00002000u|0x00010000u|0x00020000u| 0x00080000u|0x00200000u|0x00001000u|0x02000000u|0x04000000u| 0x08000000u|0x20000000u),
                  pat_patctl.control2 & ~(0x80000000u|0x40000000u),
      "** Ignored when compiled pattern is stacked with 'push':");
    fprintf(outfile, "\n");
    }
  if ((pat_patctl.control & 0x00080000u) != 0 ||
      (pat_patctl.control2 & (0)) != 0)
    {
    show_controls(pat_patctl.control & 0x00080000u,
                  pat_patctl.control2 & (0),
      "** Applies only to compile when pattern is stacked with 'push':");
    fprintf(outfile, "\n");
    }
  }



errorcode = 0;
switch(errorcode)
  {
  case -1:
  fprintf(outfile, "** Failed: invalid UTF-8 string cannot be "
    "converted to %d-bit string\n", (test_mode == 16)? 16:32);
  return PR_SKIP;

  case -2:
  fprintf(outfile, "** Failed: character value greater than 0x10ffff "
    "cannot be converted to UTF\n");
  return PR_SKIP;

  case -3:
  fprintf(outfile, "** Failed: character value greater than 0xffff "
    "cannot be converted to 16-bit in non-UTF mode\n");
  return PR_SKIP;

  default:
  break;
  }





if (pat_patctl.convert_type != (4294967295U))
  {
  int rc;
  int convert_return = PR_OK;
  uint32_t convert_options = pat_patctl.convert_type;
  void *converted_pattern;
  size_t converted_length;

  if (pat_patctl.convert_length != 0)
    {
    converted_length = pat_patctl.convert_length;
    converted_pattern = malloc(converted_length * code_unit_size);
    if (converted_pattern == ((void *)0))
      {
      fprintf(outfile, "** Failed: malloc failed for converted pattern\n");
      return PR_SKIP;
      }
    }
  else converted_pattern = ((void *)0);

  if (utf) convert_options |= 0x00000001u;
  if ((pat_patctl.options & 0x40000000u) != 0)
    convert_options |= 0x00000002u;

  memcpy(con_context8,default_con_context8,sizeof(pcre2_convert_context_8));

  if (pat_patctl.convert_glob_escape != 0)
    {
    uint32_t escape = (pat_patctl.convert_glob_escape == '0')? 0 :
      pat_patctl.convert_glob_escape;
    rc = pcre2_set_glob_escape_8(con_context8,escape);
    if (rc != 0)
      {
      fprintf(outfile, "** Invalid glob escape '%c'\n",
        pat_patctl.convert_glob_escape);
      convert_return = PR_SKIP;
      goto CONVERT_FINISH;
      }
    }

  if (pat_patctl.convert_glob_separator != 0)
    {
    rc = pcre2_set_glob_separator_8(con_context8,pat_patctl.convert_glob_separator);
    if (rc != 0)
      {
      fprintf(outfile, "** Invalid glob separator '%c'\n",
        pat_patctl.convert_glob_separator);
      convert_return = PR_SKIP;
      goto CONVERT_FINISH;
      }
    }

  rc = pcre2_pattern_convert_8(
 pbuffer8
  ,patlen,convert_options,(PCRE2_UCHAR8 **)&converted_pattern,&converted_length,
 con_context8
  )
                                                       ;

  if (rc != 0)
    {
    fprintf(outfile, "** Pattern conversion error at offset %" "lu" ": ",
      (unsigned long int) converted_length);
    convert_return = print_error_message(rc, "", "\n")? PR_SKIP:PR_ABEND;
    }



  else
    {
    (void)pchars8((PCRE2_SPTR8)(converted_pattern)+0, converted_length, utf, outfile);
    fprintf(outfile, "\n");
    patlen = converted_length;
    memcpy(pbuffer8,(char *)converted_pattern, converted_length + 1);
    }



  CONVERT_FINISH:
  if (pat_patctl.convert_length != 0)
    free(converted_pattern);
  else
    pcre2_converted_pattern_free_8((PCRE2_UCHAR8 *)converted_pattern);



  if (convert_return != PR_OK) return convert_return;
  }






valgrind_access_length = patlen;
if ((pat_patctl.control & (0x00010000u|0x20000000u)) == 0)
  {
  patlen = (~(size_t)0);
  valgrind_access_length += 1;
  }
(void)valgrind_access_length;






if ((pat_patctl.control2 & 0x40000000u) == 0 && local_newline_default != 0)
  {
  pat_context8->newline_convention = local_newline_default;
  }




use_pat_context = ((pat_patctl.control & 0x00400000u) != 0)?
  ((void *)0) : (void *)pat_context8;




if ((pat_patctl.options & 0x02000000u) != 0) use_forbid_utf = 0;



if (timeit > 0)
  {
  int i;
  clock_t time_taken = 0;
  for (i = 0; i < timeit; i++)
    {
    clock_t start_time = clock();
   

 compiled_code8
    = pcre2_compile_8(

 pbuffer8
    ,patlen,pat_patctl.options|use_forbid_utf,&errorcode,&erroroffset,use_pat_context)

                        ;
    time_taken += clock() - start_time;
    if ((compiled_code8 != (((void *)0))))
      { pcre2_code_free_8(compiled_code8); }
    }
  total_compile_time += time_taken;
  fprintf(outfile, "Compile time %.4f milliseconds\n",
    (((double)time_taken * 1000.0) / (double)timeit) /
      (double)1000000l);
  }




 compiled_code8
 = pcre2_compile_8(
 pbuffer8
 ,patlen,pat_patctl.options|use_forbid_utf,&errorcode,&erroroffset,use_pat_context)
                                            ;





if ((compiled_code8 != (((void *)0))) && pat_patctl.jit != 0)
  {
  if (timeit > 0)
    {
    int i;
    clock_t time_taken = 0;
    for (i = 0; i < timeit; i++)
      {
      clock_t start_time;
      pcre2_code_free_8(compiled_code8);
     

 compiled_code8
      = pcre2_compile_8(

 pbuffer8
      ,patlen,pat_patctl.options|use_forbid_utf,&errorcode,&erroroffset,use_pat_context)

                        ;
      start_time = clock();
      jitrc = pcre2_jit_compile_8(compiled_code8,pat_patctl.jit);
      time_taken += clock() - start_time;
      }
    total_jit_compile_time += time_taken;
    fprintf(outfile, "JIT compile  %.4f milliseconds\n",
      (((double)time_taken * 1000.0) / (double)timeit) /
        (double)1000000l);
    }
  else
    {
    jitrc = pcre2_jit_compile_8(compiled_code8,pat_patctl.jit);
    }
  }
if ((compiled_code8 == (((void *)0))))
  {
  fprintf(outfile, "Failed: error %d at offset %d: ", errorcode,
    (int)erroroffset);
  if (!print_error_message(errorcode, "", "\n")) return PR_ABEND;
  return PR_SKIP;
  }





if (forbid_utf != 0)
  {
  if ((compiled_code8->flags & 0x00100000) != 0)
    {
    fprintf(outfile, "** \\P, \\p, and \\X are not allowed after the "
      "#forbid_utf command\n");
    return PR_SKIP;
    }
  }



if (pattern_info(15, &maxlookbehind, 0) != 0)
  return PR_ABEND;



if (pattern_info(4, &maxcapcount, 0) < 0)
  return PR_ABEND;




if ((pat_patctl.control2 & 0x40000000u) != 0)
  {
  compiled_code8->flags = compiled_code8->flags | 0x00008000;
  }



if ((pat_patctl.control & 0x00200000u) != 0) show_memory_info();
if ((pat_patctl.control & 0x00001000u) != 0) show_framesize();
if ((pat_patctl.control & ((0x00002000u|0x00020000u)|0x00000020u|0x00000080u)) != 0)
  {
  int rc = show_pattern_info();
  if (rc != PR_OK) return rc;
  }




if ((pat_patctl.control & 0x02000000u) != 0)
  {
  if (patstacknext >= 20)
    {
    fprintf(outfile, "** Too many pushed patterns (max %d)\n", 20);
    return PR_ABEND;
    }
  patstack[patstacknext++] = (void *)compiled_code8;
  compiled_code8 = ((void *)0);
  }





if ((pat_patctl.control & (0x04000000u|0x08000000u)) != 0)
  {
  if (patstacknext >= 20)
    {
    fprintf(outfile, "** Too many pushed patterns (max %d)\n", 20);
    return PR_ABEND;
    }
  if ((pat_patctl.control & 0x04000000u) != 0)
    {
    patstack[patstacknext++] = (void *)pcre2_code_copy_8(compiled_code8);
    }
  else
    {
    patstack[patstacknext++] = (void *)pcre2_code_copy_with_tables_8(
 compiled_code8
    )
                    ; }
  }

return PR_OK;
}
static int
check_match_limit(uint8_t *pp, size_t ulen, int errnumber, const char *msg)
{
int capcount;
uint32_t min = 0;
uint32_t mid = 64;
uint32_t max = (4294967295U);

pcre2_set_match_limit_8(dat_context8,max);
pcre2_set_depth_limit_8(dat_context8,max);
pcre2_set_heap_limit_8(dat_context8,max);

for (;;)
  {
  uint32_t stack_start = 0;

  if (errnumber == (-63))
    {
    pcre2_set_heap_limit_8(dat_context8,mid);
    }
  else if (errnumber == (-47))
    {
    pcre2_set_match_limit_8(dat_context8,mid);
    }
  else
    {
    pcre2_set_depth_limit_8(dat_context8,mid);
    }

  if ((dat_datctl.control & 0x00000200u) != 0)
    {
    stack_start = 30720/1024;
    if (dfa_workspace == ((void *)0))
      dfa_workspace = (int *)malloc(1000*sizeof(int));
    if (dfa_matched++ == 0)
      dfa_workspace[0] = -1;
    capcount = pcre2_dfa_match_8(

 compiled_code8
    ,(PCRE2_SPTR8)pp,ulen,dat_datctl.offset,dat_datctl.options,

 match_data8
    ,(void *)dat_context8,dfa_workspace,1000)

                                                        ;
    }

  else if ((pat_patctl.control & 0x00040000u) != 0)
    capcount = pcre2_jit_match_8(
 compiled_code8
    ,(PCRE2_SPTR8)pp,ulen,dat_datctl.offset,dat_datctl.options,
 match_data8
    ,(void *)dat_context8)
                                                       ;

  else
    {
    stack_start = 20480/1024;
    capcount = pcre2_match_8(
 compiled_code8
    ,(PCRE2_SPTR8)pp,ulen,dat_datctl.offset,dat_datctl.options,
 match_data8
    ,(void *)dat_context8)
                                                       ;
    }

  if (capcount == errnumber)
    {
    if ((mid & 0x80000000u) != 0)
      {
      fprintf(outfile, "Can't find minimum %s limit: check pattern for "
        "restriction\n", msg);
      break;
      }

    min = mid;
    mid = (mid == max - 1)? max : (max != (4294967295U))? (min + max)/2 : mid*2;
    }
  else if (capcount >= 0 ||
           capcount == (-1) ||
           capcount == (-2))
    {






    if (errnumber == (-63) && mid < stack_start)
      {
      fprintf(outfile, "Minimum %s limit = 0\n", msg);
      break;
      }
    if (mid == min + 1)
      {
      fprintf(outfile, "Minimum %s limit = %d\n", msg, mid);
      break;
      }
    max = mid;
    mid = (min + max)/2;
    }
  else break;
  }

return capcount;
}
static void
substitute_callout_function(pcre2_substitute_callout_block_8 *scb,
  void *data_ptr)
{
(void)data_ptr;
fprintf(outfile, "Old %" "lu" " %" "lu" "  New %" "lu"
  " %" "lu" "\n",
  (unsigned long int) scb->input_offsets[0],
  (unsigned long int) scb->input_offsets[1],
  (unsigned long int) scb->output_offsets[0],
  (unsigned long int) scb->output_offsets[1]);
}
static int
callout_function(pcre2_callout_block_8 *cb, void *callout_data_ptr)
{
FILE *f, *fdefault;
uint32_t i, pre_start, post_start, subject_length;
size_t current_position;
BOOL utf = (compiled_code8->overall_options & 0x00080000u) != 0;
BOOL callout_capture = (dat_datctl.control & 0x00000040u) != 0;
BOOL callout_where = (dat_datctl.control2 & 0x00000040u) == 0;





fdefault = (!first_callout && !callout_capture && cb->callout_string == ((void *)0))?
  ((void *)0) : outfile;

if ((dat_datctl.control2 & 0x00000080u) != 0)
  {
  f = outfile;
  switch (cb->callout_flags)
    {
    case 0x00000002u:
    fprintf(f, "Backtrack\n");
    break;

    case 0x00000001u|0x00000002u:
    fprintf(f, "Backtrack\nNo other matching paths\n");


    case 0x00000001u:
    fprintf(f, "New match attempt\n");
    break;

    default:
    f = fdefault;
    break;
    }
  }
else f = fdefault;




if (cb->callout_string != ((void *)0))
  {
  uint32_t delimiter = (uint32_t)(((PCRE2_SPTR8)(cb->callout_string))[-1]);
  fprintf(outfile, "Callout (%" "lu" "): %c",
    (unsigned long int) cb->callout_string_offset, delimiter);
  (void)pchars8((PCRE2_SPTR8)(cb->callout_string)+0, cb->callout_string_length, utf, outfile)
                                            ;
  for (i = 0; callout_start_delims[i] != 0; i++)
    if (delimiter == callout_start_delims[i])
      {
      delimiter = callout_end_delims[i];
      break;
      }
  fprintf(outfile, "%c", delimiter);
  if (!callout_capture) fprintf(outfile, "\n");
  }



if (callout_capture)
  {
  if (cb->callout_string == ((void *)0))
    fprintf(outfile, "Callout %d:", cb->callout_number);
  fprintf(outfile, " last capture = %d\n", cb->capture_last);
  for (i = 2; i < cb->capture_top * 2; i += 2)
    {
    fprintf(outfile, "%2d: ", i/2);
    if (cb->offset_vector[i] == (~(size_t)0))
      fprintf(outfile, "<unset>");
    else
      {
      (void)pchars8((PCRE2_SPTR8)(cb->subject)+cb->offset_vector[i], cb->offset_vector[i+1] - cb->offset_vector[i], utf, f)
                                                              ;
      }
    fprintf(outfile, "\n");
    }
  }






if (callout_where)
  {
  if (f != ((void *)0)) fprintf(f, "--->");



  pre_start = pchars8((PCRE2_SPTR8)(cb->subject)+0, cb->start_match, utf, f);




  current_position = (cb->current_position >= cb->start_match)?
    cb->current_position : cb->start_match;



  post_start = pchars8((PCRE2_SPTR8)(cb->subject)+cb->start_match, current_position - cb->start_match, utf, f)
                                               ;



  (void)pchars8((PCRE2_SPTR8)(cb->subject)+current_position, cb->subject_length - current_position, utf, f)
           ;



  subject_length = pchars8((PCRE2_SPTR8)(cb->subject)+0, cb->subject_length, utf, ((void *)0));

  if (f != ((void *)0)) fprintf(f, "\n");






  if (cb->callout_number == 255)
    {
    fprintf(outfile, "%+3d ", (int)cb->pattern_position);
    if (cb->pattern_position > 99) fprintf(outfile, "\n    ");
    }
  else
    {
    if (callout_capture || cb->callout_string != ((void *)0)) fprintf(outfile, "    ");
      else fprintf(outfile, "%3d ", cb->callout_number);
    }



  for (i = 0; i < pre_start; i++) fprintf(outfile, " ");
  fprintf(outfile, "^");

  if (post_start > 0)
    {
    for (i = 0; i < post_start - 1; i++) fprintf(outfile, " ");
    fprintf(outfile, "^");
    }

  for (i = 0; i < subject_length - pre_start - post_start + 4; i++)
    fprintf(outfile, " ");

  if (cb->next_item_length != 0)
    fprintf(outfile, "%.*s", (int)(cb->next_item_length),
      pbuffer8 + cb->pattern_position);
  else
    fprintf(outfile, "End of pattern");

  fprintf(outfile, "\n");
  }

first_callout = 0;



if (cb->mark != last_callout_mark)
  {
  if (cb->mark == ((void *)0))
    fprintf(outfile, "Latest Mark: <unset>\n");
  else
    {
    fprintf(outfile, "Latest Mark: ");
    (void)pchars8((PCRE2_SPTR8)(cb->mark)+0, -1, utf, outfile);
    _IO_putc ('\n', outfile);
    }
  last_callout_mark = cb->mark;
  }



if (callout_data_ptr != ((void *)0))
  {
  int callout_data = *((int32_t *)callout_data_ptr);
  if (callout_data != 0)
    {
    fprintf(outfile, "Callout data = %d\n", callout_data);
    return callout_data;
    }
  }



callout_count++;

if (cb->callout_number == dat_datctl.cerror[0] &&
    callout_count >= dat_datctl.cerror[1])
  return (-37);

if (cb->callout_number == dat_datctl.cfail[0] &&
    callout_count >= dat_datctl.cfail[1])
  return 1;

return 0;
}
static BOOL
copy_and_get(BOOL utf, int capcount)
{
int i;
uint8_t *nptr;



for (i = 0; i < 10 && dat_datctl.copy_numbers[i] >= 0; i++)
  {
  int rc;
  size_t length, length2;
  uint32_t copybuffer[256];
  uint32_t n = (uint32_t)(dat_datctl.copy_numbers[i]);
  length = sizeof(copybuffer)/code_unit_size;
  rc = pcre2_substring_copy_bynumber_8(match_data8,n,(PCRE2_UCHAR8 *)copybuffer,&length);
  if (rc < 0)
    {
    fprintf(outfile, "Copy substring %d failed (%d): ", n, rc);
    if (!print_error_message(rc, "", "\n")) return 0;
    }
  else
    {
    rc = pcre2_substring_length_bynumber_8(match_data8,n,&length2);
    if (rc < 0)
      {
      fprintf(outfile, "Get substring %d length failed (%d): ", n, rc);
      if (!print_error_message(rc, "", "\n")) return 0;
      }
    else if (length2 != length)
      {
      fprintf(outfile, "Mismatched substring lengths: %"
        "lu" " %" "lu" "\n", (unsigned long int) length, (unsigned long int) length2);
      }
    fprintf(outfile, "%2dC ", n);
    (void)pchars8((PCRE2_SPTR8)(copybuffer)+0, length, utf, outfile);
    fprintf(outfile, " (%" "lu" ")\n", (unsigned long int) length);
    }
  }



nptr = dat_datctl.copy_names;
for (;;)
  {
  int rc;
  int groupnumber;
  size_t length, length2;
  uint32_t copybuffer[256];
  int namelen = strlen((const char *)nptr);



  if (namelen == 0) break;


  if (test_mode == 8) strcpy((char *)pbuffer8, (char *)nptr);
  groupnumber = pcre2_substring_number_from_name_8(compiled_code8,pbuffer8);;
  if (groupnumber < 0 && groupnumber != (-50))
    fprintf(outfile, "Number not found for group '%s'\n", nptr);

  length = sizeof(copybuffer)/code_unit_size;
  rc = pcre2_substring_copy_byname_8(match_data8,pbuffer8,(PCRE2_UCHAR8 *)copybuffer,&length);
  if (rc < 0)
    {
    fprintf(outfile, "Copy substring '%s' failed (%d): ", nptr, rc);
    if (!print_error_message(rc, "", "\n")) return 0;
    }
  else
    {
    rc = pcre2_substring_length_byname_8(match_data8,pbuffer8,&length2);
    if (rc < 0)
      {
      fprintf(outfile, "Get substring '%s' length failed (%d): ", nptr, rc);
      if (!print_error_message(rc, "", "\n")) return 0;
      }
    else if (length2 != length)
      {
      fprintf(outfile, "Mismatched substring lengths: %"
        "lu" " %" "lu" "\n", (unsigned long int) length, (unsigned long int) length2);
      }
    fprintf(outfile, "  C ");
    (void)pchars8((PCRE2_SPTR8)(copybuffer)+0, length, utf, outfile);
    fprintf(outfile, " (%" "lu" ") %s", (unsigned long int) length, nptr);
    if (groupnumber >= 0) fprintf(outfile, " (group %d)\n", groupnumber);
      else fprintf(outfile, " (non-unique)\n");
    }
  nptr += namelen + 1;
  }



for (i = 0; i < 10 && dat_datctl.get_numbers[i] >= 0; i++)
  {
  int rc;
  size_t length;
  void *gotbuffer;
  uint32_t n = (uint32_t)(dat_datctl.get_numbers[i]);
  rc = pcre2_substring_get_bynumber_8(match_data8,n,(PCRE2_UCHAR8 **)&gotbuffer,&length);
  if (rc < 0)
    {
    fprintf(outfile, "Get substring %d failed (%d): ", n, rc);
    if (!print_error_message(rc, "", "\n")) return 0;
    }
  else
    {
    fprintf(outfile, "%2dG ", n);
    (void)pchars8((PCRE2_SPTR8)(gotbuffer)+0, length, utf, outfile);
    fprintf(outfile, " (%" "lu" ")\n", (unsigned long int) length);
    pcre2_substring_free_8((PCRE2_UCHAR8 *)gotbuffer);
    }
  }



nptr = dat_datctl.get_names;
for (;;)
  {
  size_t length;
  void *gotbuffer;
  int rc;
  int groupnumber;
  int namelen = strlen((const char *)nptr);



  if (namelen == 0) break;


  if (test_mode == 8) strcpy((char *)pbuffer8, (char *)nptr);
  groupnumber = pcre2_substring_number_from_name_8(compiled_code8,pbuffer8);;
  if (groupnumber < 0 && groupnumber != (-50))
    fprintf(outfile, "Number not found for group '%s'\n", nptr);

  rc = pcre2_substring_get_byname_8(match_data8,pbuffer8,(PCRE2_UCHAR8 **)&gotbuffer,&length);
  if (rc < 0)
    {
    fprintf(outfile, "Get substring '%s' failed (%d): ", nptr, rc);
    if (!print_error_message(rc, "", "\n")) return 0;
    }
  else
    {
    fprintf(outfile, "  G ");
    (void)pchars8((PCRE2_SPTR8)(gotbuffer)+0, length, utf, outfile);
    fprintf(outfile, " (%" "lu" ") %s", (unsigned long int) length, nptr);
    if (groupnumber >= 0) fprintf(outfile, " (group %d)\n", groupnumber);
      else fprintf(outfile, " (non-unique)\n");
    pcre2_substring_free_8((PCRE2_UCHAR8 *)gotbuffer);
    }
  nptr += namelen + 1;
  }



if ((dat_datctl.control & 0x00004000u) != 0)
  {
  int rc;
  void **stringlist;
  size_t *lengths;
  rc = pcre2_substring_list_get_8(match_data8,(PCRE2_UCHAR8 ***)&stringlist,&lengths);
  if (rc < 0)
    {
    fprintf(outfile, "get substring list failed (%d): ", rc);
    if (!print_error_message(rc, "", "\n")) return 0;
    }
  else
    {
    for (i = 0; i < capcount; i++)
      {
      fprintf(outfile, "%2dL ", i);
      (void)pchars8((PCRE2_SPTR8)(stringlist[i])+0, lengths[i], utf, outfile);
      _IO_putc ('\n', outfile);
      }
    if (stringlist[i] != ((void *)0))
      fprintf(outfile, "string list not terminated by NULL\n");
    pcre2_substring_list_free_8((PCRE2_SPTR8 *)stringlist);
    }
  }

return 1;
}
static void
show_ovector(size_t *ovector, uint32_t oveccount)
{
uint32_t i;
for (i = 0; i < 2*oveccount; i += 2)
  {
  size_t start = ovector[i];
  size_t end = ovector[i+1];

  fprintf(outfile, "%2d: ", i/2);
  if (start == (~(size_t)0) && end == (~(size_t)0))
    fprintf(outfile, "<unset>\n");
  else if (start == 0xdeadbeef && end == 0xdeadbeef)
    fprintf(outfile, "<unchanged>\n");
  else
    fprintf(outfile, "%ld %ld\n", (unsigned long int)start,
      (unsigned long int)end);
  }
}
static int
process_data(void)
{
size_t len, ulen, arg_ulen;
uint32_t gmatched;
uint32_t c, k;
uint32_t g_notempty = 0;
uint8_t *p, *pp, *start_rep;
size_t needlen;
void *use_dat_context;
BOOL utf;
BOOL subject_literal;

size_t *ovector;
size_t ovecsave[3];
uint32_t oveccount;


uint8_t *q8 = ((void *)0);
subject_literal = (pat_patctl.control2 & 0x00000020u) != 0;







memcpy(dat_context8,default_dat_context8,sizeof(pcre2_match_context_8));
memcpy(&dat_datctl, &def_datctl, sizeof(datctl));
dat_datctl.control |= (pat_patctl.control & (0x00000001u| 0x00000002u| 0x00000004u| 0x00000008u| 0x00000010u| 0x00008000u| 0x00100000u| 0x10000000u| 0x40000000u));
dat_datctl.control2 |= (pat_patctl.control2 & (0x00000001u| 0x00000002u| 0x00000004u| 0x00000008u| 0x00000010u| 0x00000100u));
strcpy((char *)dat_datctl.replacement, (char *)pat_patctl.replacement);
if (dat_datctl.jitstack == 0) dat_datctl.jitstack = pat_patctl.jitstack;




utf = ((((pat_patctl.control & 0x00800000u) != 0)?
  ((pcre2_real_code_8 *)preg.re_pcre2_code)->overall_options :
  compiled_code8->overall_options) & 0x00080000u) != 0;




start_rep = ((void *)0);
len = strlen((const char *)buffer);
while (len > 0 && ((*__ctype_b_loc ())[(int) ((buffer[len-1]))] & (unsigned short int) _ISspace)) len--;
buffer[len] = 0;
p = buffer;
while (((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISspace)) p++;




if (utf)
  {
  uint8_t *q;
  uint32_t cc;
  int n = 1;
  for (q = p; n > 0 && *q; q += n) n = utf82ord(q, &cc);
  if (n <= 0)
    {
    fprintf(outfile, "** Failed: invalid UTF-8 string cannot be used as input "
      "in UTF mode\n");
    return PR_OK;
    }
  }
needlen = (size_t)((len+1) * code_unit_size);
if (dbuffer == ((void *)0) || needlen >= dbuffer_size)
  {
  while (needlen >= dbuffer_size) dbuffer_size *= 2;
  dbuffer = (uint8_t *)realloc(dbuffer, dbuffer_size);
  if (dbuffer == ((void *)0))
    {
    fprintf(stderr, "pcre2test: realloc(%d) failed\n", (int)dbuffer_size);
    exit(1);
    }
  }
q8 = (uint8_t *)(dbuffer);






while ((c = *p++) != 0)
  {
  int32_t i = 0;
  size_t replen;



  if (c == ']' && start_rep != ((void *)0))
    {
    long li;
    char *endptr;
    size_t qoffset = (uint8_t *)q8 - dbuffer;
    size_t rep_offset = start_rep - dbuffer;

    if (*p++ != '{')
      {
      fprintf(outfile, "** Expected '{' after \\[....]\n");
      return PR_OK;
      }

    li = strtol((const char *)p, &endptr, 10);
    if ((li == (2147483647) || li == (-2147483647-1)))
      {
      fprintf(outfile, "** Repeat count too large\n");
      return PR_OK;
      }

    p = (uint8_t *)endptr;
    if (*p++ != '}')
      {
      fprintf(outfile, "** Expected '}' after \\[...]{...\n");
      return PR_OK;
      }

    i = (int32_t)li;
    if (i-- == 0)
      {
      fprintf(outfile, "** Zero repeat not allowed\n");
      return PR_OK;
      }

    replen = (uint8_t *)q8 - start_rep;
    needlen += replen * i;

    if (needlen >= dbuffer_size)
      {
      while (needlen >= dbuffer_size) dbuffer_size *= 2;
      dbuffer = (uint8_t *)realloc(dbuffer, dbuffer_size);
      if (dbuffer == ((void *)0))
        {
        fprintf(stderr, "pcre2test: realloc(%d) failed\n", (int)dbuffer_size);
        exit(1);
        }
      q8 = (uint8_t *)(dbuffer + qoffset);
      start_rep = dbuffer + rep_offset;
      }

    while (i-- > 0)
      {
      memcpy((uint8_t *)q8, start_rep, replen);
      q8 += replen/code_unit_size;
      }

    start_rep = ((void *)0);
    continue;
    }




  if (c != '\\' || subject_literal)
    {
    uint32_t topbit = 0;
    if (test_mode == 32 && c == 0xff && *p != 0)
      {
      topbit = 0x80000000;
      c = *p++;
      }
    if ((utf || (pat_patctl.control & 0x40000000u) != 0) &&
      ((c) >= 0xc0)) { { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*p++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*p & 0x3fu) << 6) | (p[1] & 0x3fu); p += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*p & 0x3fu) << 12) | ((p[1] & 0x3fu) << 6) | (p[2] & 0x3fu); p += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*p & 0x3fu) << 18) | ((p[1] & 0x3fu) << 12) | ((p[2] & 0x3fu) << 6) | (p[3] & 0x3fu); p += 4; } else { c = ((c & 0x01u) << 30) | ((*p & 0x3fu) << 24) | ((p[1] & 0x3fu) << 18) | ((p[2] & 0x3fu) << 12) | ((p[3] & 0x3fu) << 6) | (p[4] & 0x3fu); p += 5; } }; }
    c |= topbit;
    }



  else switch ((c = *p++))
    {
    case '\\': break;
    case 'a': c = '\007'; break;
    case 'b': c = '\b'; break;
    case 'e': c = '\033'; break;
    case 'f': c = '\f'; break;
    case 'n': c = '\n'; break;
    case 'r': c = '\r'; break;
    case 't': c = '\t'; break;
    case 'v': c = '\v'; break;

    case '0': case '1': case '2': case '3':
    case '4': case '5': case '6': case '7':
    c -= '0';
    while (i++ < 2 && ((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISdigit) && *p != '8' && *p != '9')
      c = c * 8 + *p++ - '0';
    break;

    case 'o':
    if (*p == '{')
      {
      uint8_t *pt = p;
      c = 0;
      for (pt++; ((*__ctype_b_loc ())[(int) ((*pt))] & (unsigned short int) _ISdigit) && *pt != '8' && *pt != '9'; pt++)
        {
        if (++i == 12)
          fprintf(outfile, "** Too many octal digits in \\o{...} item; "
                           "using only the first twelve.\n");
        else c = c * 8 + *pt - '0';
        }
      if (*pt == '}') p = pt + 1;
        else fprintf(outfile, "** Missing } after \\o{ (assumed)\n");
      }
    break;

    case 'x':
    if (*p == '{')
      {
      uint8_t *pt = p;
      c = 0;






      for (pt++; ((*__ctype_b_loc ())[(int) ((*pt))] & (unsigned short int) _ISxdigit); pt++)
        {
        if (++i == 9)
          fprintf(outfile, "** Too many hex digits in \\x{...} item; "
                           "using only the first eight.\n");
        else c = c * 16 + tolower(*pt) - ((((*__ctype_b_loc ())[(int) ((*pt))] & (unsigned short int) _ISdigit))? '0' : 'a' - 10);
        }
      if (*pt == '}')
        {
        p = pt + 1;
        break;
        }

      }






    c = 0;
    while (i++ < 2 && ((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISxdigit))
      {
      c = c * 16 + tolower(*p) - ((((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISdigit))? '0' : 'a' - 10);
      p++;
      }

    if (utf && (test_mode == 8))
      {
      *q8++ = c;
      continue;
      }

    break;

    case 0:
    p--;
    continue;

    case '=':
    goto ENDSTRING;

    case '[':
    if (start_rep != ((void *)0))
      {
      fprintf(outfile, "** Nested replication is not supported\n");
      return PR_OK;
      }
    start_rep = (uint8_t *)q8;
    continue;

    default:
    if (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalnum))
      {
      fprintf(outfile, "** Unrecognized escape sequence \"\\%c\"\n", c);
      return PR_OK;
      }
    }







  if (test_mode == 8)
    {
    if (utf)
      {
      if (c > 0x7fffffff)
        {
        fprintf(outfile, "** Character \\x{%x} is greater than 0x7fffffff "
          "and so cannot be converted to UTF-8\n", c);
        return PR_OK;
        }
      q8 += ord2utf8(c, q8);
      }
    else
      {
      if (c > 0xffu)
        {
        fprintf(outfile, "** Character \\x{%x} is greater than 255 "
          "and UTF-8 mode is not enabled.\n", c);
        fprintf(outfile, "** Truncation will probably give the wrong "
          "result.\n");
        }
      *q8++ = c;
      }
    }
  }

ENDSTRING:
*q8 = 0;
len = (uint8_t *)q8 - dbuffer;
ulen = len/code_unit_size;
arg_ulen = ulen;



if (p[-1] != 0 && !decode_modifiers(p, CTX_DAT, ((void *)0), &dat_datctl))
  return PR_OK;




for (k = 0; k < sizeof(exclusive_dat_controls)/sizeof(uint32_t); k++)
  {
  c = dat_datctl.control & exclusive_dat_controls[k];
  if (c != 0 && c != (c & (~c+1)))
    {
    show_controls(c, 0, "** Not allowed together:");
    fprintf(outfile, "\n");
    return PR_OK;
    }
  }

if (pat_patctl.replacement[0] != 0)
  {
  if ((dat_datctl.control & 0x00400000u) != 0)
    {
    fprintf(outfile, "** Replacement text is not supported with null_context.\n");
    return PR_OK;
    }
  if ((dat_datctl.control & 0x00000004u) != 0)
    fprintf(outfile, "** Ignored with replacement text: allcaptures\n");
  }



if ((dat_datctl.control & 0x00000200u) != 0)
  {
  if ((dat_datctl.control & 0x00000004u) != 0)
    fprintf(outfile, "** Ignored after DFA matching: allcaptures\n");
  }
c = code_unit_size * (((pat_patctl.control & 0x00800000u) +
                       (dat_datctl.control & 0x80000000u) != 0)? 1:0);
pp = memmove(dbuffer + dbuffer_size - len - c, dbuffer, len + c);
if ((pat_patctl.control & 0x00800000u) != 0)
  {
  int rc;
  int eflags = 0;
  regmatch_t *pmatch = ((void *)0);
  const char *msg = "** Ignored with POSIX interface:";

  if (dat_datctl.cerror[0] != (4294967295U) || dat_datctl.cerror[1] != (4294967295U))
    prmsg(&msg, "callout_error");
  if (dat_datctl.cfail[0] != (4294967295U) || dat_datctl.cfail[1] != (4294967295U))
    prmsg(&msg, "callout_fail");
  if (dat_datctl.copy_numbers[0] >= 0 || dat_datctl.copy_names[0] != 0)
    prmsg(&msg, "copy");
  if (dat_datctl.get_numbers[0] >= 0 || dat_datctl.get_names[0] != 0)
    prmsg(&msg, "get");
  if (dat_datctl.jitstack != 0) prmsg(&msg, "jitstack");
  if (dat_datctl.offset != 0) prmsg(&msg, "offset");

  if ((dat_datctl.options & ~( 0x00000001u|0x00000004u|0x00000002u)) != 0)
    {
    fprintf(outfile, "%s", msg);
    show_match_options(dat_datctl.options & ~( 0x00000001u|0x00000004u|0x00000002u));
    msg = "";
    }
  if ((dat_datctl.control & ~(0x00000001u|0x00000002u)) != 0 ||
      (dat_datctl.control2 & ~(0)) != 0)
    {
    show_controls(dat_datctl.control & ~(0x00000001u|0x00000002u),
                  dat_datctl.control2 & ~(0), msg);
    msg = "";
    }

  if (msg[0] == 0) fprintf(outfile, "\n");

  if (dat_datctl.oveccount > 0)
    {
    pmatch = (regmatch_t *)malloc(sizeof(regmatch_t) * dat_datctl.oveccount);
    if (pmatch == ((void *)0))
      {
      fprintf(outfile, "** Failed to get memory for recording matching "
        "information (size set = %du)\n", dat_datctl.oveccount);
      return PR_OK;
      }
    }

  if (dat_datctl.startend[0] != (4294967295U))
    {
    pmatch[0].rm_so = dat_datctl.startend[0];
    pmatch[0].rm_eo = (dat_datctl.startend[1] != 0)?
      dat_datctl.startend[1] : len;
    eflags |= 0x0080;
    }

  if ((dat_datctl.options & 0x00000001u) != 0) eflags |= 0x0004;
  if ((dat_datctl.options & 0x00000002u) != 0) eflags |= 0x0008;
  if ((dat_datctl.options & 0x00000004u) != 0) eflags |= 0x0100;

  rc = regexec(&preg, (const char *)pp, dat_datctl.oveccount, pmatch, eflags);
  if (rc != 0)
    {
    (void)regerror(rc, &preg, (char *)pbuffer8, pbuffer8_size);
    fprintf(outfile, "No match: POSIX code %d: %s\n", rc, pbuffer8);
    }
  else if ((pat_patctl.control & 0x01000000u) != 0)
    fprintf(outfile, "Matched with REG_NOSUB\n");
  else if (dat_datctl.oveccount == 0)
    fprintf(outfile, "Matched without capture\n");
  else
    {
    size_t i, j;
    size_t last_printed = (size_t)dat_datctl.oveccount;
    for (i = 0; i < (size_t)dat_datctl.oveccount; i++)
      {
      if (pmatch[i].rm_so >= 0)
        {
        size_t start = pmatch[i].rm_so;
        size_t end = pmatch[i].rm_eo;
        for (j = last_printed + 1; j < i; j++)
          fprintf(outfile, "%2d: <unset>\n", (int)j);
        last_printed = i;
        if (start > end)
          {
          start = pmatch[i].rm_eo;
          end = pmatch[i].rm_so;
          fprintf(outfile, "Start of matched string is beyond its end - "
            "displaying from end to start.\n");
          }
        fprintf(outfile, "%2d: ", (int)i);
        (void)pchars8((PCRE2_SPTR8)(pp)+start, end - start, utf, outfile);
        fprintf(outfile, "\n");

        if ((i == 0 && (dat_datctl.control & 0x00000001u) != 0) ||
            (dat_datctl.control & 0x00000002u) != 0)
          {
          fprintf(outfile, "%2d+ ", (int)i);


          (void)pchars8((PCRE2_SPTR8)(pp)+pmatch[i].rm_eo, len - pmatch[i].rm_eo, utf, outfile);
          fprintf(outfile, "\n"); }
        }
      }
    }
  free(pmatch);
  return PR_OK;
  }





if (dat_datctl.startend[0] != (4294967295U))
  fprintf(outfile, "** \\=posix_startend ignored for non-POSIX matching\n");




if ((dat_datctl.control & (0x00000008u|0x00000200u)) == 0x00000008u &&
    compiled_code8->executable_jit != ((void *)0))
  {
  fprintf(outfile, "** Showing all consulted text is not supported by JIT: ignored\n");
  dat_datctl.control &= ~0x00000008u;
  }



if ((dat_datctl.control & 0x80000000u) != 0)
  arg_ulen = (~(size_t)0);




use_dat_context = ((dat_datctl.control & 0x00400000u) != 0)?
  ((void *)0) : (void *)dat_context8;




show_memory = (dat_datctl.control & 0x00200000u) != 0;

if (show_memory &&
    (pat_patctl.control & dat_datctl.control & 0x00400000u) != 0)
  fprintf(outfile, "** \\=memory requires either a pattern or a subject "
    "context: ignored\n");



if (dat_datctl.jitstack != 0)
  {
  if (dat_datctl.jitstack != jit_stack_size)
    {
    pcre2_jit_stack_free_8((pcre2_jit_stack_8 *)jit_stack);;
    jit_stack = (pcre2_jit_stack_8 *)pcre2_jit_stack_create_8(1,dat_datctl.jitstack * 1024,((void *)0));;
    jit_stack_size = dat_datctl.jitstack;
    }
  pcre2_jit_stack_assign_8(dat_context8,(pcre2_jit_callback_8)jit_callback,jit_stack);;
  }



else if (jit_stack != ((void *)0))
  {
  pcre2_jit_stack_assign_8(dat_context8,(pcre2_jit_callback_8)((void *)0),((void *)0));;
  pcre2_jit_stack_free_8((pcre2_jit_stack_8 *)jit_stack);;
  jit_stack = ((void *)0);
  jit_stack_size = 0;
  }




if ((pat_patctl.control & 0x00080000u) != 0 && jit_stack == ((void *)0))
   {
   pcre2_jit_stack_assign_8(dat_context8,(pcre2_jit_callback_8)jit_callback,((void *)0));;
   }




if (dat_datctl.oveccount == 0)
  {
  pcre2_match_data_free_8(match_data8);
  match_data8 = pcre2_match_data_create_from_pattern_8(compiled_code8,((void *)0));
  max_oveccount = pcre2_get_ovector_count_8(match_data8);
  }
else if (dat_datctl.oveccount <= max_oveccount)
  {
  match_data8->oveccount = dat_datctl.oveccount;
  }
else
  {
  max_oveccount = dat_datctl.oveccount;
  pcre2_match_data_free_8(match_data8);
  match_data8 = pcre2_match_data_create_8(max_oveccount,((void *)0));
  }

if ((void *)match_data8 == ((void *)0))
  {
  fprintf(outfile, "** Failed to get memory for recording matching "
    "information (size requested: %d)\n", dat_datctl.oveccount);
  max_oveccount = 0;
  return PR_OK;
  }

ovector = match_data8->ovector;
oveccount = pcre2_get_ovector_count_8(match_data8);



if (dat_datctl.replacement[0] != 0 && (dat_datctl.control & 0x00000200u) != 0)
  {
  fprintf(outfile, "** Ignored for DFA matching: replace\n");
  dat_datctl.replacement[0] = 0;
  }





if (dat_datctl.replacement[0] != 0)
  {
  int rc;
  uint8_t *pr;
  uint8_t rbuffer[1024];
  uint8_t nbuffer[1024];
  uint32_t xoptions;
  size_t j, rlen, nsize, erroroffset;
  BOOL badutf = 0;


  uint8_t *r8 = ((void *)0);
  for (j = 0; j < 2*oveccount; j++) ovector[j] = 0xdeadbeef;

  if (timeitm)
    fprintf(outfile, "** Timing is not supported with replace: ignored\n");

  if ((dat_datctl.control & 0x00000010u) != 0)
    fprintf(outfile, "** Altglobal is not supported with replace: ignored\n");

  xoptions = (((dat_datctl.control & 0x00008000u) == 0)? 0 :
                0x00000100u) |
             (((dat_datctl.control2 & 0x00000002u) == 0)? 0 :
                0x00000200u) |
             (((dat_datctl.control2 & 0x00000004u) == 0)? 0 :
                0x00001000u) |
             (((dat_datctl.control2 & 0x00000008u) == 0)? 0 :
                0x00000800u) |
             (((dat_datctl.control2 & 0x00000010u) == 0)? 0 :
                0x00000400u);

  r8 = (uint8_t *)(rbuffer);
  pr = dat_datctl.replacement;




  nsize = 1024/code_unit_size;
  if (*pr == '[')
    {
    size_t n = 0;
    while ((c = *(++pr)) >= '\060' && c <= '\071') n = n * 10 + c - '\060';
    if (*pr++ != ']')
      {
      fprintf(outfile, "Bad buffer size in replacement string\n");
      return PR_OK;
      }
    if (n > nsize)
      {
      fprintf(outfile, "Replacement buffer setting (%" "lu" ") is too "
        "large (max %" "lu" ")\n", (unsigned long int) n, (unsigned long int) nsize);
      return PR_OK;
      }
    nsize = n;
    }
  if (utf) badutf = valid_utf(pr, strlen((const char *)pr), &erroroffset);



  if (!utf || badutf)
    {
    while ((c = *pr++) != 0)
      {

      if (test_mode == 8) *r8++ = c;







      }
    }



  else while ((c = *pr++) != 0)
    {
    if (((c) >= 0xc0)) { { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*pr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*pr & 0x3fu) << 6) | (pr[1] & 0x3fu); pr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*pr & 0x3fu) << 12) | ((pr[1] & 0x3fu) << 6) | (pr[2] & 0x3fu); pr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*pr & 0x3fu) << 18) | ((pr[1] & 0x3fu) << 12) | ((pr[2] & 0x3fu) << 6) | (pr[3] & 0x3fu); pr += 4; } else { c = ((c & 0x01u) << 30) | ((*pr & 0x3fu) << 24) | ((pr[1] & 0x3fu) << 18) | ((pr[2] & 0x3fu) << 12) | ((pr[3] & 0x3fu) << 6) | (pr[4] & 0x3fu); pr += 5; } }; }


    if (test_mode == 8) r8 += ord2utf8(c, r8);
    }

  *r8 = 0;
  if ((dat_datctl.control & 0x80000000u) != 0)
    rlen = (~(size_t)0);
  else
    rlen = ((uint8_t *)r8 - rbuffer)/code_unit_size;

  if ((dat_datctl.control2 & 0x00000001u) != 0)
    {
    pcre2_set_substitute_callout_8(dat_context8, (void (*)(pcre2_substitute_callout_block_8 *, void *))substitute_callout_function,((void *)0));
    }
  else
    {
    pcre2_set_substitute_callout_8(dat_context8, (void (*)(pcre2_substitute_callout_block_8 *, void *))((void *)0),((void *)0));
    }

  rc = pcre2_substitute_8(

 compiled_code8
  ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options|xoptions,

 match_data8
  ,

 dat_context8
  , (PCRE2_SPTR8)rbuffer,rlen,(PCRE2_UCHAR8 *)nbuffer,&nsize)

                                   ;

  if (rc < 0)
    {
    fprintf(outfile, "Failed: error %d", rc);
    if (rc != (-48) && nsize != (~(size_t)0))
      fprintf(outfile, " at offset %ld in replacement", (long int)nsize);
    fprintf(outfile, ": ");
    if (!print_error_message(rc, "", "")) return PR_ABEND;
    if (rc == (-48) &&
        (xoptions & 0x00001000u) != 0)
      fprintf(outfile, ": %ld code units are needed", (long int)nsize);
    }
  else
    {
    fprintf(outfile, "%2d: ", rc);
    (void)pchars8((PCRE2_SPTR8)(nbuffer)+0, nsize, utf, outfile);
    }

  fprintf(outfile, "\n");
  show_memory = 0;



  if ((dat_datctl.control2 & 0x00000100u) != 0)
    show_ovector(ovector, oveccount);

  return PR_OK;
  }





ovecsave[0] = ovecsave[1] = ovecsave[2] = (~(size_t)0);

for (gmatched = 0;; gmatched++)
  {
  size_t j;
  int capcount;




  for (j = 0; j < 2*oveccount; j++) ovector[j] = 0xdeadbeef;




  jit_was_used = (pat_patctl.control & 0x00040000u) != 0;



  if (timeitm > 0)
    {
    int i;
    clock_t start_time, time_taken;

    if ((dat_datctl.control & 0x00000200u) != 0)
      {
      if ((dat_datctl.options & 0x00000040u) != 0)
        {
        fprintf(outfile, "Timing DFA restarts is not supported\n");
        return PR_OK;
        }
      if (dfa_workspace == ((void *)0))
        dfa_workspace = (int *)malloc(1000*sizeof(int));
      start_time = clock();
      for (i = 0; i < timeitm; i++)
        {
        capcount = pcre2_dfa_match_8(

 compiled_code8
        ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options | g_notempty,

 match_data8
        ,use_dat_context,dfa_workspace,1000)

                                                           ;
        }
      }

    else if ((pat_patctl.control & 0x00040000u) != 0)
      {
      start_time = clock();
      for (i = 0; i < timeitm; i++)
        {
        capcount = pcre2_jit_match_8(

 compiled_code8
        ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options | g_notempty,

 match_data8
        ,use_dat_context)

                          ;
        }
      }

    else
      {
      start_time = clock();
      for (i = 0; i < timeitm; i++)
        {
        capcount = pcre2_match_8(

 compiled_code8
        ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options | g_notempty,

 match_data8
        ,use_dat_context)

                          ;
        }
      }
    total_match_time += (time_taken = clock() - start_time);
    fprintf(outfile, "Match time %.4f milliseconds\n",
      (((double)time_taken * 1000.0) / (double)timeitm) /
        (double)1000000l);
    }





  if ((dat_datctl.control & 0x00000800u) != 0)
    {
    capcount = 0;

    if (compiled_code8->executable_jit == ((void *)0) ||
          (dat_datctl.options & 0x00002000u) != 0)
      {
      (void)check_match_limit(pp, arg_ulen, (-63), "heap");
      }

    capcount = check_match_limit(pp, arg_ulen, (-47),
      "match");

    if (compiled_code8->executable_jit == ((void *)0) ||
        (dat_datctl.options & 0x00002000u) != 0 ||
        (dat_datctl.control & 0x00000200u) != 0)
      {
      capcount = check_match_limit(pp, arg_ulen, (-53),
        "depth");
      }

    if (capcount == 0)
      {
      fprintf(outfile, "Matched, but offsets vector is too small to show all matches\n");
      capcount = dat_datctl.oveccount;
      }
    }




  else
    {
    if ((dat_datctl.control & 0x00000100u) == 0)
      {
      pcre2_set_callout_8(
 dat_context8
      ,(int (*)(pcre2_callout_block_8 *, void *))callout_function,(void *)(&dat_datctl.callout_data))
                                           ;
      first_callout = 1;
      last_callout_mark = ((void *)0);
      callout_count = 0;
      }
    else
      {
      pcre2_set_callout_8(dat_context8,(int (*)(pcre2_callout_block_8 *, void *))((void *)0),((void *)0));
      }



    if ((dat_datctl.control & 0x00000200u) != 0)
      {
      if (dfa_workspace == ((void *)0))
        dfa_workspace = (int *)malloc(1000*sizeof(int));
      if (dfa_matched++ == 0)
        dfa_workspace[0] = -1;
      capcount = pcre2_dfa_match_8(

 compiled_code8
      ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options | g_notempty,

 match_data8
      ,use_dat_context,dfa_workspace,1000)

                                                         ;
      if (capcount == 0)
        {
        fprintf(outfile, "Matched, but offsets vector is too small to show all matches\n");
        capcount = dat_datctl.oveccount;
        }
      }
    else
      {
      if ((pat_patctl.control & 0x00040000u) != 0)
        capcount = pcre2_jit_match_8(
 compiled_code8
        ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options | g_notempty,
 match_data8
        ,use_dat_context)
                                                                       ;
      else
        capcount = pcre2_match_8(
 compiled_code8
        ,(PCRE2_SPTR8)pp,arg_ulen,dat_datctl.offset,dat_datctl.options | g_notempty,
 match_data8
        ,use_dat_context)
                                                                       ;
      if (capcount == 0)
        {
        fprintf(outfile, "Matched, but too many substrings\n");
        capcount = dat_datctl.oveccount;
        }
      }
    }




  if (capcount >= 0)
    {
    int i;

    if (capcount > (int)oveccount)
      {
      fprintf(outfile,
        "** PCRE2 error: returned count %d is too big for ovector count %d\n",
        capcount, oveccount);
      capcount = oveccount;
      if ((dat_datctl.control & (0x00000010u|0x00008000u)) != 0)
        {
        fprintf(outfile, "** Global loop abandoned\n");
        dat_datctl.control &= ~(0x00000010u|0x00008000u);
        }
      }
    if (gmatched > 0 && ovecsave[0] == ovector[0] && ovecsave[1] == ovector[1])
      {
      if (ovector[0] == ovector[1] && ovecsave[2] != dat_datctl.offset)
        {
        g_notempty = 0x00000008u | 0x80000000u;
        ovecsave[2] = dat_datctl.offset;
        continue;
        }
      fprintf(outfile,
        "** PCRE2 error: global repeat returned the same string as previous\n");
      fprintf(outfile, "** Global loop abandoned\n");
      dat_datctl.control &= ~(0x00000010u|0x00008000u);
      }






    if ((dat_datctl.control & (0x00000004u|0x00000200u)) == 0x00000004u)
      {
      capcount = maxcapcount + 1;
      if (capcount > (int)oveccount) capcount = oveccount;
      }



    if ((dat_datctl.control2 & 0x00000100u) != 0) capcount = oveccount;




    for (i = 0; i < 2*capcount; i += 2)
      {
      size_t lleft, lmiddle, lright;
      size_t start = ovector[i];
      size_t end = ovector[i+1];

      if (start > end)
        {
        start = ovector[i+1];
        end = ovector[i];
        fprintf(outfile, "Start of matched string is beyond its end - "
          "displaying from end to start.\n");
        }

      fprintf(outfile, "%2d: ", i/2);



      if (start == (~(size_t)0) && end == (~(size_t)0))
        {
        fprintf(outfile, "<unset>\n");
        continue;
        }






      if (start > ulen || end > ulen)
        {
        if (((dat_datctl.control & 0x00000200u) != 0 ||
              i >= (int)(2*maxcapcount + 2)) &&
            start == 0xdeadbeef && end == 0xdeadbeef)
          fprintf(outfile, "<unchanged>\n");
        else
          fprintf(outfile, "ERROR: bad value(s) for offset(s): 0x%lx 0x%lx\n",
            (unsigned long int)start, (unsigned long int)end);
        continue;
        }
      if (i == 0)
        {
        BOOL showallused;
        size_t leftchar, rightchar;

        if ((dat_datctl.control & 0x00000008u) != 0)
          {
          leftchar = match_data8->leftchar;
          rightchar = match_data8->rightchar;
          showallused = i == 0 && (leftchar < start || rightchar > end);
          }
        else showallused = 0;

        if (showallused)
          {
          lleft = pchars8((PCRE2_SPTR8)(pp)+leftchar, start - leftchar, utf, outfile);
          lmiddle = pchars8((PCRE2_SPTR8)(pp)+start, end - start, utf, outfile);
          lright = pchars8((PCRE2_SPTR8)(pp)+end, rightchar - end, utf, outfile);
          if ((pat_patctl.control & 0x00080000u) != 0 && jit_was_used)
            fprintf(outfile, " (JIT)");
          fprintf(outfile, "\n    ");
          for (j = 0; j < lleft; j++) fprintf(outfile, "<");
          for (j = 0; j < lmiddle; j++) fprintf(outfile, " ");
          for (j = 0; j < lright; j++) fprintf(outfile, ">");
          }





        else if ((dat_datctl.control & 0x10000000u) != 0)
          {
          size_t startchar;
          startchar = pcre2_get_startchar_8(match_data8);
          lleft = pchars8((PCRE2_SPTR8)(pp)+startchar, start - startchar, utf, outfile);
          (void)pchars8((PCRE2_SPTR8)(pp)+start, end - start, utf, outfile);
          if ((pat_patctl.control & 0x00080000u) != 0 && jit_was_used)
            fprintf(outfile, " (JIT)");
          if (startchar != start)
            {
            fprintf(outfile, "\n    ");
            for (j = 0; j < lleft; j++) fprintf(outfile, "^");
            }
          }



        else
          {
          (void)pchars8((PCRE2_SPTR8)(pp)+start, end - start, utf, outfile);
          if ((pat_patctl.control & 0x00080000u) != 0 && jit_was_used)
            fprintf(outfile, " (JIT)");
          }
        }



      else
        {
        (void)pchars8((PCRE2_SPTR8)(pp)+start, end - start, utf, outfile);
        }

      fprintf(outfile, "\n");




      if ((dat_datctl.control & 0x00000002u) != 0 ||
          (i == 0 && (dat_datctl.control & 0x00000001u) != 0))
        {
        fprintf(outfile, "%2d+ ", i/2);
        (void)pchars8((PCRE2_SPTR8)(pp)+ovector[i+1], ulen - ovector[i+1], utf, outfile);
        fprintf(outfile, "\n");
        }
      }



    if ((dat_datctl.control & 0x00100000u) != 0 &&
         (match_data8->mark != (((void *)0))))
      {
      fprintf(outfile, "MK: ");
      (void)pchars8((PCRE2_SPTR8)((void *)(match_data8->mark))+0, -1, utf, outfile);
      fprintf(outfile, "\n");
      }



    if (!copy_and_get(utf, capcount)) return PR_ABEND;

    }




  else if (capcount == (-2))
    {
    size_t poffset;
    int backlength;
    int rubriclength = 0;

    fprintf(outfile, "Partial match");
    if ((dat_datctl.control & 0x00100000u) != 0 &&
         (match_data8->mark != (((void *)0))))
      {
      fprintf(outfile, ", mark=");
      rubriclength = pchars8((PCRE2_SPTR8)((void *)(match_data8->mark))+0, -1, utf, outfile)
                ;
      rubriclength += 7;
      }
    fprintf(outfile, ": ");
    rubriclength += 15;

    poffset = backchars(pp, ovector[0], maxlookbehind, utf);
    backlength = pchars8((PCRE2_SPTR8)(pp)+poffset, ovector[0] - poffset, utf, outfile);
    (void)pchars8((PCRE2_SPTR8)(pp)+ovector[0], ulen - ovector[0], utf, outfile);

    if ((pat_patctl.control & 0x00080000u) != 0 && jit_was_used)
      fprintf(outfile, " (JIT)");
    fprintf(outfile, "\n");

    if (backlength != 0)
      {
      int i;
      for (i = 0; i < rubriclength; i++) fprintf(outfile, " ");
      for (i = 0; i < backlength; i++) fprintf(outfile, "<");
      fprintf(outfile, "\n");
      }

    if (ulen != ovector[1])
      fprintf(outfile, "** ovector[1] is not equal to the subject length: "
        "%ld != %ld\n", (unsigned long int)ovector[1], (unsigned long int)ulen);



    if (!copy_and_get(utf, 1)) return PR_ABEND;



    if ((dat_datctl.control2 & 0x00000100u) != 0)
      show_ovector(ovector, oveccount);

    break;
    }
  else if (g_notempty != 0)
    {
    uint16_t nl = compiled_code8->newline_convention;
    size_t start_offset = dat_datctl.offset;
    size_t end_offset = start_offset + 1;

    if ((nl == 3 || nl == 4 ||
         nl == 5) &&
        start_offset < ulen - 1 &&
        (uint32_t)(((PCRE2_SPTR8)(pp))[start_offset]) == '\r' &&
        (uint32_t)(((PCRE2_SPTR8)(pp))[end_offset]) == '\n')
      end_offset++;

    else if (utf && test_mode != 32)
      {
      if (test_mode == 8)
        {
        for (; end_offset < ulen; end_offset++)
          if ((((PCRE2_SPTR8)pp)[end_offset] & 0xc0) != 0x80) break;
        }
      else
        {
        for (; end_offset < ulen; end_offset++)
          if ((((PCRE2_SPTR16)pp)[end_offset] & 0xfc00) != 0xdc00) break;
        }
      }

    match_data8->ovector[0] = start_offset;
    match_data8->ovector[1] = end_offset;
    }




  else
    {
    switch(capcount)
      {
      case (-1):
      if (gmatched == 0)
        {
        fprintf(outfile, "No match");
        if ((dat_datctl.control & 0x00100000u) != 0 &&
             (match_data8->mark != (((void *)0))))
          {
          fprintf(outfile, ", mark = ");
          (void)pchars8((PCRE2_SPTR8)((void *)(match_data8->mark))+0, -1, utf, outfile);
          }
        if ((pat_patctl.control & 0x00080000u) != 0 && jit_was_used)
          fprintf(outfile, " (JIT)");
        fprintf(outfile, "\n");



        if ((dat_datctl.control2 & 0x00000100u) != 0)
          show_ovector(ovector, oveccount);
        }
      break;

      case (-36):
      fprintf(outfile, "Error %d (bad UTF-%d offset)\n", capcount, test_mode);
      break;

      default:
      fprintf(outfile, "Failed: error %d: ", capcount);
      if (!print_error_message(capcount, "", "")) return PR_ABEND;
      if (capcount <= (-3) &&
          capcount >= (-28))
        {
        size_t startchar;
        startchar = pcre2_get_startchar_8(match_data8);
        fprintf(outfile, " at offset %" "lu", (unsigned long int) startchar);
        }
      fprintf(outfile, "\n");
      break;
      }

    break;
    }
  if ((dat_datctl.control & (0x00000010u|0x00008000u)) == 0) break; else
    {
    size_t match_offset = match_data8->ovector[0];
    size_t end_offset = match_data8->ovector[1];
    if (match_offset == end_offset)
      {
      if (end_offset == ulen) break;
      if (match_offset <= dat_datctl.offset)
        g_notempty = 0x00000008u | 0x80000000u;
      }
    else
      {
      g_notempty = 0;
      if ((dat_datctl.control & 0x00008000u) != 0)
        {
        size_t startchar;
        startchar = pcre2_get_startchar_8(match_data8);
        if (end_offset <= startchar)
          {
          if (startchar >= ulen) break;
          end_offset = startchar + 1;
          if (utf && test_mode != 32)
            {
            if (test_mode == 8)
              {
              for (; end_offset < ulen; end_offset++)
                if ((((PCRE2_SPTR8)pp)[end_offset] & 0xc0) != 0x80) break;
              }
            else
              {
              for (; end_offset < ulen; end_offset++)
                if ((((PCRE2_SPTR16)pp)[end_offset] & 0xfc00) != 0xdc00) break;
              }
            }
          }
        }
      }







    if ((dat_datctl.control & 0x00008000u) != 0)
      {
      ovecsave[0] = ovector[0];
      ovecsave[1] = ovector[1];
      ovecsave[2] = dat_datctl.offset;
      dat_datctl.offset = end_offset;
      }



    else
      {
      pp += end_offset * code_unit_size;
      len -= end_offset * code_unit_size;
      ulen -= end_offset;
      if (arg_ulen != (~(size_t)0)) arg_ulen -= end_offset;
      }
    }
  }

show_memory = 0;
return PR_OK;
}
static void
print_version(FILE *f)
{
PCRE2_UCHAR8 *vp;
fprintf(f, "PCRE2 version ");
for (vp = version; *vp != 0; vp++) fprintf(f, "%c", *vp);
fprintf(f, "\n");
}







static void
print_unicode_version(FILE *f)
{
PCRE2_UCHAR8 *vp;
fprintf(f, "Unicode version ");
for (vp = uversion; *vp != 0; vp++) fprintf(f, "%c", *vp);
}







static void
print_jit_target(FILE *f)
{
PCRE2_UCHAR8 *vp;
for (vp = jittarget; *vp != 0; vp++) fprintf(f, "%c", *vp);
}
static void
print_newline_config(uint32_t optval, BOOL isc)
{
if (!isc) printf("  Newline sequence is ");
if (optval < sizeof(newlines)/sizeof(char *))
  printf("%s\n", newlines[optval]);
else
  printf("a non-standard value: %d\n", optval);
}







static void
usage(void)
{
printf("Usage:     pcre2test [options] [<input file> [<output file>]]\n\n");
printf("Input and output default to stdin and stdout.\n");



printf("This version of pcre2test is not linked with readline().\n");

printf("\nOptions:\n");

printf("  -8            use the 8-bit library\n");







printf("  -ac           set default pattern modifier PCRE2_AUTO_CALLOUT\n");
printf("  -AC           as -ac, but also set subject 'callout_extra' modifier\n");
printf("  -b            set default pattern modifier 'fullbincode'\n");
printf("  -C            show PCRE2 compile-time options and exit\n");
printf("  -C arg        show a specific compile-time option and exit with its\n");
printf("                  value if numeric (else 0). The arg can be:\n");
printf("     backslash-C    use of \\C is enabled [0, 1]\n");
printf("     bsr            \\R type [ANYCRLF, ANY]\n");
printf("     ebcdic         compiled for EBCDIC character code [0,1]\n");
printf("     ebcdic-nl      NL code if compiled for EBCDIC\n");
printf("     jit            just-in-time compiler supported [0, 1]\n");
printf("     linksize       internal link size [2, 3, 4]\n");
printf("     newline        newline type [CR, LF, CRLF, ANYCRLF, ANY, NUL]\n");
printf("     pcre2-8        8 bit library support enabled [0, 1]\n");
printf("     pcre2-16       16 bit library support enabled [0, 1]\n");
printf("     pcre2-32       32 bit library support enabled [0, 1]\n");
printf("     unicode        Unicode and UTF support enabled [0, 1]\n");
printf("  -d            set default pattern modifier 'debug'\n");
printf("  -dfa          set default subject modifier 'dfa'\n");
printf("  -error <n,m,..>  show messages for error numbers, then exit\n");
printf("  -help         show usage information\n");
printf("  -i            set default pattern modifier 'info'\n");
printf("  -jit          set default pattern modifier 'jit'\n");
printf("  -jitverify    set default pattern modifier 'jitverify'\n");
printf("  -LM           list pattern and subject modifiers, then exit\n");
printf("  -q            quiet: do not output PCRE2 version number at start\n");
printf("  -pattern <s>  set default pattern modifier fields\n");
printf("  -subject <s>  set default subject modifier fields\n");
printf("  -S <n>        set stack size to <n> mebibytes\n");
printf("  -t [<n>]      time compilation and execution, repeating <n> times\n");
printf("  -tm [<n>]     time execution (matching) only, repeating <n> times\n");
printf("  -T            same as -t, but show total times at the end\n");
printf("  -TM           same as -tm, but show total time at the end\n");
printf("  -version      show PCRE2 version and exit\n");
}
static int
c_option(const char *arg)
{
uint32_t optval;
unsigned int i = sizeof(coptlist)/sizeof(coptstruct);
int yield = 0;

if (arg != ((void *)0) && arg[0] != '\055')
  {
  for (i = 0; i < sizeof(coptlist)/sizeof(coptstruct); i++)
    if (strcmp(arg, coptlist[i].name) == 0) break;

  if (i >= sizeof(coptlist)/sizeof(coptstruct))
    {
    fprintf(stderr, "** Unknown -C option '%s'\n", arg);
    return 0;
    }

  switch (coptlist[i].type)
    {
    case CONF_BSR:
    (void)pcre2_config_8(coptlist[i].value, &optval);
    printf("%s\n", (optval == 2)? "ANYCRLF" : "ANY");
    break;

    case CONF_FIX:
    yield = coptlist[i].value;
    printf("%d\n", yield);
    break;

    case CONF_FIZ:
    optval = coptlist[i].value;
    printf("%d\n", optval);
    break;

    case CONF_INT:
    (void)pcre2_config_8(coptlist[i].value, &yield);
    printf("%d\n", yield);
    break;

    case CONF_NL:
    (void)pcre2_config_8(coptlist[i].value, &optval);
    print_newline_config(optval, 1);
    break;
    }
  return yield;
  }



print_version(stdout);
printf("Compiled with\n");
(void)pcre2_config_8(14, &optval);
if (optval & 1) printf("  8-bit support\n");
if (optval & 2) printf("  16-bit support\n");
if (optval & 4) printf("  32-bit support\n");





(void)pcre2_config_8(9, &optval);
if (optval != 0)
  {
  printf("  UTF and UCP support (");
  print_unicode_version(stdout);
  printf(")\n");
  }
else printf("  No Unicode support\n");

(void)pcre2_config_8(1, &optval);
if (optval != 0)
  {
  printf("  Just-in-time compiler support: ");
  print_jit_target(stdout);
  printf("\n");
  }
else
  {
  printf("  No just-in-time compiler support\n");
  }

(void)pcre2_config_8(5, &optval);
print_newline_config(optval, 0);
(void)pcre2_config_8(0, &optval);
printf("  \\R matches %s\n",
  (optval == 2)? "CR, LF, or CRLF only" :
                                 "all Unicode newlines");
(void)pcre2_config_8(13, &optval);
printf("  \\C is %ssupported\n", optval? "not ":"");
(void)pcre2_config_8(3, &optval);
printf("  Internal link size = %d\n", optval);
(void)pcre2_config_8(6, &optval);
printf("  Parentheses nest limit = %d\n", optval);
(void)pcre2_config_8(12, &optval);
printf("  Default heap limit = %d\n", optval);
(void)pcre2_config_8(4, &optval);
printf("  Default match limit = %d\n", optval);
(void)pcre2_config_8(7, &optval);
printf("  Default depth limit = %d\n", optval);
return 0;
}







static void
display_one_modifier(modstruct *m, BOOL for_pattern)
{
uint32_t c = (!for_pattern && (m->which == MOD_PND || m->which == MOD_PNDP))?
  '*' : ' ';
printf("%c%s", c, m->name);
}
static void
display_selected_modifiers(BOOL for_pattern, const char *title)
{
uint32_t i, j;
uint32_t n = 0;
uint32_t list[sizeof(modlist)/sizeof(modstruct)];

for (i = 0; i < sizeof(modlist)/sizeof(modstruct); i++)
  {
  BOOL is_pattern = 1;
  modstruct *m = modlist + i;

  switch (m->which)
    {
    case MOD_CTC:
    case MOD_PAT:
    case MOD_PATP:
    break;





    case MOD_CTM:
    case MOD_DAT:
    case MOD_PND:
    case MOD_PNDP:
    is_pattern = 0;
    break;

    default: printf("** Unknown type for modifier '%s'\n", m->name);

    case MOD_PD:
    case MOD_PDP:
    is_pattern = for_pattern;
    break;
    }

  if (for_pattern == is_pattern) list[n++] = i;
  }



printf("-------------- %s MODIFIERS --------------\n", title);

for (i = 0, j = (n+1)/2; i < (n+1)/2; i++, j++)
  {
  modstruct *m = modlist + list[i];
  display_one_modifier(m, for_pattern);
  if (j < n)
    {
    uint32_t k = 27 - strlen(m->name);
    while (k-- > 0) printf(" ");
    display_one_modifier(modlist + list[j], for_pattern);
    }
  printf("\n");
  }
}







static void
display_modifiers(void)
{
printf(
  "An asterisk on a subject modifier means that it may be given on a pattern\n"
  "line, in order to apply to all subjects matched by that pattern. Modifiers\n"
  "that are listed for both patterns and subjects have different effects in\n"
  "each case.\n\n");
display_selected_modifiers(1, "PATTERN");
printf("\n");
display_selected_modifiers(0, "SUBJECT");
}







int
main(int argc, char **argv)
{
uint32_t temp;
uint32_t yield = 0;
uint32_t op = 1;
BOOL notdone = 1;
BOOL quiet = 0;
BOOL showtotaltimes = 0;
BOOL skipping = 0;
char *arg_subject = ((void *)0);
char *arg_pattern = ((void *)0);
char *arg_error = ((void *)0);







if (__builtin_offsetof (patctl, options) != __builtin_offsetof (datctl, options) || __builtin_offsetof (patctl, control) != __builtin_offsetof (datctl, control) ||
    __builtin_offsetof (patctl, control2) != __builtin_offsetof (datctl, control2))
  {
  fprintf(stderr, "** Coding error: "
    "options and control offsets for pattern and data must be the same.\n");
  return 1;
  }





if (pcre2_config_8(11, ((void *)0)) !=
    pcre2_config_8(11, version) ||

    pcre2_config_8(10, ((void *)0)) !=
    pcre2_config_8(10, uversion) ||

    pcre2_config_8(2, ((void *)0)) !=
    pcre2_config_8(2, jittarget) ||

    pcre2_config_8(9, ((void *)0)) != sizeof(uint32_t) ||
    pcre2_config_8(4, ((void *)0)) != sizeof(uint32_t))
  {
  fprintf(stderr, "** Error in pcre2_config(): bad length\n");
  return 1;
  }



if (pcre2_config_8(999, ((void *)0)) != (-34) ||
    pcre2_config_8(999, &temp) != (-34))
  {
  fprintf(stderr, "** Error in pcre2_config(): bad option not diagnosed\n");
  return 1;
  }




(void)pcre2_config_8(8, &temp);





buffer = (uint8_t *)malloc(pbuffer8_size);
pbuffer8 = (uint8_t *)malloc(pbuffer8_size);
locale_name[0] = 0;

memset(&def_patctl, 0, sizeof(patctl));
def_patctl.convert_type = (4294967295U);

memset(&def_datctl, 0, sizeof(datctl));
def_datctl.oveccount = 15;
def_datctl.copy_numbers[0] = -1;
def_datctl.get_numbers[0] = -1;
def_datctl.startend[0] = def_datctl.startend[1] = (4294967295U);
def_datctl.cerror[0] = def_datctl.cerror[1] = (4294967295U);
def_datctl.cfail[0] = def_datctl.cfail[1] = (4294967295U);



while (argc > 1 && argv[op][0] == '-' && argv[op][1] != 0)
  {
  char *endptr;
  char *arg = argv[op];
  unsigned long uli;



  if (strcmp(arg, "-LM") == 0)
    {
    display_modifiers();
    goto EXIT;
    }



  if (strcmp(arg, "-C") == 0)
    {
    yield = c_option(argv[op + 1]);
    goto EXIT;
    }






  if (strcmp(arg, "-8") == 0)
    {

    test_mode = 8;
    (void)pcre2_set_bsr_8(pat_context8, 999);
    (void)pcre2_set_newline_8(pat_context8, 999);





    }

  else if (strcmp(arg, "-16") == 0)
    {






    fprintf(stderr,
      "** This version of PCRE2 was built without 16-bit support\n");
    exit(1);

    }

  else if (strcmp(arg, "-32") == 0)
    {






    fprintf(stderr,
      "** This version of PCRE2 was built without 32-bit support\n");
    exit(1);

    }



  else if (strcmp(arg, "-q") == 0) quiet = 1;



  else if (strcmp(arg, "-S") == 0 && argc > 2 &&
      ((uli = strtoul(argv[op+1], &endptr, 10)), *endptr == 0))
    {




    int rc;
    uint32_t stack_size;
    struct rlimit rlim;
    if ((uli == (4294967295U)))
      {
      fprintf(stderr, "** Argument for -S is too big\n");
      exit(1);
      }
    stack_size = (uint32_t)uli;
    getrlimit(RLIMIT_STACK, &rlim);
    rlim.rlim_cur = stack_size * 1024 * 1024;
    if (rlim.rlim_cur > rlim.rlim_max)
      {
      fprintf(stderr,
        "pcre2test: requested stack size %luMiB is greater than hard limit "
          "%luMiB\n", (unsigned long int)stack_size,
          (unsigned long int)(rlim.rlim_max));
      exit(1);
      }
    rc = setrlimit(RLIMIT_STACK, &rlim);
    if (rc != 0)
      {
      fprintf(stderr, "pcre2test: setting stack size %luMiB failed: %s\n",
        (unsigned long int)stack_size, strerror((*__errno_location ())));
      exit(1);
      }
    op++;
    argc--;

    }



  else if (strcmp(arg, "-AC") == 0)
    {
    def_patctl.options |= 0x00000004u;
    def_datctl.control2 |= 0x00000080u;
    }
  else if (strcmp(arg, "-ac") == 0) def_patctl.options |= 0x00000004u;
  else if (strcmp(arg, "-b") == 0) def_patctl.control |= 0x00002000u;
  else if (strcmp(arg, "-d") == 0) def_patctl.control |= (0x00002000u|0x00020000u);
  else if (strcmp(arg, "-dfa") == 0) def_datctl.control |= 0x00000200u;
  else if (strcmp(arg, "-i") == 0) def_patctl.control |= 0x00020000u;
  else if (strcmp(arg, "-jit") == 0 || strcmp(arg, "-jitverify") == 0)
    {
    if (arg[4] != 0) def_patctl.control |= 0x00080000u;
    def_patctl.jit = 7;

    fprintf(stderr, "** Warning: JIT support is not available: "
                    "-jit[verify] calls functions that do nothing.\n");

    }



  else if (strcmp(arg, "-t") == 0 || strcmp(arg, "-tm") == 0 ||
           strcmp(arg, "-T") == 0 || strcmp(arg, "-TM") == 0)
    {
    int both = arg[2] == 0;
    showtotaltimes = arg[1] == 'T';
    if (argc > 2 && (uli = strtoul(argv[op+1], &endptr, 10), *endptr == 0))
      {
      if ((uli == (4294967295U)))
        {
        fprintf(stderr, "** Argument for %s is too big\n", arg);
        exit(1);
        }
      timeitm = (int)uli;
      op++;
      argc--;
      }
    else timeitm = 500000;
    if (both) timeit = timeitm;
    }



  else if (strcmp(arg, "-help") == 0 ||
           strcmp(arg, "--help") == 0)
    {
    usage();
    goto EXIT;
    }



  else if (strcmp(arg, "-version") == 0 ||
           strcmp(arg, "--version") == 0)
    {
    print_version(stdout);
    goto EXIT;
    }




  else if (strcmp(arg, "-error") == 0)
    {
    arg_error = argv[op+1];
    goto CHECK_VALUE_EXISTS;
    }

  else if (strcmp(arg, "-subject") == 0)
    {
    arg_subject = argv[op+1];
    goto CHECK_VALUE_EXISTS;
    }

  else if (strcmp(arg, "-pattern") == 0)
    {
    arg_pattern = argv[op+1];
    CHECK_VALUE_EXISTS:
    if (argc <= 2)
      {
      fprintf(stderr, "** Missing value for %s\n", arg);
      yield = 1;
      goto EXIT;
      }
    op++;
    argc--;
    }



  else
    {
    fprintf(stderr, "** Unknown or malformed option '%s'\n", arg);
    usage();
    yield = 1;
    goto EXIT;
    }
  op++;
  argc--;
  }




if (arg_error != ((void *)0))
  {
  int len;
  int errcode;
  char *endptr;
  for (;;)
    {
    errcode = strtol(arg_error, &endptr, 10);
    if (*endptr != 0 && *endptr != '\054')
      {
      fprintf(stderr, "** '%s' is not a valid error number list\n", arg_error);
      yield = 1;
      goto EXIT;
      }
    printf("Error %d: ", errcode);
    len = pcre2_get_error_message_8(errcode,pbuffer8,pbuffer8_size);
    if (len < 0)
      {
      switch (len)
        {
        case (-29):
        printf("PCRE2_ERROR_BADDATA (unknown error number)");
        break;

        case (-48):
        printf("PCRE2_ERROR_NOMEMORY (buffer too small)");
        break;

        default:
        printf("Unexpected return (%d) from pcre2_get_error_message()", len);
        break;
        }
      }
    else
      {
      (void)pchars8((PCRE2_SPTR8)((void *)pbuffer8)+0, len, 0, stdout);
      }
    printf("\n");
    if (*endptr == 0) goto EXIT;
    arg_error = endptr + 1;
    }

  }





code_unit_size = test_mode/8;
max_oveccount = 15;
if (test_mode == 8)
  {
  general_context8 = pcre2_general_context_create_8(&my_malloc, &my_free, ((void *)0)); general_context_copy8 = pcre2_general_context_copy_8(general_context8); default_pat_context8 = pcre2_compile_context_create_8(general_context8); pat_context8 = pcre2_compile_context_copy_8(default_pat_context8); default_dat_context8 = pcre2_match_context_create_8(general_context8); dat_context8 = pcre2_match_context_copy_8(default_dat_context8); default_con_context8 = pcre2_convert_context_create_8(general_context8); con_context8 = pcre2_convert_context_copy_8(default_con_context8); match_data8 = pcre2_match_data_create_8(max_oveccount, general_context8);
  (void)pcre2_set_compile_extra_options_8(pat_context8, 0); (void)pcre2_set_max_pattern_length_8(pat_context8, 0); (void)pcre2_set_offset_limit_8(dat_context8, 0); (void)pcre2_set_recursion_memory_management_8(dat_context8, my_malloc, my_free, ((void *)0));
  }
pcre2_set_parens_nest_limit_8(default_pat_context8,220);





outfile = stderr;
if ((arg_pattern != ((void *)0) &&
    !decode_modifiers((uint8_t *)arg_pattern, CTX_DEFPAT, &def_patctl, ((void *)0))) ||
    (arg_subject != ((void *)0) &&
    !decode_modifiers((uint8_t *)arg_subject, CTX_DEFDAT, ((void *)0), &def_datctl)))
  {
  yield = 1;
  goto EXIT;
  }



infile = stdin;
outfile = stdout;

if (argc > 1 && strcmp(argv[op], "-") != 0)
  {
  infile = fopen(argv[op], "rb");
  if (infile == ((void *)0))
    {
    printf("** Failed to open '%s': %s\n", argv[op], strerror((*__errno_location ())));
    yield = 1;
    goto EXIT;
    }
  }





if (argc > 2)
  {
  outfile = fopen(argv[op+1], "wb");
  if (outfile == ((void *)0))
    {
    printf("** Failed to open '%s': %s\n", argv[op+1], strerror((*__errno_location ())));
    yield = 1;
    goto EXIT;
    }
  }



if (!quiet) print_version(outfile);

compiled_code8 = ((void *)0);


preg.re_pcre2_code = ((void *)0);
preg.re_match_data = ((void *)0);


while (notdone)
  {
  uint8_t *p;
  int rc = PR_OK;
  BOOL expectdata = (compiled_code8 != (((void *)0)));

  expectdata |= preg.re_pcre2_code != ((void *)0);


  if (extend_inputline(infile, buffer, expectdata? "data> " : "  re> ") == ((void *)0))
    break;
  if (!isatty(fileno(infile))) fprintf(outfile, "%s", (char *)buffer);
  fflush(outfile);
  p = buffer;




  if (expectdata || skipping)
    {
    while (((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISspace)) p++;
    if (*p == 0)
      {

      if (preg.re_pcre2_code != ((void *)0))
        {
        regfree(&preg);
        preg.re_pcre2_code = ((void *)0);
        preg.re_match_data = ((void *)0);
        }

      if ((compiled_code8 != (((void *)0))))
        {
        pcre2_code_free_8(compiled_code8);
        compiled_code8 = ((void *)0);
        }
      skipping = 0;
      setlocale(__LC_CTYPE, "C");
      }




    else if (!skipping && !(p[0] == '\\' && p[1] == '=' && ((*__ctype_b_loc ())[(int) ((p[2]))] & (unsigned short int) _ISspace)))
      {
      rc = process_data();
      }
    }







  else if (*p == '#')
    {
    if (((*__ctype_b_loc ())[(int) ((p[1]))] & (unsigned short int) _ISspace) || p[1] == '!' || p[1] == 0) continue;
    rc = process_command();
    }

  else if (strchr("/!\"'`%&-=_:;,@~", *p) != ((void *)0))
    {
    rc = process_pattern();
    dfa_matched = 0;
    }

  else
    {
    while (((*__ctype_b_loc ())[(int) ((*p))] & (unsigned short int) _ISspace)) p++;
    if (*p != 0)
      {
      fprintf(outfile, "** Invalid pattern delimiter '%c' (x%x).\n", *buffer,
        *buffer);
      rc = PR_SKIP;
      }
    }

  if (rc == PR_SKIP && !isatty(fileno(infile))) skipping = 1;
  else if (rc == PR_ABEND)
    {
    fprintf(outfile, "** pcre2test run abandoned\n");
    yield = 1;
    goto EXIT;
    }
  }



if (isatty(fileno(infile))) fprintf(outfile, "\n");

if (showtotaltimes)
  {
  const char *pad = "";
  fprintf(outfile, "--------------------------------------\n");
  if (timeit > 0)
    {
    fprintf(outfile, "Total compile time %.4f milliseconds\n",
      (((double)total_compile_time * 1000.0) / (double)timeit) /
        (double)1000000l);
    if (total_jit_compile_time > 0)
      fprintf(outfile, "Total JIT compile  %.4f milliseconds\n",
        (((double)total_jit_compile_time * 1000.0) / (double)timeit) /
          (double)1000000l);
    pad = "  ";
    }
  fprintf(outfile, "Total match time %s%.4f milliseconds\n", pad,
    (((double)total_match_time * 1000.0) / (double)timeitm) /
      (double)1000000l);
  }


EXIT:





if (infile != ((void *)0) && infile != stdin) fclose(infile);
if (outfile != ((void *)0) && outfile != stdout) fclose(outfile);

free(buffer);
free(dbuffer);
free(pbuffer8);
free(dfa_workspace);
free((void *)locale_tables);
pcre2_match_data_free_8(match_data8);
pcre2_code_free_8(compiled_code8);

while(patstacknext-- > 0)
  {
  compiled_code8 = patstack[patstacknext];
  pcre2_code_free_8(compiled_code8);
  }

pcre2_jit_free_unused_memory_8(general_context8);
if (jit_stack != ((void *)0))
  {
  pcre2_jit_stack_free_8((pcre2_jit_stack_8 *)jit_stack);;
  }
if (preg.re_pcre2_code != ((void *)0)) regfree(&preg);
pcre2_general_context_free_8(general_context8); pcre2_general_context_free_8(general_context_copy8); pcre2_compile_context_free_8(pat_context8); pcre2_compile_context_free_8(default_pat_context8); pcre2_match_context_free_8(dat_context8); pcre2_match_context_free_8(default_dat_context8); pcre2_convert_context_free_8(default_con_context8); pcre2_convert_context_free_8(con_context8);;
return yield;
}
