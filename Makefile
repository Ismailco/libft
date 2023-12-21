# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 19:04:48 by iscourr           #+#    #+#              #
#    Updated: 2023/12/17 10:48:30 by iscourr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# this file must contain at least the rules $(NAME), all, clean, and fclean.
# to add bonus, you must also add the rule bonus.

# bonus must ne in a different file called _bonus.{c/h}
# the library must be called libft.a, and compiled using cc. no relink allowed.

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
# -fsanitize=address -g
NAME = libft.a

CFILES = ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isdigit.c ft_tolower.c \
			ft_toupper.c ft_strlen.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strchr.c \
			ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_CFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJECTES = $(CFILES:.c=.o)

BONUS_OBJECTES = $(BONUS_CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTES)
	ar rcs $(NAME) $(OBJECTES)

bonus: $(BONUS_OBJECTES)
	ar rcs $(NAME) $(BONUS_OBJECTES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTES) $(BONUS_OBJECTES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

	# ar rcs $(NAME) $(BONUS_OBJECTES)
