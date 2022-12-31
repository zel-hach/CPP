/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:47 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 16:53:24 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
#include "Form.hpp"

#include <iostream>
class ShrubberyCreationForm : public Form{
    std :: string target;
public:
    ShrubberyCreationForm ();
    ShrubberyCreationForm (std :: string);
    ShrubberyCreationForm (const ShrubberyCreationForm &a);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);
    void action(void) const;
    ~ShrubberyCreationForm ();
};

#endif

