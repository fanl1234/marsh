/*
 *  Copyright (C) 2013 to 2014 by Felipe Lavratti
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of
 *  this software and associated documentation files (the "Software"), to deal in the
 *  Software without restriction, including without limitation the rights to use,
 *  copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
 *  Software, and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 *  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 *  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 *  AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef NUMBER_H_
#define NUMBER_H_

#include "types.h"

bool charactere_is_null(char c);
bool charactere_is_hex(char c);
bool charactere_is_space(char c);
bool charactere_is_math_sig(char c);
bool charactere_is_printable(char c);
uint8_t charactere_hex_to_int(char c);
int32_t string_hex_to_int(const char* str);
void int_to_string(int32_t number, char * target, size_t size);

#define get_bigger(val1, val2) \
({ \
	typeof(val1) __1 = val1; typeof(val2) __2 = val2; \
    (__1 > __2 ? __1 : __2); \
})

#define get_smaller(val1, val2) \
({ \
	typeof(val1) __1 = val1; typeof(val2) __2 = val2; \
    (__1 < __2 ? __1 : __2); \
})

#define get_sig(val) \
({ \
	typeof(val) __v = val; \
    (__v > 0 ? 1 : -1); \
})

#define get_abs(val) \
({ \
	typeof(val) __v = val; \
    (__v > 0 ? __v : -__v); \
})

#endif /* NUMBER_H_ */
