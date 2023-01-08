/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialise.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:26:02 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/04 21:28:53 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALISE_HPP_
#define  _SERIALISE_HPP_

#include <iostream>
typedef struct t_data
{
	int i;
	char c;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
int main();
#endif