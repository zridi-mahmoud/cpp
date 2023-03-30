/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:15:00 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/03 21:18:37 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int					_value;
        static const int	_fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed & src);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed & operator=(const Fixed & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        bool operator>(Fixed const & rhs) const;
        bool operator<(Fixed const & rhs) const;
        bool operator>=(Fixed const & rhs) const;
        bool operator<=(Fixed const & rhs) const;
        bool operator==(Fixed const & rhs) const;
        bool operator!=(Fixed const & rhs) const;
        Fixed operator+(Fixed const & rhs) const;
        Fixed operator-(Fixed const & rhs) const;
        Fixed operator*(Fixed const & rhs) const;
        Fixed operator/(Fixed const & rhs) const;
        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif