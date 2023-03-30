/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:08:48 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/04 01:08:49 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _value = 0;
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::Fixed(const int value)
{
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    this->_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (this->_value / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}

bool Fixed::operator>(Fixed const &rhs) const
{
    return (this->_value > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return (this->_value < rhs.getRawBits());
}


bool Fixed::operator>=(Fixed const &rhs) const
{
    return (this->_value >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return (this->_value <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
    return (this->_value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return (this->_value != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return (this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}
