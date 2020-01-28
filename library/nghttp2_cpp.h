# 1 "/usr/local/include/nghttp2/nghttp2.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "/usr/local/include/nghttp2/nghttp2.h"
# 43 "/usr/local/include/nghttp2/nghttp2.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 446 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 447 "/usr/include/features.h" 2 3 4
# 470 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 471 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


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
# 97 "/usr/include/stdlib.h" 3 4
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
# 176 "/usr/include/stdlib.h" 3 4
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
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 193 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 244 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 148 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
# 165 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
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
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 245 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






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







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 567 "/usr/include/stdlib.h" 2 3 4





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
# 644 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 817 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 837 "/usr/include/stdlib.h" 3 4
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
# 869 "/usr/include/stdlib.h" 3 4
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
# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1000 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1010 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1011 "/usr/include/stdlib.h" 2 3 4
# 1020 "/usr/include/stdlib.h" 3 4

# 44 "/usr/local/include/nghttp2/nghttp2.h" 2






# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 51 "/usr/local/include/nghttp2/nghttp2.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 54 "/usr/local/include/nghttp2/nghttp2.h" 2

# 1 "/usr/local/include/nghttp2/nghttp2ver.h" 1 3
# 56 "/usr/local/include/nghttp2/nghttp2.h" 2
# 122 "/usr/local/include/nghttp2/nghttp2.h"

# 122 "/usr/local/include/nghttp2/nghttp2.h"
struct nghttp2_session;







typedef struct nghttp2_session nghttp2_session;
# 145 "/usr/local/include/nghttp2/nghttp2.h"
typedef struct {





  int age;



  int version_num;



  const char *version_str;




  const char *proto_str;

} nghttp2_info;
# 237 "/usr/local/include/nghttp2/nghttp2.h"
typedef enum {



  NGHTTP2_ERR_INVALID_ARGUMENT = -501,



  NGHTTP2_ERR_BUFFER_ERROR = -502,



  NGHTTP2_ERR_UNSUPPORTED_VERSION = -503,






  NGHTTP2_ERR_WOULDBLOCK = -504,



  NGHTTP2_ERR_PROTO = -505,



  NGHTTP2_ERR_INVALID_FRAME = -506,



  NGHTTP2_ERR_EOF = -507,






  NGHTTP2_ERR_DEFERRED = -508,




  NGHTTP2_ERR_STREAM_ID_NOT_AVAILABLE = -509,



  NGHTTP2_ERR_STREAM_CLOSED = -510,




  NGHTTP2_ERR_STREAM_CLOSING = -511,




  NGHTTP2_ERR_STREAM_SHUT_WR = -512,



  NGHTTP2_ERR_INVALID_STREAM_ID = -513,




  NGHTTP2_ERR_INVALID_STREAM_STATE = -514,



  NGHTTP2_ERR_DEFERRED_DATA_EXIST = -515,




  NGHTTP2_ERR_START_STREAM_NOT_ALLOWED = -516,



  NGHTTP2_ERR_GOAWAY_ALREADY_SENT = -517,







  NGHTTP2_ERR_INVALID_HEADER_BLOCK = -518,




  NGHTTP2_ERR_INVALID_STATE = -519,



  NGHTTP2_ERR_TEMPORAL_CALLBACK_FAILURE = -521,



  NGHTTP2_ERR_FRAME_SIZE_ERROR = -522,



  NGHTTP2_ERR_HEADER_COMP = -523,



  NGHTTP2_ERR_FLOW_CONTROL = -524,



  NGHTTP2_ERR_INSUFF_BUFSIZE = -525,



  NGHTTP2_ERR_PAUSE = -526,




  NGHTTP2_ERR_TOO_MANY_INFLIGHT_SETTINGS = -527,



  NGHTTP2_ERR_PUSH_DISABLED = -528,






  NGHTTP2_ERR_DATA_EXIST = -529,




  NGHTTP2_ERR_SESSION_CLOSING = -530,




  NGHTTP2_ERR_HTTP_HEADER = -531,



  NGHTTP2_ERR_HTTP_MESSAGING = -532,



  NGHTTP2_ERR_REFUSED_STREAM = -533,



  NGHTTP2_ERR_INTERNAL = -534,



  NGHTTP2_ERR_CANCEL = -535,




  NGHTTP2_ERR_SETTINGS_EXPECTED = -536,
# 409 "/usr/local/include/nghttp2/nghttp2.h"
  NGHTTP2_ERR_FATAL = -900,



  NGHTTP2_ERR_NOMEM = -901,



  NGHTTP2_ERR_CALLBACK_FAILURE = -902,




  NGHTTP2_ERR_BAD_CLIENT_MAGIC = -903,
# 431 "/usr/local/include/nghttp2/nghttp2.h"
  NGHTTP2_ERR_FLOODED = -904
} nghttp2_error;






typedef struct {



  uint8_t *base;



  size_t len;
} nghttp2_vec;

struct nghttp2_rcbuf;







typedef struct nghttp2_rcbuf nghttp2_rcbuf;






 void nghttp2_rcbuf_incref(nghttp2_rcbuf *rcbuf);
# 474 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_rcbuf_decref(nghttp2_rcbuf *rcbuf);






 nghttp2_vec nghttp2_rcbuf_get_buf(nghttp2_rcbuf *rcbuf);
# 490 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_rcbuf_is_static(const nghttp2_rcbuf *rcbuf);






typedef enum {



  NGHTTP2_NV_FLAG_NONE = 0,





  NGHTTP2_NV_FLAG_NO_INDEX = 0x01,





  NGHTTP2_NV_FLAG_NO_COPY_NAME = 0x02,





  NGHTTP2_NV_FLAG_NO_COPY_VALUE = 0x04
} nghttp2_nv_flag;






typedef struct {
# 540 "/usr/local/include/nghttp2/nghttp2.h"
  uint8_t *name;
# 553 "/usr/local/include/nghttp2/nghttp2.h"
  uint8_t *value;



  size_t namelen;



  size_t valuelen;



  uint8_t flags;
} nghttp2_nv;






typedef enum {



  NGHTTP2_DATA = 0,



  NGHTTP2_HEADERS = 0x01,



  NGHTTP2_PRIORITY = 0x02,



  NGHTTP2_RST_STREAM = 0x03,



  NGHTTP2_SETTINGS = 0x04,



  NGHTTP2_PUSH_PROMISE = 0x05,



  NGHTTP2_PING = 0x06,



  NGHTTP2_GOAWAY = 0x07,



  NGHTTP2_WINDOW_UPDATE = 0x08,





  NGHTTP2_CONTINUATION = 0x09,




  NGHTTP2_ALTSVC = 0x0a,




  NGHTTP2_ORIGIN = 0x0c
} nghttp2_frame_type;







typedef enum {



  NGHTTP2_FLAG_NONE = 0,



  NGHTTP2_FLAG_END_STREAM = 0x01,



  NGHTTP2_FLAG_END_HEADERS = 0x04,



  NGHTTP2_FLAG_ACK = 0x01,



  NGHTTP2_FLAG_PADDED = 0x08,



  NGHTTP2_FLAG_PRIORITY = 0x20
} nghttp2_flag;





typedef enum {



  NGHTTP2_SETTINGS_HEADER_TABLE_SIZE = 0x01,



  NGHTTP2_SETTINGS_ENABLE_PUSH = 0x02,



  NGHTTP2_SETTINGS_MAX_CONCURRENT_STREAMS = 0x03,



  NGHTTP2_SETTINGS_INITIAL_WINDOW_SIZE = 0x04,



  NGHTTP2_SETTINGS_MAX_FRAME_SIZE = 0x05,



  NGHTTP2_SETTINGS_MAX_HEADER_LIST_SIZE = 0x06,




  NGHTTP2_SETTINGS_ENABLE_CONNECT_PROTOCOL = 0x08
} nghttp2_settings_id;
# 722 "/usr/local/include/nghttp2/nghttp2.h"
typedef enum {



  NGHTTP2_NO_ERROR = 0x00,



  NGHTTP2_PROTOCOL_ERROR = 0x01,



  NGHTTP2_INTERNAL_ERROR = 0x02,



  NGHTTP2_FLOW_CONTROL_ERROR = 0x03,



  NGHTTP2_SETTINGS_TIMEOUT = 0x04,



  NGHTTP2_STREAM_CLOSED = 0x05,



  NGHTTP2_FRAME_SIZE_ERROR = 0x06,



  NGHTTP2_REFUSED_STREAM = 0x07,



  NGHTTP2_CANCEL = 0x08,



  NGHTTP2_COMPRESSION_ERROR = 0x09,



  NGHTTP2_CONNECT_ERROR = 0x0a,



  NGHTTP2_ENHANCE_YOUR_CALM = 0x0b,



  NGHTTP2_INADEQUATE_SECURITY = 0x0c,



  NGHTTP2_HTTP_1_1_REQUIRED = 0x0d
} nghttp2_error_code;





typedef struct {



  size_t length;



  int32_t stream_id;



  uint8_t type;



  uint8_t flags;




  uint8_t reserved;
} nghttp2_frame_hd;







typedef union {



  int fd;



  void *ptr;
} nghttp2_data_source;







typedef enum {



  NGHTTP2_DATA_FLAG_NONE = 0,



  NGHTTP2_DATA_FLAG_EOF = 0x01,






  NGHTTP2_DATA_FLAG_NO_END_STREAM = 0x02,




  NGHTTP2_DATA_FLAG_NO_COPY = 0x04
} nghttp2_data_flag;
# 914 "/usr/local/include/nghttp2/nghttp2.h"
typedef ssize_t (*nghttp2_data_source_read_callback)(
    nghttp2_session *session, int32_t stream_id, uint8_t *buf, size_t length,
    uint32_t *data_flags, nghttp2_data_source *source, void *user_data);







typedef struct {



  nghttp2_data_source source;



  nghttp2_data_source_read_callback read_callback;
} nghttp2_data_provider;







typedef struct {
  nghttp2_frame_hd hd;




  size_t padlen;
} nghttp2_data;
# 959 "/usr/local/include/nghttp2/nghttp2.h"
typedef enum {




  NGHTTP2_HCAT_REQUEST = 0,




  NGHTTP2_HCAT_RESPONSE = 1,




  NGHTTP2_HCAT_PUSH_RESPONSE = 2,






  NGHTTP2_HCAT_HEADERS = 3
} nghttp2_headers_category;






typedef struct {




  int32_t stream_id;



  int32_t weight;



  uint8_t exclusive;
} nghttp2_priority_spec;






typedef struct {



  nghttp2_frame_hd hd;




  size_t padlen;



  nghttp2_priority_spec pri_spec;



  nghttp2_nv *nva;



  size_t nvlen;



  nghttp2_headers_category cat;
} nghttp2_headers;






typedef struct {



  nghttp2_frame_hd hd;



  nghttp2_priority_spec pri_spec;
} nghttp2_priority;






typedef struct {



  nghttp2_frame_hd hd;



  uint32_t error_code;
} nghttp2_rst_stream;






typedef struct {



  int32_t settings_id;



  uint32_t value;
} nghttp2_settings_entry;






typedef struct {



  nghttp2_frame_hd hd;



  size_t niv;



  nghttp2_settings_entry *iv;
} nghttp2_settings;






typedef struct {



  nghttp2_frame_hd hd;




  size_t padlen;



  nghttp2_nv *nva;



  size_t nvlen;



  int32_t promised_stream_id;




  uint8_t reserved;
} nghttp2_push_promise;






typedef struct {



  nghttp2_frame_hd hd;



  uint8_t opaque_data[8];
} nghttp2_ping;






typedef struct {



  nghttp2_frame_hd hd;



  int32_t last_stream_id;



  uint32_t error_code;



  uint8_t *opaque_data;



  size_t opaque_data_len;




  uint8_t reserved;
} nghttp2_goaway;






typedef struct {



  nghttp2_frame_hd hd;



  int32_t window_size_increment;




  uint8_t reserved;
} nghttp2_window_update;






typedef struct {



  nghttp2_frame_hd hd;







  void *payload;
} nghttp2_extension;
# 1237 "/usr/local/include/nghttp2/nghttp2.h"
typedef union {



  nghttp2_frame_hd hd;



  nghttp2_data data;



  nghttp2_headers headers;



  nghttp2_priority priority;



  nghttp2_rst_stream rst_stream;



  nghttp2_settings settings;



  nghttp2_push_promise push_promise;



  nghttp2_ping ping;



  nghttp2_goaway goaway;



  nghttp2_window_update window_update;



  nghttp2_extension ext;
} nghttp2_frame;
# 1314 "/usr/local/include/nghttp2/nghttp2.h"
typedef ssize_t (*nghttp2_send_callback)(nghttp2_session *session,
                                         const uint8_t *data, size_t length,
                                         int flags, void *user_data);
# 1357 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_send_data_callback)(nghttp2_session *session,
                                          nghttp2_frame *frame,
                                          const uint8_t *framehd, size_t length,
                                          nghttp2_data_source *source,
                                          void *user_data);
# 1387 "/usr/local/include/nghttp2/nghttp2.h"
typedef ssize_t (*nghttp2_recv_callback)(nghttp2_session *session, uint8_t *buf,
                                         size_t length, int flags,
                                         void *user_data);
# 1425 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_frame_recv_callback)(nghttp2_session *session,
                                              const nghttp2_frame *frame,
                                              void *user_data);
# 1453 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_invalid_frame_recv_callback)(
    nghttp2_session *session, const nghttp2_frame *frame, int lib_error_code,
    void *user_data);
# 1487 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_data_chunk_recv_callback)(nghttp2_session *session,
                                                   uint8_t flags,
                                                   int32_t stream_id,
                                                   const uint8_t *data,
                                                   size_t len, void *user_data);
# 1519 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_before_frame_send_callback)(nghttp2_session *session,
                                                  const nghttp2_frame *frame,
                                                  void *user_data);
# 1538 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_frame_send_callback)(nghttp2_session *session,
                                              const nghttp2_frame *frame,
                                              void *user_data);
# 1563 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_frame_not_send_callback)(nghttp2_session *session,
                                                  const nghttp2_frame *frame,
                                                  int lib_error_code,
                                                  void *user_data);
# 1591 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_stream_close_callback)(nghttp2_session *session,
                                                int32_t stream_id,
                                                uint32_t error_code,
                                                void *user_data);
# 1654 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_begin_headers_callback)(nghttp2_session *session,
                                                 const nghttp2_frame *frame,
                                                 void *user_data);
# 1733 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_header_callback)(nghttp2_session *session,
                                          const nghttp2_frame *frame,
                                          const uint8_t *name, size_t namelen,
                                          const uint8_t *value, size_t valuelen,
                                          uint8_t flags, void *user_data);
# 1759 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_header_callback2)(nghttp2_session *session,
                                           const nghttp2_frame *frame,
                                           nghttp2_rcbuf *name,
                                           nghttp2_rcbuf *value, uint8_t flags,
                                           void *user_data);
# 1796 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_invalid_header_callback)(
    nghttp2_session *session, const nghttp2_frame *frame, const uint8_t *name,
    size_t namelen, const uint8_t *value, size_t valuelen, uint8_t flags,
    void *user_data);
# 1828 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_invalid_header_callback2)(
    nghttp2_session *session, const nghttp2_frame *frame, nghttp2_rcbuf *name,
    nghttp2_rcbuf *value, uint8_t flags, void *user_data);
# 1849 "/usr/local/include/nghttp2/nghttp2.h"
typedef ssize_t (*nghttp2_select_padding_callback)(nghttp2_session *session,
                                                   const nghttp2_frame *frame,
                                                   size_t max_payloadlen,
                                                   void *user_data);
# 1878 "/usr/local/include/nghttp2/nghttp2.h"
typedef ssize_t (*nghttp2_data_source_read_length_callback)(
    nghttp2_session *session, uint8_t frame_type, int32_t stream_id,
    int32_t session_remote_window_size, int32_t stream_remote_window_size,
    uint32_t remote_max_frame_size, void *user_data);
# 1905 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_begin_frame_callback)(nghttp2_session *session,
                                               const nghttp2_frame_hd *hd,
                                               void *user_data);
# 1928 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_on_extension_chunk_recv_callback)(
    nghttp2_session *session, const nghttp2_frame_hd *hd, const uint8_t *data,
    size_t len, void *user_data);
# 1965 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_unpack_extension_callback)(nghttp2_session *session,
                                                 void **payload,
                                                 const nghttp2_frame_hd *hd,
                                                 void *user_data);
# 1997 "/usr/local/include/nghttp2/nghttp2.h"
typedef ssize_t (*nghttp2_pack_extension_callback)(nghttp2_session *session,
                                                   uint8_t *buf, size_t len,
                                                   const nghttp2_frame *frame,
                                                   void *user_data);
# 2027 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_error_callback)(nghttp2_session *session, const char *msg,
                                      size_t len, void *user_data);
# 2053 "/usr/local/include/nghttp2/nghttp2.h"
typedef int (*nghttp2_error_callback2)(nghttp2_session *session,
                                       int lib_error_code, const char *msg,
                                       size_t len, void *user_data);

struct nghttp2_session_callbacks;







typedef struct nghttp2_session_callbacks nghttp2_session_callbacks;
# 2084 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_callbacks_new(nghttp2_session_callbacks **callbacks_ptr);







 void
nghttp2_session_callbacks_del(nghttp2_session_callbacks *callbacks);
# 2104 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_send_callback(
    nghttp2_session_callbacks *cbs, nghttp2_send_callback send_callback);
# 2115 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_recv_callback(
    nghttp2_session_callbacks *cbs, nghttp2_recv_callback recv_callback);







 void nghttp2_session_callbacks_set_on_frame_recv_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_frame_recv_callback on_frame_recv_callback);
# 2135 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_session_callbacks_set_on_invalid_frame_recv_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_invalid_frame_recv_callback on_invalid_frame_recv_callback);







 void nghttp2_session_callbacks_set_on_data_chunk_recv_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_data_chunk_recv_callback on_data_chunk_recv_callback);






 void nghttp2_session_callbacks_set_before_frame_send_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_before_frame_send_callback before_frame_send_callback);






 void nghttp2_session_callbacks_set_on_frame_send_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_frame_send_callback on_frame_send_callback);







 void nghttp2_session_callbacks_set_on_frame_not_send_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_frame_not_send_callback on_frame_not_send_callback);






 void nghttp2_session_callbacks_set_on_stream_close_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_stream_close_callback on_stream_close_callback);







 void nghttp2_session_callbacks_set_on_begin_headers_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_begin_headers_callback on_begin_headers_callback);
# 2206 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_on_header_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_header_callback on_header_callback);







 void nghttp2_session_callbacks_set_on_header_callback2(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_header_callback2 on_header_callback2);
# 2229 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_on_invalid_header_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_invalid_header_callback on_invalid_header_callback);







 void nghttp2_session_callbacks_set_on_invalid_header_callback2(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_invalid_header_callback2 on_invalid_header_callback2);
# 2250 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_select_padding_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_select_padding_callback select_padding_callback);







 void
nghttp2_session_callbacks_set_data_source_read_length_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_data_source_read_length_callback data_source_read_length_callback);






 void nghttp2_session_callbacks_set_on_begin_frame_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_begin_frame_callback on_begin_frame_callback);
# 2281 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_send_data_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_send_data_callback send_data_callback);







 void nghttp2_session_callbacks_set_pack_extension_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_pack_extension_callback pack_extension_callback);







 void nghttp2_session_callbacks_set_unpack_extension_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_unpack_extension_callback unpack_extension_callback);







 void
nghttp2_session_callbacks_set_on_extension_chunk_recv_callback(
    nghttp2_session_callbacks *cbs,
    nghttp2_on_extension_chunk_recv_callback on_extension_chunk_recv_callback);
# 2329 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_error_callback(
    nghttp2_session_callbacks *cbs, nghttp2_error_callback error_callback);
# 2342 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_callbacks_set_error_callback2(
    nghttp2_session_callbacks *cbs, nghttp2_error_callback2 error_callback2);







typedef void *(*nghttp2_malloc)(size_t size, void *mem_user_data);







typedef void (*nghttp2_free)(void *ptr, void *mem_user_data);







typedef void *(*nghttp2_calloc)(size_t nmemb, size_t size, void *mem_user_data);







typedef void *(*nghttp2_realloc)(void *ptr, size_t size, void *mem_user_data);
# 2416 "/usr/local/include/nghttp2/nghttp2.h"
typedef struct {




  void *mem_user_data;



  nghttp2_malloc malloc;



  nghttp2_free free;



  nghttp2_calloc calloc;



  nghttp2_realloc realloc;
} nghttp2_mem;

struct nghttp2_option;







typedef struct nghttp2_option nghttp2_option;
# 2464 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_option_new(nghttp2_option **option_ptr);







 void nghttp2_option_del(nghttp2_option *option);
# 2484 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_no_auto_window_update(nghttp2_option *option, int val);
# 2502 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_peer_max_concurrent_streams(nghttp2_option *option,
                                               uint32_t val);
# 2524 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_no_recv_client_magic(nghttp2_option *option, int val);
# 2540 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_option_set_no_http_messaging(nghttp2_option *option,
                                                         int val);
# 2558 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_max_reserved_remote_streams(nghttp2_option *option,
                                               uint32_t val);
# 2575 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_user_recv_extension_type(nghttp2_option *option,
                                            uint8_t type);
# 2595 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_builtin_recv_extension_type(nghttp2_option *option,
                                               uint8_t type);
# 2610 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_option_set_no_auto_ping_ack(nghttp2_option *option,
                                                        int val);
# 2624 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_max_send_header_block_length(nghttp2_option *option,
                                                size_t val);
# 2637 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_option_set_max_deflate_dynamic_table_size(nghttp2_option *option,
                                                  size_t val);
# 2648 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_option_set_no_closed_streams(nghttp2_option *option,
                                                         int val);
# 2659 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_option_set_max_outbound_ack(nghttp2_option *option,
                                                        size_t val);
# 2683 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_client_new(nghttp2_session **session_ptr,
                           const nghttp2_session_callbacks *callbacks,
                           void *user_data);
# 2709 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_server_new(nghttp2_session **session_ptr,
                           const nghttp2_session_callbacks *callbacks,
                           void *user_data);
# 2735 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_client_new2(nghttp2_session **session_ptr,
                            const nghttp2_session_callbacks *callbacks,
                            void *user_data, const nghttp2_option *option);
# 2761 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_server_new2(nghttp2_session **session_ptr,
                            const nghttp2_session_callbacks *callbacks,
                            void *user_data, const nghttp2_option *option);
# 2787 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_client_new3(
    nghttp2_session **session_ptr, const nghttp2_session_callbacks *callbacks,
    void *user_data, const nghttp2_option *option, nghttp2_mem *mem);
# 2812 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_server_new3(
    nghttp2_session **session_ptr, const nghttp2_session_callbacks *callbacks,
    void *user_data, const nghttp2_option *option, nghttp2_mem *mem);







 void nghttp2_session_del(nghttp2_session *session);
# 2877 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_send(nghttp2_session *session);
# 2918 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_session_mem_send(nghttp2_session *session,
                                                const uint8_t **data_ptr);
# 2989 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_recv(nghttp2_session *session);
# 3028 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_session_mem_recv(nghttp2_session *session,
                                                const uint8_t *in,
                                                size_t inlen);
# 3046 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_resume_data(nghttp2_session *session,
                                               int32_t stream_id);
# 3059 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_want_read(nghttp2_session *session);
# 3071 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_want_write(nghttp2_session *session);
# 3085 "/usr/local/include/nghttp2/nghttp2.h"
 void *
nghttp2_session_get_stream_user_data(nghttp2_session *session,
                                     int32_t stream_id);
# 3107 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_set_stream_user_data(nghttp2_session *session,
                                     int32_t stream_id, void *stream_user_data);
# 3118 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_session_set_user_data(nghttp2_session *session,
                                                  void *user_data);







 size_t
nghttp2_session_get_outbound_queue_size(nghttp2_session *session);
# 3144 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_session_get_stream_effective_recv_data_length(
    nghttp2_session *session, int32_t stream_id);
# 3164 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_session_get_stream_effective_local_window_size(
    nghttp2_session *session, int32_t stream_id);
# 3179 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_session_get_stream_local_window_size(
    nghttp2_session *session, int32_t stream_id);
# 3196 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t
nghttp2_session_get_effective_recv_data_length(nghttp2_session *session);
# 3216 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t
nghttp2_session_get_effective_local_window_size(nghttp2_session *session);
# 3230 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t
nghttp2_session_get_local_window_size(nghttp2_session *session);
# 3247 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_session_get_stream_remote_window_size(
    nghttp2_session *session, int32_t stream_id);
# 3257 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t
nghttp2_session_get_remote_window_size(nghttp2_session *session);







 int
nghttp2_session_get_stream_local_close(nghttp2_session *session,
                                       int32_t stream_id);







 int
nghttp2_session_get_stream_remote_close(nghttp2_session *session,
                                        int32_t stream_id);







 size_t
nghttp2_session_get_hd_inflate_dynamic_table_size(nghttp2_session *session);







 size_t
nghttp2_session_get_hd_deflate_dynamic_table_size(nghttp2_session *session);
# 3324 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_terminate_session(nghttp2_session *session,
                                                     uint32_t error_code);
# 3353 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_terminate_session2(nghttp2_session *session,
                                                      int32_t last_stream_id,
                                                      uint32_t error_code);
# 3392 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_shutdown_notice(nghttp2_session *session);
# 3401 "/usr/local/include/nghttp2/nghttp2.h"
 uint32_t nghttp2_session_get_remote_settings(
    nghttp2_session *session, nghttp2_settings_id id);
# 3411 "/usr/local/include/nghttp2/nghttp2.h"
 uint32_t nghttp2_session_get_local_settings(
    nghttp2_session *session, nghttp2_settings_id id);
# 3430 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_set_next_stream_id(nghttp2_session *session,
                                                      int32_t next_stream_id);
# 3440 "/usr/local/include/nghttp2/nghttp2.h"
 uint32_t
nghttp2_session_get_next_stream_id(nghttp2_session *session);
# 3466 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_consume(nghttp2_session *session,
                                           int32_t stream_id, size_t size);
# 3485 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_consume_connection(nghttp2_session *session,
                                                      size_t size);
# 3506 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_consume_stream(nghttp2_session *session,
                                                  int32_t stream_id,
                                                  size_t size);
# 3539 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_change_stream_priority(nghttp2_session *session,
                                       int32_t stream_id,
                                       const nghttp2_priority_spec *pri_spec);
# 3585 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_create_idle_stream(nghttp2_session *session, int32_t stream_id,
                                   const nghttp2_priority_spec *pri_spec);
# 3636 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_upgrade(nghttp2_session *session,
                                           const uint8_t *settings_payload,
                                           size_t settings_payloadlen,
                                           void *stream_user_data);
# 3680 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_session_upgrade2(nghttp2_session *session,
                                            const uint8_t *settings_payload,
                                            size_t settings_payloadlen,
                                            int head_request,
                                            void *stream_user_data);
# 3707 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_pack_settings_payload(
    uint8_t *buf, size_t buflen, const nghttp2_settings_entry *iv, size_t niv);







 const char *nghttp2_strerror(int lib_error_code);
# 3726 "/usr/local/include/nghttp2/nghttp2.h"
 const char *nghttp2_http2_strerror(uint32_t error_code);
# 3738 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_priority_spec_init(nghttp2_priority_spec *pri_spec,
                                               int32_t stream_id,
                                               int32_t weight, int exclusive);
# 3749 "/usr/local/include/nghttp2/nghttp2.h"
 void
nghttp2_priority_spec_default_init(nghttp2_priority_spec *pri_spec);






 int
nghttp2_priority_spec_check_default(const nghttp2_priority_spec *pri_spec);
# 3836 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_submit_request(
    nghttp2_session *session, const nghttp2_priority_spec *pri_spec,
    const nghttp2_nv *nva, size_t nvlen, const nghttp2_data_provider *data_prd,
    void *stream_user_data);
# 3905 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_submit_response(nghttp2_session *session, int32_t stream_id,
                        const nghttp2_nv *nva, size_t nvlen,
                        const nghttp2_data_provider *data_prd);
# 3961 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_trailer(nghttp2_session *session,
                                          int32_t stream_id,
                                          const nghttp2_nv *nva, size_t nvlen);
# 4053 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_submit_headers(
    nghttp2_session *session, uint8_t flags, int32_t stream_id,
    const nghttp2_priority_spec *pri_spec, const nghttp2_nv *nva, size_t nvlen,
    void *stream_user_data);
# 4098 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_data(nghttp2_session *session, uint8_t flags,
                                       int32_t stream_id,
                                       const nghttp2_data_provider *data_prd);
# 4131 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_submit_priority(nghttp2_session *session, uint8_t flags,
                        int32_t stream_id,
                        const nghttp2_priority_spec *pri_spec);
# 4155 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_rst_stream(nghttp2_session *session,
                                             uint8_t flags, int32_t stream_id,
                                             uint32_t error_code);
# 4188 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_settings(nghttp2_session *session,
                                           uint8_t flags,
                                           const nghttp2_settings_entry *iv,
                                           size_t niv);
# 4264 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t nghttp2_submit_push_promise(
    nghttp2_session *session, uint8_t flags, int32_t stream_id,
    const nghttp2_nv *nva, size_t nvlen, void *promised_stream_user_data);
# 4293 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_ping(nghttp2_session *session, uint8_t flags,
                                       const uint8_t *opaque_data);
# 4341 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_goaway(nghttp2_session *session,
                                         uint8_t flags, int32_t last_stream_id,
                                         uint32_t error_code,
                                         const uint8_t *opaque_data,
                                         size_t opaque_data_len);
# 4358 "/usr/local/include/nghttp2/nghttp2.h"
 int32_t
nghttp2_session_get_last_proc_stream_id(nghttp2_session *session);
# 4376 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_check_request_allowed(nghttp2_session *session);






 int
nghttp2_session_check_server_session(nghttp2_session *session);
# 4425 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_window_update(nghttp2_session *session,
                                                uint8_t flags,
                                                int32_t stream_id,
                                                int32_t window_size_increment);
# 4464 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_session_set_local_window_size(nghttp2_session *session, uint8_t flags,
                                      int32_t stream_id, int32_t window_size);
# 4506 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_extension(nghttp2_session *session,
                                            uint8_t type, uint8_t flags,
                                            int32_t stream_id, void *payload);
# 4522 "/usr/local/include/nghttp2/nghttp2.h"
typedef struct {




  uint8_t *origin;



  size_t origin_len;




  uint8_t *field_value;



  size_t field_value_len;
} nghttp2_ext_altsvc;
# 4576 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_altsvc(nghttp2_session *session,
                                         uint8_t flags, int32_t stream_id,
                                         const uint8_t *origin,
                                         size_t origin_len,
                                         const uint8_t *field_value,
                                         size_t field_value_len);






typedef struct {




  uint8_t *origin;



  size_t origin_len;
} nghttp2_origin_entry;
# 4615 "/usr/local/include/nghttp2/nghttp2.h"
typedef struct {



  size_t nov;



  nghttp2_origin_entry *ov;
} nghttp2_ext_origin;
# 4653 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_submit_origin(nghttp2_session *session,
                                         uint8_t flags,
                                         const nghttp2_origin_entry *ov,
                                         size_t nov);
# 4667 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_nv_compare_name(const nghttp2_nv *lhs,
                                           const nghttp2_nv *rhs);
# 4728 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_select_next_protocol(unsigned char **out,
                                                unsigned char *outlen,
                                                const unsigned char *in,
                                                unsigned int inlen);
# 4742 "/usr/local/include/nghttp2/nghttp2.h"
 nghttp2_info *nghttp2_version(int least_version);







 int nghttp2_is_fatal(int lib_error_code);
# 4761 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_check_header_name(const uint8_t *name, size_t len);
# 4770 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_check_header_value(const uint8_t *value, size_t len);
# 4783 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_check_authority(const uint8_t *value, size_t len);



struct nghttp2_hd_deflater;






typedef struct nghttp2_hd_deflater nghttp2_hd_deflater;
# 4812 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_hd_deflate_new(nghttp2_hd_deflater **deflater_ptr,
                       size_t max_deflate_dynamic_table_size);
# 4831 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_hd_deflate_new2(nghttp2_hd_deflater **deflater_ptr,
                        size_t max_deflate_dynamic_table_size,
                        nghttp2_mem *mem);






 void nghttp2_hd_deflate_del(nghttp2_hd_deflater *deflater);
# 4866 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_hd_deflate_change_table_size(nghttp2_hd_deflater *deflater,
                                     size_t settings_max_dynamic_table_size);
# 4897 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_hd_deflate_hd(nghttp2_hd_deflater *deflater,
                                             uint8_t *buf, size_t buflen,
                                             const nghttp2_nv *nva,
                                             size_t nvlen);
# 4929 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_hd_deflate_hd_vec(nghttp2_hd_deflater *deflater,
                                                 const nghttp2_vec *vec,
                                                 size_t veclen,
                                                 const nghttp2_nv *nva,
                                                 size_t nvlen);







 size_t nghttp2_hd_deflate_bound(nghttp2_hd_deflater *deflater,
                                               const nghttp2_nv *nva,
                                               size_t nvlen);
# 4952 "/usr/local/include/nghttp2/nghttp2.h"

size_t nghttp2_hd_deflate_get_num_table_entries(nghttp2_hd_deflater *deflater);
# 4965 "/usr/local/include/nghttp2/nghttp2.h"

const nghttp2_nv *
nghttp2_hd_deflate_get_table_entry(nghttp2_hd_deflater *deflater, size_t idx);








size_t nghttp2_hd_deflate_get_dynamic_table_size(nghttp2_hd_deflater *deflater);







size_t
nghttp2_hd_deflate_get_max_dynamic_table_size(nghttp2_hd_deflater *deflater);

struct nghttp2_hd_inflater;






typedef struct nghttp2_hd_inflater nghttp2_hd_inflater;
# 5009 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_hd_inflate_new(nghttp2_hd_inflater **inflater_ptr);
# 5026 "/usr/local/include/nghttp2/nghttp2.h"
 int nghttp2_hd_inflate_new2(nghttp2_hd_inflater **inflater_ptr,
                                           nghttp2_mem *mem);






 void nghttp2_hd_inflate_del(nghttp2_hd_inflater *inflater);
# 5062 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_hd_inflate_change_table_size(nghttp2_hd_inflater *inflater,
                                     size_t settings_max_dynamic_table_size);






typedef enum {



  NGHTTP2_HD_INFLATE_NONE = 0,



  NGHTTP2_HD_INFLATE_FINAL = 0x01,



  NGHTTP2_HD_INFLATE_EMIT = 0x02
} nghttp2_hd_inflate_flag;
# 5167 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_hd_inflate_hd(nghttp2_hd_inflater *inflater,
                                             nghttp2_nv *nv_out,
                                             int *inflate_flags, uint8_t *in,
                                             size_t inlen, int in_final);
# 5253 "/usr/local/include/nghttp2/nghttp2.h"
 ssize_t nghttp2_hd_inflate_hd2(nghttp2_hd_inflater *inflater,
                                              nghttp2_nv *nv_out,
                                              int *inflate_flags,
                                              const uint8_t *in, size_t inlen,
                                              int in_final);
# 5267 "/usr/local/include/nghttp2/nghttp2.h"
 int
nghttp2_hd_inflate_end_headers(nghttp2_hd_inflater *inflater);
# 5277 "/usr/local/include/nghttp2/nghttp2.h"

size_t nghttp2_hd_inflate_get_num_table_entries(nghttp2_hd_inflater *inflater);
# 5290 "/usr/local/include/nghttp2/nghttp2.h"

const nghttp2_nv *
nghttp2_hd_inflate_get_table_entry(nghttp2_hd_inflater *inflater, size_t idx);








size_t nghttp2_hd_inflate_get_dynamic_table_size(nghttp2_hd_inflater *inflater);







size_t
nghttp2_hd_inflate_get_max_dynamic_table_size(nghttp2_hd_inflater *inflater);

struct nghttp2_stream;







typedef struct nghttp2_stream nghttp2_stream;
# 5335 "/usr/local/include/nghttp2/nghttp2.h"
 nghttp2_stream *
nghttp2_session_find_stream(nghttp2_session *session, int32_t stream_id);






typedef enum {



  NGHTTP2_STREAM_STATE_IDLE = 1,



  NGHTTP2_STREAM_STATE_OPEN,



  NGHTTP2_STREAM_STATE_RESERVED_LOCAL,



  NGHTTP2_STREAM_STATE_RESERVED_REMOTE,



  NGHTTP2_STREAM_STATE_HALF_CLOSED_LOCAL,



  NGHTTP2_STREAM_STATE_HALF_CLOSED_REMOTE,



  NGHTTP2_STREAM_STATE_CLOSED
} nghttp2_stream_proto_state;
# 5381 "/usr/local/include/nghttp2/nghttp2.h"
 nghttp2_stream_proto_state
nghttp2_stream_get_state(nghttp2_stream *stream);
# 5391 "/usr/local/include/nghttp2/nghttp2.h"
 nghttp2_stream *
nghttp2_session_get_root_stream(nghttp2_session *session);







 nghttp2_stream *
nghttp2_stream_get_parent(nghttp2_stream *stream);

 int32_t nghttp2_stream_get_stream_id(nghttp2_stream *stream);







 nghttp2_stream *
nghttp2_stream_get_next_sibling(nghttp2_stream *stream);







 nghttp2_stream *
nghttp2_stream_get_previous_sibling(nghttp2_stream *stream);







 nghttp2_stream *
nghttp2_stream_get_first_child(nghttp2_stream *stream);






 int32_t nghttp2_stream_get_weight(nghttp2_stream *stream);






 int32_t
nghttp2_stream_get_sum_dependency_weight(nghttp2_stream *stream);
# 5456 "/usr/local/include/nghttp2/nghttp2.h"
typedef void (*nghttp2_debug_vprintf_callback)(const char *format,
                                               va_list args);
# 5480 "/usr/local/include/nghttp2/nghttp2.h"
 void nghttp2_set_debug_vprintf_callback(
    nghttp2_debug_vprintf_callback debug_vprintf_callback);
