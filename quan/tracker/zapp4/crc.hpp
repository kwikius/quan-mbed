#ifndef QUAN_TRACKER_ZAPP4_CRC_HPP_INCLUDED
#define QUAN_TRACKER_ZAPP4_CRC_HPP_INCLUDED

#include <quan/config.hpp>

namespace quan{ namespace tracker{ namespace zapp4{

// naive crc32 Ethernet algorithm
// todo verify against the stm32 hardware
   inline uint32_t crc32(uint32_t crc, uint32_t data)
   {
      crc = crc ^ data;
      for ( uint32_t i = 0U; i < static_cast<uint32_t>(32U); ++i){
         if (crc & (static_cast<uint32_t>(1U) << static_cast<uint32_t>(31U))){
            crc =  (crc << static_cast<uint32_t>(1U)) ^ static_cast<uint32_t>(0x4c11db7);
         }else{
            crc <<= static_cast<uint32_t>(1U);
         }
      }
      return crc;
   }

}}} // quan::tracker::zapp4

#endif // QUAN_TRACKER_ZAPP4_CRC_HPP_INCLUDED
