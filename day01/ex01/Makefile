# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 23:15:21 by mzridi            #+#    #+#              #
#    Updated: 2023/02/28 23:17:59 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++

SRC = Zombie.cpp zombieHorde.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)


%.cpp:

%.o: %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME) 

re : fclean all