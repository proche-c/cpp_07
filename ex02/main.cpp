/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T >
void	setValue(Array<T> & a, T value, unsigned int i)
{
	try
	{
		a[i] = value;
	}
	catch(const typename Array<T>::OutOfRangeException& oor)
	{
		std::cout << "Error: position " << i << ": " << oor.what() << '\n';
	}
	
}
int main(void)
{
	std::cout << "INIT AN EMPTY ARRAY" << std::endl;
	Array<int>	a0;
	std::cout << "a0: " << a0 << std::endl;
	Array<float>	af0;
	std::cout << "af0: " << af0 << std::endl;
	std::cout << "INIT A SIZE 3 ARRAY" << std::endl;
	Array<int>	a1(3);
	setValue(a1, 33, 0);
	setValue(a1, 28, 1);
	setValue(a1, 17, 2);
	std::cout << "a1: " << a1 << std::endl;
	Array<float>	af1(3);
	setValue(af1, 14.2f, 0);
	setValue(af1, 0.56f, 1);
	setValue(af1, 64.0f, 2);
	std::cout << "af1: " << af1 << std::endl;
	std::cout << "COPY AN ARRAY" << std::endl;
	Array<int>	a2 = a1;
	std::cout << a2 << std::endl;
	std::cout << "COPY AN ARRAY WITH OPERATOR =" << std::endl;
	Array<int>	a3;
	a3 = a2;
	std::cout << a3 << std::endl;
	return 0;
}