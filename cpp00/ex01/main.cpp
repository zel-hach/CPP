/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:18 by zel-hach          #+#    #+#             */
/*   Updated: 2022/11/12 21:38:33 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook ph1;
    int index;
    int count;
    std :: string command;

   index = 0;
   count = 1;
    while (1)
    {
        std::cout << "votre choix :";
        getline(std::cin, command);
        if (std::cin.eof())
            exit(0);
        if (command == "ADD")
        {
            if (count > 8)
               index = count % (index + 1);
            else
                count++;
            ph1.addcontact(ph1.contact,index);
            index++;
        }
        if (command =="SEARCH")
            ph1.surchcontact(ph1.contact , count);
        if (command =="EXIT")
            return(0);
        std :: cout << std :: endl;
    }
}