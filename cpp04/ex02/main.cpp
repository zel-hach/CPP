/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:12:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 23:44:13 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
Animal *a = new Dog();
 const Animal* meta[6];
//  const Animal* j = new Dog[5];
//  const Animal* i = new Cat[5];
for(int i = 0;i<6;i++)
	{
		if (i<3)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}
 std::cout << a->getType() << " " << std::endl;
//  std::cout << i->getType() << " " << std::endl;
//  i->makeSound();
//  j->makeSound();
//  meta->makeSound();
	for(int i = 0; i < 6;i++)
		delete  meta[i];
 return 0;
}