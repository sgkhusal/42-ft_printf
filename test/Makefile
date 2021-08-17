# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 17:03:39 by sguilher          #+#    #+#              #
#    Updated: 2021/08/17 23:36:44 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ft_printf source
PRINTF_PATH =	../ft_printf/
TEST_PATH =		../test/
UTILS_PATH =			./utils/

NAME =			test.out
BONUS = 		bonus.out
PRINTF =		$(PRINTF_PATH)libftprintf.a
TEST =			test.c
BONUS_TEST =	bonus.c
UTILS =			$(wildcard $(UTILS_PATH)*.c)

# compilation
CC =		clang
CFLAGS =	-Wall -Werror -Wextra
RM =		-rm -f

all:	printf $(NAME) $(BONUS) cat

m:		printf $(NAME) cat

b:		printf $(BONUS) cat

$(NAME):
	$(CC) $(TEST) $(UTILS) $(PRINTF) -o $@
	./$@

$(BONUS):
	$(CC) $(BONUS_TEST) $(UTILS) $(PRINTF) -o $@
	./$@

printf:
		cd $(PRINTF_PATH) && $(MAKE)

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
		$(RM) $(NAME) $(BONUS)
		@cd $(PRINTF_PATH) && $(MAKE) $@

fclean:		clean
		@cd $(PRINTF_PATH) && $(MAKE) $@

re:			fclean all

.PHONY: all clean fclean re
