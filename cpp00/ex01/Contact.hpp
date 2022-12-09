/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:10 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/09 11:13:22 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    std::string name;
    std::string Lastname;
    std::string nickname;
    std::string numberphone;
    std::string pwd;
    public:
        Contact();
        ~Contact();
        void setName(std::string Name);
        void setLastName(std::string LastName);
        void setNickname(std::string nickName);
        void setNumberPh(std::string Numberphone);
        void setPwd (std::string Pwd);
        std::string getName();
        std::string getLastname();
        std::string getNickname();
        std::string getNumberphone();
        std::string getPwd();
};

#endif