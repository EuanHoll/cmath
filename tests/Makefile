# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 12:42:23 by ehollidg       #+#    #+#                 #
#    Updated: 2019/08/20 15:50:22 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

ifeq ($(shell uname -s), Linux)
BREW := /usr
else
BREW := $(shell brew --cellar)/..
endif

NAME = tests
SRC = calc/abs calc/approx calc/ceil calc/clamp calc/clamp01
SRCF = $(SRC:%=%.c)
OBJ = $(SRC:%=%.o)
INCLUDES = -I ../cmath/includes -I $(BREW)/include
LIBS = ../cmath/cmath.a -L $(BREW)/lib -lcriterion

all: $(NAME)

$(NAME): $(SRCF)
	@echo "Building Tests"
	@gcc -o $(NAME) $(SRCF) $(INCLUDES) $(LIBS)
	@echo "Tests Built"

clean:
	@make -C ../cmath/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C ../cmath/ fclean
	rm -f $(NAME)

re: fclean all