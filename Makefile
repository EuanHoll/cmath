# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: euan <ehollidg@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/04 15:51:09 by euan           #+#    #+#                 #
#    Updated: 2019/08/21 17:30:13 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GCOV = 
SRC = main 
SRCF = $(SRC:%=%.c)
OBJ = $(SRC:%=%.o)
NAME = tester
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I cmath/includes
LIBS = cmath/cmath.a

all: $(NAME)

$(NAME): $(SRCF)
	@echo "Starting Building"
	@make -C cmath/ GCOV=$(GCOV)
	@make -C tests/ GCOV=$(GCOV)
	@clang $(FLAGS) $(INCLUDES) -c $(SRCF)
	@clang -o $(NAME) $(OBJ) $(LIBS)
	@echo "Finished Building"

clean:
	@make -C cmath/ clean
	@make -C tests/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C cmath/ fclean
	@make -C tests/ fclean
	rm -f $(NAME)

re: fclean all
