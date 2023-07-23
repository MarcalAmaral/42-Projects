# Project name
NAME = libft.a

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

# .c files
C_SOURCE =  ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
	  		ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdup.c	\
			ft_memcpy.c	\
			ft_memmove.c 	\
			ft_strchr.c 	\
			ft_atoi.c 	\
			ft_memchr.c 	\
			ft_strrchr.c	\
			ft_bzero.c 	\
			ft_memset.c 	\
			ft_strncmp.c 	\
			ft_strlcat.c 	\
			ft_strlcpy.c 	\
			ft_memcmp.c 	\
			ft_strnstr.c 	\
			ft_strjoin.c 	\
			ft_putendl_fd.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_calloc.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_itoa.c \
			ft_substr.c \
			ft_strtrim.c \
			ft_split.c \

# Object files
OBJ = ft_strlen.o \
	  ft_isalpha.o \
	  ft_isdigit.o \
	  ft_isalnum.o \
	  ft_isascii.o \
	  ft_isprint.o \
	  ft_tolower.o \
	  ft_toupper.o \
	  ft_strdup.o	\
	  ft_memcpy.o	\
	  ft_memmove.o	\
	  ft_strchr.o 	\
	  ft_atoi.o 	\
	  ft_memchr.o 	\
	  ft_strrchr.o 	\
	  ft_bzero.o 	\
	  ft_memset.o 	\
	  ft_strncmp.o 	\
	  ft_strlcat.o 	\
	  ft_strlcpy.o 	\
	  ft_memcmp.o 	\
	  ft_strnstr.o 	\
	  ft_strjoin.o 	\
	  ft_putendl_fd.o \
	  ft_putchar_fd.o \
	  ft_putstr_fd.o \
	  ft_putnbr_fd.o \
	  ft_calloc.o \
	  ft_striteri.o \
	  ft_strmapi.o \
	  ft_itoa.o \
	  ft_substr.o \
	  ft_strtrim.o \
	  ft_split.o \
		
all: $(NAME)

%.o: %.c %.h
	$(CC) -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -rf *.o

fclean: clean
	rm -rf *$(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(C_SOURCE)
	gcc -nostartfiles -shared -o libft.so $(OBJ)