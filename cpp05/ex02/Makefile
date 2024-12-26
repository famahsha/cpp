NAME = form

CC = c++

FLAGS = -Wall -Wall -Wextra -std=c++98

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp

OBJS =$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean