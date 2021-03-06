#ifndef QUAN_ENTROPY_HPP_INCLUDED
#define QUAN_ENTROPY_HPP_INCLUDED
#if (defined _MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

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

#include <quan/components/of_entropy.hpp>

namespace quan{

   struct of_entropy{

      struct yJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-24> >
      >{};

      struct zJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-21> >
      >{};

      struct aJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-18> >
      >{};

      struct fJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-15> >
      >{};

      struct pJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-12> >
      >{};

      struct nJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-9> >
      >{};

      struct uJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-6> >
      >{};

      struct mJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-3> >
      >{};

      struct cJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-2> >
      >{};

      struct dJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<-1> >
      >{};

      struct J_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<0> >
      >{};

      struct daJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<1> >
      >{};

      struct hJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<2> >
      >{};

      struct kJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<3> >
      >{};

      struct MJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<6> >
      >{};

      struct GJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<9> >
      >{};

      struct TJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<12> >
      >{};

      struct PJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<15> >
      >{};

      struct EJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<18> >
      >{};

      struct ZJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<21> >
      >{};

      struct YJ_per_K : quan::meta::unit<
         quan::meta::components::of_entropy::abstract_quantity,
         quan::meta::conversion_factor<quan::meta::rational<24> >
      >{};

   };

   template<
      typename Value_type
   >
   struct entropy_ : quan::meta::components::of_entropy{

      typedef quan::fixed_quantity<
         quan::of_entropy::yJ_per_K,
         Value_type
      > yJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::zJ_per_K,
         Value_type
      > zJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::aJ_per_K,
         Value_type
      > aJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::fJ_per_K,
         Value_type
      > fJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::pJ_per_K,
         Value_type
      > pJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::nJ_per_K,
         Value_type
      > nJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::uJ_per_K,
         Value_type
      > uJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::mJ_per_K,
         Value_type
      > mJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::cJ_per_K,
         Value_type
      > cJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::dJ_per_K,
         Value_type
      > dJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::J_per_K,
         Value_type
      > J_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::daJ_per_K,
         Value_type
      > daJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::hJ_per_K,
         Value_type
      > hJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::kJ_per_K,
         Value_type
      > kJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::MJ_per_K,
         Value_type
      > MJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::GJ_per_K,
         Value_type
      > GJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::TJ_per_K,
         Value_type
      > TJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::PJ_per_K,
         Value_type
      > PJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::EJ_per_K,
         Value_type
      > EJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::ZJ_per_K,
         Value_type
      > ZJ_per_K;

      typedef quan::fixed_quantity<
         quan::of_entropy::YJ_per_K,
         Value_type
      > YJ_per_K;

// non SI units...
    };

    struct entropy : entropy_<quantity_traits::default_value_type>{};

}//quan

#endif
