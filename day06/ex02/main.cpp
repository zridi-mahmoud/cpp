/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:04:11 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 21:34:12 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    time_t t;
    
    int i = time(&t) % 3;
    if (i == 0)
        return (new A());
    else if (i == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{    
    Base *basePtr = dynamic_cast<A*>(p);
    if (basePtr)
    {
        std::cout << "the actual type of the object is : A" << std::endl;
        return;
    }
    basePtr = dynamic_cast<B*>(p);
    if (basePtr)
    {
        std::cout << "the actual type of the object is : B" << std::endl;
        return;
    }
    basePtr = dynamic_cast<C*>(p);
    if (basePtr)
    {
        std::cout << "the actual type of the object is : C" << std::endl;
        return;
    }
    
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "the actual type of the object is : A" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "the actual type of the object is : B" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "the actual type of the object is : C" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
}


int main()
{
    Base *basePtr = generate();
    identify(*basePtr);
    identify(basePtr);
    delete basePtr;
    return (0);
}

