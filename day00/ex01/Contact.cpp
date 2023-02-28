/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:24:16 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/28 19:32:08 by mzridi           ###   ########.fr       */
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
    this->darkestSecret = "";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string darkestSecret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phone = phone;
    this->darkestSecret = darkestSecret;
}

Contact::~Contact()
{
}
