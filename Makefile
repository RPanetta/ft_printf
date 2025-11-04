# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 12:27:33 by rpanetta          #+#    #+#              #
#    Updated: 2025/11/04 12:24:33 by rpanetta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c\
utils/ft_putchar_printf.c\
utils/ft_putstr_printf.c\
utils/ft_print_ptr.c\
utils/ft_putnbr_printf.c\
utils/ft_print_unsigned.c\
utils/ft_print_hex.c\

OBJECTS = $(SOURCES:%.c=%.o)

LIBFT_DIR = ./libft

LIBFT = $(LIBFT_DIR)/libft.a

AR = ar rcs

CC = cc

RM = rm -f

FLAGS = -Wall -Wextra -Werror -I. -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(OBJECTS)
	@make -C $(LIBFT_DIR) all
	@cp $(LIBFT) .
	@$(AR) $(NAME) $(OBJECTS) $(LIBFT_DIR)/*.o

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_DIR) clean
	@$(RM) $(OBJECTS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME) a.out libft.a

re: fclean all

executable: $(NAME)
	@$(CC) $(FLAGS) $(OBJECTS) $(LIBFT_DIR)/*.o -o a.out

.PHONY: all clean fclean re
