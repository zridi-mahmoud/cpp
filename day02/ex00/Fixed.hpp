/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:15:00 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/05 22:47:25 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int					value;
        static const int	fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed & src);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed & operator=(const Fixed & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif