# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 15:02:05 by ehollidg       #+#    #+#                 #
#    Updated: 2019/08/23 17:24:09 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GCOV =
LINK =
CALC = powlo powint sqrtlo sqrtint min min_d max max_d floor \
	   ceil round abs approx clamp clamp01 lerp lerpunclamped \
	   lerpinverse sign perlin2d fract
TRIG = tan cos sin
VEC = dist_vec2 dist_vec3 dot_vec2 dot_vec3
SRC = $(CALC:%=calc/%.c) $(TRIG:%=trig/%.c) $(VEC:%=vector/%.c)
OBJ = $(SRC:%.c=%.o)
GCNO = $(OBJ:%.o=%.gcno)
GCDA = $(OBJ:%.o=%.gcda)
GCOV = $(SRC:%=%.gcov)
NAME = cmath.a
FLAGS = -Wall -Werror -Wextra

ifeq ($(GCOV), TRUE)
	FLAGS += -coverage
endif

ifeq ($(LINK), TRUE)
	FLAGS += -lm
endif

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcsv $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $< -I ./includes 

clean:
	rm -f $(OBJ) ./includes/cmath.gch
	rm -f $(GCNO) $(GCDA) $(GCOV) *.c.gcov

mclean: $(NAME) clean

fclean: clean
	rm -f $(NAME)

re: fclean all
