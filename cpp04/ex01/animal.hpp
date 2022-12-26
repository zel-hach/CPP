/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:12:19 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/26 20:23:13 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP
#include<iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string);
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		~Animal();
		std::string getType() const;
		void setType(std::string);
		void makeSound();
};

class Dog : public Animal
{
	public :
		Dog();
		Dog(std::string);
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();
		void makeSound();
};

class Cat : public Animal
{
	public :
		Cat();
		Cat(std::string);
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();
		void makeSound();
};

#endif