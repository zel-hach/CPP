/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:01:15 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/15 20:47:40 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
	std::vector<int> myVec;
	for(int i = 0 ; i < 10;i++)
	{
		myVec.push_back(i);
	}
	try{

		easyfind(myVec,2);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}