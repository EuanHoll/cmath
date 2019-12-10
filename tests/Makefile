# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 12:42:23 by ehollidg       #+#    #+#                 #
#    Updated: 2019/08/23 17:25:24 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

ifeq ($(shell uname -s), Linux)
BREW := /usr
else
BREW := $(shell brew --cellar)/..
endif

GCOV =
LINK =
FLAGS =
NAME = tests
SRC = calc/abs calc/approx calc/ceil calc/clamp calc/clamp01 calc/floor \
	calc/fract calc/lerp calc/max calc/max_d calc/min calc/min_d calc/round \
	calc/powint calc/powlo calc/lerpinverse calc/lerpunclamped calc/perlin2d \
	calc/sign calc/sqrtint calc/sqrtlo trig/cos trig/sin trig/tan \
	vector/dist_vec2 vector/dist_vec3 vector/dot_vec2
SRC := $(SRC:%=%.c)
OBJ = $(SRC:%.c=%.o)
GCNO = $(OBJ:%.o=%.gcno)
GCDA = $(OBJ:%.o=%.gcda)
GCOV = $(SRC:%=%.gcov)
INCLUDES = -I ../cmath/includes -I $(BREW)/include
LIBS = ../cmath/cmath.a -L $(BREW)/lib -lcriterion

ifeq ($(GCOV), TRUE)
	FLAGS += -coverage
endif

ifeq ($(LINK), TRUE)
	FLAGS += -lm
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
	rm -f $(GCNO) $(GCDA) $(GCOV) *.c.gcov

fclean: clean
	rm -f $(NAME)

re: fclean all