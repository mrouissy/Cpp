CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = harl
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "building Done"


%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "cleanning Done"

fclean: clean
	@rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
