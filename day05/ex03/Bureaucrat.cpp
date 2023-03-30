/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:19:44 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 23:25:25 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default")
{
    std::cout << "Default constractor called of Bureaucrat" << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Copy constractor called of Bureaucrat" << std::endl;
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
    std::cout << "Assignation operator called of Bureaucrat" << std::endl;
    this->grade = rhs.grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << form.getName() << " signs " << this->name << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName() << " cannot sign " << this->name << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << form.getName() << " executes " << this->name << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName() << " cannot execute " << this->name << " because " << e.what() << std::endl;
    }
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called of Bureaucrat" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (o);
}