#ifndef __STD_IS_CONST_FUNCTION_HPP
#define __STD_IS_CONST_FUNCTION_HPP

#include "std_call_helper.hpp"

namespace std
{
    template<typename Callable, typename... Args>
    constexpr bool is_const_function = internal_worker::call_helper<Callable, Args...>::const_function;
}

#endif //__STD_HAS_VARYING_ARGUMENTS_HPP


