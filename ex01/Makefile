CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++11
PATH_SRC = ./
HEADERS = ClapTrap.hpp\
	ScavTrap.hpp
SRCS = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)
EXECS = ScavTrap

all: $(EXECS)

$(EXECS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: $(PATH_SRC)%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS) $(EXECS)
re: fclean all

.PHONY: all clean fclean re