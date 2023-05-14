/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:05 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/11 15:46:06 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <stack>
bool isOperator(char* & argv)
{
	std::string str(argv);
	if (str == "+" || str == "-" || str == "*" || str == "/" || str == "%")
		return(true);
	return(false);
}
int main(int argc, char **argv)
{
	int i = 1;
	int num;
	char *token;
	std::stack<int> s;
	if (argc > 1)
	{
		while (argv[i])
		{
			token = strtok(argv[i], " ");
			while (token != NULL)
			{
				if (std::istringstream(token) >> num)
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
	}
	else
		std::cout << "no arguments" << std::endl;
	std::cout << s.top() << std::endl;
	return(0);
}