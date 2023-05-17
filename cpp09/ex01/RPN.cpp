/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:10 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/16 12:36:41 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(char* & argv)
{
	std::string str(argv);
	if (str == "+" || str == "-" || str == "*" || str == "/" || str == "%")
		return(true);
	return(false);
}

bool is_digit(std::string & str)
{
	int i = 0;
	while(str[i])
	{
		if(isdigit(str[i]))
			return(true);
		i++;
	}
	return(false);
}
