# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 00:31:09 by mzridi            #+#    #+#              #
#    Updated: 2023/03/07 16:26:41 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fragtrap

CC = c++

SRC = main.cpp ClapTrap.cpp FragTrap.cpp 

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME)

re : fclean all