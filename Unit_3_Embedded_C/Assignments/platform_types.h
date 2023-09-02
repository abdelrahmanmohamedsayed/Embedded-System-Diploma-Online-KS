/*
 * platform_types.h
 *
 *  Created on: Aug 31, 2023
 *      Author: abdelrahman sayed
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
typedef   _Bool                      boolean;

typedef  signed char                 sint8;
typedef  unsigned char               uint8;
typedef  char                        char_t;
typedef  signed short                 sint16;
typedef  unsigned short              uint16;
typedef  signed int                  sint32;
typedef  unsigned int                uint32;
typedef  signed long long            sint64;
typedef unsigned long long           uint64;

typedef  volatile signed char        vint8_t;
typedef  volatile unsigned char      vuint8_t;

typedef  volatile signed short       vint16_t;
typedef  volatile unsigned short   vuint16_t;

typedef  volatile signed int       vint32_t;
typedef  volatile unsigned int     vuint32_t;

typedef  volatile signed long long vint64_t;
typedef volatile unsigned long long vuint64_t;

typedef float           float32;
typedef double          float64;

#endif /* PLATFORM_TYPES_H_ */
