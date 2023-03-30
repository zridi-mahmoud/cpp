/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:48:25 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/08 16:54:24 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created with default constructor" << std::endl;
}

Brain::Brain(Brain const & src)
{
    *this = src;
    std::cout << "Brain created by copy" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}

std::string * Brain::getIdeas()
{
    return (this->ideas);
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}