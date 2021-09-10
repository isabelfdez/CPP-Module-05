/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:03:47 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/10 15:33:25 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("No name"), _grade_sign(1), _grade_exec(1), _sign(0) { }

Form::Form(int sign, int exec, std::string name) : _name(name), _grade_sign(sign), _grade_exec(exec), _sign(0)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form& obj) : _name(obj._name), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec), _sign(0)
{
	if (obj._grade_sign < 1 || obj._grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (obj._grade_sign > 150 || obj._grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() { }

Form& 		Form::operator=(Form& obj)
{
	if (this == &obj)
		return (*this);
	this->_sign = obj._sign;
	return (*this);
}

const std::string	Form::getName()
{
	return (this->_name);
}

int					Form::getSignGrade()
{
	return (this->_grade_sign);
}

int					Form::getExecGrade()
{
	return (this->_grade_exec);
}

int					Form::getStatus()
{
	return (this->_sign);
}




std::ostream&		operator<<(std::ostream &o, Form &obj)
{
	o << "Form " << obj.getName() << " can be signed by bureaucrats above grade " << obj.getSignGrade();
	o << " and can be executed by bureaucrats above grade " << obj.getExecGrade() << std::endl;
	o << "The current status is (0 for not signed, 1 for signed): " << obj.getStatus() << std::endl;
	return (o);
}




const char*			Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");	
}

const char*			Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");	
}
