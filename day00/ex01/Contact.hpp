/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:24:41 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/18 16:44:32 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phone;

    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone);
    ~Contact();
};

#endif