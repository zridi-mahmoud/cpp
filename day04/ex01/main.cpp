/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:30:19 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 09:07:01 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const int size = 10;
    const Animal *animals[size];
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();   
    }

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Dog a = Dog();
    Dog b = a;
    delete j;
    delete i;
    for (int i = 0; i < size; i++)
        delete animals[i];
    return 0;
}