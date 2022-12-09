/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:13:38 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/09 11:37:07 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    public :
        Contact contact[8];
        PhoneBook();
        ~PhoneBook();
        void addcontact(Contact*,int );
        void surchcontact(Contact*,int);
};
void afficher_contact(Contact*, int);

#endif