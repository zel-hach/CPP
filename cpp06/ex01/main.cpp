/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:20:32 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/02 21:46:48 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct t_data
{
	int i;
	char c;
} Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t t;
	t = reinterpret_cast<uintptr_t>(ptr);
	return(t);
 }
 
Data* deserialize(uintptr_t raw)
{
	Data *d;
	
	d = reinterpret_cast<Data *>(raw);
	return(d);
}

int main()
{
	Data data;
	data.i = 1;
	data.c = 'a';
	uintptr_t t = serialize(&data);
	std ::cout << t << std::endl;
	Data *d;
	d = deserialize(t);
	std ::cout << d->i << std::endl;
	std ::cout << d->c << std::endl;
}