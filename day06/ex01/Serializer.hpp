/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:22:09 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 20:46:35 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>


struct Data
{
    int x;
    int y;
};

class Serializer        
{
    private:
        Serializer();
        Serializer(Serializer const & src);
        Serializer & operator=(Serializer const & rhs);
    public:
        static uintptr_t serialize(Data * ptr);
        static Data * deserialize(uintptr_t raw);
        ~Serializer();
};

#endif