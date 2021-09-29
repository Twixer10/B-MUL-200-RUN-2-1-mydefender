##
## EPITECH PROJECT, 2020
## makefile exe
## File description:
## fct
##

SRC	=		src/main.c	\
			src/assets/assets_manager.c	\
			src/windows/windows_manager.c	\
			src/loops/loop_menu.c

CFLAGS	=	-W -Wextra -Wall -Werror -g3

LFLAGS	=	-L lib/ -lmy -l csfml-audio -l csfml-graphics -l csfml-network -l csfml-system -l csfml-window

IFLAGS	=	-I include/

NAME	=	defender

all:
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS)

clean:
	make -C lib/my clean
	rm -f *~
	rm -f *.o

fclean:
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all
	make -C lib/my re
