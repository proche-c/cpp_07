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

#include <iostream>
#include "Functions.tpp"

int main(void)
{
	int	a = 5;
	int	b = 12;

	std::cout << "a = " << a << " and b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "After swap a = " << a << " and b = " << b << std::endl; 
	std::cout << "Max of " << a << " and " << b << " is " << max<int>(a, b) << std::endl;
	std::cout << "Min of " << a << " and " << b << " is " << min<int>(a, b) << std::endl;

	float	c = 5.7f;
	float	d = 8.4f;

	std::cout << "c = " << c << " and d = " << d << std::endl;
	swap<float>(c, d);
	std::cout << "After swap c = " << c << " and d = " << d << std::endl; 
	std::cout << "Max of " << c << " and " << d << " is " << max<float>(c, d) << std::endl;
	std::cout << "Min of " << c << " and " << d << " is " << min<float>(c, d) << std::endl;

	std::string	e = "hola";
	std::string	f = "adios";

	std::cout << "e = " << e << " and f = " << f << std::endl;
	swap(e, f);
	std::cout << "After swap e = " << e << " and f = " << f << std::endl; 
	std::cout << "Max of " << e << " and " << f << " is " << ::max(e, f) << std::endl;
	std::cout << "Min of " << e << " and " << f << " is " << ::min(e, f) << std::endl;

	return 0;
}