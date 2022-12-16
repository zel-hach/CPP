/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:13 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/16 17:17:46 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>

class Fixed{
	int val;
	static const int n_bits;
	public :
		Fixed();
		Fixed(const Fixed&);
		Fixed operator =(const Fixed &);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif