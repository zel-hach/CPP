/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:05 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/16 13:52:04 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	int i = 1;
	std::string str;
	int num;
	char *token;
	std::stack<int> s;
	if (argc == 1)
	{
		while (argv[i])
		{
			token = strtok(argv[i], " ");
			if (token == NULL)
				return 0;
			while (token != NULL)
			{
				std::string str(token);
				num = atoi(str.c_str());
				if (str.length() == 1 && !isOperator(token) && is_digit(str))
					s.push(num);
				else if (isOperator(token))
				{
					if (s.size() < 2)
					{
						std::cout << "not enough numbers" << std::endl;
						return(0);
					}
					int a = s.top();
					s.pop();
					int b = s.top();
					s.pop();
					if (token[0] == '+')
						s.push(b + a);
					else if (token[0] == '-')
						s.push(b - a);
					else if (token[0] == '*')
						s.push(b * a);
					else if (token[0] == '/')
						s.push(b / a);
					else if (token[0] == '%')
						s.push(b % a);
				}
				else
				{
					std::cout << "invalid input" << std::endl;
					return(0);
				}
				token = strtok(NULL, " ");
			}
			i++;
		}
		std::cout << s.top() << std::endl;
	}
	else
		std::cout << "no arguments or too many arguments" << std::endl;
	return(0);
}