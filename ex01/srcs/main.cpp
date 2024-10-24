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

#include "Iter.hpp"



int main(void)
{
	int	i = 1;
	int	a[4] = {1, 2, 3, 4};

	std::cout << "array: {" << a[0];
	while (i < 4)
	{
		std::cout << " ," << a[i];
		i++; 
	}
	std::cout << "}" << std::endl;
	iter(a, 4, print);

	std::cout << "**************************" << std::endl;

	std::string b[3] = {"That ", "is ", "all"};
	std::cout << b[0] << b[1] << b[2] << std::endl;
	iter(b, 3, print);

	return 0;
}