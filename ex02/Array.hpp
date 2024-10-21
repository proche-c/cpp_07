/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >
class Array
{
	public:
		class OutOfRangeException: public std::exception
		{
			public:
				virtual const char* what() const throw();	
		};
		
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> & src);
		~Array<T>(void);

		Array<T>	& operator=(Array<T> const & src);
		T			& operator[](unsigned int i) const;

		unsigned int	size(void) const;

	protected:
		T				*_tab;
		unsigned int	_n;
};

template< typename T >
std::ostream	& operator<<(std::ostream &o, Array<T> const & a);

#include "Array.tpp"

#endif
