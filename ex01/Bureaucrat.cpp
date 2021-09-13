/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:45:56 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 17:12:31 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("No name"), _grade(150) { }

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& obj) : _name(obj._name)
{
	if (obj._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (obj._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = obj._grade;
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat& 		Bureaucrat::operator=(Bureaucrat& obj)
{
	if (this == &obj)
		return (*this);
	
	Bureaucrat *aux = new Bureaucrat(obj);
	return (*aux);
}

const std::string	Bureaucrat::getName()
{
	return (this->_name);
}

int					Bureaucrat::getGrade()
{
	return (this->_grade);
}

void				Bureaucrat::decGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + 1;
}

void				Bureaucrat::incGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - 1;
}

void				Bureaucrat::signForm(Form& f)
{
	if (f.getStatus())
	{
		std::cout << this->getName() << " cannot sign " << f.getName(); 
		std::cout << " because it is already signed"  << std::endl;
	}
	else
	{
		try
		{
			f.beSigned(*this);
			std::cout << this->_name << " signs " << f.getName() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << this->getName() << " cannot sign " << f.getName()  << " because ";
			std::cerr << e.what() << std::endl;
		}
		
	}
}



std::ostream&		operator<<(std::ostream &o, Bureaucrat &obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (o);
}




const char*			Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");	
}

const char*			Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");	
}

