/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:07:55 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/08 22:27:57 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP
#define _ITER_HPP

#include <iostream>
template <typename T>
class Array{
	T *array;
	public:
		Array();
		Array(T *);
		Array(const Array&);
		Array Array(const Array&);
		~Array();
};
#endif