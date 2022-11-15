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

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar rcs

DB				=	gdb
DBFLAGS			=	-g3 -fsanitize=address

RM				=	rm -rf
MKDIR			=	mkdir -p

all: $(NAME)

$(NAME): $(DIR_OBJS) $(OBJS) $(HEADERS) Makefile
	$(AR) $(NAME) $(OBJS)

$(DIR_OBJS)%.o: $(DIR_SRCS)%.c $(HEADERS)
	$(CC) $(CFLAGS) -I $(DIR_HEADERS) -c $< -o $@ $(DBFLAGS)

$(DIR_OBJS):
	$(MKDIR) $(DIR_OBJS)

$(LIBFT):
	$(MAKE) -C libft/

clean:
	$(RM) $(DIR_OBJS)

norm:
	norminette $(SRCS) $(HEADERS)

debug: $(NAME)
	$(CC) $(DBFLAGS) -I incs/ main.c libftprintf.a $(DBFLAGS)