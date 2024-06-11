/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:59:03 by agan              #+#    #+#             */
/*   Updated: 2024/06/11 15:59:04 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>
#include <string>
#include <cstdlib>

# define BROWN "\033[1;33m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE	"\033[1;34m"
# define CYAN	"\033[1;36m"
# define RESET "\033[0m"

# define BROWN_R "\033[33m"
# define RED_R "\033[31m"
# define GREEN_R "\033[32m"
# define BLUE_R	"\033[34m"
# define CYAN_R	"\033[36m"

template <typename T>
void	ft_foo(T &val)
{
	std::cout << "foo: " << val << std::endl;
}

template <typename T>
void	iter(T *add, int length, void (*foo)(T &))
{
	if (add == NULL || foo == NULL)
	{
		std::cout << RED << "error: invalid array or function" << RESET << std::endl;
		return ;
	}
	for (int i = 0; i < length; i++)
	{
		foo(add[i]);
	}
}

#endif
