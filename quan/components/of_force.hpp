#ifndef QUAN_OF_FORCE_HPP_INCLUDED
#define QUAN_OF_FORCE_HPP_INCLUDED
#if (defined _MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

/*
 Copyright (c) 2003-2019 Andy Little.

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

#include <quan/components/of_named_quantity.hpp>

namespace quan{ namespace meta{ namespace components{

    struct of_force{

        static const char* abstract_quantity_name()
        {
            return "force";
        }

        template<typename CharType>
        static const CharType* unprefixed_symbol();

        enum{
            extent = 1,
            prefix_offset = 0
        };

         typedef meta::dimension<
            quan::meta::dim_length<1> 
            ,quan::meta::dim_time<-2> 
            ,quan::meta::dim_mass<1> 
         > dimension;

        typedef meta::abstract_quantity<
            dimension,
            of_force
        > abstract_quantity;

        struct non_si_unit{
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<-5>,
                    meta::rational<1,1>::type,
                    quan::meta::int32<1>
                >
            > dyn;
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<0>,
                    meta::rational<196133,20000>::type,
                    quan::meta::int32<0>
                >
            > kgf;
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<3>,
                    meta::rational<2224111,500000>::type,
                    quan::meta::int32<0>
                >
            > kip;
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<-1>,
                    meta::rational<2780139,1000000>::type,
                    quan::meta::int32<0>
                >
            > ozf;
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<-1>,
                    meta::rational<27651,20000>::type,
                    quan::meta::int32<0>
                >
            > poundal;
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<0>,
                    meta::rational<2241111,500000>::type,
                    quan::meta::int32<0>
                >
            > lbf;
            typedef meta::unit<
                abstract_quantity,
                meta::conversion_factor<
                    meta::rational<3>,
                    meta::rational<8896443,1000000>::type,
                    quan::meta::int32<0>
                >
            > ton_force;
        };

        typedef  of_force type;

    };

    template<>
    inline
    const char*
    of_force::unprefixed_symbol<char>()
    {
        return "N";
    }

}}}//quan::meta::components
#endif
