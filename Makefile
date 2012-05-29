##
## Makefile for d01 in /home/rihan_a/Projets/Piscine/Tek2/d01
##
## Made by adnan rihan
## Login   <rihan_a@epitech.net>
##
## Started on  Wed Jan  4 09:43:54 2012 adnan rihan
## Last update Tue Feb 14 17:14:55 2012 Adnan RIHAN
##

NAME=		ArmyManager

SRC=		main.cpp		\
			Army.cpp		\
			Civilian.cpp	\
			Military.cpp
OBJ=		$(SRC:.cpp=.o)

CXXFLAGS=	-W -Wall -Wextra -Werror

all:		$(NAME)

re:			fclean all

$(NAME):	$(OBJ)
			$(CXX) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
