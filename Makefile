NAME := push_swap

###############################################################################
###############################################################################

CC := cc
HEADERS :=-I./include -I./libs/include
CFLAGS ?= -Wall -Werror -Wextra -g
LIBS := ./libs
LIBS_NAME := ./libs/libs.a

###############################################################################
###############################################################################

VPATH :=	src src/input_parsing src/error_handling src/fill_struct	\
			src/sorting_operations src/print_clst src/free_allocated_mem
SRC = push_swap.c
SRC_CLST := print_clst.c
SRC_ERROR := error_handling.c
SRC_FILL := fill_struct.c create_stack.c index_input.c
SRC_FREE := free_allocated_mem.c
SRC_PARSING := input_parsing.c is_input_already_sortet.c
SRC_SORT := swap.c push.c rotate.c reverse_rotate.c
SRCS := $(SRC) $(SRC_CLST) $(SRC_ERROR) $(SRC_FILL) $(SRC_FREE)			\
		$(SRC_PARSING) $(SRC_SORT)

###############################################################################
###############################################################################

OBJ_DIR := ./_obj
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

###############################################################################
###############################################################################

all: $(NAME)

$(NAME): $(OBJS) $(LIBS_NAME)
	@echo $(YELLOW)Compiling [$(NAME)]...$(RESET)
	@printf $(UP)$(CUT)
	@$(CC) $(OBJS) $(LIBS_NAME) -o $(NAME)
	@echo $(GREEN)Finished"  "[$(NAME)]...$(RESET)

$(OBJ_DIR)/%.o: %.c
	@echo $(YELLOW)Compiling [$@]...$(X)
	@mkdir -p _obj
	@$(CC) $(CFLAGS) -c $< $(HEADERS) -o $@
	@printf $(UP)$(CUT)

$(LIBS_NAME):
	@$(MAKE) -C $(LIBS) -B

###############################################################################
###############################################################################

clean:
	@$(MAKE) -C ./libs clean
	@printf $(UP)$(CUT)
	@if [ -d "${OBJ_DIR}" ]; then \
		echo $(RED)Cleaning"  "[$(OBJ_DIR)]...$(RESET); \
		rm -rf ${OBJ_DIR}; \
		echo $(GREEN)Cleaned!$(RESET); \
	fi

###############################################################################
###############################################################################

fclean: clean
	@echo $(RED)Cleaning executables...
	@make -C ./libs fclean
	@printf $(UP)$(CUT)
	@if [ -f "$(NAME)" ]; then \
		echo $(RED)Cleaning"  "[$(NAME)]...$(RESET); \
		rm -f $(NAME); \
		echo $(GREEN)Cleaned!$(RESET); \
	fi

re: fclean all

###############################################################################
###############################################################################

YELLOWELLOW := "\033[33m"
RED := "\033[31m"
GREEN := "\033[32m"
RESET := "\033[0m"
UP := "\033[A"
CUT := "\033[K"

###############################################################################
###############################################################################

.PHONY: all clean fclean re bonus
