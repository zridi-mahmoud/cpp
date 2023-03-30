/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:25:13 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 21:22:19 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>


class Span
{
    private:
        unsigned int n;
        std::vector<int> v;
        Span();
    public:
        Span(unsigned int n);
        Span(Span const &src);
        Span &operator=(Span const &rhs);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
        class FullException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NoSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        ~Span();
};

#endif