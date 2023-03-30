/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:17:52 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/06 23:18:51 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("frag");
    frag.highFivesGuys();
    
    FragTrap frag2(frag);
    frag2.highFivesGuys();
    
    frag.attack("frag2");
    frag2.takeDamage(30);
    frag2.beRepaired(10);
    frag2.attack("frag");
    frag.takeDamage(30);
    frag.beRepaired(10);
    return (0);
}