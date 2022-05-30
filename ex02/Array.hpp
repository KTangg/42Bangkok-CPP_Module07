/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:35:49 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/30 11:16:34 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>

template <typename T>
class Array
{
	public:
		Array<T>(void): _size(0), _elements(NULL) {}
		Array<T>(unsigned int const n): _size(n) {_elements = new T[_size];}
		Array<T>(Array<T> const &src) {*this = src;}
		~Array<T>(void) {if (_size > 0) {delete [] _elements;}}

		Array<T>	&operator=(Array<T> const &rhs)
		{
			if (rhs._size == 0)
			{
				_size = 0;
				_elements = NULL;
				return *this;
			}
			_size = rhs._size;
			_elements = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_elements[i] = rhs[i];
			}
			return *this;
		}

		class IndexOutofRange: public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					return ("Index out of array size");
				}
		};

		T	&operator[](int const index) const
		{
			if (index < 0 || static_cast<unsigned int> (index + 1) > _size)
			{
				throw IndexOutofRange();
			}
			return _elements[index];
		}

		unsigned int	size(void) const {return _size;}
	private:
		unsigned int	_size;
		T				*_elements;
};

template <typename T>
std::ostream	&operator<<(std::ostream &out, Array<T> &rhs)
{
	for (unsigned int i = 0; i < rhs.size(); i++)
	{
		out << rhs[i];
		if (i + 1 != rhs.size())
		{
			out << ", ";
		}
	}
	return out;
};

#endif
