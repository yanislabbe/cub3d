NAME	=	libft.a
CC		=	@gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	@rm -f
AR		=	ar rcs
SRCS	=	$(shell find . -type f -name "*.c")
OBJS	=	$(patsubst %.c, objs/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

objs/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r objs

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
