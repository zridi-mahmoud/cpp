/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:28:43 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/06 21:18:14 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("scav");
    scav.attack("target");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();
    std::cout << "hit points:" << scav.getHitPoints() << std::endl;
    std::cout << "energy points:" << scav.getEnergyPoints() << std::endl;
    std::cout << "attack damage:" << scav.getAttackDamage() << std::endl;
    
    return 0;
}