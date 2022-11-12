/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:33:40 by zel-hach          #+#    #+#             */
/*   Updated: 2022/11/12 20:33:41 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv)
{
	int	i;
	int j;
	char c;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				c = toupper(argv[i][j]);
				std :: cout << c;
				j++;
			}
			std :: cout << " ";
			i++;
		}
	}
	else 
		std :: cout <<"LOUD AND UNBEARABLE FEEDBACK NOISE" ;
	std :: cout << std:: endl;
	return (0);
}