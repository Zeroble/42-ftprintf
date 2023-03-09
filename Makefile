MAIN_OBJ = ft_printf.o \
		./percentage_formats/percentage_format_c.o \
		./percentage_formats/percentage_format_d.o \
		./percentage_formats/percentage_format_p.o \
		./percentage_formats/percentage_format_s.o \
		./percentage_formats/percentage_format_x.o \
		./utils/ft_itoa.o \
		./utils/ft_putnbr_base.o \
		./utils/ft_unsiged_putnbr_base.o \
		./utils/init_utils.o \
		./utils/str_utils.o \
		./utils/utils.o


LIB_COMPILE = ar r
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

all : ${NAME}

%.o : %.c
	${CC} ${CFLAGS} -c $? -o $@

$(NAME) : ${MAIN_OBJ}
	${LIB_COMPILE} ${NAME} $?

clean :
	rm -f ${MAIN_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
