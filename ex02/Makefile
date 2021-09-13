# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 13:18:45 by isfernan          #+#    #+#              #
#    Updated: 2021/09/13 16:52:56 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= 	main.cpp	Bureaucrat.cpp	Form.cpp	 ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp	 PresidentialPardonForm.cpp

OBJS 		= 	$(SRCS:.cpp=.o)

CXXFLAGS	= 	-Wall -Werror -Wextra

NAME		= 	Forms

all:		$(NAME)

$(NAME):	$(OBJS)
				-@clang++ $(CXXFLAGS) -o $(NAME) $(OBJS) -std=c++98

clean:
				-@rm -f $(OBJS)

fclean: 	clean
				-@rm -f $(NAME)

re:	fclean all

.PHONY: all clea fclean re