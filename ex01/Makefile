NAME = Animal
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
DBFLAGS = -std=c++98

OBJ_PATH = ./objs/
OBJ=$(addprefix $(OBJ_PATH), $(SRCS:.cpp=.o))
DEPS=$(OBJ:.o=.d)

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CXX) $(CXXFLAGS) $(DBFLAGS) -o $@ -c $<

all: $(NAME)

debug: CXXFLAGS+=$(DBFLAGS)
debug:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(DBFLAGS) $^ -o $@

clean: 
	@rm -rf $(OBJ_PATH) 	
	
fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re debug