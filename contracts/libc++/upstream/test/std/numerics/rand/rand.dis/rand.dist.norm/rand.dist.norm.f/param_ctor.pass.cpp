//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <random>

// template<class RealType = double>
// class fisher_f_distribution
// {
//     class param_type;

#include <random>
#include <limits>
#include <cassert>

int main()
{
    {
        typedef std::fisher_f_distribution<> D;
        typedef D::param_type param_type;
        param_type p;
        assert(p.m() == 1);
        assert(p.n() == 1);
    }
    {
        typedef std::fisher_f_distribution<> D;
        typedef D::param_type param_type;
        param_type p(10);
        assert(p.m() == 10);
        assert(p.n() == 1);
    }
    {
        typedef std::fisher_f_distribution<> D;
        typedef D::param_type param_type;
        param_type p(10, 5);
        assert(p.m() == 10);
        assert(p.n() == 5);
    }
}
