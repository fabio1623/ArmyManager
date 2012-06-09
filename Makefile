
NAME=		ArmyManager

SRC=		main.cpp		\
			Army.cpp		\
			Civilian.cpp	\
			Military.cpp	\
			function.cpp
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
