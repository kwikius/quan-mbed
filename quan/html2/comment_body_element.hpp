#ifndef QUAN_HTML2_COMMENT_BODY_ELEMENT_HPP_INCLUDED
#define QUAN_HTML2_COMMENT_BODY_ELEMENT_HPP_INCLUDED
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

#include <quan/html2/body_content.hpp>

namespace quan { namespace html2{

   struct comment_element : body_content {
   
      comment_element(std::string * text_in) : m_pstr(text_in){}
      ~comment_element(){delete m_pstr;}
      std::ostream & output(std::ostream & os)const
      {
         os << "<!--";
         os << *m_pstr;
         os << "-->\n";
         return os;
      }
      std::string* m_pstr;
   };
}}


#endif // QUAN_HTML2_COMMENT_BODY_ELEMENT_HPP_INCLUDED
