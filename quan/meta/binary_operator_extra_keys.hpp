#ifndef QUAN_GENERIC_BINARY_OPERATOR_EXTRA_KEYS_HPP_INCLUDED
#define QUAN_GENERIC_BINARY_OPERATOR_EXTRA_KEYS_HPP_INCLUDED
#if (defined _MSC_VER) && (_MSC_VER >= 1200)
#  pragma once
#endif

 /*
 Copyright (c) 2005-2013 Andy Little 

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
/*
    operator keys for use with binary_operation 
*/
#include <quan/config.hpp>

namespace quan{ namespace meta{

    struct plus;
    struct minus;
    struct times;
    struct divides;
    struct modulus;
    struct div;

    struct logical_or;
    struct logical_and;

    struct equal_to;
    struct not_equal_to;

    struct greater;
    struct greater_equal;
    struct less_equal;
    struct less;

    struct pow;

    struct equals;
    struct plus_equals;
    struct minus_equals;
    struct times_equals;
    struct divide_equals;
    struct modulus_equals;
    struct shift_left_equals;
    struct shift_right_equals;
    struct or_equals;
    struct and_equals;
    struct xor_equals;

    struct bit_or;
    struct bit_xor;
    struct bit_and;
    struct shift_left;
    struct shift_right;
    
       
}}//quan::meta

#endif

