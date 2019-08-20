# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 15:02:05 by ehollidg       #+#    #+#                 #
#    Updated: 2019/08/20 15:19:21 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CALC = powlo powint sqrtlo sqrtint min min_d max max_d floor \
	   ceil round abs approx clamp clamp01 lerp lerpunclamped \
	   lerpinverse sign perlin2d fract
TRIG = tan cos sin log
SRC = $(CALC:%=calc/%) $(TRIG:%=trig/%)
SRCF = $(SRC:%=%.c)
OBJ = $(CALC:%=%.o) $(TRIG:%=%.o)
NAME = cmath.a

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCF) -I ./includes
	ar -rcsv $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) ./includes/cmath.gch

mclean: $(NAME) clean

fclean: clean
	rm -f $(NAME)

re: fclean all
