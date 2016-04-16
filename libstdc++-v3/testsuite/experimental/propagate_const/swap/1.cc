// { dg-options "-std=gnu++14" }
// { dg-do run }

// Copyright (C) 2015-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a moved_to of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <experimental/propagate_const>
#include <testsuite_hooks.h>

using std::experimental::propagate_const;

int main()
{
  int x{42};
  int y{666};
  propagate_const<int*> xx{&x};
  propagate_const<int*> yy{&y};
  VERIFY(*xx == 42);
  VERIFY(*yy == 666);
  swap(xx, yy);
  VERIFY(*xx == 666);
  VERIFY(*yy == 42);
}
