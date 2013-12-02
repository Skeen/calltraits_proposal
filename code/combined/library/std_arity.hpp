#ifndef __STD_ARITY_HPP
#define __STD_ARITY_HPP

#include "std_call_helper.hpp"

namespace std
{
    template<typename Callable, typename... Args>
    struct arity_integral : std::integral_constant<size_t, internal_worker::call_helper<Callable, Args...>::arity>
    {
    };

    template<typename Callable, typename... Args>
    constexpr size_t arity = internal_worker::call_helper<Callable, Args...>::arity;

    template<typename Callable, typename... Args>
    constexpr bool is_nullary = (arity<Callable, Args...> == 0);
    template<typename Callable, typename... Args>
    constexpr bool is_unary   = (arity<Callable, Args...> == 1);
    template<typename Callable, typename... Args>
    constexpr bool is_binary  = (arity<Callable, Args...> == 2);
    template<typename Callable, typename... Args>
    constexpr bool is_ternary = (arity<Callable, Args...> == 3);
}

#endif //__STD_ARITY_HPP
