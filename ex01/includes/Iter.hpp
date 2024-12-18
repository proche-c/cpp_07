/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template< typename T >
void	iter(T * a, int size, void(*f)(T const &))
{
	int	i;

	i = 0;
	while(i < size)
	{
		try
		{
			f(a[i]);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: out of range" << std::endl;
		}
		i++;
	}
}

template< typename T >
void	print(T const & content)
{
	std::cout << content << std::endl;
}