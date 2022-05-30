/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:46:33 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/30 09:58:05 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>

template <typename T> void	iter(T *array, unsigned int lenght, void (*f)(T &element))
{
	for (unsigned int i = 0; i < lenght; i++)
	{
		f(array[i]);
	}
}

template <typename T> void	print(T &element)
{
	std::cout << element << std::endl;
}

#endif
