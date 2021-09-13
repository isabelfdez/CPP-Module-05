/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:18:26 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 18:21:35 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl << "LET'S TRY TO MAKE A BUREAUCRAT SIGN A FORM" << std::endl;
	Bureaucrat bur(50, "Rick");
	Bureaucrat bur2(140, "Bad guy");
	std::cout << bur << std::endl;

	// ShrubberyCreationForm

	std::cout << std::endl << "SCHRUBBERY FORM" << std::endl << std::endl;
	ShrubberyCreationForm s(std::string("Home"));
	ShrubberyCreationForm s2(std::string("Home"));
	bur.signForm(s);
	bur.executeForm(s);

	bur2.signForm(s2);
	bur2.executeForm(s2);
	bur.executeForm(s2);

	// RobotomyRequestForm
	
	std::cout << std::endl << "ROBOTOMY FORM" << std::endl << std::endl;
	RobotomyRequestForm r1(std::string("Home"));
	RobotomyRequestForm r2(std::string("Home"));

	bur.signForm(r1);
	bur.executeForm(r1);

	bur2.signForm(r2);
	bur2.executeForm(r2);

	// PresidentialPardonForm
	
	std::cout << std::endl << "PRESIDENTIAL PARDON FORM" << std::endl << std::endl;
	PresidentialPardonForm p1(std::string("Marvin"));
	PresidentialPardonForm p2(std::string("Marvin"));
	Bureaucrat my_bur1(24, "Cosmo");
	Bureaucrat my_bur2(2, "Wanda");

	my_bur1.signForm(p1);
	my_bur1.executeForm(p1);

	my_bur2.signForm(p2);
	my_bur2.executeForm(p2);
	return (0);
}