/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:50:23 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 18:07:00 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP
#define _DOG_HPP
#include<iostream>
#include "animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();
		void makeSound() const;
};

#endif