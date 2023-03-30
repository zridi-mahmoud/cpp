/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:31:51 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/08 19:41:51 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("mzridi", 0);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat bureaucrat("mzridi", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat bureaucrat("mzridi", 2);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat bureaucrat("mzridi", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
