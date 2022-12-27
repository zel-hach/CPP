/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:49:36 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 22:42:05 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP
#define _CAT_HPP
#include<iostream>
#include "animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	Brain *brain;
	public :
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		virtual ~Cat();
		void makeSound() const;
		const Brain* getBrain() const;
		void setBrain(Brain);
};

#endif