/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
void	swap(T & x, T & y)
{
	T	z;

	z = x;
	x = y;
	y = z;
}

template< typename T >
T const	& min(T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

template< typename T >
T const	& max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}
