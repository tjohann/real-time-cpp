///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2018.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

// chapter0a_13-003_tuple_get_by_type.cpp

#include <tuple>
#include <iostream>

using tuple_type = std::tuple<float, char, int>;

void do_something()
{
  // Make a tuple of a float, char and an int.
  tuple_type t(1.23F, char('a'), 456);

  // Get element of type float from tuple t.
  const float f = std::get<float>(t);

  // Get element of type char from t.
  const char c = std::get<char>(t);

  // Get element of type int from tuple t.
  const int n = std::get<int>(t);

  std::cout << f << std::endl;
  std::cout << c << std::endl;
  std::cout << n << std::endl;
}

int main()
{
  do_something();
}
