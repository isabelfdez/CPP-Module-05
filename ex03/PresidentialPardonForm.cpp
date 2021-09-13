/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:15:54 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 18:18:11 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(25, 5, "Robotomy"), _target("Blank") { }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(25, 5, "Robotomy"), _target(target) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& obj) { *this = obj; }

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
	if (this == &obj)
		return (*this);
	
	PresidentialPardonForm* aux = new PresidentialPardonForm(obj._target);
	return (*aux);	
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void        PresidentialPardonForm::execute()  const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}