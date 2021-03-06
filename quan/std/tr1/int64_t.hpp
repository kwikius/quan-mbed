#ifndef QUAN_STD_TR1_INT64_HPP_INCLUDED
#define QUAN_STD_TR1_INT64_HPP_INCLUDED
/*
 Copyright (c) 2003 - 2013 Andy Little 

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program. If not, see <http://www.gnu.org/licenses/>
*/
#include <quan/config.hpp>

#ifdef QUAN_USE_QUAN_STD_TR1

#include <limits.h>

namespace std{ namespace tr1{

#if defined(QUAN_HAS_LONG_LONG)

#if ( INT_MAX == 9223372036854775807LL)
   typedef int int64_t;
#elif ( LONG_MAX == 9223372036854775807LL)
   typedef long int64_t;
#elif (LLONG_MAX == 9223372036854775807LL)
  typedef long long int64_t;
#else
#error no 64 bit int available for int64_t
#endif
#else
#error need to define int64 without long long type
#endif
}}

#else
#include <cstdint>
#endif
#endif