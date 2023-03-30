/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:31:51 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 23:53:47 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("mzridi", 1);
        ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("home");
        RobotomyRequestForm *robotomy = new RobotomyRequestForm("home");
        PresidentialPardonForm *presidential = new PresidentialPardonForm("home");
        bureaucrat->signForm(*shrubbery);
        bureaucrat->signForm(*robotomy);
        bureaucrat->signForm(*presidential);
        bureaucrat->executeForm(*shrubbery);
        bureaucrat->executeForm(*robotomy);
        bureaucrat->executeForm(*presidential);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("mzridi", 150);
        ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("home");
        RobotomyRequestForm *robotomy = new RobotomyRequestForm("home");
        PresidentialPardonForm *presidential = new PresidentialPardonForm("home");
        bureaucrat->signForm(*shrubbery);
        bureaucrat->signForm(*robotomy);
        bureaucrat->signForm(*presidential);
        bureaucrat->executeForm(*shrubbery);
        bureaucrat->executeForm(*robotomy);
        bureaucrat->executeForm(*presidential);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
