/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:32:44 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 17:22:12 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(145, 137, "Shrubbery"), _target("Blank") { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(145, 137, "Shrubbery"), _target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& obj) { *this = obj; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	if (this == &obj)
		return (*this);
	
	ShrubberyCreationForm* aux = new ShrubberyCreationForm(obj._target);
	return (*aux);	
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

void	ShrubberyCreationForm::execute()		const
{
	std::ofstream		ofs;
	
	ofs.open(this->_target + "_schrubbery", std::ofstream::trunc);
	if (ofs.is_open())
	{
		ofs << "                                                         ." << std::endl;
        ofs << "                                      .         ;  " << std::endl;
        ofs << "         .              .              ;%     ;;   " << std::endl;
        ofs << "           ,           ,                :;%  %;   " << std::endl;
        ofs << "            :         ;                   :;%;'     .,   " << std::endl;
        ofs << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
        ofs << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        ofs << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        ofs << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        ofs << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        ofs << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        ofs << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
        ofs << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
        ofs << "                `@%.  `;@%.      ;@@%;         " << std::endl;
        ofs << "                  `@%%. `@%%    ;@@%;        " << std::endl;
        ofs << "                    ;@%. :@%%  %@@%;       " << std::endl;
        ofs << "                      %@bd%%%bd%%:;     " << std::endl;
        ofs << "                        #@%%%%%:;;" << std::endl;
        ofs << "                        %@@%%%::;" << std::endl;
        ofs << "                        %@@@%(o);  . '         " << std::endl;
        ofs << "                        %@@@o%;:(.,'         " << std::endl;
        ofs << "                    `.. %@@@o%::;         " << std::endl;
        ofs << "                       `)@@@o%::;         " << std::endl;
        ofs << "                        %@@(o)::;        " << std::endl;
        ofs << "                       .%@@@@%::;         " << std::endl;
        ofs << "                       ;%@@@@%::;.          " << std::endl;
        ofs << "                      ;%@@@@%%:;;;. " << std::endl;
        ofs << "                  ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
		ofs.close();
	}
}
