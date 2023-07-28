##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	menu.c	\
		loading_menu_sprite.c	\
		setting_menu.c	\
		menu_mouse_event.c	\
		display_dialogue_text.c	\
		play_intro.c	\
		instructions.c	\
		my_strlen.c	\
		src_game_map/display_wind.c	\
		src_game_map/perso.c	\
		src_game_map/collision.c	\
		src_game_map/initialisation.c	\
		src_game_map/split_while_poll_event.c	\
		src_game_map/resume.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CPPFLAGS = -I./include/ -g

CSFML   =	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CSFML) -Wall -Wextra -Werror

clean:
	rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re:	fclean all
