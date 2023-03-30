/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:32:30 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 22:39:07 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const &src) : std::stack<T>(src) {}
    MutantStack &operator=(MutantStack const &rhs)
    {
        std::stack<T>::operator=(rhs);
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator end()
    {
        return std::stack<T>::c.end();
    }
    ~MutantStack() {}
};

#endif