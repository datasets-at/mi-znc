/* include/znc/zncconfig.h.  Generated from zncconfig.h.in by configure.  */
/* include/znc/zncconfig.h.in.  Generated from configure.ac by autoheader.  */

#ifndef ZNCCONFIG_H
#define ZNCCONFIG_H

/* Use poll() instead of select() */
#define CSOCK_USE_POLL 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getphassphrase' function. */
/* #undef HAVE_GETPHASSPHRASE */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define if IPv6 support is enabled */
#define HAVE_IPV6 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `gnugetopt' library (-lgnugetopt). */
/* #undef HAVE_LIBGNUGETOPT */

/* Define if openssl is enabled */
#define HAVE_LIBSSL 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define if threaded DNS is enabled */
#define HAVE_THREADED_DNS 1

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 1

/* Define if zlib is available */
#define HAVE_ZLIB 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST const

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "znc"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "znc 1.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "znc"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define if ZNC should be runnable without installation */
/* #undef RUN_FROM_SOURCE */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Define for debugging */
/* #undef _DEBUG */

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Enable extra debugging checks in libstdc++ */
/* #undef _GLIBCXX_CONCEPT_CHECKS */

/* Enable extra debugging checks in libstdc++ */
/* #undef _GLIBCXX_DEBUG */

/* Enable extra debugging checks in libstdc++ */
/* #undef _GLIBCXX_DEBUG_PEDANTIC */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

#endif /* ZNCCONFIG_H */
