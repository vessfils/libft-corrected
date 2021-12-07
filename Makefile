# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 22:52:57 by jcampagn          #+#    #+#              #
#    Updated: 2021/12/03 16:42:26 by jcampagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_split.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlcpy.c \
	ft_calloc.c \
	ft_substr.c \

OBJS = ${SRCS:.c=.o}

BONUS =	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \

OBJSBONUS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
.c.o:

			$(CC) $(CFLAGS) -I includes -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
				ar rcs $(NAME) $(OBJS)
bonus:                          $(NAME) $(OBJSBONUS)
				ar rcs $(NAME) $(OBJSBONUS)
clean :
				rm -f $(OBJS) $(OBJSBONUS)
fclean : clean
				rm -f $(NAME)
re : fclean all

 .PHONY: all clean fclean re bonus
