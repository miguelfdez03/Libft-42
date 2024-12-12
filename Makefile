# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 20:08:21 by alromero          #+#    #+#              #
#    Updated: 2024/12/12 10:59:56 by miguel-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Name
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Comand cleaner
RM = rm -f

# Sources and Headings
SRCS =	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlcat.c ft_strlen.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		
OBJS = $(SRCS:.c=.o)

#Static Library
${NAME}:	${OBJS}
	ar rsc ${NAME} ${OBJS}



# Main Rule
all: $(NAME)

# Rule for compiling .c files into .o
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

# Cleaning object files
clean:
		$(RM) $(OBJS)

# Complete cleaning 
fclean: clean
		$(RM) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re