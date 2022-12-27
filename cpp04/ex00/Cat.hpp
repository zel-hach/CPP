/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:49:36 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 18:06:56 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP
#define _CAT_HPP
#include<iostream>
#include "animal.hpp"


class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();
		void makeSound() const;
};

#endif