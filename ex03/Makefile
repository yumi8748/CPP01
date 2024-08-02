# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 18:00:22 by yu-chen           #+#    #+#              #
#    Updated: 2024/07/31 18:00:23 by yu-chen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I inc

SRC = src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

src/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
