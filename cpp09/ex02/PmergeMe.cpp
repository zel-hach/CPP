/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:47:20 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/16 15:30:57 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool is_digit(char* & str)
{
	int i = 0;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return(false);
		i++;
	}
	return(true);
}
int push_in_vector(int argc, char **argv, std::vector<int>& v)
{
	int num;
	int i;
	i = 1;
	while(i < argc)
	{
		num = atoi(argv[i]);
		if (num < 0)
			return(0);
		v.push_back(num);
		i++;
	}
	return (1);
}

int push_in_deque(int argc, char **argv,std::deque<int>& d)
{
	int num;
	int i;
	i = 1;
	while(i < argc)
	{
		num = atoi(argv[i]);
		if (num < 0)
			return(0);
		d.push_back(num);
		i++;
	}
	return (1);
}

int check_argv(int argc, char** argv)
{
	int i = 1;
	while(i < argc)
	{
		if (!is_digit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

void print_before(int argc, char **argv)
{
	int i = 1;

	std::cout << "before : " ;
	while(i < argc)
	{
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

void print_after(std::vector<int> & v)
{
	std::cout << "After : ";
	for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}