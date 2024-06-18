/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:25:31 by agan              #+#    #+#             */
/*   Updated: 2024/06/11 16:25:32 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <cstdlib>

#define ARR_LEN 5
#define MAX_VAL 750

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

template <class T>
class Array {
	private:
		T *elements;
		unsigned int len;

	public:
		// Constructor
		Array() : len(0)
		{
			std::cout << "Default constructor called" << std::endl;
			elements = new T[len];
		}

		// Param constructor
		Array(unsigned int n) : len(n)
		{
			std::cout << "Param constructor called" << std::endl;
			elements = new T[len];
			for (unsigned int i = 0; i < n; i++)
			{
				elements[i] = 0;
			}
		}

		// Copy constructor
		Array(const Array &copy) : elements(new T[copy.len]), len(copy.len)
		{
			std::cout << "Copy constructor called" << std::endl;
			for (unsigned int i = 0; i < copy.len; i++)
			{
				elements[i] = copy.elements[i];
			}
		}

		// Destructor
		~Array()
		{
			std::cout << "Destructor called" << std::endl;
			if (elements != NULL)
				delete [] elements;
		}

		// Assignment operator
		Array &operator=(const Array &copy)
		{
			std::cout << "Assignment operator called" << std::endl;
			if (this == &copy)
				return *this;
			if (elements != NULL)
				delete [] elements;
			elements = new T[copy.len];
			len = copy.len;
			for (unsigned int i = 0; i < copy.len; i++)
			{
				elements[i] = copy.elements[i];
			}
			return *this;
		}

		// Subscript overload
		T &operator[](size_t pos) const
		{
			if (pos >= len || pos < 0)
				throw std::runtime_error("out of bounds error");
			return elements[pos];
		}

		size_t size() const
		{
			return (this->len);
		}
};

#endif

