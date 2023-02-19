# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 21:35:46 by mzridi            #+#    #+#              #
#    Updated: 2023/02/19 15:54:53 by mzridi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

CC = c++

SRC = main.cpp Contact.cpp PhoneBook.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)


%.cpp:

%.o: %.cpp Phonebook.hpp Contact.hpp 
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)  

fclean : clean
	@rm -rf $(NAME) 

re : fclean all