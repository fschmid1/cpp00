NAME			= ex00
CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRC				= $(SRC_FILES)
SRC_FILES		= megaphone.cpp

OBJ				= $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))
OBJ_DIR			= obj
OBJ_FILES		= $(SRC_FILES:.cpp=.o)

HDR				= $(HDR_FILES)
HDR_FILES		=

GREEN			= "\033[32m"
LGREEN			= "\033[92m"
DEFAULT			= "\033[39m"
RED				= "\033[31m"

all:			obj_dir $(NAME)

$(NAME):		$(OBJ) | $(HDR)
				@$(CC) $^ -o $@ $(CFLAGS) $(LINK)
				@echo $(GREEN)Compiled$(DEFAULT) $@

$(OBJ_DIR)/%.o:	./%.cpp
				@echo $(LGREEN)Compiling$(DEFAULT) $<
				@$(CC) -c $< $(CFLAGS) -o $@

clean:
				@$(RM) $(OBJ)
				@$(RM) -r $(OBJ_DIR)
				@echo "cleaned $(NAME)"

fclean:
				@make clean
				@$(RM) $(NAME)
				@echo "fcleaned $(NAME)"

re:
				@make fclean
				@make all

obj_dir:
				@mkdir -p $(OBJ_DIR)

.PHONY:			all clean fclean re obj_dir lsan
