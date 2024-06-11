/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:46:23 by agan              #+#    #+#             */
/*   Updated: 2024/06/10 20:46:24 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

#include <iostream>

template <typename T>
void swap(T& x, T& y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T min(T& x, T& y)
{
	return (x < y ? x : y);
}

template <typename T>
T max(T& x, T& y)
{
	return (x > y ? x : y);
}

#endif



