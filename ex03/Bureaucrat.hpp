/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:45:53 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 17:16:11 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(Bureaucrat& obj);
		~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat& obj);
		

		const std::string	getName();
		int					getGrade();

		void				incGrade();
		void				decGrade();

		void				signForm(Form& f);
		void				executeForm(Form& form);

		
		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		
	
	private:
		const std::string		_name;
		int						_grade;
};

std::ostream& operator<<(std::ostream &o, Bureaucrat &obj);

#endif