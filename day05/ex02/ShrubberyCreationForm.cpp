/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:32:40 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 23:48:26 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    (void)rhs;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        std::cout << "Form is not signed" << std::endl;
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    
        std::ofstream ofs(this->getName() + "_shrubbery");
        if (ofs.fail())
        {
            std::cout << "Error" << std::endl;
            return;        
        }
        ofs << "           ,@@@@@@@, " << std::endl;
        ofs << "    ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
        ofs << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
        ofs << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
        ofs << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl;
        ofs << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
        ofs << "`&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
        ofs << "    |o|        | |         | | " << std::endl;
        ofs << "    |.|        | |         | | " << std::endl;
        ofs << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;

        ofs.close();
    }
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

