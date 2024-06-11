/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:59:01 by agan              #+#    #+#             */
/*   Updated: 2024/06/11 15:59:02 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_test(std::string string)
{
	std::cout << GREEN << std::endl << string << std::endl;
	for (int i = 0; i < 30; i++)
		std::cout << "-";
	std::cout << RESET << std::endl;
}

int main(void)
{
	const int ARR_LEN = 5;

	print_test("TESTING INT ARRAY");
	int array[ARR_LEN] = {12, 0, 42, 38, 23};
	::iter(array, ARR_LEN, &ft_foo);

	print_test("TEST STR ARRAY");
	const char *strings[ARR_LEN] = {"hello", "this", "is", "the", "test"};
	::iter(strings, ARR_LEN, &ft_foo);

	print_test("TESTING INVALID ARRAY");
	::iter(static_cast<int *>(0), ARR_LEN, &ft_foo);

	print_test("TESTING INVALID FUNCTION");
	::iter(array, ARR_LEN, static_cast<void (*)(int &)>(0));

	std::cout << std::endl;
}
