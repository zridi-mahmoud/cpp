/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:52:44 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 14:06:17 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "iter.hpp"
#include <iostream>

void printInts(int const &i)
{
    std::cout << i << std::endl;
}

void printStrings(std::string const &s)
{
    std::cout << s << std::endl;
}

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    iter(array, 5, printInts);

    std::string array2[5] = {"s1", "s2", "s3", "s4", "s5"};
    iter(array2, 5, printStrings);
    return 0;
}
