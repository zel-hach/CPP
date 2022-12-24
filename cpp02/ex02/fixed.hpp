/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:13 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/23 16:34:32 by zel-hach         ###   ########.fr       */
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
		bool operator <(const Fixed &) const;
		bool operator >(const Fixed &) const;
		bool operator <=(const Fixed &) const;
		bool operator >=(const Fixed &) const;
		bool operator ==(const Fixed &) const;
		bool operator !=(const Fixed &) const;
		Fixed operator +(const Fixed &) const;
		Fixed operator -(const Fixed &) const;
		Fixed operator *(const Fixed &) const;
		Fixed operator /(const Fixed &) const;
		Fixed operator ++(int);
		Fixed& operator ++(void);
		Fixed operator --(int);
		Fixed& operator --(void);
		static const Fixed min(const Fixed &, const Fixed &);
		static Fixed min(Fixed &, Fixed &);
		static const Fixed max(const Fixed &, const Fixed &);
		static Fixed max(Fixed &, Fixed &);
		~Fixed();
};
std ::ostream & operator << (std :: ostream &out, const Fixed &f);

#endif