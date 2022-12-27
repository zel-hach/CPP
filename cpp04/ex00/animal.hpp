/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:12:19 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 18:08:29 by zel-hach         ###   ########.fr       */
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
		virtual void makeSound() const;
};

#endif