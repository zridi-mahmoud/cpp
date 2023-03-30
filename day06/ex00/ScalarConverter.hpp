/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:05:30 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 19:30:48 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
    private:
        std::string value;
        int intValue;
        float floatValue;
        double doubleValue;
        char charValue;
        ScalarConverter();
        void toChar();
        void toInt();
        void toFloat();
        void toDouble();
        bool check();
    public:
        ScalarConverter(std::string value);
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        ScalarConverter & operator=(ScalarConverter const & rhs);
        void convert();
};

#endif