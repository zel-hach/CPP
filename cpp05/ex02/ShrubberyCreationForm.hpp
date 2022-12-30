/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:47 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/30 23:00:51 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include <iostream>
class ShrubberyCreationForm{
public:
    ShrubberyCreationForm ();
    ShrubberyCreationForm (const ShrubberyCreationForm &a);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);
    ~ShrubberyCreationForm ();
};

#endif

