/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:12:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/28 16:59:50 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
 const Animal* meta = new Animal();
 const Animal* j = new Dog();
 const Animal* i = new Cat();
 std::cout << j->getType() << " " << std::endl;
 std::cout << i->getType() << " " << std::endl;
 i->makeSound();
 j->makeSound();
 meta->makeSound();

const WrongAnimal* m = new WrongAnimal();
const WrongAnimal* t = new WrongCat();
 std::cout << t->getType() << " " << std::endl;
 t->makeSound();
 m->makeSound();
 delete meta;
 delete j;
 delete i;
 delete m;
 delete t;
 return 0;
}