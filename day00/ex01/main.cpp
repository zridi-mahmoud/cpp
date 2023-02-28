#include <iostream>
#include "PhoneBook.hpp"


int main()
{
    PhoneBook phoneBook;
    while(1)
    {
        std::string command;
        std::cout << "Enter a command: ";
        if (!std::getline(std::cin, command))
            break;
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
                    phoneBook.printContact(i, false);
            }
            std::cout << "Enter index: ";
            int index;
            std::string indexStr;
            if (!std::getline(std::cin, indexStr))
                break;
            index = atoi(indexStr.c_str()) - 1;
            if (index >= 0 && index < 8 && phoneBook.contacts[index].firstName.length() > 0)
            {
                phoneBook.printHeader();
                phoneBook.printContact(index, true);
            }
            else
                std::cout << "Invalid index" << std::endl;
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
}