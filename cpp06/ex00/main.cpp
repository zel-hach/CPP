/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:40:09 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/19 15:55:42 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void convert_char(char c)
{
	if(isdigit(c))
	{
		std ::cout <<"char: Non displayable "<< std::endl;
		std ::cout <<"int: " << static_cast<int>(c) - 48 << std::endl;
		std ::cout <<"float: "  << std::setprecision(1) << std::fixed << static_cast<float>(c) - 48 << "f"<< std::endl;
		std ::cout <<"double: "  << std::setprecision(1) << std::fixed << static_cast<double>(c) - 48 << std::endl;
	}
	else
	{
		std ::cout <<"char: '"<< c << "'" << std::endl;
		std ::cout <<"int: " << static_cast<int>(c) << std::endl;
		std ::cout <<"float: "  << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f"<< std::endl;
		std ::cout <<"double: "  << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
	}
}
void convert_int(int i)
{
	if (isprint(i))
		std ::cout <<"char: '"<< static_cast<char>(i) <<"'"<< std::endl;
	else
		std ::cout <<"char: Non displayable"<< std::endl;
	std ::cout <<"int: " << i << std::endl;
	std ::cout <<"float: "  << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f"<< std::endl;
	std ::cout <<"double: " << static_cast<double>(i) << std::endl;
}
void convert_float(float f)
{
	if (isprint(f))
		std ::cout <<"char: '"<< static_cast<char>(f) << "'"<< std::endl;
	else
		std ::cout <<"char: Non displayable "<< std::endl;
	std ::cout <<"int: " << static_cast<int>(f) << std::endl;
	if (static_cast<int>(f)%2 == 0)
		std ::cout <<"float: "  << std::setprecision(1) << std::fixed << f << "f"<< std::endl;
	else 
		std ::cout <<"float: " << f << "f"<< std::endl;
	if (static_cast<int>(f)%2 == 0)
		std ::cout <<"double: "  << std::setprecision(1) << std::fixed << static_cast<double>(f)<< std::endl;
	else 
		std ::cout <<"double: " << static_cast<double>(f) << std::endl;
}
void convert_double(double d)
{
	if (isprint(d))
		std ::cout <<"char: '"<< static_cast<char>(d) << "' "<<std::endl;
	else
		std ::cout <<"char: Non displayable"<< std::endl;
	std ::cout <<"int: " << static_cast<int>(d) << std::endl;
		if (static_cast<int>(d) % 2 == 0)
		std ::cout <<"float: "  << std::setprecision(1) << std::fixed << static_cast<float>(d) <<"f"<< std::endl;
	else 
		std ::cout <<"float: " << static_cast<float>(d) << "f"<< std::endl;
	if (static_cast<int>(d) % 2 == 0)
		std ::cout <<"double: "  << std::setprecision(1) << std::fixed << d << std::endl;
	else 
		std ::cout <<"double: " << d << std::endl;
}
int main(int argc, char **argv)
{
	size_t size;
	int i;
	float f;
	double d;
	std::string str_return;
	if(argc == 2)
	{
		str_return = argv[1];
		try
		{
			if (strlen(argv[1]) == 1)
				convert_char(argv[1][0]);
			else if(str_return == "-inff" || str_return == "+inff" || str_return == "nanf" || str_return == "-inf" ||  str_return == "+inf" || str_return == "nan" )
			{
				std ::cout <<"char: impossible " << std::endl;
				std ::cout <<"int: impossible" << std::endl;
				if (str_return == "-inf" || str_return == "+inf" || str_return == "nan")
					std ::cout <<"float: "  << str_return << "f" << std::endl;
				else
					std ::cout <<"float: "  << str_return << std::endl;
				std ::cout <<"double: "  << str_return << std::endl;
			}
			else if ((d = stod(str_return, &size)) && strlen(argv[1]) == size)
				convert_double(d);
			else if ((f = stof(str_return, &size)) && strlen(argv[1]) == size + 1 && argv[1][size] == 'f')
				convert_float(f);
			else if ((i = stoi(str_return, &size)) && strlen(argv[1]) == size)
				convert_int(i);
			else
				std::cout << "Could not convert this literal. Please enter a valid one." << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}
	else
		std::cout << "number of arguments greater or inferior than 2 " << std::endl;
}