SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp  PresidentialPardonForm.cpp  Intern.cpp
NAME = Maggots
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
all : $(NAME)
$(NAME) : $(SRC)
	$(CC) -o $(NAME) $(FLAGS) $(SRC)
clean :
fclean : clean
	rm -rf $(NAME)
re : fclean all