/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:42:12 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/28 23:24:16 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombieHo = zombieHorde(10, "mzridi");
    for (int i = 0; i < 10; i++)
    {
        zombieHo[i].announce();
    }
    delete [] zombieHo;
}