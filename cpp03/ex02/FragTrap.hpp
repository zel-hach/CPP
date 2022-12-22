/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:30:26 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 21:45:48 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAPCLAP_HPP
#define _FRAPCLAP_HPP
#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	FragTrap();
	FragTrap(std:: string name);
	FragTrap(const FragTrap&);
	FragTrap operator=(const FragTrap&);
	void highFivesGuys(void);
	~FragTrap();
};

#endif
