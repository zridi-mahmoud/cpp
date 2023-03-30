/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:34:34 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 13:21:37 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & src);
        ~Intern();
        PresidentialPardonForm * presidentialPardon(std::string target);
        RobotomyRequestForm * robotomyRequest(std::string target);
        ShrubberyCreationForm * shrubberyCreation(std::string target);
        AForm * makeForm(std::string formName, std::string target);
};

#endif