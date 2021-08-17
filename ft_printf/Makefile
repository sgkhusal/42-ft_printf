# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 17:01:10 by sguilher          #+#    #+#              #
#    Updated: 2021/08/17 23:26:58 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# creates libftprintf.a library

NAME =			libftprintf.a
#BONUS =			libftprintf.a ############### verificar se recebe o mesmo nome

# sources
SRC_PATH =			./src
OBJ_PATH =			./obj
BONUS_SRC_PATH =	./bonus/
SRC =				$(SRC_PATH)/ft_printf.c \
					$(SRC_PATH)/ft_printf_flags.c \
					$(SRC_PATH)/ft_printf_specifiers.c \
					$(SRC_PATH)/ft_printf_libft.c \
					$(SRC_PATH)/ft_printf_char.c \
					$(SRC_PATH)/ft_printf_integer.c \
					$(SRC_PATH)/ft_printf_itoa.c \
					#$(SRC_PATH)/ft_printf_hex.c  \
					#colocar os nomes dos arquivos
#BONUS_FILES =	ft_printf_bonus.c $(BONUS_SRC_PATH)$(wildcard *.c) #colocar os nomes dos arquivos
OBJ =			$(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRC))
#BONUS_OBJ =	$(BONUS_FILES:.c=.o)

# compilation
CC =		clang # ou usa o gcc?
CFLAGS = 	-Wall -Werror -Wextra

# clean
RM =		-rm -f
RM_DIR =	rm -rf

# rules

all:	$(NAME)

#@mkdir $(OBJ_PATH)


message:
		@echo $(SRC)
		@echo $(OBJ)

#bonus:	$(BONUS)

b:	$(OBJ)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

#$(OBJ):	$(SRC)
#		$(CC) $(CFLAGS) -c $< -o $@

#$(BONUS_OBJ):	$(BONUS_FILES)
#			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
		ar rc $@ $(OBJ)
		ranlib $@

$(BONUS):	$(BONUS_OBJS)  ### sera que e bom colocar um fclean (acho que nao, por seria um relink?)
		# ar rc $@ $(BONUS_OBJS)
		ar rc $@ $<
		ranlib $@

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)
		$(RM_DIR) $(OBJ_PATH)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
