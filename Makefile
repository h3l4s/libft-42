
SRCS = ft_atoi.c ft_isascii.c ft_memcmp.c ft_putnbr_fd.c ft_strlcat.c ft_strnstr.c ft_toupper.c\
ft_bzero.c ft_isdigit.c ft_memcpy.c ft_split.c ft_strlcpy.c ft_strrchr.c\
ft_calloc.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strtrim.c\
ft_isalnum.c ft_itoa.c ft_memccpy.c ft_memset.c ft_strdup.c ft_strmapi.c ft_substr.c\
ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c\
ft_putendl_fd.c ft_putstr_fd.c

SRCSB	= ft_lstadd_back.c ft_lstadd_front.c ft_lstsize.c ft_lstclear.c ft_lstmap.c\
ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstnew.c

OBJSB	= ${SRCSB:.c=.o}

OBJS	= ${SRCS:.c=.o}

NAME = libft.a

INCLUDE = libft.h

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

.c.o:
			gcc ${CFLAGS} -c -include ${INCLUDE} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJS} ${OBJSB}
			ar rc ${NAME} ${OBJS} ${OBJSB}

clean:
			${RM} ${OBJS} ${OBJSB}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
