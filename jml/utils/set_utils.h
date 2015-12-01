/* set_utils.h                                                  -*- C++ -*-
   Jeremy Barnes, 1 February 2005
   Copyright (c) 2005 Jeremy Barnes.  All rights reserved.
     
   This file is part of "Jeremy's Machine Learning Library", copyright (c)
   1999-2005 Jeremy Barnes.
   
   This program is available under the GNU General Public License, the terms
   of which are given by the file "license.txt" in the top level directory of
   the source code distribution.  If this file is missing, you have no right
   to use the program; please contact the author.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.

   ---

   Helpful functions for dealing with sets.
*/

#ifndef __utils__set_utils_h__
#define __utils__set_utils_h__

#include <set>
#include <algorithm>
#include <iostream>

namespace std {

template<class T, class A>
std::ostream &
operator << (std::ostream & stream, const set<T, A> & s)
{
    stream << "[";
    for (typename set<T, A>::const_iterator it = s.begin(), end = s.end();
         it != end;  ++it)
        stream << " " << *it;
    return stream << " ]";
}

} // namespace std

#endif /* __utils__set_utils_h__ */
