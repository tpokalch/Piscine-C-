NAME = ft_retro

SRC     := main.cpp Game.cpp Display.cpp Object.cpp Enemy.cpp Player.cpp Point.cpp
OBJ     := $(SRC:.cpp=.o)
FLAGS 	:= -lncurses -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	g++ -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
