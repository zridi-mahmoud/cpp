/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:50:52 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 13:19:09 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
#include <random>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
    (void)src;
    *this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    (void)src;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{    
    if (this->getSigned() == false)
        std::cout << "Form is not signed" << std::endl;
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        srand((unsigned) time(NULL));
        std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->getName() << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->getName() << " has been robotomized unsuccessfully" << std::endl;
    }
}
