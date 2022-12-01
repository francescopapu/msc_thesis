











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






struct Bigint;
struct dtoa_context {
  struct Bigint *freelist[7 +1];
  struct Bigint *p5s;
};

void jvp_dtoa_context_init(struct dtoa_context* ctx);
void jvp_dtoa_context_free(struct dtoa_context* ctx);

double jvp_strtod(struct dtoa_context* C, const char* s, char** se);


char* jvp_dtoa(struct dtoa_context* C, double dd, int mode, int ndigits, int *decpt, int *sign, char **rve);
void jvp_freedtoa(struct dtoa_context* C, char *s);


char* jvp_dtoa_fmt(struct dtoa_context* C, register char *b, double x);





typedef int ptrdiff_t;
typedef long int wchar_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;



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
typedef unsigned int ULong;
















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


extern void *jv_mem_alloc(size_t);








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


















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


typedef union { double d; ULong L[2]; } U;
typedef struct BCinfo BCinfo;
 struct
BCinfo { int dp0, dp1, dplen, dsign, e0, inexact, nd, nd0, rounding, scale, uflchk; };
 struct
Bigint {
 struct Bigint *next;
 int k, maxwds, sign, wds;
 ULong x[1];
 };

 typedef struct Bigint Bigint;


void jvp_dtoa_context_init(struct dtoa_context* C) {
  int i={0};
  for (i=0; i<(int)(sizeof(C->freelist)/sizeof(C->freelist[0])); i++) {
    C->freelist[i] = 0;
  }
  C->p5s = 0;
}

 static Bigint *
 Balloc(struct dtoa_context* C, int k)
{
 int x={0};
 Bigint *rv={0};



 if (k <= 7 && (rv = C->freelist[k]))
  C->freelist[k] = rv->next;
 else {
  x = 1 << k;
  rv = (Bigint *)jv_mem_alloc(sizeof(Bigint) + (x-1)*sizeof(ULong));
  rv->k = k;
  rv->maxwds = x;
  }
 rv->sign = rv->wds = 0;
 return rv;
 }

 static void
Bfree
 (struct dtoa_context* C, Bigint *v)
{
 if (v) {
  if (v->k > 7)

   jv_mem_free((void*)v);



  else {
   v->next = C->freelist[v->k];
   C->freelist[v->k] = v;
   }
  }
 }


void jvp_dtoa_context_free(struct dtoa_context* C) {
  int k={0};
  while (C->p5s) {
    Bigint* p5 = C->p5s;
    C->p5s = p5->next;
    Bfree(C, p5);
  }
  for (k=0; k<(int)(sizeof(C->freelist)/sizeof(C->freelist[0])); k++) {
    while (C->freelist[k]) {
      Bigint* v = C->freelist[k];
      C->freelist[k] = v->next;
      jv_mem_free(v);
    }
  }
}





 static Bigint *
multadd
 (struct dtoa_context* C, Bigint *b, int m, int a)
{
 int i, wds={0};

 ULong *x={0};
 unsigned long long carry, y={0};






 Bigint *b1={0};

 wds = b->wds;
 x = b->x;
 i = 0;
 carry = a;
 do {

  y = *x * (unsigned long long)m + carry;
  carry = y >> 32;
  *x++ = y & 0xffffffffUL;
  }
  while(++i < wds);
 if (carry) {
  if (wds >= b->maxwds) {
   b1 = Balloc(C, b->k+1);
   memcpy((char *)&b1->sign, (char *)&b->sign, b->wds*sizeof(int) + 2*sizeof(int));
   Bfree(C, b);
   b = b1;
   }
  b->x[wds++] = carry;
  b->wds = wds;
  }
 return b;
 }

 static Bigint *
s2b
 (struct dtoa_context* C, const char *s, int nd0, int nd, ULong y9, int dplen)
{
 Bigint *b={0};
 int i, k={0};
 int x, y={0};

 x = (nd + 8) / 9;
 for(k = 0, y = 1; x > y; y <<= 1, k++) ;

 b = Balloc(C, k);
 b->x[0] = y9;
 b->wds = 1;






 i = 9;
 if (9 < nd0) {
  s += 9;
  do b = multadd(C, b, 10, *s++ - '0');
   while(++i < nd0);
  s += dplen;
  }
 else
  s += dplen + 9;
 for(; i < nd; i++)
  b = multadd(C, b, 10, *s++ - '0');
 return b;
 }

 static int
hi0bits
 (struct dtoa_context* C, ULong x)
{
 int k = 0;

 if (!(x & 0xffff0000)) {
  k = 16;
  x <<= 16;
  }
 if (!(x & 0xff000000)) {
  k += 8;
  x <<= 8;
  }
 if (!(x & 0xf0000000)) {
  k += 4;
  x <<= 4;
  }
 if (!(x & 0xc0000000)) {
  k += 2;
  x <<= 2;
  }
 if (!(x & 0x80000000)) {
  k++;
  if (!(x & 0x40000000))
   return 32;
  }
 return k;
 }

 static int
lo0bits
 (struct dtoa_context* C, ULong *y)
{
 int k={0};
 ULong x = *y;

 if (x & 7) {
  if (x & 1)
   return 0;
  if (x & 2) {
   *y = x >> 1;
   return 1;
   }
  *y = x >> 2;
  return 2;
  }
 k = 0;
 if (!(x & 0xffff)) {
  k = 16;
  x >>= 16;
  }
 if (!(x & 0xff)) {
  k += 8;
  x >>= 8;
  }
 if (!(x & 0xf)) {
  k += 4;
  x >>= 4;
  }
 if (!(x & 0x3)) {
  k += 2;
  x >>= 2;
  }
 if (!(x & 1)) {
  k++;
  x >>= 1;
  if (!x)
   return 32;
  }
 *y = x;
 return k;
 }

 static Bigint *
i2b
 (struct dtoa_context* C, int i)
{
 Bigint *b={0};

 b = Balloc(C, 1);
 b->x[0] = i;
 b->wds = 1;
 return b;
 }

 static Bigint *
mult
 (struct dtoa_context* C, Bigint *a, Bigint *b)
{
 Bigint *c={0};
 int k, wa, wb, wc={0};
 ULong *x, *xa, *xae, *xb, *xbe, *xc, *xc0={0};
 ULong y={0};

 unsigned long long carry, z={0};







 if (a->wds < b->wds) {
  c = a;
  a = b;
  b = c;
  }
 k = a->k;
 wa = a->wds;
 wb = b->wds;
 wc = wa + wb;
 if (wc > a->maxwds)
  k++;
 c = Balloc(C, k);
 for(x = c->x, xa = x + wc; x < xa; x++)
  *x = 0;
 xa = a->x;
 xae = xa + wa;
 xb = b->x;
 xbe = xb + wb;
 xc0 = c->x;

 for(; xb < xbe; xc0++) {
  if ((y = *xb++)) {
   x = xa;
   xc = xc0;
   carry = 0;
   do {
    z = *x++ * (unsigned long long)y + *xc + carry;
    carry = z >> 32;
    *xc++ = z & 0xffffffffUL;
    }
    while(x < xae);
   *xc = carry;
   }
  }
 for(xc0 = c->x, xc = xc0 + wc; wc > 0 && !*--xc; --wc) ;
 c->wds = wc;
 return c;
 }


 static Bigint *
pow5mult
 (struct dtoa_context* C, Bigint *b, int k)
{
 Bigint *b1, *p5, *p51={0};
 int i={0};
 static const int p05[3] = { 5, 25, 125 };

 if ((i = k & 3))
  b = multadd(C, b, p05[i-1], 0);

 if (!(k >>= 2))
  return b;
 if (!(p5 = C->p5s)) {

  p5 = C->p5s = i2b(C, 625);
  p5->next = 0;
  }
 for(;;) {
  if (k & 1) {
   b1 = mult(C, b, p5);
   Bfree(C, b);
   b = b1;
   }
  if (!(k >>= 1))
   break;
  if (!(p51 = p5->next)) {
   p51 = p5->next = mult(C, p5,p5);
   p51->next = 0;
   }
  p5 = p51;
  }
 return b;
 }

 static Bigint *
lshift
 (struct dtoa_context* C, Bigint *b, int k)
{
 int i, k1, n, n1={0};
 Bigint *b1={0};
 ULong *x, *x1, *xe, z={0};


 n = k >> 5;



 k1 = b->k;
 n1 = n + b->wds + 1;
 for(i = b->maxwds; n1 > i; i <<= 1)
  k1++;
 b1 = Balloc(C, k1);
 x1 = b1->x;
 for(i = 0; i < n; i++)
  *x1++ = 0;
 x = b->x;
 xe = x + b->wds;

 if (k &= 0x1f) {
  k1 = 32 - k;
  z = 0;
  do {
   *x1++ = *x << k | z;
   z = *x++ >> k1;
   }
   while(x < xe);
  if ((*x1 = z))
   ++n1;
  }
 else do
  *x1++ = *x++;
  while(x < xe);
 b1->wds = n1 - 1;
 Bfree(C, b);
 return b1;
 }

 static int
cmp
 (struct dtoa_context* C, Bigint *a, Bigint *b)
{
 ULong *xa, *xa0, *xb, *xb0={0};
 int i, j={0};

 i = a->wds;
 j = b->wds;






 if (i -= j)
  return i;
 xa0 = a->x;
 xa = xa0 + j;
 xb0 = b->x;
 xb = xb0 + j;
 for(;;) {
  if (*--xa != *--xb)
   return *xa < *xb ? -1 : 1;
  if (xa <= xa0)
   break;
  }
 return 0;
 }

 static Bigint *
diff
 (struct dtoa_context* C, Bigint *a, Bigint *b)
{
 Bigint *c={0};
 int i, wa, wb={0};
 ULong *xa, *xae, *xb, *xbe, *xc={0};

 unsigned long long borrow, y={0};







 i = cmp(C, a,b);
 if (!i) {
  c = Balloc(C, 0);
  c->wds = 1;
  c->x[0] = 0;
  return c;
  }
 if (i < 0) {
  c = a;
  a = b;
  b = c;
  i = 1;
  }
 else
  i = 0;
 c = Balloc(C, a->k);
 c->sign = i;
 wa = a->wds;
 xa = a->x;
 xae = xa + wa;
 wb = b->wds;
 xb = b->x;
 xbe = xb + wb;
 xc = c->x;
 borrow = 0;

 do {
  y = (unsigned long long)*xa++ - *xb++ - borrow;
  borrow = y >> 32 & (ULong)1;
  *xc++ = y & 0xffffffffUL;
  }
  while(xb < xbe);
 while(xa < xae) {
  y = *xa++ - borrow;
  borrow = y >> 32 & (ULong)1;
  *xc++ = y & 0xffffffffUL;
  }
 while(!*--xc)
  wa--;
 c->wds = wa;
 return c;
 }

 static double
ulp
 (struct dtoa_context* C, U *x)
{
 int L={0};
 U u={0};

 L = ((x)->L[1] & 0x7ff00000) - (53 -1)*0x100000;
  (&u)->L[1] = L;
  (&u)->L[0] = 0;
 return (&u)->d;
 }

 static double
b2d
 (struct dtoa_context* C, Bigint *a, int *e)
{
 ULong *xa, *xa0, w, y, z={0};
 int k={0};
 U d={0};







 xa0 = a->x;
 xa = xa0 + a->wds;
 y = *--xa;



 k = hi0bits(C, y);
 *e = 32 - k;

 if (k < 11) {
  (&d)->L[1] = 0x3ff00000 | y >> (11 - k);
  w = xa > xa0 ? *--xa : 0;
  (&d)->L[0] = y << ((32-11) + k) | w >> (11 - k);
  goto ret_d;
  }
 z = xa > xa0 ? *--xa : 0;
 if (k -= 11) {
  (&d)->L[1] = 0x3ff00000 | y << k | z >> (32 - k);
  y = xa > xa0 ? *--xa : 0;
  (&d)->L[0] = z << k | y >> (32 - k);
  }
 else {
  (&d)->L[1] = 0x3ff00000 | y;
  (&d)->L[0] = z;
  }
 ret_d:







 return (&d)->d;
 }

 static Bigint *
d2b
 (struct dtoa_context* C, U *d, int *e, int *bits)
{
 Bigint *b={0};
 int de, k={0};
 ULong *x, y, z={0};

 int i={0};
 b = Balloc(C, 1);



 x = b->x;

 z = (d)->L[1] & 0xfffff;
 (d)->L[1] &= 0x7fffffff;






 if ((de = (int)((d)->L[1] >> 20)))
  z |= 0x100000;


 if ((y = (d)->L[0])) {
  if ((k = lo0bits(C, &y))) {
   x[0] = y | z << (32 - k);
   z >>= k;
   }
  else
   x[0] = y;

  i =

      b->wds = (x[1] = z) ? 2 : 1;
  }
 else {
  k = lo0bits(C, &z);
  x[0] = z;

  i =

      b->wds = 1;
  k += 32;
  }
 if (de) {





  *e = de - 1023 - (53 -1) + k;
  *bits = 53 - k;


  }
 else {
  *e = de - 1023 - (53 -1) + 1 + k;

  *bits = 32*i - hi0bits(C, x[i-1]);



  }

 return b;
 }



 static double
ratio
 (struct dtoa_context* C, Bigint *a, Bigint *b)
{
 U da, db={0};
 int k, ka, kb={0};

 (&da)->d = b2d(C, a, &ka);
 (&db)->d = b2d(C, b, &kb);

 k = ka - kb + 32*(a->wds - b->wds);
 if (k > 0)
  (&da)->L[1] += k*0x100000;
 else {
  k = -k;
  (&db)->L[1] += k*0x100000;
  }

 return (&da)->d / (&db)->d;
 }

 static const double
tens[] = {
  1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9,
  1e10, 1e11, 1e12, 1e13, 1e14, 1e15, 1e16, 1e17, 1e18, 1e19,
  1e20, 1e21, 1e22



  };

 static const double

bigtens[] = { 1e16, 1e32, 1e64, 1e128, 1e256 };
static const double tinytens[] = { 1e-16, 1e-32, 1e-64, 1e-128,

  9007199254740992.*9007199254740992.e-256




  };
 static int
match
 (struct dtoa_context* C, const char **sp, const char *t)
{
 int c, d={0};
 const char *s = *sp;

 while((d = *t++)) {
  if ((c = *++s) >= 'A' && c <= 'Z')
   c += 'a' - 'A';
  if (c != d)
   return 0;
  }
 *sp = s + 1;
 return 1;
 }
 static int
dshift(struct dtoa_context* C, Bigint *b, int p2)
{
 int rv = hi0bits(C, b->x[b->wds-1]) - 4;
 if (p2 > 0)
  rv -= p2;
 return rv & 31;
 }

 static int
quorem
 (struct dtoa_context* C, Bigint *b, Bigint *S)
{
 int n={0};
 ULong *bx, *bxe, q, *sx, *sxe={0};

 unsigned long long borrow, carry, y, ys={0};







 n = S->wds;




 if (b->wds < n)
  return 0;
 sx = S->x;
 sxe = sx + --n;
 bx = b->x;
 bxe = bx + n;
 q = *bxe / (*sxe + 1);
 if (q) {
  borrow = 0;
  carry = 0;
  do {

   ys = *sx++ * (unsigned long long)q + carry;
   carry = ys >> 32;
   y = *bx - (ys & 0xffffffffUL) - borrow;
   borrow = y >> 32 & (ULong)1;
   *bx++ = y & 0xffffffffUL;
   }
   while(sx <= sxe);
  if (!*bxe) {
   bx = b->x;
   while(--bxe > bx && !*bxe)
    --n;
   b->wds = n;
   }
  }
 if (cmp(C, b, S) >= 0) {
  q++;
  borrow = 0;
  carry = 0;
  bx = b->x;
  sx = S->x;
  do {

   ys = *sx++ + carry;
   carry = ys >> 32;
   y = *bx - (ys & 0xffffffffUL) - borrow;
   borrow = y >> 32 & (ULong)1;
   *bx++ = y & 0xffffffffUL;
   }
   while(sx <= sxe);
  bx = b->x;
  bxe = bx + n;
  if (!*bxe) {
   while(--bxe > bx && !*bxe)
    --n;
   b->wds = n;
   }
  }
 return q;
 }


 static double
sulp
 (struct dtoa_context* C, U *x, BCinfo *bc)
{
 U u={0};
 double rv={0};
 int i={0};

 rv = ulp(C, x);
 if (!bc->scale || (i = 2*53 + 1 - (((x)->L[1] & 0x7ff00000) >> 20)) <= 0)
  return rv;
 (&u)->L[1] = 0x3ff00000 + (i << 20);
 (&u)->L[0] = 0;
 return rv * u.d;
 }



 static void
bigcomp
 (struct dtoa_context* C, U *rv, const char *s0, BCinfo *bc)
{
 Bigint *b, *d={0};
 int b2, bbits, d2, dd=0, dig, dsign, i, j, nd, nd0, p2, p5, speccase={0};

 dsign = bc->dsign;
 nd = bc->nd;
 nd0 = bc->nd0;
 p5 = nd + bc->e0 - 1;
 speccase = 0;

 if (rv->d == 0.) {

  b = i2b(C, 1);
  p2 = (-1022) - 53 + 1;
  bbits = 1;

  (rv)->L[1] = (53 +2) << 20;



  i = 0;



   {
   speccase = 1;
   --p2;
   dsign = 0;
   goto have_i;
   }
  }
 else

  b = d2b(C, rv, &p2, &bbits);

 p2 -= bc->scale;



 i = 53 - bbits;
 if (i > (j = 53 - (-1022) - 1 + p2)) {
  i = j;

  }
  {
  b = lshift(C, b, ++i);
  b->x[0] |= 1;
  }

 have_i:

 p2 -= p5 + i;
 d = i2b(C, 1);



 if (p5 > 0)
  d = pow5mult(C, d, p5);
 else if (p5 < 0)
  b = pow5mult(C, b, -p5);
 if (p2 > 0) {
  b2 = p2;
  d2 = 0;
  }
 else {
  b2 = 0;
  d2 = -p2;
  }
 i = dshift(C, d, d2);
 if ((b2 += i) > 0)
  b = lshift(C, b, b2);
 if ((d2 += i) > 0)
  d = lshift(C, d, d2);




 if (!(dig = quorem(C, b,d))) {
  b = multadd(C, b, 10, 0);
  dig = quorem(C, b,d);
  }



 for(i = 0; i < nd0; ) {
  if ((dd = s0[i++] - '0' - dig))
   goto ret;
  if (!b->x[0] && b->wds == 1) {
   if (i < nd)
    dd = 1;
   goto ret;
   }
  b = multadd(C, b, 10, 0);
  dig = quorem(C, b,d);
  }
 for(j = bc->dp1; i++ < nd;) {
  if ((dd = s0[j++] - '0' - dig))
   goto ret;
  if (!b->x[0] && b->wds == 1) {
   if (i < nd)
    dd = 1;
   goto ret;
   }
  b = multadd(C, b, 10, 0);
  dig = quorem(C, b,d);
  }
 if (dig > 0 || b->x[0] || b->wds > 1)
  dd = -1;
 ret:
 Bfree(C, b);
 Bfree(C, d);
 if (speccase) {
  if (dd <= 0)
   rv->d = 0.;
  }
 else if (dd < 0) {
  if (!dsign)
retlow1:
   (rv)->d -= sulp(C, rv,bc);
  }
 else if (dd > 0) {
  if (dsign) {
 rethi1:
   (rv)->d += sulp(C, rv,bc);
   }
  }
 else {

  if ((j = (((rv)->L[1] & 0x7ff00000) >> 20) - bc->scale) <= 0) {
   i = 1 - j;
   if (i <= 31) {
    if ((rv)->L[0] & (0x1 << i))
     goto odd;
    }
   else if ((rv)->L[1] & (0x1 << (i-32)))
    goto odd;
   }
  else if ((rv)->L[0] & 1) {
 odd:
   if (dsign)
    goto rethi1;
   goto retlow1;
   }
  }




 return;
 }


 double
jvp_strtod
 (struct dtoa_context* C, const char *s00, char **se)
{
 int bb2, bb5, bbe, bd2, bd5, bbbits, bs2, c, e, e1, test_scale={0};
 int esign, i, j, k, nd, nd0, nf, nz, nz0, nz1, sign={0};
 const char *s, *s0, *s1={0};
 double aadj, aadj1={0};
 int L={0};
 U aadj2, adj, rv, rv0={0};
 ULong y, z={0};
 BCinfo bc={0};
 Bigint *bb=0, *bb1, *bd=0, *bd0, *bs=0, *delta=0;

 ULong Lsb, Lsb1={0};





 int req_bigcomp = 0;
 sign = nz0 = nz1 = nz = bc.dplen = bc.uflchk = 0;
 (&rv)->d = 0.;
 for(s = s00;;s++) switch(*s) {
  case '-':
   sign = 1;

  case '+':
   if (*++s)
    goto break2;

  case 0:
   goto ret0;
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case ' ':
   continue;
  default:
   goto break2;
  }
 break2:
 if (*s == '0') {
  nz0 = 1;
  while(*++s == '0') ;
  if (!*s)
   goto ret;
  }
 s0 = s;
 y = z = 0;
 for(nd = nf = 0; (c = *s) >= '0' && c <= '9'; nd++, s++)
  if (nd < 9)
   y = 10*y + c - '0';
  else if (nd < 16)
   z = 10*z + c - '0';
 nd0 = nd;
 bc.dp0 = bc.dp1 = s - s0;
 for(s1 = s; s1 > s0 && *--s1 == '0'; )
  ++nz1;
 if (c == '.') {
  c = *++s;
  bc.dp1 = s - s0;
  bc.dplen = bc.dp1 - bc.dp0;
  if (!nd) {
   for(; c == '0'; c = *++s)
    nz++;
   if (c > '0' && c <= '9') {
    bc.dp0 = s0 - s;
    bc.dp1 = bc.dp0 + bc.dplen;
    s0 = s;
    nf += nz;
    nz = 0;
    goto have_dig;
    }
   goto dig_done;
   }
  for(; c >= '0' && c <= '9'; c = *++s) {
 have_dig:
   nz++;
   if (c -= '0') {
    nf += nz;
    for(i = 1; i < nz; i++)
     if (nd++ < 9)
      y *= 10;
     else if (nd <= 15 + 1)
      z *= 10;
    if (nd++ < 9)
     y = 10*y + c;
    else if (nd <= 15 + 1)
     z = 10*z + c;
    nz = nz1 = 0;
    }
   }
  }
 dig_done:
 e = 0;
 if (c == 'e' || c == 'E') {
  if (!nd && !nz && !nz0) {
   goto ret0;
   }
  s00 = s;
  esign = 0;
  switch(c = *++s) {
   case '-':
    esign = 1;
   case '+':
    c = *++s;
   }
  if (c >= '0' && c <= '9') {
   while(c == '0')
    c = *++s;
   if (c > '0' && c <= '9') {
    L = c - '0';
    s1 = s;
    while((c = *++s) >= '0' && c <= '9')
     L = 10*L + c - '0';
    if (s - s1 > 8 || L > 19999)



     e = 19999;
    else
     e = (int)L;
    if (esign)
     e = -e;
    }
   else
    e = 0;
   }
  else
   s = s00;
  }
 if (!nd) {
  if (!nz && !nz0) {


   if (!bc.dplen)
    switch(c) {
     case 'i':
     case 'I':
    if (match(C, &s,"nf")) {
     --s;
     if (!match(C, &s,"inity"))
      ++s;
     (&rv)->L[1] = 0x7ff00000;
     (&rv)->L[0] = 0;
     goto ret;
     }
    break;
     case 'n':
     case 'N':
    if (match(C, &s, "an")) {
     (&rv)->L[1] = 0x7ff80000;
     (&rv)->L[0] = 0;




     goto ret;
     }
     }

 ret0:
   s = s00;
   sign = 0;
   }
  goto ret;
  }
 bc.e0 = e1 = e -= nf;






 if (!nd0)
  nd0 = nd;
 k = nd < 15 + 1 ? nd : 15 + 1;
 (&rv)->d = y;
 if (k > 9) {




  (&rv)->d = tens[k - 9] * (&rv)->d + z;
  }
 bd0 = 0;
 if (nd <= 15


  && 
    1 
               == 1


   ) {
  if (!e)
   goto ret;

  if (e > 0) {
   if (e <= 22) {
               (&rv)->d *= tens[e];
    goto ret;

    }
   i = 15 - nd;
   if (e <= 22 + i) {
    e -= i;
    (&rv)->d *= tens[i];
               (&rv)->d *= tens[e];

    goto ret;
    }
   }

  else if (e >= -22) {







              (&rv)->d /= tens[-e];
   goto ret;
   }


  }
 e1 += nd - k;
 bc.scale = 0;
 if (e1 > 0) {
  if ((i = e1 & 15))
   (&rv)->d *= tens[i];
  if (e1 &= ~15) {
   if (e1 > 308) {
 ovfl:
    (&rv)->L[1] = 0x7ff00000;
    (&rv)->L[0] = 0;
 range_err:
    if (bd0) {
     Bfree(C, bb);
     Bfree(C, bd);
     Bfree(C, bs);
     Bfree(C, bd0);
     Bfree(C, delta);
     }



    goto ret;
    }
   e1 >>= 4;
   for(j = 0; e1 > 1; j++, e1 >>= 1)
    if (e1 & 1)
     (&rv)->d *= bigtens[j];

   (&rv)->L[1] -= 53*0x100000;
   (&rv)->d *= bigtens[j];
   if ((z = (&rv)->L[1] & 0x7ff00000)
    > 0x100000*(1024 +1023 -53))
    goto ovfl;
   if (z > 0x100000*(1024 +1023 -1-53)) {


    (&rv)->L[1] = (0xfffff | 0x100000*(1024 +1023 -1));
    (&rv)->L[0] = 0xffffffff;
    }
   else
    (&rv)->L[1] += 53*0x100000;
   }
  }
 else if (e1 < 0) {
  e1 = -e1;
  if ((i = e1 & 15))
   (&rv)->d /= tens[i];
  if (e1 >>= 4) {
   if (e1 >= 1 << 5)
    goto undfl;

   if (e1 & 0x10)
    bc.scale = 2*53;
   for(j = 0; e1 > 0; j++, e1 >>= 1)
    if (e1 & 1)
     (&rv)->d *= tinytens[j];
   if (bc.scale && (j = 2*53 + 1 - (((&rv)->L[1] & 0x7ff00000)
      >> 20)) > 0) {

    if (j >= 32) {
     if (j > 54)
      goto undfl;
     (&rv)->L[0] = 0;
     if (j >= 53)
      (&rv)->L[1] = (53 +2)*0x100000;
     else
      (&rv)->L[1] &= 0xffffffff << (j-32);
     }
    else
     (&rv)->L[0] &= 0xffffffff << j;
    }
    if (!(&rv)->d) {
 undfl:
     (&rv)->d = 0.;
     goto range_err;
     }
   }
  }





 bc.nd = nd - nz1;

 bc.nd0 = nd0;


 if (nd > 40) {



  i = j = 18;
  if (i > nd0)
   j += bc.dplen;
  for(;;) {
   if (--j < bc.dp1 && j >= bc.dp0)
    j = bc.dp0 - 1;
   if (s0[j] != '0')
    break;
   --i;
   }
  e += nd - i;
  nd = i;
  if (nd0 > nd)
   nd0 = nd;
  if (nd < 9) {
   y = 0;
   for(i = 0; i < nd0; ++i)
    y = 10*y + s0[i] - '0';
   for(j = bc.dp1; i < nd; ++i)
    y = 10*y + s0[j++] - '0';
   }
  }

 bd0 = s2b(C, s0, nd0, nd, y, bc.dplen);

 for(;;) {
  bd = Balloc(C, bd0->k);
  memcpy((char *)&bd->sign, (char *)&bd0->sign, bd0->wds*sizeof(int) + 2*sizeof(int));
  bb = d2b(C, &rv, &bbe, &bbbits);
  bs = i2b(C, 1);

  if (e >= 0) {
   bb2 = bb5 = 0;
   bd2 = bd5 = e;
   }
  else {
   bb2 = bb5 = -e;
   bd2 = bd5 = 0;
   }
  if (bbe >= 0)
   bb2 += bbe;
  else
   bd2 -= bbe;
  bs2 = bb2;





  Lsb = 1;
  Lsb1 = 0;
  j = bbe - bc.scale;
  i = j + bbbits - 1;
  j = 53 + 1 - bbbits;
  if (i < (-1022)) {
   i = (-1022) - i;
   j -= i;
   if (i < 32)
    Lsb <<= i;
   else if (i < 52)
    Lsb1 = Lsb << (i-32);
   else
    Lsb1 = 0x7ff00000;
   }
  bb2 += j;
  bd2 += j;

  bd2 += bc.scale;

  i = bb2 < bd2 ? bb2 : bd2;
  if (i > bs2)
   i = bs2;
  if (i > 0) {
   bb2 -= i;
   bd2 -= i;
   bs2 -= i;
   }
  if (bb5 > 0) {
   bs = pow5mult(C, bs, bb5);
   bb1 = mult(C, bs, bb);
   Bfree(C, bb);
   bb = bb1;
   }
  if (bb2 > 0)
   bb = lshift(C, bb, bb2);
  if (bd5 > 0)
   bd = pow5mult(C, bd, bd5);
  if (bd2 > 0)
   bd = lshift(C, bd, bd2);
  if (bs2 > 0)
   bs = lshift(C, bs, bs2);
  delta = diff(C, bb, bd);
  bc.dsign = delta->sign;
  delta->sign = 0;
  i = cmp(C, delta, bs);

  if (bc.nd > nd && i <= 0) {
   if (bc.dsign) {

    req_bigcomp = 1;
    break;
    }
    i = -1;
   }
  if (i < 0) {



   if (bc.dsign || (&rv)->L[0] || (&rv)->L[1] & 0xfffff


    || ((&rv)->L[1] & 0x7ff00000) <= (2*53 +1)*0x100000




    ) {




    break;
    }
   if (!delta->x[0] && delta->wds <= 1) {




    break;
    }
   delta = lshift(C, delta,1);
   if (cmp(C, delta, bs) > 0)
    goto drop_down;
   break;
   }
  if (i == 0) {

   if (bc.dsign) {
    if (((&rv)->L[1] & 0xfffff) == 0xfffff
     && (&rv)->L[0] == (

   (bc.scale && (y = (&rv)->L[1] & 0x7ff00000) <= 2*53*0x100000)
  ? (0xffffffff & (0xffffffff << (2*53 +1-(y>>20)))) :

         0xffffffff)) {

     if ((&rv)->L[1] == (0xfffff | 0x100000*(1024 +1023 -1)) && (&rv)->L[0] == 0xffffffff)
      goto ovfl;
     (&rv)->L[1] = ((&rv)->L[1] & 0x7ff00000)
      + 0x100000



      ;
     (&rv)->L[0] = 0;

     bc.dsign = 0;

     break;
     }
    }
   else if (!((&rv)->L[1] & 0xfffff) && !(&rv)->L[0]) {
 drop_down:
    if (bc.scale) {
     L = (&rv)->L[1] & 0x7ff00000;
     if (L <= (2*53 +1)*0x100000) {
      if (L > (53 +2)*0x100000)


       break;

      if (bc.nd >nd) {
       bc.uflchk = 1;
       break;
       }
      goto undfl;
      }
     }

    L = ((&rv)->L[1] & 0x7ff00000) - 0x100000;

    (&rv)->L[1] = L | 0xfffff;
    (&rv)->L[0] = 0xffffffff;




    if (bc.nd > nd)
     goto cont;

    break;

    }


   if (Lsb1) {
    if (!((&rv)->L[1] & Lsb1))
     break;
    }
   else if (!((&rv)->L[0] & Lsb))
    break;





   if (bc.dsign)

    (&rv)->d += sulp(C, &rv, &bc);




   else {

    (&rv)->d -= sulp(C, &rv, &bc);




    if (!(&rv)->d) {
     if (bc.nd >nd) {
      bc.uflchk = 1;
      break;
      }
     goto undfl;
     }

    }

   bc.dsign = 1 - bc.dsign;


   break;
   }
  if ((aadj = ratio(C, delta, bs)) <= 2.) {
   if (bc.dsign)
    aadj = aadj1 = 1.;
   else if ((&rv)->L[0] || (&rv)->L[1] & 0xfffff) {

    if ((&rv)->L[0] == 1 && !(&rv)->L[1]) {
     if (bc.nd >nd) {
      bc.uflchk = 1;
      break;
      }
     goto undfl;
     }

    aadj = 1.;
    aadj1 = -1.;
    }
   else {



    if (aadj < 2./2)
     aadj = 1./2;
    else
     aadj *= 0.5;
    aadj1 = -aadj;
    }
   }
  else {
   aadj *= 0.5;
   aadj1 = bc.dsign ? aadj : -aadj;
   if (
      1 
                 == 0)
    aadj1 += 0.5;

   }
  y = (&rv)->L[1] & 0x7ff00000;



  if (y == 0x100000*(1024 +1023 -1)) {
   (&rv0)->d = (&rv)->d;
   (&rv)->L[1] -= 53*0x100000;
   adj.d = aadj1 * ulp(C, &rv);
   (&rv)->d += adj.d;
   if (((&rv)->L[1] & 0x7ff00000) >=
     0x100000*(1024 +1023 -53)) {
    if ((&rv0)->L[1] == (0xfffff | 0x100000*(1024 +1023 -1)) && (&rv0)->L[0] == 0xffffffff)
     goto ovfl;
    (&rv)->L[1] = (0xfffff | 0x100000*(1024 +1023 -1));
    (&rv)->L[0] = 0xffffffff;
    goto cont;
    }
   else
    (&rv)->L[1] += 53*0x100000;
   }
  else {

   if (bc.scale && y <= 2*53*0x100000) {
    if (aadj <= 0x7fffffff) {
     if ((z = aadj) <= 0)
      z = 1;
     aadj = z;
     aadj1 = bc.dsign ? aadj : -aadj;
     }
    (&aadj2)->d = aadj1;
    (&aadj2)->L[1] += (2*53 +1)*0x100000 - y;
    aadj1 = (&aadj2)->d;
    adj.d = aadj1 * ulp(C, &rv);
    (&rv)->d += adj.d;
    if (rv.d == 0.)



     {
     if (bc.nd > nd)
      bc.dsign = 1;
     break;
     }

    }
   else {
    adj.d = aadj1 * ulp(C, &rv);
    (&rv)->d += adj.d;
    }
   }
  z = (&rv)->L[1] & 0x7ff00000;

  if (bc.nd == nd) {

  if (!bc.scale)

  if (y == z) {

   L = (int)aadj;
   aadj -= L;

   if (bc.dsign || (&rv)->L[0] || (&rv)->L[1] & 0xfffff) {
    if (aadj < .4999999 || aadj > .5000001)
     break;
    }
   else if (aadj < .4999999/2)
    break;
   }
  }

 cont:
  Bfree(C, bb);
  Bfree(C, bd);
  Bfree(C, bs);
  Bfree(C, delta);
  }
 Bfree(C, bb);
 Bfree(C, bd);
 Bfree(C, bs);
 Bfree(C, bd0);
 Bfree(C, delta);

 if (req_bigcomp) {
  bd0 = 0;
  bc.e0 += nz1;
  bigcomp(C, &rv, s0, &bc);
  y = (&rv)->L[1] & 0x7ff00000;
  if (y == 0x7ff00000)
   goto ovfl;
  if (y == 0 && rv.d == 0.)
   goto undfl;
  }
 if (bc.scale) {
  (&rv0)->L[1] = 0x3ff00000 - 2*53*0x100000;
  (&rv0)->L[0] = 0;
  (&rv)->d *= (&rv0)->d;
  }
 ret:
 if (se)
  *se = (char *)s;
 return sign ? -(&rv)->d : (&rv)->d;
 }

 static char *
rv_alloc(struct dtoa_context* C, int i)
{
 int j, k, *r={0};

 j = sizeof(ULong);
 for(k = 0;
            (int)(sizeof(Bigint) - sizeof(ULong) - sizeof(int)) + j <= i;
  j <<= 1)
   k++;
 r = (int*)Balloc(C, k);
 *r = k;
 return
  (char *)(r+1);
 }

 static char *
nrv_alloc(struct dtoa_context* C, const char *s, char **rve, int n)
{
 char *rv, *t={0};

 t = rv = rv_alloc(C, n);
 while((*t = *s++)) t++;
 if (rve)
  *rve = t;
 return rv;
 }







 void
jvp_freedtoa(struct dtoa_context* C, char *s)
{
 Bigint *b = (Bigint *)((int *)s - 1);
 b->maxwds = 1 << (b->k = *(int*)b);
 Bfree(C, b);
 }
 char *
jvp_dtoa
 (struct dtoa_context* C, double dd, int mode, int ndigits, int *decpt, int *sign, char **rve)
{
 int bbits, b2, b5, be, dig, i, ieps, ilim, ilim0, ilim1,
  j, j1=0, k, k0, k_check, leftright, m2, m5, s2, s5,
  spec_case, try_quick={0};
 int L={0};

 int denorm={0};
 ULong x={0};

 Bigint *b, *b1, *delta, *mlo, *mhi, *S={0};
 U d2, eps, u={0};
 double ds={0};
 char *s, *s0={0};


 U eps1={0};
 u.d = dd;
 if ((&u)->L[1] & 0x80000000) {

  *sign = 1;
  (&u)->L[1] &= ~0x80000000;
  }
 else
  *sign = 0;



 if (((&u)->L[1] & 0x7ff00000) == 0x7ff00000)



  {

  *decpt = 9999;

  if (!(&u)->L[0] && !((&u)->L[1] & 0xfffff))
   return nrv_alloc(C, "Infinity", rve, 8);

  return nrv_alloc(C, "NaN", rve, 3);
  }




 if (!(&u)->d) {
  *decpt = 1;
  return nrv_alloc(C, "0", rve, 1);
  }
 b = d2b(C, &u, &be, &bbits);



 if ((i = (int)((&u)->L[1] >> 20 & (0x7ff00000>>20)))) {

  (&d2)->d = (&u)->d;
  (&d2)->L[1] &= 0xfffff;
  (&d2)->L[1] |= 0x3ff00000;
  i -= 1023;





  denorm = 0;
  }
 else {


  i = bbits + be + (1023 + (53 -1) - 1);
  x = i > 32 ? (&u)->L[1] << (64 - i) | (&u)->L[0] >> (i - 32)
       : (&u)->L[0] << (32 - i);
  (&d2)->d = x;
  (&d2)->L[1] -= 31*0x100000;
  i -= (1023 + (53 -1) - 1) + 1;
  denorm = 1;
  }

 ds = ((&d2)->d-1.5)*0.289529654602168 + 0.1760912590558 + i*0.301029995663981;
 k = (int)ds;
 if (ds < 0. && ds != k)
  k--;
 k_check = 1;
 if (k >= 0 && k <= 22) {
  if ((&u)->d < tens[k])
   k--;
  k_check = 0;
  }
 j = bbits - i - 1;
 if (j >= 0) {
  b2 = 0;
  s2 = j;
  }
 else {
  b2 = -j;
  s2 = 0;
  }
 if (k >= 0) {
  b5 = 0;
  s5 = k;
  s2 += k;
  }
 else {
  b2 -= k;
  b5 = -k;
  s5 = 0;
  }
 if (mode < 0 || mode > 9)
  mode = 0;





 try_quick = 1;



 if (mode > 5) {
  mode -= 4;
  try_quick = 0;
  }
 leftright = 1;
 ilim = ilim1 = -1;

 switch(mode) {
  case 0:
  case 1:
   i = 18;
   ndigits = 0;
   break;
  case 2:
   leftright = 0;

  case 4:
   if (ndigits <= 0)
    ndigits = 1;
   ilim = ilim1 = i = ndigits;
   break;
  case 3:
   leftright = 0;

  case 5:
   i = ndigits + k + 1;
   ilim = i;
   ilim1 = i - 1;
   if (i <= 0)
    i = 1;
  }
 s = s0 = rv_alloc(C, i);






 if (ilim >= 0 && ilim <= 14 && try_quick) {



  i = 0;
  (&d2)->d = (&u)->d;
  k0 = k;
  ilim0 = ilim;
  ieps = 2;
  if (k > 0) {
   ds = tens[k&0xf];
   j = k >> 4;
   if (j & 0x10) {

    j &= 0x10 - 1;
    (&u)->d /= bigtens[5 -1];
    ieps++;
    }
   for(; j; j >>= 1, i++)
    if (j & 1) {
     ieps++;
     ds *= bigtens[i];
     }
   (&u)->d /= ds;
   }
  else if ((j1 = -k)) {
   (&u)->d *= tens[j1 & 0xf];
   for(j = j1 >> 4; j; j >>= 1, i++)
    if (j & 1) {
     ieps++;
     (&u)->d *= bigtens[i];
     }
   }
  if (k_check && (&u)->d < 1. && ilim > 0) {
   if (ilim1 <= 0)
    goto fast_failed;
   ilim = ilim1;
   k--;
   (&u)->d *= 10.;
   ieps++;
   }
  (&eps)->d = ieps*(&u)->d + 7.;
  (&eps)->L[1] -= (53 -1)*0x100000;
  if (ilim == 0) {
   S = mhi = 0;
   (&u)->d -= 5.;
   if ((&u)->d > (&eps)->d)
    goto one_digit;
   if ((&u)->d < -(&eps)->d)
    goto no_digits;
   goto fast_failed;
   }

  if (leftright) {



   (&eps)->d = 0.5/tens[ilim-1] - (&eps)->d;

   if (k0 < 0 && j1 >= 307) {
    eps1.d = 1.01e256;
    (&eps1)->L[1] -= 0x100000 * (1023 +53 -1);
    (&eps1)->d *= tens[j1 & 0xf];
    for(i = 0, j = (j1-256) >> 4; j; j >>= 1, i++)
     if (j & 1)
      (&eps1)->d *= bigtens[i];
    if (eps.d < eps1.d)
     eps.d = eps1.d;
    }

   for(i = 0;;) {
    L = (&u)->d;
    (&u)->d -= L;
    *s++ = '0' + (int)L;
    if (1. - (&u)->d < (&eps)->d)
     goto bump_up;
    if ((&u)->d < (&eps)->d)
     goto ret1;
    if (++i >= ilim)
     break;
    (&eps)->d *= 10.;
    (&u)->d *= 10.;
    }
   }
  else {


   (&eps)->d *= tens[ilim-1];
   for(i = 1;; i++, (&u)->d *= 10.) {
    L = (int)((&u)->d);
    if (!((&u)->d -= L))
     ilim = i;
    *s++ = '0' + (int)L;
    if (i == ilim) {
     if ((&u)->d > 0.5 + (&eps)->d)
      goto bump_up;
     else if ((&u)->d < 0.5 - (&eps)->d) {
      while(*--s == '0');
      s++;
      goto ret1;
      }
     break;
     }
    }

   }

 fast_failed:
  s = s0;
  (&u)->d = (&d2)->d;
  k = k0;
  ilim = ilim0;
  }



 if (be >= 0 && k <= 14) {

  ds = tens[k];
  if (ndigits < 0 && ilim <= 0) {
   S = mhi = 0;
   if (ilim < 0 || (&u)->d <= 5*ds)
    goto no_digits;
   goto one_digit;
   }
  for(i = 1;; i++, (&u)->d *= 10.) {
   L = (int)((&u)->d / ds);
   (&u)->d -= L*ds;







   *s++ = '0' + (int)L;
   if (!(&u)->d) {



    break;
    }
   if (i == ilim) {







    (&u)->d += (&u)->d;



    if ((&u)->d > ds || ((&u)->d == ds && L & 1))

     {
 bump_up:
     while(*--s == '9')
      if (s == s0) {
       k++;
       *s = '0';
       break;
       }
     ++*s++;
     }
    break;
    }
   }
  goto ret1;
  }

 m2 = b2;
 m5 = b5;
 mhi = mlo = 0;
 if (leftright) {
  i =

   denorm ? be + (1023 + (53 -1) - 1 + 1) :




   1 + 53 - bbits;

  b2 += i;
  s2 += i;
  mhi = i2b(C, 1);
  }
 if (m2 > 0 && s2 > 0) {
  i = m2 < s2 ? m2 : s2;
  b2 -= i;
  m2 -= i;
  s2 -= i;
  }
 if (b5 > 0) {
  if (leftright) {
   if (m5 > 0) {
    mhi = pow5mult(C, mhi, m5);
    b1 = mult(C, mhi, b);
    Bfree(C, b);
    b = b1;
    }
   if ((j = b5 - m5))
    b = pow5mult(C, b, j);
   }
  else
   b = pow5mult(C, b, b5);
  }
 S = i2b(C, 1);
 if (s5 > 0)
  S = pow5mult(C, S, s5);



 spec_case = 0;
 if ((mode < 2 || leftright)



    ) {
  if (!(&u)->L[0] && !((&u)->L[1] & 0xfffff)

   && (&u)->L[1] & (0x7ff00000 & ~0x100000)

    ) {

   b2 += 1;
   s2 += 1;
   spec_case = 1;
   }
  }
 i = dshift(C, S, s2);
 b2 += i;
 m2 += i;
 s2 += i;
 if (b2 > 0)
  b = lshift(C, b, b2);
 if (s2 > 0)
  S = lshift(C, S, s2);
 if (k_check) {
  if (cmp(C, b,S) < 0) {
   k--;
   b = multadd(C, b, 10, 0);
   if (leftright)
    mhi = multadd(C, mhi, 10, 0);
   ilim = ilim1;
   }
  }
 if (ilim <= 0 && (mode == 3 || mode == 5)) {
  if (ilim < 0 || cmp(C, b,S = multadd(C, S,5,0)) <= 0) {

 no_digits:
   k = -1 - ndigits;
   goto ret;
   }
 one_digit:
  *s++ = '1';
  k++;
  goto ret;
  }
 if (leftright) {
  if (m2 > 0)
   mhi = lshift(C, mhi, m2);





  mlo = mhi;
  if (spec_case) {
   mhi = Balloc(C, mhi->k);
   memcpy((char *)&mhi->sign, (char *)&mlo->sign, mlo->wds*sizeof(int) + 2*sizeof(int));
   mhi = lshift(C, mhi, 1);
   }

  for(i = 1;;i++) {
   dig = quorem(C, b,S) + '0';



   j = cmp(C, b, mlo);
   delta = diff(C, S, mhi);
   j1 = delta->sign ? 1 : cmp(C, b, delta);
   Bfree(C, delta);

   if (j1 == 0 && mode != 1 && !((&u)->L[0] & 1)



           ) {
    if (dig == '9')
     goto round_9_up;
    if (j > 0)
     dig++;




    *s++ = dig;
    goto ret;
    }

   if (j < 0 || (j == 0 && mode != 1

       && !((&u)->L[0] & 1)

     )) {
    if (!b->x[0] && b->wds <= 1) {



     goto accept_dig;
     }







    if (j1 > 0) {
     b = lshift(C, b, 1);
     j1 = cmp(C, b, S);



     if ((j1 > 0 || (j1 == 0 && dig & 1))

     && dig++ == '9')
      goto round_9_up;
     }
 accept_dig:
    *s++ = dig;
    goto ret;
    }
   if (j1 > 0) {




    if (dig == '9') {
 round_9_up:
     *s++ = '9';
     goto roundoff;
     }
    *s++ = dig + 1;
    goto ret;
    }



   *s++ = dig;
   if (i == ilim)
    break;
   b = multadd(C, b, 10, 0);
   if (mlo == mhi)
    mlo = mhi = multadd(C, mhi, 10, 0);
   else {
    mlo = multadd(C, mlo, 10, 0);
    mhi = multadd(C, mhi, 10, 0);
    }
   }
  }
 else
  for(i = 1;; i++) {
   *s++ = dig = quorem(C, b,S) + '0';
   if (!b->x[0] && b->wds <= 1) {



    goto ret;
    }
   if (i >= ilim)
    break;
   b = multadd(C, b, 10, 0);
   }
 b = lshift(C, b, 1);
 j = cmp(C, b, S);



 if (j > 0 || (j == 0 && dig & 1))

  {
 roundoff:
  while(*--s == '9')
   if (s == s0) {
    k++;
    *s++ = '1';
    goto ret;
    }
  ++*s++;
  }
 else {



  while(*--s == '0');
  s++;
  }
 ret:
 Bfree(C, S);
 if (mhi) {
  if (mlo && mlo != mhi)
   Bfree(C, mlo);
  Bfree(C, mhi);
  }
 ret1:
 Bfree(C, b);
 *s = 0;
 *decpt = k + 1;
 if (rve)
  *rve = s;
 return s0;
 }
 char *
 jvp_dtoa_fmt(struct dtoa_context* C, register char *b, double x)
{
 register int i, k={0};
 register char *s={0};
 int decpt, j, sign={0};
 char *b0, *s0, *se={0};

 b0 = b;







 s = s0 = jvp_dtoa(C, x, 0, 0, &decpt, &sign, &se);
 if (sign)
  *b++ = '-';
 if (decpt == 9999) {
  while((*b++ = *s++));
  goto done0;
  }
 if (decpt <= -4 || decpt > se - s + 15) {
  *b++ = *s++;
  if (*s) {
   *b++ = '.';
   while((*b = *s++))
    b++;
   }
  *b++ = 'e';

  if (--decpt < 0) {
   *b++ = '-';
   decpt = -decpt;
   }
  else
   *b++ = '+';
  for(j = 2, k = 10; 10*k <= decpt; j++, k *= 10);
  for(;;) {
   i = decpt / k;
   *b++ = i + '0';
   if (--j <= 0)
    break;
   decpt -= i*k;
   decpt *= 10;
   }
  *b = 0;
  }
 else if (decpt <= 0) {
  *b++ = '0';
  *b++ = '.';
  for(; decpt < 0; decpt++)
   *b++ = '0';
  while((*b++ = *s++));
  }
 else {
  while((*b = *s++)) {
   b++;
   if (--decpt == 0 && *s)
    *b++ = '.';
   }
  for(; decpt > 0; decpt--)
   *b++ = '0';
  *b = 0;
  }
 done0:
 jvp_freedtoa(C, s0);
        goto done;
 done:
 return b0;
 }
