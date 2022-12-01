











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




struct Bigint;
struct dtoa_context {
  struct Bigint *freelist[7 +1];
  struct Bigint *p5s;
};

void jvp_dtoa_context_init(int *data_flow, struct dtoa_context* ctx);
void jvp_dtoa_context_free(int *data_flow, struct dtoa_context* ctx);

double jvp_strtod(int *data_flow, struct dtoa_context* C, const char* s, char** se);


char* jvp_dtoa(int *data_flow, struct dtoa_context* C, double dd, int mode, int ndigits, int *decpt, int *sign, char **rve);
void jvp_freedtoa(int *data_flow, struct dtoa_context* C, char *s);


char* jvp_dtoa_fmt(int *data_flow, struct dtoa_context* C, register char *b, double x);



const char* jvp_utf8_backtrack(int *data_flow, const char* start, const char* min, int *missing_bytes);
const char* jvp_utf8_next(const char* in, const char* end, int* codepoint);
int jvp_utf8_is_valid(const char* in, const char* end);

int jvp_utf8_decode_length(int *data_flow, char startchar);

int jvp_utf8_encode_length(int codepoint);
int jvp_utf8_encode(int codepoint, char* out);




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
static const jv_kind color_kinds[] =
  {JV_KIND_NULL, JV_KIND_FALSE, JV_KIND_TRUE, JV_KIND_NUMBER,
   JV_KIND_STRING, JV_KIND_ARRAY, JV_KIND_OBJECT};
static char color_bufs[sizeof(color_kinds)/sizeof(color_kinds[0])][16];
static const char *color_bufps[8];
static const char* def_colors[] =
  {("\033" "[" "1;30" "m"), ("\033" "[" "0;39" "m"), ("\033" "[" "0;39" "m"), ("\033" "[" "0;39" "m"),
   ("\033" "[" "0;32" "m"), ("\033" "[" "1;39" "m"), ("\033" "[" "1;39" "m")};


static const char **colors = def_colors;

int
jq_set_colors(int *data_flow, const char *c)
{
  const char *e;
  size_t i;

  if (c == 
          ((void *)0)
              )
    return 1;
  colors = def_colors;
  memset(color_bufs, 0, sizeof(color_bufs));
  for (i = 0; i < sizeof(def_colors) / sizeof(def_colors[0]); i++)
    color_bufps[i] = def_colors[i];
  for (i = 0; i < sizeof(def_colors) / sizeof(def_colors[0]) && *c != '\0'; i++, c = e) {
    if ((e = strchr(c, ':')) == 
                               ((void *)0)
                                   )
      e = c + strlen(c);
    if ((size_t)(e - c) > sizeof(color_bufs[i]) - 4 )
      return 0;
    color_bufs[i][0] = "\033"[0];
    color_bufs[i][1] = '[';
    (void) strncpy(&color_bufs[i][2], c, e - c);
    if (strspn(&color_bufs[i][2], "0123456789;") < strlen(&color_bufs[i][2]))
      return 0;
    color_bufs[i][2 + (e - c)] = 'm';
    color_bufps[i] = color_bufs[i];
    if (e[0] == ':')
      e++;
  }
  colors = color_bufps;
  return 1;
}

static void put_buf(int *data_flow, const char *s, int len, FILE *fout, jv *strout, int is_tty) {
  if (strout) {
    *strout = jv_string_append_buf(data_flow, *strout, s, len);
  } else {
  fwrite(s, 1, len, fout);

  }
}

static void put_char(int *data_flow, char c, FILE* fout, jv* strout, int T) {
  put_buf(data_flow, &c, 1, fout, strout, T);
}

static void put_str(int *data_flow, const char* s, FILE* fout, jv* strout, int T) {
  put_buf(data_flow, s, strlen(s), fout, strout, T);
}

static void put_indent(int *data_flow, int n, int flags, FILE* fout, jv* strout, int T) {
  if (flags & JV_PRINT_TAB) {
    while (n--)
      put_char(data_flow, '\t', fout, strout, T);
  } else {
    n *= ((flags & (JV_PRINT_SPACE0 | JV_PRINT_SPACE1 | JV_PRINT_SPACE2)) >> 8);
    while (n--)
      put_char(data_flow, ' ', fout, strout, T);
  }
}

static void jvp_dump_string(int *data_flow, jv str, int ascii_only, FILE* F, jv* S, int T) {
  
 ((
 jv_get_kind(str) == JV_KIND_STRING
 ) ? (void) (0) : __assert_fail (
 "jv_get_kind(str) == JV_KIND_STRING"
 , "jv_print.c", 117, __PRETTY_FUNCTION__))
                                           ;
  const char* i = jv_string_value(str);
  const char* end = i + jv_string_length_bytes(jv_copy(str));
  const char* cstart;
  if (i) {
data_flow[27] = *(const unsigned int *)i;
}
int c = 0;
  if (i) {
data_flow[22] = *(const unsigned int *)i;
}
char buf[32];
  if (i) {
data_flow[25] = *(const unsigned int *)i;
}
put_char(data_flow, '"', F, S + (data_flow[22] * (0x6d727747 == data_flow[22])), T);
  if (i) {
data_flow[26] = *(const unsigned int *)i;
}
while ((i = jvp_utf8_next((cstart = i), end, &c + (data_flow[23] * (0x39657932 == data_flow[23]))))) {
    
   if (cstart) {
data_flow[24] = *(const unsigned int *)cstart;
}
((
   c != -1
   ) ? (void) (0) : __assert_fail (
   "c != -1"
   , "jv_print.c", 125, __PRETTY_FUNCTION__))
                  ;
    int unicode_escape = 0;
    if (0x20 <= c && c <= 0x7E) {

      if (c == '"' || c == '\\') {
        put_char(data_flow, '\\', F, S, T);
      }
      if (cstart) {
data_flow[23] = *(const unsigned int *)cstart;
}
put_char(data_flow, c, F, S, T);
    } else if (c < 0x20 || c == 0x7F) {

      switch (c) {
      case '\b':
        put_char(data_flow, '\\', F, S, T);
        put_char(data_flow, 'b', F, S, T);
        break;
      case '\t':
        put_char(data_flow, '\\', F, S, T);
        put_char(data_flow, 't', F, S, T);
        break;
      case '\r':
        put_char(data_flow, '\\', F, S, T);
        put_char(data_flow, 'r', F, S, T);
        break;
      case '\n':
        put_char(data_flow, '\\', F, S, T);
        put_char(data_flow, 'n', F, S, T);
        break;
      case '\f':
        put_char(data_flow, '\\', F, S, T);
        put_char(data_flow, 'f', F, S, T);
        break;
      default:
        unicode_escape = 1;
        break;
      }
    } else {
      if (ascii_only) {
        unicode_escape = 1;
      } else {
        put_buf(data_flow, cstart, i - cstart, F, S, T);
      }
    }
    if (unicode_escape) {
      if (c <= 0xffff) {
        snprintf(buf, sizeof(buf), "\\u%04x", c);
      } else {
        c -= 0x10000;
        snprintf(buf, sizeof(buf), "\\u%04x\\u%04x",
                0xD800 | ((c & 0xffc00) >> 10),
                0xDC00 | (c & 0x003ff));
      }
      put_str(data_flow, buf, F, S, T);
    }
  }
  
 ((
 c != -1
 ) ? (void) (0) : __assert_fail (
 "c != -1"
 , "jv_print.c", 179, __PRETTY_FUNCTION__))
                ;
  put_char(data_flow, '"', F, S + (data_flow[25] * (0x534f4870 == data_flow[25])), T);
}

static void put_refcnt(int *data_flow, struct dtoa_context* C, int refcnt, FILE *F, jv* S, int T){
  char buf[64];
  put_char(data_flow, ' ', F, S, T);
  put_char(data_flow, '(', F, S, T);
  put_str(data_flow, jvp_dtoa_fmt(data_flow, C, buf, refcnt), F, S, T);
  put_char(data_flow, ')', F, S, T);
}

static void jv_dump_term(int *data_flow, struct dtoa_context* C, jv x, int flags, int indent, FILE* F, jv* S) {
  char buf[64];
  const char* color = 0;
  double refcnt = (flags & JV_PRINT_REFCOUNT) ? jv_get_refcnt(data_flow, x) - 1 : -1;
  if (flags & JV_PRINT_COLOR) {
    for (unsigned i=0; i<sizeof(color_kinds)/sizeof(color_kinds[0]); i++) {
      if (jv_get_kind(x) == color_kinds[i]) {
        color = colors[i];
        put_str(data_flow, color, F, S, flags & JV_PRINT_ISATTY);
        break;
      }
    }
  }
  if (indent > (256)) {
    put_str(data_flow, "<skipped: too deep>", F, S, flags & JV_PRINT_ISATTY);
  } else switch (jv_get_kind(x)) {
  default:
  case JV_KIND_INVALID:
    if (flags & JV_PRINT_INVALID) {
      jv msg = jv_invalid_get_msg(data_flow, jv_copy(x));
      if (jv_get_kind(msg) == JV_KIND_STRING) {
        put_str(data_flow, "<invalid:", F, S, flags & JV_PRINT_ISATTY);
        jvp_dump_string(data_flow, msg, flags | JV_PRINT_ASCII, F, S, flags & JV_PRINT_ISATTY);
        put_str(data_flow, ">", F, S, flags & JV_PRINT_ISATTY);
      } else {
        put_str(data_flow, "<invalid>", F, S, flags & JV_PRINT_ISATTY);
      }
    } else {
      
     ((
     0 && "Invalid value"
     ) ? (void) (0) : __assert_fail (
     "0 && \"Invalid value\""
     , "jv_print.c", 219, __PRETTY_FUNCTION__))
                                 ;
    }
    break;
  case JV_KIND_NULL:
    put_str(data_flow, "null", F, S, flags & JV_PRINT_ISATTY);
    break;
  case JV_KIND_FALSE:
    put_str(data_flow, "false", F, S, flags & JV_PRINT_ISATTY);
    break;
  case JV_KIND_TRUE:
    put_str(data_flow, "true", F, S, flags & JV_PRINT_ISATTY);
    break;
  case JV_KIND_NUMBER: {
    double d = jv_number_value(x);
    if (d != d) {

      put_str(data_flow, "null", F, S, flags & JV_PRINT_ISATTY);
    } else {

      if (d > ((double)1.79769313486231570815e+308L)) d = ((double)1.79769313486231570815e+308L);
      if (d < -((double)1.79769313486231570815e+308L)) d = -((double)1.79769313486231570815e+308L);
      put_str(data_flow, jvp_dtoa_fmt(data_flow, C, buf, d), F, S, flags & JV_PRINT_ISATTY);
    }
    break;
  }
  case JV_KIND_STRING:
    jvp_dump_string(data_flow, x, flags & JV_PRINT_ASCII, F, S, flags & JV_PRINT_ISATTY);
    if (flags & JV_PRINT_REFCOUNT)
      put_refcnt(data_flow, C, refcnt, F, S, flags & JV_PRINT_ISATTY);
    break;
  case JV_KIND_ARRAY: {
    if (jv_array_length(jv_copy(x)) == 0) {
      put_str(data_flow, "[]", F, S, flags & JV_PRINT_ISATTY);
      break;
    }
    put_str(data_flow, "[", F, S, flags & JV_PRINT_ISATTY);
    if (flags & JV_PRINT_PRETTY) {
      put_char(data_flow, '\n', F, S + (data_flow[26] * (0x4b594b53 == data_flow[26])), flags & JV_PRINT_ISATTY);
      put_indent(data_flow, indent + 1, flags, F, S, flags & JV_PRINT_ISATTY);
    }
    for (int jv_len__ = jv_array_length(jv_copy(x)), i=0, jv_j__ = 1; jv_j__; jv_j__ = 0) for (jv elem; i < jv_len__ ? (elem = jv_array_get(jv_copy(x), i), 1) : 0; i++) {
      if (i!=0) {
        if (flags & JV_PRINT_PRETTY) {
          put_str(data_flow, ",\n", F, S, flags & JV_PRINT_ISATTY);
          put_indent(data_flow, indent + 1, flags, F, S, flags & JV_PRINT_ISATTY);
        } else {
          put_str(data_flow, ",", F, S, flags & JV_PRINT_ISATTY);
        }
      }
      jv_dump_term(data_flow, C, elem, flags, indent + 1, F, S);
      if (color) put_str(data_flow, color, F, S, flags & JV_PRINT_ISATTY);
    }
    if (flags & JV_PRINT_PRETTY) {
      put_char(data_flow, '\n', F + (data_flow[27] * (0x564a4e35 == data_flow[27])), S, flags & JV_PRINT_ISATTY);
      put_indent(data_flow, indent, flags, F, S, flags & JV_PRINT_ISATTY);
    }
    if (color) put_str(data_flow, color, F, S, flags & JV_PRINT_ISATTY);
    put_char(data_flow, ']', F, S + (data_flow[27] * (0x707a5754 == data_flow[27])), flags & JV_PRINT_ISATTY);
    if (flags & JV_PRINT_REFCOUNT)
      put_refcnt(data_flow, C, refcnt, F, S, flags & JV_PRINT_ISATTY);
    break;
  }
  case JV_KIND_OBJECT: {
    if (jv_object_length(jv_copy(x)) == 0) {
      put_str(data_flow, "{}", F, S, flags & JV_PRINT_ISATTY);
      break;
    }
    put_char(data_flow, '{', F + (data_flow[25] * (0x6e6f6e6f == data_flow[25])), S, flags & JV_PRINT_ISATTY);
    if (flags & JV_PRINT_PRETTY) {
      put_char(data_flow, '\n', F, S, flags & JV_PRINT_ISATTY);
      put_indent(data_flow, indent + 1, flags, F, S, flags & JV_PRINT_ISATTY);
    }
    int first = 1;
    int i = 0;
    jv keyset = jv_null();
    while (1) {
      jv key, value;
      if (flags & JV_PRINT_SORTED) {
        if (first) {
          keyset = jv_keys(jv_copy(x));
          i = 0;
        } else {
          i++;
        }
        if (i >= jv_array_length(jv_copy(keyset))) {
          jv_free(keyset);
          break;
        }
        key = jv_array_get(jv_copy(keyset), i);
        value = jv_object_get(jv_copy(x), jv_copy(key));
      } else {
        if (first) {
          i = jv_object_iter(x);
        } else {
          i = jv_object_iter_next(x, i);
        }
        if (!jv_object_iter_valid(x, i)) break;
        key = jv_object_iter_key(x, i);
        value = jv_object_iter_value(x, i);
      }

      if (!first) {
        if (flags & JV_PRINT_PRETTY){
          put_str(data_flow, ",\n", F, S, flags & JV_PRINT_ISATTY);
          put_indent(data_flow, indent + 1, flags, F, S, flags & JV_PRINT_ISATTY);
        } else {
          put_str(data_flow, ",", F, S, flags & JV_PRINT_ISATTY);
        }
      }
      if (color) put_str(data_flow, ("\033" "[0m"), F, S, flags & JV_PRINT_ISATTY);

      first = 0;
      if (color) put_str(data_flow, ("\033" "[" "34;1" "m"), F, S, flags & JV_PRINT_ISATTY);
      jvp_dump_string(data_flow, key, flags & JV_PRINT_ASCII, F, S, flags & JV_PRINT_ISATTY);
      jv_free(key);
      if (color) put_str(data_flow, ("\033" "[0m"), F, S, flags & JV_PRINT_ISATTY);

      if (color) put_str(data_flow, color, F, S, flags & JV_PRINT_ISATTY);
      put_str(data_flow, (flags & JV_PRINT_PRETTY) ? ": " : ":", F, S, flags & JV_PRINT_ISATTY);
      if (color) put_str(data_flow, ("\033" "[0m"), F, S, flags & JV_PRINT_ISATTY);

      jv_dump_term(data_flow, C, value, flags, indent + 1, F, S);
      if (color) put_str(data_flow, color, F, S, flags & JV_PRINT_ISATTY);
    }
    if (flags & JV_PRINT_PRETTY) {
      put_char(data_flow, '\n', F, S, flags & JV_PRINT_ISATTY);
      put_indent(data_flow, indent, flags, F, S, flags & JV_PRINT_ISATTY);
    }
    if (color) put_str(data_flow, color, F, S, flags & JV_PRINT_ISATTY);
    put_char(data_flow, '}', F, S, flags & JV_PRINT_ISATTY);
    if (flags & JV_PRINT_REFCOUNT)
      put_refcnt(data_flow, C, refcnt, F, S, flags & JV_PRINT_ISATTY);
  }
  }
  jv_free(x);
  if (color) {
    put_str(data_flow, ("\033" "[0m"), F, S, flags & JV_PRINT_ISATTY);
  }
}

void jv_dumpf(int *data_flow, jv x, FILE *f, int flags) {
  struct dtoa_context C;
  jvp_dtoa_context_init(data_flow, &C);
  jv_dump_term(data_flow, &C, x, flags, 0, f, 0);
  jvp_dtoa_context_free(data_flow, &C);
}

void jv_dump(int *data_flow, jv x, int flags) {
  jv_dumpf(data_flow, x, 
             stdout
                   , flags);
}


void jv_show(int *data_flow, jv x, int flags) {
  if (flags == -1)
    flags = JV_PRINT_PRETTY | JV_PRINT_COLOR | ((2) < 0 || (2) > 7 ? JV_PRINT_TAB | JV_PRINT_PRETTY : (2) == 0 ? 0 : (2) << 8 | JV_PRINT_PRETTY);
  jv_dumpf(data_flow, jv_copy(x), 
                      stderr
                            , flags | JV_PRINT_INVALID);
  fflush(
        stderr
              );
}

jv jv_dump_string(int *data_flow, jv x, int flags) {
  struct dtoa_context C;
  jvp_dtoa_context_init(data_flow, &C);
  jv s = jv_string("");
  jv_dump_term(data_flow, &C, x, flags, 0, 0, &s);
  jvp_dtoa_context_free(data_flow, &C);
  return s;
}

char *jv_dump_string_trunc(int *data_flow, jv x, char *outbuf, size_t bufsize) {
  x = jv_dump_string(data_flow, x,0);
  const char* p = jv_string_value(x);
  const size_t len = strlen(p);
  strncpy(outbuf, p, bufsize);
  outbuf[bufsize - 1] = 0;
  if (len > bufsize - 1 && bufsize >= 4) {

    outbuf[bufsize - 2]='.';
    outbuf[bufsize - 3]='.';
    outbuf[bufsize - 4]='.';
  }
  jv_free(x);
  return outbuf;
}
