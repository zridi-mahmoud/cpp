/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:22:55 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 08:41:43 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const & src);
        Animal & operator=(Animal const & rhs);
        virtual ~Animal();
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const;
};

#endif