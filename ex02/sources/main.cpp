/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:25:28 by agan              #+#    #+#             */
/*   Updated: 2024/06/11 16:25:29 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void print_test(std::string string)
{
	std::cout << GREEN << std::endl << string << std::endl;
	for (int i = 0; i < 30; i++)
		std::cout << "-";
	std::cout << RESET << std::endl;
}

int test_subject()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

void test_cases()
{
    print_test("Creating empty array");
    Array<int> test;
    std::cout << "Array has the size of " << test.size() << std::endl;

    print_test("Creating array of size 10");   
    Array<int> array(10);
    std::cout << "Array has the size of " << array.size() << std::endl;

    print_test("Updating and printing array values");   
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
        std::cout << "[" << i << "]" << " value is " << array[i] << std::endl;
    }
    print_test("Testing exceptions for invalid sbuscript val");   
    try
    {
        array[10000];
    }
    catch (const std::exception & e)
    {
        std::cout << "exception for: " << e.what() << std::endl;
    }
    print_test("END OF TESTS");
}

int main(void)
{
	print_test("TESTING SUBJECT CASES");
	test_subject();
    print_test("TESTING OTHER CASES");
    test_cases();
}