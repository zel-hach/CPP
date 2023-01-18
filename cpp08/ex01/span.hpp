/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:59:57 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/17 20:51:32 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP
#define _SPAN_HPP
#include<iostream>
#include<vector>
#include<exception>
#include<limits>

class Span
{
		unsigned int N;
		std::vector<int> _vec;
		public:
			Span();
			Span(unsigned int);
			Span(const Span&);
			Span& operator=(const Span&);
			void addNumber(int n);
			unsigned int get_N() const;
			void set_N(unsigned int);
			unsigned int shortestSpan();
			unsigned int longestSpan();
			template<typename T,typename E>
			void addNumbers(T t, E e){
				if (_vec.size() + e - t > N)
					throw std::exception();
				_vec.insert(_vec.end(), t, e);
			}
			~Span();
};

#endif