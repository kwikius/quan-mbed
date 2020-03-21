#ifndef QUAN_FUN_FUN_CONCEPTS_HPP_INCLUDED
#define QUAN_FUN_FUN_CONCEPTS_HPP_INCLUDED
/*
 Copyright (c) 2003-2014 Andy Little.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see http://www.gnu.org/licenses./
 */

#include <type_traits>

namespace quan{ namespace fun{

   template <typename Fun>
   struct is_fun : std::false_type{};

   template <typename Fun>
   struct num_args;

   template<typename Fun, int N>
   struct arg_mod;

   template <typename Fun>
   struct result_mod;

   template <typename Fun>
   struct returns_result;

}}//quan::fun

#endif