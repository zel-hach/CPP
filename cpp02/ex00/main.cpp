/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:16 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/16 17:22:25 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed	c;
	
	c = b;
	
	std :: cout << a.getRawBits() << std::endl;
	std :: cout << b.getRawBits() << std::endl;
	std :: cout << c.getRawBits() << std::endl;
	return (0);
}