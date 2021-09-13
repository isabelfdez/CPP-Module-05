/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:42:51 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 19:13:23 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# include <map>

class Intern
{
    public:
		Intern();
		Intern(Intern& obj);
		~Intern();
        
        Form*   makeForm(std::string name, std::string target);

		typedef std::map<std::string,Form*(Intern::*)(std::string)> map_t;

		Form*	makeShrub(std::string target);
		Form*	makeRobot(std::string target);
		Form*	makePres(std::string target);

		const map_t		construct_map(void);
		const map_t&	return_map(void);
};



#endif