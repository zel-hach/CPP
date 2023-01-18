/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:59:36 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/17 20:24:04 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
Span sp = Span(5);
	std::cout <<"exemple 1 :" << std::endl;
try
{
	sp.addNumber(2);
	sp.addNumber(1);
	sp.addNumber(5);
	sp.addNumber(11);
	sp.addNumber(7);
	sp.addNumber(99);
	sp.addNumber(13);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(std::exception& e){
	std::cout << e.what() << std::endl;
}
std::cout <<"exemple 2 :" << std::endl;
Span sp1 = Span(5);
try
{
sp1.addNumber(6);
sp1.addNumber(3);
sp1.addNumber(17);
sp1.addNumber(9);
sp1.addNumber(11);
std::cout << sp1.shortestSpan() << std::endl;
std::cout << sp1.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::vector<int> myvector;
srand(time(0));
for(int i = 0; i < 10 ; i++)
{
	myvector.push_back(rand());
}
Span s;
try
{
s.addNumbers(myvector.begin(), myvector.end());
std::cout << s.shortestSpan() << std::endl;
std::cout << s.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
return 0;
}