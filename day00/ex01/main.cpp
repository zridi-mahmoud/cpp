#include <iostream>
#include "PhoneBook.hpp"


int main()
{
    PhoneBook phoneBook;
    while(1)
    {
        std::string command;
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            phoneBook.add();
        }
        else if (command == "SEARCH")
        {
            phoneBook.printHeader();
            for (int i = 0; i < 8; i++)
            {
                if (phoneBook.contacts[i].firstName.length() > 0)
                    phoneBook.printContact(i);
            }
            std::cout << "Enter index: ";
            int index;
            std::string indexStr;
            std::getline(std::cin, indexStr);
            index = std::stoi(indexStr);
            if (index >= 0 && index < 8 && phoneBook.contacts[index].firstName.length() > 0)
            {
                phoneBook.printContact(index);
            }
            else
                std::cout << "Invalid index" << std::endl;
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
}