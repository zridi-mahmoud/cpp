/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:24:41 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/28 19:32:18 by mzridi           ###   ########.fr       */
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
    std::string darkestSecret;

    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string darkestSecret);
    ~Contact();
};

#endif