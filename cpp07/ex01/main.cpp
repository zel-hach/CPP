/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:08:00 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/16 16:40:29 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

int main()
{
	int array[8];
	iter(array,4,fun);
	std::string array1[3] = {"sahar", "faiza", "zineb"};
	iter(array1,2,fun);
	int *t;
	t = NULL;
	iter(t,4,fun);
}