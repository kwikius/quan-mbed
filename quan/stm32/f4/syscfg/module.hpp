#ifndef QUAN_STM32_F4_SYSCONFIG_MODULE_HPP_INCLUDED
#define QUAN_STM32_F4_SYSCONFIG_MODULE_HPP_INCLUDED
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

#ifndef QUAN_STM32F4
#error dont include directly
#endif

#include <quan/stm32/f4/periph_map.hpp>
#include <quan/stm32/periph_reg.hpp>
//#include <quan/meta/type_sequence.hpp>

namespace quan{ namespace stm32 {

   struct syscfg {
      typedef uint32_t value_type;
      typedef syscfg type;
      static constexpr uint32_t address = quan::stm32::periph_map::syscfg;

      typedef quan::stm32::periph_reg<type,0x00> memrmp_type;
      typedef quan::stm32::periph_reg<type,0x04> pmc_type;
 // use array for exti
      typedef quan::stm32::periph_reg<type,0x20> cmpcr_type;

      memrmp_type mem_rmp;
      pmc_type pmc;
      volatile uint32_t exticr[4];
  private:
      volatile uint32_t padding[2];
  public:
      cmpcr_type cmpcr;
      
      static constexpr syscfg* get(){ return reinterpret_cast<syscfg*>(address);}
      
  private:
      syscfg() = delete;
      syscfg(syscfg const &) = delete;
      syscfg& operator = (syscfg const & ) = delete; 
   };

}}// quan::stm32

#endif // QUAN_STM32_F4_SYSCONFIG_MODULE_HPP_INCLUDED
