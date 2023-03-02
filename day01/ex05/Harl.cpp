/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:21:55 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/03 00:55:19 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup "
              << "burger. I really do!"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
              << "enough bacon in my burger! If you did, I wouldn't be asking for more!"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
              << " years whereas you started working here since last month."
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

void Harl::wrongLevel(void)
{
    std::cout << "Error: wrong level" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::wrongLevel};
    std::string levels[4] = {"debug", "info", "warning", "error"};
    
    size_t i=0;
    for (; i < 4 && levels[i] != level; i++);
    (this->*ptr[i])();
}

Harl::~Harl()
{
}
