/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:13 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/18 12:58:26 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	int val;
	static const int n_bits;
	public :
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed operator =(const Fixed &);
		bool operator <(const Fixed &);
		bool operator >(const Fixed &);
		bool operator <=(const Fixed &);
		bool operator >=(const Fixed &);
		bool operator ==(const Fixed &);
		bool operator !=(const Fixed &);
		Fixed operator +(const Fixed &);
		Fixed operator -(const Fixed &);
		Fixed operator *(const Fixed &);
		Fixed operator /(const Fixed &);
		Fixed operator ++(int);
		Fixed& operator ++(void);
		Fixed operator --(int);
		Fixed& operator --(void);
		Fixed min(const Fixed &, const Fixed &);
		Fixed min(Fixed &, Fixed &);
		Fixed max(const Fixed &, const Fixed &);
		Fixed max(Fixed &, Fixed &);
		~Fixed();
};
std ::ostream & operator << (std :: ostream &out, const Fixed &f);

#endif