NAME = pushswap
CC = cc -Wall -Wextra -Werror
SRC = push_swap.c \
          main.c \
          srcs/parsing/check_args.c \
          srcs/parsing/ft_check_doublon.c \
          srcs/parsing/ft_check_limits.c \
          srcs/parsing/ft_fill_tab.c \
          srcs/parsing/is_digit.c \
          srcs/parsing/is_trier.c \
          srcs/algo/ft_max_is_mid.c \
          srcs/algo/ft_get_max.c \
          srcs/algo/ft_algo_is_3.c \
          srcs/algo/ft_algo_is_5.c \
          srcs/algo/ft_big_algo.c \
          srcs/algo/ft_fill_stack.c \
          srcs/push_swap_fonction/push_swap_utils.c \
          srcs/push_swap_fonction/push_swap_utils2.c \
          srcs/push_swap_fonction/push_swap_utils3.c \
          srcs/utils/ft_atoi.c \
          srcs/utils/ft_split.c \
          srcs/utils/ft_strlen.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all