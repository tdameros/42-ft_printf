.PHONY: all clean fclean re norm

NAME			=	libftprintf.a

LIST_HEADERS	=	ft_printf.h
LIST_SRCS		=	ft_printf.c print_hexa.c print_number.c print_string.c

DIR_OBJS		=	.objs/
DIR_SRCS		=	srcs/
DIR_HEADERS		=	incs/

HEADERS			=	$(addprefix $(DIR_HEADERS),$(LIST_HEADERS))
SRCS			=	$(addprefix $(DIR_SRCS),$(LIST_SRCS))
OBJS			=	$(addprefix $(DIR_OBJS),$(LIST_SRCS:.c=.o))

CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar rcs

RM				=	rm -rf
MKDIR			=	mkdir -p

all: $(NAME)

$(NAME): $(DIR_OBJS) $(OBJS) $(HEADERS) Makefile
	$(AR) $(NAME) $(OBJS)

$(DIR_OBJS)%.o: $(DIR_SRCS)%.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -I $(DIR_HEADERS) -c $< -o $@

$(DIR_OBJS):
	$(MKDIR) $(DIR_OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
