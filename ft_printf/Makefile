# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 17:01:10 by sguilher          #+#    #+#              #
#    Updated: 2021/08/21 21:22:08 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# creates libftprintf.a library

NAME =			libftprintf.a

SRC_PATH =		./src
OBJ_PATH =		./obj
SRC =			$(SRC_PATH)/1_ft_printf.c \
				$(SRC_PATH)/2_ft_printf_flags.c \
				$(SRC_PATH)/3_ft_printf_specifiers.c \
				$(SRC_PATH)/ft_printf_libft.c \
				$(SRC_PATH)/ft_printf_utils.c \
				$(SRC_PATH)/4_ft_printf_char.c \
				$(SRC_PATH)/5_ft_printf_integer.c \
				$(SRC_PATH)/5_ft_printf_itoa.c \
				$(SRC_PATH)/6_ft_printf_hex.c  \
				$(SRC_PATH)/6_ft_printf_itohex.c \
				$(SRC_PATH)/7_ft_printf_pointer.c
OBJ =			$(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRC))

# compilation
CC =		clang
CFLAGS = 	-Wall -Werror -Wextra

# clean
RM =		-rm -f
RM_DIR =	rm -rf

# rules
all:	$(NAME)

bonus:	$(NAME)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
		ar rc $@ $(OBJ)
		ranlib $@

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)
		$(RM_DIR) $(OBJ_PATH)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
