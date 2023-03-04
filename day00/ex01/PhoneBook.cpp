#include "PhoneBook.hpp"

int PhoneBook::getLastContactIndex()
{
    return lastContactIndex;
}

void PhoneBook::setLastContactIndex(int lastContactIndex)
{
    this->lastContactIndex = lastContactIndex;
}

Contact PhoneBook::getContact(int index)
{
    return contacts[index];
}

void PhoneBook::setContact(int index, Contact contact)
{
    contacts[index] = contact;
}

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

    std::string firstName, lastName, nickname, phone, darkestSecret;
    std::cout << "Enter first name: ";
    if(!std::getline(std::cin, firstName))
        exit(0);
    std::cout << "Enter last name: ";
    if(!std::getline(std::cin, lastName))
        exit(0);
    std::cout << "Enter nickname: ";
    if(!std::getline(std::cin, nickname))
        exit(0);
    std::cout << "Enter phone: ";
    if (!std::getline(std::cin, phone))
        exit(0);
    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, darkestSecret))
        exit(0);
    if (firstName.length() == 0 || lastName.length() == 0 || nickname.length() == 0 || phone.length() == 0 || darkestSecret.length() == 0)
        std::cout << "Invalid contact, all fields are required" << std::endl;
    contacts[++lastContactIndex % 8] = Contact(firstName, lastName, nickname, phone, darkestSecret);
}
void PhoneBook::printHeader(){
    std::cout << "|   Index  |";
    std::cout << "First Name|";
    std::cout << " Last Name|";
    std::cout << " Nickname |" << std::endl;
};

void PhoneBook::printContact(int index, bool darkestSecret){
    if (darkestSecret)
    {
        std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
        std::cout << "Phone: " << contacts[index].getPhone() << std::endl;
        std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
    }
    else{
        std::cout << "|"<< tenChars(std::to_string(index + 1)) << "|";
        std::cout << tenChars(contacts[index].getFirstName()) << "|";
        std::cout << tenChars(contacts[index].getLastName()) << "|";
        std::cout << tenChars(contacts[index].getNickname()) << "|" << std::endl;
        std::cout << std::endl;
    }
};
