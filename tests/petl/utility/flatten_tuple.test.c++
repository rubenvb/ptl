/**
 * The MIT License (MIT)
 *
 * Copyright © 2019 Ruben Van Boxem
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 **/

#include "petl/test.h++"
#include "petl/utility/tuple_test_types.h++"

#include <petl/utility/flatten_tuple.h++>

using petl::utility::flatten_tuple;

static_assert(flatten_tuple(bare) == bare);
static_assert(flatten_tuple(bare_ref) == bare_ref);

static_assert(flatten_tuple(single) == bare);
static_assert(flatten_tuple(nested_simple) == bare);

static_assert(flatten_tuple(multiple) == multiple);
static_assert(flatten_tuple(nested_multiple) == multiple);

static_assert(flatten_tuple(multiply_nested) == std::make_tuple(bare, bare, bare, bare));

static_assert(flatten_tuple(mixed) == std::make_tuple(bare,
                                                      bare, bare,
                                                      bare, bare,
                                                      bare, bare, bare, bare));
