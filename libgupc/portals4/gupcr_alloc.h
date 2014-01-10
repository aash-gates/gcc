/* Copyright (C) 2012-2014 Free Software Foundation, Inc.
   This file is part of the UPC runtime library.
   Written by Gary Funck <gary@intrepid.com>
   and Nenad Vukicevic <nenad@intrepid.com>

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/**
 * @file gupcr_alloc.h
 * GUPC Portals4 UPC dynamic shared memory allocation.
 */

#ifndef _GUPCR_ALLOC_H_
#define _GUPCR_ALLOC_H_ 1

extern void gupcr_alloc_init (upc_shared_ptr_t, size_t);

#ifndef __UPC__

extern upc_shared_ptr_t upc_global_alloc (size_t, size_t);
extern upc_shared_ptr_t upc_all_alloc (size_t, size_t);
extern upc_shared_ptr_t upc_local_alloc (size_t, size_t);
extern upc_shared_ptr_t upc_alloc (size_t);
extern void upc_free (upc_shared_ptr_t);

#endif /* !__UPC__ */

#endif /* gupcr_alloc.h */
