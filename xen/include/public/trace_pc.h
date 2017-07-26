/******************************************************************************
 * trace_pc.h
 * 
 * Macros for program counter tracing hypercall.
 * 
 * Copyright (C) 2017 Felix Schmoll <eggi.innovations@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __XEN_PUBLIC_TRACE_PC_H__
#define __XEN_PUBLIC_TRACE_PC_H__

#if defined(__XEN__) || defined(__XEN_TOOLS__)

#define XEN_TRACE_PC_START 0
#define XEN_TRACE_PC_STOP 1

#endif /* defined(__XEN__) || defined(__XEN_TOOLS__) */

#endif /* __XEN_PUBLIC_TRACE_PC_H__ */
