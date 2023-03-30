/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:43:47 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/06 23:29:49 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap created with default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "ClapTrap " << name << " created by copy" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return (hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return (energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return (attackDamage);
}

std::string ClapTrap::getName(void) const
{
    return (name);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(unsigned int value)
{
    hitPoints = value;
}

void ClapTrap::setEnergyPoints(unsigned int value)
{
    energyPoints = value;
}

void ClapTrap::setAttackDamage(unsigned int value)
{
    attackDamage = value;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (getEnergyPoints() == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy points left" << std::endl;
        return ;
    }
    setEnergyPoints(getEnergyPoints() - 1);
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
} 

void ClapTrap::takeDamage(unsigned int amount)
{
    setHitPoints(getHitPoints() - amount);
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    setHitPoints(getHitPoints() + amount);
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
    if (getEnergyPoints() == 0)
        return ;
    setEnergyPoints(getEnergyPoints() - 1);
}
