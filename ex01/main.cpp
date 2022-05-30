/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:46:32 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/30 10:31:18 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	srand(time(NULL));
	int	arrayInt[42];

	for (int i = 0; i < 42; i++)
	{
		arrayInt[i] = i + 1;
	}
	iter<int> (arrayInt, 42, &print<int>);

	float	arrayFloat[10];

	for (int i = 0; i < 10; i++)
	{
		arrayFloat[i] = rand();
	}
	iter<float> (arrayFloat, 10, &print<float>);

	std::string	arrayStr[3];

	arrayStr[0] = "Armel";
	arrayStr[1] = "Vlad";
	arrayStr[2] = "Spoolpra";

	iter<std::string> (arrayStr, 3, &print<std::string>);
}
