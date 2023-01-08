/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:07:55 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/08 19:38:23 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP
#define _ITER_HPP

#include <iostream>
template <typename T>
void fun(const T& t)
{
	std::cout << *t << std::endl;
}
template <typename T>
void iter(T *tab,int size, void (*fun)(const T&))
{
	int i;
	
	i = 0;
	while(i < size)
	{
		fun(tab[i]);
		i++;
	}
}
#endif