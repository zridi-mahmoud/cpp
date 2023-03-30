/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:48:55 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 14:01:20 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>

T max(T &a, T &b)
{
    return (a > b ? a : b);
}

#endif
