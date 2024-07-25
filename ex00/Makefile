# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 18:04:09 by yu-chen           #+#    #+#              #
#    Updated: 2024/07/24 21:38:17 by yu-chen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

SRCS = src/main.cpp src/Zombie.cpp src/newZombie.cpp src/randomChump.cpp

INC = -I inc

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re