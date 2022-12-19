/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:17 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/18 22:28:08 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main()
{
    std :: string str = "HI THIS IS BRAIN";
    std :: string  &stringREF = str;
    std :: string *stringPTR;
    stringPTR = &str;
    std :: cout << "L’adresse :" << std ::endl;
    std :: cout << &str << std ::endl;
    std :: cout << stringPTR << std :: endl;
    std :: cout << &stringREF << std :: endl;
    std :: cout << "la valeur :"  << std :: endl;
    std :: cout << str << std ::endl;
    std :: cout << *stringPTR << std :: endl;
    std :: cout << stringREF << std :: endl;
}