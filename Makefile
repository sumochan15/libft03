NAME = libft.a

FILES = ft_memset \
ft_bzero \
ft_memcpy \
ft_memmove \
ft_memchr \
ft_memcmp \
ft_strlen \
ft_strlcpy \
ft_strlcat \
ft_strchr \
ft_strrchr \
ft_strnstr \
ft_strncmp \
ft_split \
ft_striteri \
ft_atoi \
ft_isalpha \
ft_isdigit \
ft_isalnum \
ft_isascii \
ft_isprint \
ft_toupper \
ft_tolower \
ft_calloc \
ft_strdup \
ft_substr \
ft_strjoin \
ft_strtrim \
ft_itoa \
ft_strmapi \
ft_putchar_fd \
ft_putstr_fd \
ft_putendl_fd \
ft_putnbr_fd

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re