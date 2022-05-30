/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:31:34 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/30 09:38:22 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

# include <iostream>

template <typename T> void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T const	&min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T> T const	&max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

#endif
