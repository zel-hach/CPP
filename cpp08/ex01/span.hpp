/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:59:57 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/15 23:35:14 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP
#define _SPAN_HPP
#include<iostream>
#include<vector>
#include<exception>

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
			~Span();
};
#endif