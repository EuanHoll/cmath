# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: euan <ehollidg@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/04 15:51:09 by euan           #+#    #+#                 #
#    Updated: 2019/08/20 12:42:59 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = main 
SRCF = $(SRC:%=%.c)
OBJ = $(SRC:%=%.o)
NAME = tester
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I cmath/includes
LIBS = cmath/cmath.a

all: $(NAME)

$(NAME): $(SRCF)
	@make -C cmath/
	@clang $(FLAGS) $(INCLUDES) -c $(SRCF)
	clang -o $(NAME) $(OBJ) $(LIBS)

clean:
	@make -C cmath/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C cmath/ fclean
	rm -f $(NAME)

re: fclean all
