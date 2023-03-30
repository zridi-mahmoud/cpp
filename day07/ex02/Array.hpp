/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:14:39 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 14:30:08 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array() : _array(new T()), _size(0) {}
        Array(unsigned int n) : _array(new T[n]), _size(n) {}
        Array(Array const &src) : _array(new T[src._size]), _size(src._size) {
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = src._array[i];
        }
        Array &operator=(Array const &src) {
            if (this != &src)
            {
                delete [] _array;
                _array = new T[src._size];
                _size = src._size;
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = src._array[i];
            }
            return *this;
        }
        T &operator[](unsigned int i) {
            if (i >= _size)
                throw std::exception();
            return _array[i];
        }
        unsigned int size() const {
            return _size;
        }
        ~Array() {
            delete [] _array;
        }
};

#endif