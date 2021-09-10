/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:18:26 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/10 15:01:47 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "LET'S TRY SOME INITIALIZATIONS" << std::endl;
	
	// Correct initialization

	try
	{
		Bureaucrat b1(150, "Mike");
		std::cout << b1 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Incorrect initialization

	try
	{
		Bureaucrat b2(0, "Stuart");
		std::cout << b2 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b3(160, "Bob");
		std::cout << b3 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "NOW LET'S WORK WITH SOME BUREAUCRATS" << std::endl;
	Bureaucrat b(150, "Bob");
	std::cout << b << std::endl;
	std::cout << "Trying to decrease his grade: ";
	try
	{
		b.decGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat c(1, "Charlotte");
	std::cout << c << std::endl;
	std::cout << "Trying to increase her grade: ";
	try
	{
		c.incGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat d(34, "Imogen");
	std::cout << d << std::endl;
	try
	{
		d.incGrade();
		std::cout << d.getName() << "'s grade is now " << d.getGrade() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}