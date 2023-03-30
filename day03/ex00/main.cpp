/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:28:43 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/04 01:02:55 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("clap");
    clap.attack("target");
    clap.takeDamage(10);
    clap.beRepaired(10);
    std::cout << "hit points:" << clap.getHitPoints() << std::endl;
    std::cout << "energy points:" << clap.getEnergyPoints() << std::endl;
    std::cout << "attack damage:" << clap.getAttackDamage() << std::endl;
    
    return 0;
}