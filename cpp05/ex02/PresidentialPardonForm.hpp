/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:02 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/30 23:01:23 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>

class PresidentialPardonForm{
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (const PresidentialPardonForm &a);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
    ~PresidentialPardonForm ();
};

#endif

