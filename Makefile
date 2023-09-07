NAME := push_swap

###############################################################################
###############################################################################

CC := cc
HEADERS :=-I./include -I./libs/include
CFLAGS ?= -Wall -Werror -Wextra -g
LIBS := ./libs
LIBS_NAME := ./libs/libs.a
LIBS_ADD := git pull --recurse-submodules

###############################################################################
###############################################################################

VPATH :=	src src/input_parsing src/error_handling src/fill_struct	\
			src/sorting_operations src/print src/free_allocated_mem		\
			src/sorting

SRC = push_swap.c
SRC_PRINT:= print_clst.c print_operations.c
SRC_ERROR := error_handling.c
SRC_FILL := fill_struct.c create_stack.c index_input.c get_list_len.c
SRC_FREE := free_allocated_mem.c
SRC_PARSING := input_parsing.c is_input_already_sortet.c
SRC_OPERATIONS := swap.c push.c rotate.c reverse_rotate.c 					\
			reverse_rotate_rotate.c rotate_rotate.c swap_swap.c
SRC_SORTING := big_sort.c sort_three_of_less_elements.c						\
			   sort_ten_or_less_elements.c

SRCS := $(SRC) $(SRC_ERROR) $(SRC_FILL) $(SRC_FREE)	$(SRC_SORTING)		\
		$(SRC_PARSING) $(SRC_PRINT) $(SRC_OPERATIONS)

###############################################################################
###############################################################################

OBJ_DIR := ./_obj
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

###############################################################################
###############################################################################

all: $(NAME)

$(NAME): $(OBJS) $(LIBS_NAME)
	@$(LIBS_ADD)
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
