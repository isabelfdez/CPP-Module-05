/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:42:42 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 19:32:52 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef std::map<std::string,Form*(Intern::*)(std::string)> map_t;

Intern::Intern() { }

Intern::Intern(Intern& obj) { *this = obj; }

Intern::~Intern() { }

Form*	Intern::makeShrub(std::string target)
{
	ShrubberyCreationForm* obj = new ShrubberyCreationForm(target);

	return (obj);
}

Form*	Intern::makeRobot(std::string target)
{
	RobotomyRequestForm* obj = new RobotomyRequestForm(target);

	return (obj);
}

Form*	Intern::makePres(std::string target)
{
	PresidentialPardonForm* obj = new PresidentialPardonForm(target);

	return (obj);
}

const map_t& Intern::return_map(void)
{
	static const map_t m = construct_map();
	return m;
}

const map_t Intern::construct_map(void)
{
	map_t m;

	m["shrubbery creation"] = &Intern::makeShrub;
	m["robotomy request"] = &Intern::makeRobot;
	m["presidential pardon"] = &Intern::makePres;
	return m;
}

Form*   Intern::makeForm(std::string name, std::string target)
{
	map_t::const_iterator it = return_map().find(name);
	if (it == return_map().end())
	{
		std::cout << "The requested form is not known" << std::endl;
		return (NULL);
	}
	return ((this->*(it->second))(target));
}
