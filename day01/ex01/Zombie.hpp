/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:40:43 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/04 23:56:34 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        std::string getName();
        void setName(std::string name);
        Zombie(std::string name);
        ~Zombie();
        void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif