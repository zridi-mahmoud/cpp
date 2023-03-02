/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:53:02 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/02 19:53:03 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    
    int i = 1;
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (i < argc) {
        int j = 0;
        while (argv[i][j]) {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return 0;
}