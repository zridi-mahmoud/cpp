#include "PhoneBook.hpp"

std::string PhoneBook::tenChars(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
    {
        int spaces = 10 - str.length();
        for (int i = 0; i < spaces; i++)
            str = " "+str;
        return str;
    }
}

PhoneBook::PhoneBook()
{
    lastContactIndex = -1;
};

void PhoneBook::add()
{

    std::string firstName, lastName, nickname, phone;
    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone: ";
    std::getline(std::cin, phone);
    if (firstName.length() == 0 || lastName.length() == 0 || nickname.length() == 0 || phone.length() == 0)
        std::cout << "Invalid contact, all fields are required" << std::endl;
    contacts[++lastContactIndex % 8] = Contact(firstName, lastName, nickname, phone);
}
void PhoneBook::printHeader(){
    std::cout << "|   Index  |";
    std::cout << "First Name|";
    std::cout << " Last Name|";
    std::cout << " Nickname |" << std::endl;
};

void PhoneBook::printContact(int index){
    std::cout << "|"<< tenChars(std::to_string(index)) << "|" << tenChars(contacts[index].firstName) << "|" << tenChars(contacts[index].lastName) << "|" << tenChars(contacts[index].nickname) << "|" << std::endl;
};
