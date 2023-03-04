/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:45:41 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/04 15:22:22 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
private:
    int lastContactIndex;
    Contact contacts[8];
    std::string tenChars(std::string str);
public:
    PhoneBook();
    int getLastContactIndex();
    void setLastContactIndex(int lastContactIndex);
    Contact getContact(int index);
    void setContact(int index, Contact contact);
    void printHeader();
    void add();
    void printContact(int index, bool darkesSecret);
};

# endif