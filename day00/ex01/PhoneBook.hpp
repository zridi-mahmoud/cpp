/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:45:41 by mzridi            #+#    #+#             */
/*   Updated: 2023/02/28 20:34:20 by mzridi           ###   ########.fr       */
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
    std::string tenChars(std::string str);
public:
    Contact contacts[8];
    PhoneBook();
    void add();
    void printHeader();
    void printContact(int index, bool darkesSecret);
};

# endif