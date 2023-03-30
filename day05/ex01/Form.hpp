/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:46:50 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 13:30:37 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool isSigned;
        int const gradeToSign;
        int const gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const & src);
        Form & operator=(Form const & rhs);
        virtual ~Form();
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat & bureaucrat);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif