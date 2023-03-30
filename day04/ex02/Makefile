# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 00:31:09 by mzridi            #+#    #+#              #
#    Updated: 2023/03/08 19:16:09 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = animals

CC = c++

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME)

re : fclean all