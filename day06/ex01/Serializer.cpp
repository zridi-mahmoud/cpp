/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:30:50 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/11 20:47:46 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const & src) {
    *this = src;
}

Serializer & Serializer::operator=(Serializer const & rhs) {
    (void)rhs;
    return *this;
}

uintptr_t Serializer::serialize(Data * ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data * Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

Serializer::~Serializer() {}