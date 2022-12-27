/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:26:19 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 18:07:24 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
	this->type = "Dog";
	std ::cout << "default constractor Dog is called" << std::endl;
}
Dog :: Dog(const Dog& copy)
{
	this->type = copy.type;
	std ::cout << "copy constractor Dog is called" << std::endl;
}
Dog& Dog :: operator=(const Dog& a)
{
	this->type = a.type;
	std ::cout << "Dog: operator assignement  is called" << std::endl;
	return(*this);
}
Dog :: ~Dog()
{
	std ::cout << "destractor Dog is called" << std::endl;
}
void Dog :: makeSound() const
{
	std :: cout << "Dog sound is :how how" << std::endl;
}