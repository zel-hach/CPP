/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:27:05 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 17:30:10 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__
#include <iostream>
#include "Form.hpp"

class Intern{
    
public:
    Intern ();
    Intern (const Intern &a);
    Intern & operator = (const Intern &a);
    ~Intern ();
    Form* makeForm(std::string, std::string);
};

#endif

