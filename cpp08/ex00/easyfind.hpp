/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:00:36 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/15 20:49:56 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP
#define _EASYFIND_HPP
#include <iostream>
#include <vector>
#include<exception>

template<typename T>
bool easyfind(T& container,int value)
{
	if(std::find(container.begin(),container.end(),value) != container.end())
	{
		std::cout << "value exist in container is:  "<< value << std::endl;
		return(true);
	}
	throw std::exception();
}

#endif