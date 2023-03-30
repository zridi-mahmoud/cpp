/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:47:03 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 22:12:15 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

int main()
{
    Data  data;
    data.x = 42;
    data.y = 21;
    uintptr_t raw = Serializer::serialize(&data);
    Data * deserialized = Serializer::deserialize(raw);
    std::cout << "x: " << deserialized->x << std::endl;
    std::cout << "y: " << deserialized->y << std::endl;
    return 0;
}
