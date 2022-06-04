NAME = Phonebook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Contact.class.cpp \
	Phonebook.class.cpp \

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

fclean : 
	rm -rf $(NAME)

re :
	fclean all