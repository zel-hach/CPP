/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:03 by zel-hach          #+#    #+#             */
/*   Updated: 2022/11/12 20:36:45 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
void Contact:: setName(std::string Name)
{
    this->name = Name;
}
void Contact:: setNickname(std::string nickName)
{
    this->nickname = nickName;
}
void Contact:: setLastName(std::string LastName)
{
    this->Lastname = LastName;
}
void Contact:: setNumberPh(std::string Numberphone)
{
    this->numberphone = Numberphone;
}
void Contact:: setPwd(std::string Pwd)
{
    this->pwd = Pwd;
}
std::string Contact:: getName()
{
    return (this->name);
}
std::string Contact:: getLastname()
{
    return (this->Lastname);
}
std::string Contact:: getNickname()
{
    return (this->nickname);
}
std::string Contact:: getNumberphone()
{
    return (this->numberphone);
}
std::string Contact:: getPwd()
{
    return (this->pwd);
}
Contact :: ~Contact()
{

}