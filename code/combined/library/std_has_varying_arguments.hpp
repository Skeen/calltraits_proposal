#ifndef __STD_HAS_VARYING_ARGUMENTS_HPP
#define __STD_HAS_VARYING_ARGUMENTS_HPP

#include "std_call_helper.hpp"

namespace std
{
    template<typename Callable, typename... Args>
    constexpr bool has_varying_arguments = internal_worker::call_helper<Callable, Args...>::varying;
}

#endif //__STD_HAS_VARYING_ARGUMENTS_HPP
