/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:46:58 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 18:07:47 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default"), gradeToSign(150), gradeToExecute(150)
{
    this->isSigned = false;
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->isSigned = false;
}

Form::Form(Form const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = src;
}

Form & Form::operator=(Form const & rhs)
{
    this->isSigned = rhs.isSigned;
    return (*this);
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSigned() const
{
    return (this->isSigned);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    else
        this->isSigned = true;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream & operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form name: " << rhs.getName() << std::endl;
    o << "Form grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "Form grade to execute: " << rhs.getGradeToExecute() << std::endl;
    o << "Form is signed: " << rhs.getSigned() << std::endl;
    return (o);
}
