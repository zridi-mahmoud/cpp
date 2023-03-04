/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:24:41 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/04 15:12:01 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phone;
    std::string darkestSecret;
public:
    Contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhone();
    std::string getDarkestSecret();
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setPhone(std::string phone);
    void setDarkestSecret(std::string darkestSecret);
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string darkestSecret);
    ~Contact();
};

#endif