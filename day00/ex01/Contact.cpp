/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:24:16 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/18 16:42:55 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
    this->firstName = "";
    this->lastName = "";
    this->nickname = "";
    this->phone = "";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phone = phone;
}

Contact::~Contact()
{
}
