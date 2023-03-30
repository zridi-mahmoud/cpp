# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 21:35:46 by mzridi            #+#    #+#              #
#    Updated: 2023/03/04 23:21:37 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++

SRC = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)


%.o: %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME) 

re : fclean all