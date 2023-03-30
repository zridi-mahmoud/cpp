/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:51:07 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 14:02:01 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *array, int length, void (*f)(T const &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

#endif
