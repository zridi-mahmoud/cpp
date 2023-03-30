/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:15:37 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 21:22:34 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span(unsigned int n) : n(n) {}

Span::Span(Span const &src) : n(src.n), v(src.v) {}

Span &Span::operator=(Span const &rhs)
{
    this->n = rhs.n;
    this->v = rhs.v;
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->v.size() == this->n)
        throw Span::FullException();
    this->v.push_back(n);
}

int Span::shortestSpan()
{
    if (this->v.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> tmp = this->v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 2; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return (min);
}

int Span::longestSpan()
{
    if (this->v.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int> tmp = this->v;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = start; it != end; it++)
    {
        this->addNumber(*it);
    }
}

Span::~Span() {}

const char *Span::FullException::what() const throw()
{
    return ("The container is full");
}

const char *Span::NoSpanException::what() const throw()
{
    return ("There is no span to find");
}
