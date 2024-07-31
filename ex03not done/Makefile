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

re: clean all

.PHONY: all clean re
