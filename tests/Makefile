# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 12:42:23 by ehollidg       #+#    #+#                 #
#    Updated: 2019/08/20 12:48:38 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

ifeq ($(shell uname -s), Linux)
BREW := /usr
else
BREW := $(shell brew --cellar)/..
endif

NAME = tests
SRC = calc/abs
SRCF = $(SRC:%=%.c)
OBJ = $(SRC:%=%.o)
INCLUDES = -I ../cmath/includes -I $(BREW)/include
LIBS = ../cmath/cmath.a -L $(BREW)/lib -lcriterion

all: $(NAME)

$(NAME): $(SRCF)
	@echo "Building Tests"
	@gcc -o $(NAME) $(SRCF) $(LIBS)
	@echo "Tests Built"

clean:
	@make -C cmath/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C cmath/ fclean
	rm -f $(NAME)

re: fclean all