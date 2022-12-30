/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:12:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/28 16:43:05 by zel-hach         ###   ########.fr       */
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
	Dog *d = new Dog();
	Animal *t;
	t = d;
	for(int i = 0;i<6;i++)
	{
		if (i<3)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}
 	std::cout << a->getType() << " " << std::endl;
	for(int i = 0; i < 6;i++)
		delete  meta[i];
	delete a;
	delete t;
 	return 0;
}