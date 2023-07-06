NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

##################################################
################## SOURCES #######################

SRC_FILES = ft_printf.c\
			ft_print_carac.c\
			ft_print_exa_x2.c\
			ft_putnbr_id.c\
			ft_unsigned_nbr.c\
			ft_put_str.c\
			ft_putchar.c\
			ft_strlen.c\
			ft_print_exa_x1.c\
			ft_putnbr.c


OBJS = ${SRC_FILES:.c=.o}

##################################################
################## RULES #########################

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.c.o:
	gcc ${CFLAGS} -g -I . -c $< -o ${<:.c=.o}
