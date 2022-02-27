/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2012 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/

#ifndef _SDL_config_h
#define _SDL_config_h

#include "SDL_platform.h"

/* This is the minimal configuration that can be used to build SDL */

#include <stdarg.h>
#include <stddef.h>

#define SDL_HAS_64BIT_TYPE	1

/* Enable the libretro audio driver (src/libretro/libretro/\*.c) */
#define SDL_AUDIO_DRIVER_LIBRETRO	1

/* Enable the stub cdrom driver (src/cdrom/dummy/\*.c) */
#define SDL_CDROM_DISABLED	1

/* Enable the libretro joystick driver (src/joystick/libretro/\*.c) */
#define SDL_JOYSTICK_LIBRETRO	1

/* Enable the stub shared object loader (src/loadso/dummy/\*.c) */
#define SDL_LOADSO_DISABLED	1

/* Enable the stub thread support (src/thread/generic/\*.c) */
#define SDL_THREADS_DISABLED	1

/* Enable the libretro timer support (src/timer/libretro/\*.c) */
#define SDL_TIMER_LIBRETRO	1

/* Enable the dummy video driver (src/video/dummy/\*.c) */
#define SDL_VIDEO_DRIVER_DUMMY	1

#define STDC_HEADERS    1
#define HAVE_ALLOCA_H       1
#define HAVE_CTYPE_H    1
#define HAVE_INTTYPES_H 1
#define HAVE_LIMITS_H   1
#define HAVE_MATH_H 1
//#define HAVE_SIGNAL_H 1
#define HAVE_STDINT_H   1
//#define HAVE_STDIO_H    1
#define HAVE_STRING_H   1
#define HAVE_SYS_TYPES_H    1
#define HAVE_LIBC	1

/* C library functions */
#define HAVE_MALLOC 1
#define HAVE_CALLOC 1
#define HAVE_REALLOC    1
#define HAVE_FREE   1
#define HAVE_ALLOCA 1
//#define HAVE_GETENV 1
//#define HAVE_SETENV 1
//#define HAVE_PUTENV 1
//#define HAVE_SETENV 1
//#define HAVE_UNSETENV   1
#define HAVE_QSORT  1
#define HAVE_ABS    1
#define HAVE_BCOPY  1
#define HAVE_MEMSET 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE    1
#define HAVE_MEMCMP 1
#define HAVE_STRLEN 1
#define HAVE_STRLCAT    1
#define HAVE_STRCHR 1
#define HAVE_STRRCHR    1
#define HAVE_STRSTR 1
#define HAVE_STRTOL 1
#define HAVE_STRTOUL    1
#define HAVE_STRTOLL    1
#define HAVE_STRTOULL   1
#define HAVE_STRTOD 1
#define HAVE_ATOI   1
#define HAVE_ATOF 1
#define HAVE_STRCMP 1
#define HAVE_STRNCMP    1
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_VSSCANF 1
#define HAVE_VSNPRINTF  1
#define HAVE_ACOS   1
#define HAVE_ACOSF  1
#define HAVE_ASIN   1
#define HAVE_ASINF  1
#define HAVE_ATAN   1
#define HAVE_ATANF  1
#define HAVE_ATAN2  1
#define HAVE_ATAN2F 1
#define HAVE_CEIL   1
#define HAVE_CEILF  1
#define HAVE_COPYSIGN   1
#define HAVE_COPYSIGNF  1
#define HAVE_COS    1
#define HAVE_COSF   1
#define HAVE_EXP    1
#define HAVE_EXPF   1
#define HAVE_FABS   1
#define HAVE_FABSF  1
#define HAVE_FLOOR  1
#define HAVE_FLOORF 1
#define HAVE_FMOD   1
#define HAVE_FMODF  1
#define HAVE_LOG    1
#define HAVE_LOGF   1
#define HAVE_LOG10  1
#define HAVE_LOG10F 1
#define HAVE_POW    1
#define HAVE_POWF   1
#define HAVE_SCALBN 1
#define HAVE_SCALBNF    1
#define HAVE_SIN    1
#define HAVE_SINF   1
#define HAVE_SQRT   1
#define HAVE_SQRTF  1
#define HAVE_TAN    1
#define HAVE_TANF   1
//#define HAVE_SIGACTION 1
#define HAVE_SETJMP 1
#define HAVE_NANOSLEEP  1
#define HAVE_SYSCONF    1
#define HAVE_CLOCK_GETTIME  1

#define SIZEOF_VOIDP 4

#endif /* _SDL_config_h */
