/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:17:56 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 14:58:14 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat & operator=(Bureaucrat const & rhs);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif