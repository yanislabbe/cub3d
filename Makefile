NAME	=	cub3d
CC		=	@gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	@rm -f
OBJS	=	$(addprefix objs/, $(SRCS:.c=.o))
SRCS	=	src/main.c src/check_name_map_argument.c src/check_number_of_arguments.c
LIBFT	=	libft/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -Llibft -lft -o $(NAME)

objs/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C libft

clean:
	$(RM) -r objs
	@$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re
