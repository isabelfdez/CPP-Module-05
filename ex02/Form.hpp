/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:03:42 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/13 17:20:15 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(int sign, int exec, std::string name);
		Form(Form& obj);
		virtual ~Form();

		Form& operator=(Form& obj);
		

		const std::string	getName();
		int					getSignGrade();
		int					getExecGrade();
		int					getStatus();

		void				incGrade();
		void				decGrade();

		void				beSigned(Bureaucrat b);
		void				beExecuted(Bureaucrat b);
		virtual void		execute() const = 0;
		
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
		const int				_grade_sign;
		const int				_grade_exec;
		bool					_sign;
};

std::ostream& operator<<(std::ostream &o, Form &obj);

#endif