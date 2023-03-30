/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:07:05 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/07 22:13:18 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


#include <iostream>


class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        virtual ~WrongAnimal();
        WrongAnimal & operator=(WrongAnimal const & rhs);
        std::string getType() const;
        void makeSound() const;
};

#endif