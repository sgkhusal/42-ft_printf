# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 17:01:10 by sguilher          #+#    #+#              #
#    Updated: 2021/08/04 17:32:18 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# creates libftprintf.a library

NAME =			libftprintf.a
BONUS =			libftprintf.a ############### verificar se recebe o mesmo nome

# sources
SRC_PATH =			src/
BONUS_SRC_PATH =	bonus/
FILES =			ft_printf.c $(SRC_PATH)$(wildcard *.c) #colocar os nomes dos arquivos
BONUS_FILES =	ft_printf_bonus.c $(BONUS_SRC_PATH)$(wildcard *.c) #colocar os nomes dos arquivos
OBJS =			$(FILES:.c=.o)
BONUS_OBJS =	$(BONUS_FILES:.c=.o)

# compilation
CC =		clang # ou usa o gcc?
CFLAGS = 	-Wall -Werror -Wextra

# clean
RM =		-rm -f

# rules

all:	$(NAME)

bonus:	$(BONUS)

$(OBJS):	$(FILES)
		$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_OBJS):	$(BONUS_FILES)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		# ar rc $@ $(OBJS)
		ar rc $@ $<
		ranlib $@

$(BONUS):	$(BONUS_OBJS)  ### sera que e bom colocar um fclean (acho que nao, por seria um relink?)
		# ar rc $@ $(BONUS_OBJS)
		ar rc $@ $<
		ranlib $@

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
