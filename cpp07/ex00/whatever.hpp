/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:32:47 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/08 15:48:31 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP
#define _WHATEVER_HPP
#include<iostream>

template<typename T>
T max(T x,T y)
{
	return(x>=y ?x : y);
}
template<typename T>
T min(T x,T y)
{
	return(x<=y ?x : y);
}
template<typename T>
void swap(T& x,T& y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

#endif
