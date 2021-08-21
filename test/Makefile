# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 17:03:39 by sguilher          #+#    #+#              #
#    Updated: 2021/08/21 03:30:52 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ft_printf source
PRINTF_PATH =		../ft_printf/
TEST_PATH =			../test/
MANDATORY_PATH =	./mandatory/
UTILS_PATH =		./utils/
BONUS_PATH =		./bonus/

NAME =			mandatory.out
BONUS = 		bonus.out
PRINTF =		$(PRINTF_PATH)libftprintf.a
TEST =			$(wildcard $(MANDATORY_PATH)*.c)
BONUS_TEST =	$(wildcard $(BONUS_PATH)*.c)
UTILS =			$(wildcard $(UTILS_PATH)*.c)

# compilation
CC =		clang -w
CFLAGS =	-Wall -Werror -Wextra
RM =		-rm -f

all:	printf $(NAME) $(BONUS) cat

m:		printf $(NAME) cat

b:		printf $(BONUS) cat

$(NAME):
	@$(CC) $(CFLAGS) $(TEST) $(UTILS) $(PRINTF) -o $@
	@./$@
	@$(RM) $@

$(BONUS):
	@$(CC) $(CFLAGS) $(BONUS_TEST) $(UTILS) $(PRINTF) -o $@
	@./$@
	@$(RM) $@

printf:
		@cd $(PRINTF_PATH) && $(MAKE)

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
		@$(RM) $(NAME) $(BONUS)
		@cd $(PRINTF_PATH) && $(MAKE) $@

fclean:		clean
		@cd $(PRINTF_PATH) && $(MAKE) $@

re:			fclean all

.PHONY: all clean fclean re
