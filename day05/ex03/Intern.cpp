/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:35:25 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 13:22:11 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"


Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
    (void)src;
    *this = src;
}

Intern & Intern::operator=(Intern const & src)
{
    (void)src;
    return *this;
}

PresidentialPardonForm * Intern::presidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}

RobotomyRequestForm * Intern::robotomyRequest(std::string target)
{
    return new RobotomyRequestForm(target);
}

ShrubberyCreationForm * Intern::shrubberyCreation(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
    AForm * forms[3] = {this->presidentialPardon(target), this->robotomyRequest(target), this->shrubberyCreation(target)};
    std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    return NULL;
}

    
Intern::~Intern()
{
    
}
