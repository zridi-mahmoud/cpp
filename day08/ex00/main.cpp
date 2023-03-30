/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:40:32 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 22:45:22 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<int> v;
    std::list<int> l;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    
    std::cout << "--------------Vector--------------" << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    try
    {
        std::vector<int>::iterator it = easyfind(v, 6);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    
    std::cout << "--------------List--------------" << std::endl;
    try
    {
        std::list<int>::iterator it = easyfind(l, 3);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    try
    {
        std::list<int>::iterator it = easyfind(l, 6);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    return (0);
}