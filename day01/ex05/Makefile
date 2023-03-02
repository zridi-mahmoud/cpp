# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 00:52:34 by mzridi            #+#    #+#              #
#    Updated: 2023/03/03 00:53:14 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++

SRC = main.cpp Harl.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.cpp:

%.o: %.cpp Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME) 

re : fclean all