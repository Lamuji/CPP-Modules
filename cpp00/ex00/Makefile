NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c

all : $(NAME)

$(NAME) : megaphone.cpp
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

fclean : 
	rm -rf $(NAME)

re :
	fclean all