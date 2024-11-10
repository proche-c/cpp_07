/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
const char* Array<T>::OutOfRangeException::what() const throw()
{
	return "Index out of Range";
}

template< typename T >
Array<T>::Array(void):_tab(NULL), _n(0)
{
	std::cout << "Constructor with no parameters called" << std::endl;
	this->_tab = new T[this->_n];
}

template< typename T >
Array<T>::Array(unsigned int n):_n(n)
{
	std::cout << "Constructor unsigned int called" << std::endl;
	this->_tab = new T[this->_n];

}

template< typename T >
Array<T>::Array(Array<T> & src):_n(src.size())
{
	std::cout << "Copy constructor called" << std::endl;
	this->_tab = new T[_n];
	for (unsigned int i = 0; i < this->_n; i++)
		this->_tab[i] = src[i];
}

template< typename T >
Array<T>::~Array(void)
{
	std::cout << "Destructor called" << std::endl;
	if (this->_tab != NULL)
		delete [] this->_tab;
}

template< typename T >
Array<T>	& Array<T>::operator=(Array<T> const & src)
{
	if (this != &src)
	{
		if (this->_tab != NULL)
			delete [] this->_tab;
		this->_n = src.size();
		this->_tab = new T[this->size()];
		for (unsigned int i = 0; i < _n; i++)
			this->_tab[i] = src[i];
	}
	return (*this);
}

template< typename T >
T			& Array<T>::operator[](unsigned int i) const
{
	if (i < 0 || i >= this->size())
		throw Array<T>::OutOfRangeException();
	return (this->_tab[i]);
}

template< typename T >
unsigned int	Array<T>::size(void) const
{
	return (this->_n);
}

template< typename T >
std::ostream	& operator<<(std::ostream &o, Array<T> const & a)
{
	o << "Array[" << a.size() << "]: ";
	if (a.size() > 0)
	{
		o << a[0];
		for (unsigned int i = 1; i < a.size(); i++)
			o << ", " << a[i];
	}	
	return o;
}
