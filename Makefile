##
## Makefile for  in /home/frasse_l/Projets/205IQ
## 
## Made by loic frasse-mathon
## Login   <frasse_l@epitech.net>
## 
## Started on  Wed Apr 13 19:36:37 2016 loic frasse-mathon
## Last update Wed Apr 13 20:03:22 2016 loic frasse-mathon
##

NAME		= 205IQ

SRC		= src/main.cpp \
		src/iq.cpp

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f

CPP		= g++ -g

LDFLAGS		= -I./include -lm

CPPFLAGS	= -W -Wall -Werror -Wextra -pedantic $(LDFLAGS)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CPP) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
