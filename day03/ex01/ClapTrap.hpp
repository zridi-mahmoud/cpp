/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:02:47 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/06 23:32:04 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;
        std::string getName(void) const;
        void setName(std::string name);
        void setHitPoints(unsigned int value);
        void setEnergyPoints(unsigned int value);
        void setAttackDamage(unsigned int value);
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & src);
        ~ClapTrap();
        ClapTrap & operator=(const ClapTrap & rhs);
        virtual void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif