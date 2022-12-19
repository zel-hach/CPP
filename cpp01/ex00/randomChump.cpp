/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:18:04 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/18 15:32:53 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}