# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 12:42:23 by ehollidg       #+#    #+#                 #
#    Updated: 2019/08/21 17:55:12 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

ifeq ($(shell uname -s), Linux)
BREW := /usr
else
BREW := $(shell brew --cellar)/..
endif

GCOV=
NAME = tests
SRC = calc/abs calc/approx calc/ceil calc/clamp calc/clamp01 calc/floor \
	calc/fract calc/lerp calc/max calc/max_d calc/min calc/min_d calc/round \
	calc/powint calc/powlo calc/lerpinverse calc/lerpunclamped calc/perlin2d \
	calc/sign calc/sqrtint calc/sqrtlo trig/cos trig/sin trig/tan
SRC := $(SRC:%=%.c)
OBJ = $(SRC:%.c=%.o)
INCLUDES = -I ../cmath/includes -I $(BREW)/include
LIBS = ../cmath/cmath.a -L $(BREW)/lib -lcriterion
FLAGS = 

ifeq ($(GCOV), TRUE)
	FLAGS += -coverage
endif

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building Tests"
	@gcc -o $(NAME) $(OBJ) $(INCLUDES) $(LIBS) $(FLAGS)
	@echo "Tests Built"

%.o: %.c
	gcc $(FLAGS) -o $@ -c $< $(INCLUDES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all