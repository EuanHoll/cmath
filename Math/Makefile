CALC = powlo powint sqrtlo sqrtint min min_d max max_d floor \
	   ceil
SRC = $(CALC:%=calc/%)
SRCF = $(SRC:%=%.c)
OBJ = $(CALC:%=%.o)
NAME = math.a

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCF) -g -I ./includes 
	ar -rcsv $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) ./includes/math.gch

mclean: $(NAME) clean

fclean: clean
	rm -f $(NAME)

re: fclean all
