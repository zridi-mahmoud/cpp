/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:08:47 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 22:38:14 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(std::string value) : value(value) {
    this->intValue = 0;
    this->floatValue = 0;
    this->doubleValue = 0;
    this->charValue = 0;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {
    *this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs) {
    if (this != &rhs)
        this->value = rhs.value;
    return *this;
}


void ScalarConverter::toInt() {
    if (this->value.length() == 1 && (this->value[0] < '0' || this->value[0] > '9'))
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    std::string int_part;
    int i = 0;
    if (this->value == "-inff" || this->value == "+inff" || this->value == "nanf"
        || this->value == "-inf" || this->value == "+inf" || this->value == "nan")
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    while (this->value[i] && this->value[i] != '.' && this->value[i] != 'f')
    {
        int_part += this->value[i];
        i++;
    }
    std::cout << "int: ";
    try {
        this->intValue = std::stoi(int_part);
        if (this->intValue > std::numeric_limits<int>::max()) {
            std::cout << "Integer overflow!" << std::endl;
        } else {
            std::cout << this->intValue << std::endl;
        }
    } catch (std::out_of_range) {
        std::cout << "Invalid integer." << std::endl;
    }
}

void ScalarConverter::toFloat() {
    if (this->value.length() == 1 && (this->value[0] < '0' || this->value[0] > '9'))
    {
        std::cout << "float: impossible" << std::endl;
        return;
    }
    if (this->value == "-inff" || this->value == "+inff" || this->value == "nanf")
    {
        std::cout << "float: " << this->value << std::endl;
        return;
    }
    if (this->value == "-inf" || this->value == "+inf" || this->value == "nan")
    {
        std::cout << "float: " << this->value << "f" << std::endl;
        return;
    }
    try
    {
        this->floatValue = std::stof(this->value);
        std::cout << "float: " << this->floatValue;
        if (this->floatValue - (int)this->floatValue == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch (std::out_of_range)
    {
        std::cout << "float: invalid float" << std::endl;
    }
}

void ScalarConverter::toDouble() {

    if (this->value.length() == 1 && (this->value[0] < '0' || this->value[0] > '9'))
    {
        std::cout << "double: impossible" << std::endl;
        return;
    }
    if (this->value == "-inff" || this->value == "+inff" || this->value == "nanf")
    {
        std::cout << "double: " << this->value.substr(0, this->value.length() - 1) << std::endl;
        return;
    }
    if (this->value == "-inf" || this->value == "+inf" || this->value == "nan")
    {
        std::cout << "double: " << this->value << std::endl;
        return;
    }
    try
    {
        this->doubleValue = std::stod(this->value);
        std::cout << "doubles: " << this->doubleValue;
        if (this->doubleValue - (int)this->doubleValue == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch (std::out_of_range)
    {
        std::cout << "double: invalid double" << std::endl;
    }
}
    


void ScalarConverter::toChar() {
    if (this->value.length() == 1 && (this->value[0] < '0' || this->value[0] > '9'))
    {
        std::cout << "char: '" << this->value[0] << "'" << std::endl;
        this->charValue = this->value[0];
        return;
    }
    if (this->value == "-inff" || this->value == "+inff" || this->value == "nanf"
        || this->value == "-inf" || this->value == "+inf" || this->value == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    std::string int_part;
    int i = 0;
    while (this->value[i] && this->value[i] != '.' && this->value[i] != 'f')
    {
        int_part += this->value[i];
        i++;
    }
    int ascii;
    try 
    {
        ascii = std::stoi(int_part);
    }
    catch (std::out_of_range)
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    if (ascii < 0 || ascii > 127)
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    if (ascii >= 32 && ascii <= 126)
    {
        std::cout << "char: '" << static_cast<char>(ascii) << "'" << std::endl;
        this->charValue = static_cast<char>(ascii);
    }
    else
        std::cout << "char: Non displayable" << std::endl;
}

bool ScalarConverter::check() {
    int chars = 0;
    int dots = 0;
    int signs = 0;
    int i = 0;
    int digits = 0;
    if (this->value == "-inff" || this->value == "+inff" || this->value == "nanf"
        || this->value == "-inf" || this->value == "+inf" || this->value == "nan")
        return true;
    while (this->value[i])
    {
        if (this->value[i] == '.')
            dots++;
        else if (this->value[i] == '+' || this->value[i] == '-')
            signs++;
        else if (this->value[i] < '0' || this->value[i] > '9')
            chars++;
        else
            digits++;
        i++;
    }
    if (this->value.length() != 1)
    {
        if (chars > 1 || dots > 1 || signs > 1 || digits == 0)
            return false;
        if (chars == 1 && this->value[this->value.length() - 1] != 'f')
            return false;
        if (signs == 1 && this->value[0] != '-' && this->value[0] != '+')
            return false;
        if (dots == 1 && this->value[0] == '.')
            this->value = "0" + this->value;
        if (this->value.length() > 1 && this->value[this->value.length() - 1] == 'f'
            && this->value[this->value.length() - 2] == '.')
            this->value = this->value.substr(0, this->value.length() - 1) + "0f";
    }
    
    return true;
}

void ScalarConverter::convert() {
    if(this->check())
    {
        this->toChar();
        this->toInt();
        this->toFloat();
        this->toDouble();    
    }
    else
        std::cout << "Invalid input" << std::endl;
}   

ScalarConverter::~ScalarConverter() {}
