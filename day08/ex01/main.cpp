/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:30:32 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 21:30:38 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"


int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    Span span = Span(10000);
    try
    {
        std::cout << span.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error :" << e.what() << std::endl;
    }
    for( int i=0; i<10000;i++)
    {
        try
        {
           span.addNumber(i);        
        }
        catch (std::exception &e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    
    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;
    
    try
    {
        span.addNumber(2);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::vector<int> v ;
    for (int i=0; i <10; i++)
    {
        v.push_back(i+1);
    }
    v.push_back(100);
    std::vector<int>::iterator  start =  v.begin()+1;
    std::vector<int>::iterator  end =  v.end();
    Span sp2 = Span(10);
    
    sp2.addRange(start, end);
    
    std::cout << sp2.longestSpan() << std::endl;
    std::cout << sp2.shortestSpan() << std::endl;
    
}
