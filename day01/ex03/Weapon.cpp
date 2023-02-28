/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:35:45 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/28 23:51:00 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}


std::string const &Weapon::getType()
{
    const std::string &ref = this->type;
    return (ref);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}