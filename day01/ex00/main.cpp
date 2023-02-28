/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:41:07 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/28 22:47:58 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie = Zombie("mzridi");
    Zombie *zombie2 = newZombie("mahmoud");
    randomChump("zridi");
    delete zombie2;
}