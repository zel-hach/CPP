/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:35:09 by zel-hach          #+#    #+#             */
/*   Updated: 2022/11/12 21:37:35 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdio>

PhoneBook ::PhoneBook()
{

}
void PhoneBook :: addcontact(Contact *contact,int i)
{
    std ::string data;
    int j;
    std ::string str[5] = {"name :" , "lastname :", "nickname :", "number phone :" ,"mot de passe :"};
    j = 0;
    while (j < 5)
    {
        std :: cout << str[j];
        if (getline(std::cin,data) && !std :: cin.eof())
        {
            if (j == 0)
                contact[i].setName(data);
            if (j == 1)
                contact[i].setLastName(data);
            if (j == 2)
                contact[i].setNickname(data);;
            if (j == 3)
                contact[i].setNumberPh(data);
            if (j == 4)
                contact[i].setPwd(data);
        }
        else if (std :: cin.eof())
            exit(0); 
        j++;
    }
}
void PhoneBook :: surchcontact(Contact *contact,int count)
{
    int j;
    std :: string index_return;
    std :: cout << "index | first name | last name |nickname" << std::endl;
    for (j = 0 ;j < count - 1 ;j++)
    {
        std :: cout << j << " | " ;
        for (long unsigned int i = 0; i < contact[j].getName().size(); i++)
        {
            if (i < 9)
               std :: cout << contact[j].getName().at(i);
            else
            {
                std :: cout << ".";
                break;
            }
        }
        std :: cout << "|";
        for (long unsigned int i = 0; i < contact[j].getLastname().size(); i++)
        {
            if (i < 9)
               std :: cout << contact[j].getLastname().at(i);
            else
            {
                std :: cout << ".";
                break;
            }
        }
        std :: cout << "|";
        for (long unsigned int i = 0; i < contact[j].getNickname().size(); i++)
        {
            if (i < 9)
               std :: cout << contact[j].getNickname().at(i);
            else
            {
                std :: cout << ".";
                break;
            }
        }
        std :: cout << std::endl;
    }
        std :: cout << "entrer l’index du contact que vous voulez afficher :" << std ::endl;
        getline(std :: cin ,index_return);
        for (int j = 0; j < count - 1; j++)
        {
            std :: istringstream istr(index_return);
            if (istr >> j && j < count - 1)
            {
                std :: cout << "index | first name | last name |nickname" << std::endl;
                std :: cout << j << " | " ;
                std :: cout << contact[j].getName();
                std :: cout << "|";
                std :: cout << contact[j].getLastname();
                std :: cout << "|";
                std :: cout << contact[j].getNickname();
                std :: cout << std :: endl;
            }
            else
                std :: cout << "l’index que vous avez entrer n’est pas Valide .";
            break;
        }
    }
    PhoneBook :: ~PhoneBook()
    {

    }