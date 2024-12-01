NAME = Fixed

SRC = main.cpp \
      Fixed.cpp

OBJS_DIR = build
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.cpp=.o))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
VC = \033[0;35m
CYAN = \033[0;96m
DARK_GRAY = \033[0;90m
END = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(VC)$(NAME)$(END) compilation $(GREEN)OK$(END)"

$(OBJS_DIR)/%.o : %.cpp Fixed.hpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(YELLOW)Objets supprimés$(END)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) supprimé$(END)"

re: fclean all

.PHONY: all clean fclean re
