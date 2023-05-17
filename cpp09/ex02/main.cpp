/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:47:12 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/16 15:32:17 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	double duration_vector;
	double duration_deque;
	std::deque<int> d;
	std::vector<int> v;

	if (check_argv(argc,argv) == 0 || push_in_deque(argc,argv,d) == 0 || push_in_vector(argc,argv,v) == 0)
		std :: cout << "error" << std ::endl;
	else
	{
		print_before(argc, argv);
		std::clock_t start = std::clock();
		sort(v, 0, v.size() - 1);
		std::clock_t end = std::clock();
		std::clock_t start1 = std::clock();
		sort(v, 0, d.size() - 1);
		std::clock_t end1 = std::clock();
		print_after(v);
		duration_vector = (end - start) / (double)CLOCKS_PER_SEC * 1000;
		duration_deque = (end1 - start1) / (double)CLOCKS_PER_SEC * 1000;
		std::cout <<"Time to process a range of 5 elements with std:: vector: "<< duration_vector << "ms" << std::endl;
		std::cout <<"Time to process a range of 5 elements with std:: deque: "<< duration_deque << "ms" << std::endl;
	}
}