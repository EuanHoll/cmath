# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: euan <ehollidg@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/04 15:51:09 by euan           #+#    #+#                 #
#    Updated: 2019/06/11 11:12:50 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = main 
SRCF = $(SRC:%=%.c)
OBJ = $(SRC:%=%.o)
NAME = tester
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCF)
	@make -C cmath/
	@clang $(FLAGS) -I cmath/includes -c $(SRCF)
	clang -o $(NAME) $(OBJ) cmath/cmath.a

clean:
	@make -C cmath/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C cmath/ fclean
	rm -f $(NAME)

re: fclean all
