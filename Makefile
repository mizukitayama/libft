CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

SRCS	=	$(wildcard *.c)
NAME	=	libft.a

SRCS_OBJS	=	$(SRCS:.c=.o)

$(NAME): $(SRCS_OBJS)
	ar rcs $(NAME) $(SRCS_OBJS)

all:
	$(NAME)

clean:
	$(RM) $(SRCS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)