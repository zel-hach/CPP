/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:18:52 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/04 21:21:10 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP
#define _BASE_HPP

#include <iostream>
class Base{
	public:
		virtual ~Base();
};
class A :public Base
{
};
class B :public Base
{
};
class C :public Base
{
};

#endif