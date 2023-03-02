# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 23:32:31 by mzridi            #+#    #+#              #
#    Updated: 2023/03/02 20:14:14 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = c++

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)


%.cpp:

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME) 

re : fclean all