/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:30:26 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 23:39:44 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("default"), gradeToSign(150), gradeToExecute(150)
{
    this->isSigned = false;
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "AForm constructor called" << std::endl;
if (gradeToSign < 1 || gradeToExecute < 1)                  
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->isSigned = false;
}

AForm::AForm(AForm const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = src;
}

AForm & AForm::operator=(AForm const & rhs)
{
    this->isSigned = rhs.isSigned;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getSigned() const
{
    return (this->isSigned);
}

int AForm::getGradeToSign() const
{
    return (this->gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->isSigned = true;
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream & operator<<(std::ostream &o, AForm const &rhs)
{
    o << "AForm name: " << rhs.getName() << std::endl;
    o << "AForm grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "AForm grade to execute: " << rhs.getGradeToExecute() << std::endl;
    o << "AForm is signed: " << rhs.getSigned() << std::endl;
    return (o);
}
