# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 17:03:39 by sguilher          #+#    #+#              #
#    Updated: 2021/08/04 17:36:18 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ft_printf source
PRINTF_PATH =	../ft_printf/
TEST_PATH =		../test/

NAME =			test.out
BONUS_NAME = 	bonus.out
PRINTF =		$(PRINTF_PATH)libftprintf.a
TEST =			test.c
BONUS_TEST =	test_bonus.c

# compilation
CC =		clang
CFLAGS =	-Wall -Werror -Wextra
RM =		-rm -f

all:	m b

m:	printf
	$(CC) $(CFLAGS) $(TEST) $(PRINTF) -o $(NAME)
	cat

b:	bonus
	$(CC) $(CFLAGS) $(BONUS_TEST) $(PRINTF) -o $(BONUS_NAME)
	cat

printf:
		cd $(PRINTF_PATH)
		make fclean
		make all
		cd $(TEST_PATH)

bonus:
		cd $(PRINTF_PATH)
		make fclean
		make bonus
		cd $(TEST_PATH)

cat:
	@echo "\n"
	@echo "\033[1;33m             /\\_______/\\"
	@echo "            /           \\"
	@echo "           /   \033[1;36m<0   0>   \033[1;33m\\"
	@echo "          (    \033[1;37m=  \033[1;35mY  \033[1;37m=    \033[1;33m)"
	@echo "           \             /"
	@echo "           /    ~~~~~    \\"
	@echo "          /               \    (\\"
	@echo "         /        0        \    \\\\"
	@echo "        /  |      0      |  \    ))"
	@echo "       /   |   |  0  |   |   \  //"
	@echo "      /    |   |     |   |    \(("
	@echo "     (     |   |     |   |     )"
	@echo "      \\    |   |     |   |    /"
	@echo "       \\   |   |     |   |   /"
	@echo "        \\_(_;_;_)___(_;_;_)_/"
	@echo ""
	@echo "         by Sheela G. Khusal\n"
	@echo ""

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re