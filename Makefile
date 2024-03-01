##
## EPITECH PROJECT, 2023
## B-PSU-100
## File description:
## Organized : Makefile
##

SRC_SECURED		=	lib/mini_printf.c \
					lib/my_put_nbr.c \
					lib/my_putchar.c \
					lib/my_putstr.c \
					lib/my_strcmp.c \
					lib/my_strcpy.c \
					lib/my_strdup.c \
					lib/my_strlen.c \
					src/delete_ht.c \
					src/hash_table.c \
					src/hash.c \
					src/ht_delete.c \
					src/ht_insert.c \
					src/ht_search.c \
					src/ht_dump.c

SRC_TEST		=	tests/test_delete_ht.c \
					tests/test_hash_table.c \
					tests/test_hash.c \
					tests/test_ht_delete.c \
					tests/test_ht_insert.c \
					tests/test_ht_search.c \
					tests/test_ht_dump.c \
					tests/test_lib.c

OBJ				=	$(SRC_SECURED:.c=.o)

OBJ_TEST		=	$(SRC_TEST:.c=.o)

NAME			=	libhashtable.a

NAME_TEST		=	unit_tests

CFLAGS			=	-Wall -Werror

GREEN=\033[0;32m
RED=\033[0;031m
NC=\033[0m

.SILENT:

##?--------------------------------- MAKE ---------------------------------?##

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo -e " \/ LIBRARY READY \/ "
	@rm -f $(OBJ)
	@echo -e " \/ .O REMOVED \/ "
	@echo -e "$(GREEN)-----------LIBRARY FINISHED-----------$(NC)"

clean:
	@rm -f $(OBJ)
	@echo -e " \/ .O REMOVED \/ "
	@rm -f coding-style-reports.log
	@echo -e " \/ LOG REMOVED \/ "
	@rm -f *.gcda
	@rm -f *.gcno
	@echo -e " \/ .GCDA AND .GCNO REMOVED \/ "
	@echo -e "$(RED)-----------CLEAN FINISHED-----------$(NC)"

fclean:	clean
	@rm -f secured
	@echo -e " \/ BINARY MANUAL REMOVED \/ "
	@rm -f $(NAME_TEST)
	@echo -e " \/ BINARY TEST REMOVED \/ "
	@rm -f $(NAME)
	@echo -e " \/ LIB REMOVED \/ "
	@echo -e "$(RED)-----------FCLEAN FINISHED-----------$(NC)"

re:	fclean	all

.PHONY:	all	clean	fclean	re

##!---------------------------- UNIT TEST ----------------------------!##

tests_run:
	@gcc -o unit_tests $(SRC_SECURED) \
	$(SRC_TEST) $(CFLAGS) --coverage -lcriterion
	@echo -e " \/ BINARY READY \/ "
	@./unit_tests
	@gcovr
	@echo -e "$(GREEN)-----------UNIT TESTS FINISHED-----------$(NC)"

##*---------------------------- MANUAL TEST ----------------------------*##

manual_tests: $(NAME)
	@gcc -o secured src/test.c $(NAME) $(CFLAGS)
	@echo -e " \/ BINARY READY \/ "
	@echo -e "$(GREEN)-----------MANUAL TEST FINISHED-----------$(NC)"
