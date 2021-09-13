/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:18:26 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 19:35:41 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

	// Forms

	std::cout << std::endl << "NOW LET'S WORK WITH FORMS" << std::endl;
	Form f1(10, 20, "Boring form");
	std::cout << f1 << std::endl;
	try
	{
		Form f2(-1, 20, "Boring form");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "LET'S TRY TO MAKE A BUREAUCRAT SIGN A FORM" << std::endl;
	Bureaucrat bur(5, "Rick");
	std::cout << std::endl << "VALID FORM" << std::endl;
	bur.signForm(f1);
	std::cout << f1 << std::endl;

	std::cout << std::endl << "INVALID FORM" << std::endl;
	Form f2(4, 20, "Morty's form");
	std::cout << f2 << std::endl;
	bur.signForm(f2);
	std::cout << f2 << std::endl;
	
	std::cout << std::endl << "FINALLY LET'S TRY THE COPY CONSTRUCTOR" << std::endl;
	Form f3;
	f3 = f1;
	std::cout << f3 << std::endl;
	return (0);
}