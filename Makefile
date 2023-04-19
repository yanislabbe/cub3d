NAME	=	cub3d
CC		=	@gcc
CFLAGS	=	-Wall -Wextra -Werror -g
RM		=	@rm -f
OBJS	=	$(addprefix objs/, $(SRCS:.c=.o))
SRCS	=	src/main.c get_next_line/get_next_line.c \
			src/parse/parse_arguments.c src/parse/parse_map_name.c src/parse/parse.c
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
