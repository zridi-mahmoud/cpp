/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:31:51 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 13:05:30 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    // robotomy request
    Intern someRandomIntern;
    Bureaucrat bob("Bob", 1);
    AForm *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    bob.signForm(*rrf);
    bob.executeForm(*rrf);

    // shrubbery creation
    AForm *scf;
    scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    bob.signForm(*scf);
    bob.executeForm(*scf);
    
    // presidential pardon
    AForm *ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
    bob.signForm(*ppf);
    bob.executeForm(*ppf);
    
    return 0;
}
