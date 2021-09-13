/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:18:26 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 19:42:42 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	std::cout << std::endl << "LET'S TEST THE INTERN!" << std::endl;

	Intern		someRandomIntern;
	Form*		rrf;
	Bureaucrat	bur(50, "Rick");
	Bureaucrat	bur2(2, "Morty");

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
		bur2.executeForm(*rrf);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("shrubbery creation", "Greg");

	if (rrf)
	{
		std::cout << std::endl << *rrf << std::endl;
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
		delete rrf;
	}
	
	rrf = someRandomIntern.makeForm("presidential pardon", "Marvin");

	if (rrf)
	{
		std::cout << std::endl << *rrf << std::endl;
		bur2.signForm(*rrf);
		bur2.executeForm(*rrf);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("mistake", "Marvin");

	if (rrf)
	{
		std::cout << std::endl << *rrf << std::endl;
		bur2.signForm(*rrf);
		bur2.executeForm(*rrf);
		delete rrf;
	}
	return (0);
}