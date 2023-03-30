/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:17:43 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 14:51:46 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Array.hpp"

int main(void)
{
    Array<int> array(5);
    for (unsigned int i = 0; i < array.size(); i++)
        array[i] = i;
    for (unsigned int i = 0; i < array.size(); i++)
        std::cout << array[i] << std::endl;
    std::cout << "Size: " << array.size() << std::endl;
    try
    {
        std::cout << array[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}