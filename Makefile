NAME	= tren

SRCS	= main.c		\
	  asignar_ocupacion.c	\
	  mostrar_ocupacion.c	\
	  calcular_precio.c	\
	  pedir_edad.c

OBJS	= ${SRCS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

RM	= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	@ $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean:		clean
	@ $(RM) $(NAME)

re:		fclean all
