/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:35:09 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/09 11:34:52 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
        getline(std::cin,data);
        if (std :: cin.eof())
            exit(0);
        while(data.empty())
        {
            std :: cout << str[j];
            getline(std::cin,data);
            if (std :: cin.eof())
                exit(0);
        }
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
        j++;
    }
}

void afficher_contact(Contact *contact,int count)
{
    int j;
    std :: string str;
    std :: cout <<  std::setw(10) << "index" << "|"<< std::setw(10) << "first name" << "|" << std::setw(10) << "last name" <<"|" << std::setw(10) << "nickname"<< "|" << std::endl;
    for (j = 0 ;j < count - 1 ;j++)
    {
        std :: cout << std::setw(10) << j << "|" ;
        str = contact[j].getName();
        if (str.size() >= 10)
        {
            str.resize(9);
            str.push_back('.');
        }
        std :: cout << std::setw(10) << str << "|";
        str = contact[j].getLastname();
        if (str.size() >= 10)
        {
            str.resize(9);
            str.push_back('.');
        }
        std :: cout << std::setw(10) << str << "|";;
        str = contact[j].getNickname();
        if (str.size() >= 10)
        {
            str.resize(9);
            str.push_back('.');
        }
        std :: cout << std::setw(10) << str << "|";
        std :: cout << std::endl;
    }
   
}

void PhoneBook :: surchcontact(Contact *contact,int count)
{
    int j;
    std :: string index_return;
    afficher_contact(contact, count);
    std :: cout << "entrer l’index du contact que vous voulez afficher :" << std ::endl;
    getline(std :: cin ,index_return);
    if (std :: cin.eof())
        exit(0);
    std :: istringstream istr(index_return);
    if (istr >> j && j < count - 1 && j >= 0)
    {
        std :: cout << "index | first name | last name |nickname" << std::endl;
        std :: cout << j << "|" ;
        std :: cout << contact[j].getName();
        std :: cout << "|";
        std :: cout << contact[j].getLastname();
        std :: cout << "|";
        std :: cout << contact[j].getNickname();
           std :: cout << std :: endl;
    }
    else
        std :: cout << "l’index que vous avez entrer n’est pas Valide .";
}
PhoneBook :: ~PhoneBook()
{

}