#ifndef QUAN_STM32_USART_DETAIL_SETTING_TO_ACTIONS_SETTINGS_TO_ACTION_MACRO_HPP_INCLUDED
#define QUAN_STM32_USART_DETAIL_SETTING_TO_ACTIONS_SETTINGS_TO_ACTION_MACRO_HPP_INCLUDED
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

#include <quan/stm32/usart/detail/setting_to_actions_fwd.hpp>
#include <quan/stm32/detail/make_boolean_action.hpp>
#include <quan/meta/push_back.hpp>

#define QUAN_STM32_USART_SETTING_TO_ACTION(Struct, Register, Bit) \
   template <bool Value>\
   struct setting_to_actions< quan::stm32::usart:: Struct <Value> >{\
      template <typename ListOfActions,typename U> struct apply{\
         typedef typename quan::stm32::detail::make_boolean_action<\
            Value, typename U:: Register ## _type, Bit \
         >::type action_type;\
         typedef typename quan::meta::push_back<ListOfActions,action_type>::type type;\
      };\
   };

#endif // QUAN_STM32_USART_DETAIL_SETTING_TO_ACTIONS_SETTINGS_TO_ACTION_MACRO_HPP_INCLUDED
