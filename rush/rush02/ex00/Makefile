NAME=rush-02

CFLAGS=-Wall -Wextra -Werror
CC=cc

SRC:=srcs/

EXEC=$(NAME)

all: $(EXEC)

$(NAME): $(SRC)main.c $(SRC)prints.o $(SRC)split_num.o $(SRC)clear_str.o $(SRC)read.o $(SRC)free.o $(SRC)utils.o $(SRC)inputs.c
	@$(CC) -o $@ $^ $(CFLAGS)
	@clear
	@echo "\t\33[37m42Paris : \33[32m$(NAME) \n"
	@echo "\33[37m ---------------------------------------\n"
	@echo "\033[37m compiler   : \33[31m-$(CC)"
	@echo "\033[37m flags      : \33[31m$(CFLAGS)"
	@echo "\33[37m files from : \33[31m-$(SRC) \n"
	@echo "\33[37m $(CC) -o $(NAME) $(CFLAGS): \33[32mok\n"
	@echo "\33[37m ---------------------------------------\n"
	@echo "\33[37m Keys : \033[33mclear / clean / fclean / re / .PHONY\n"
	@echo "\33[37m ---------------------------------------\n"


$(SRC)%.o : $(SRC)%.C
	@$(CC) -o $@ -c $< $(CFLAGS)

clear :
	@clear
	@echo "\t\33[37m42Paris : \33[32m$(NAME)\n"

clean : clear
	@-rm -f $(SRC)*.o
	@echo "\33[37m ---------------------------------------\n"
	@echo "\t\33[37mClean : \33[31m files.o\n"
	

fclean : clean clear
	@-rm -f $(NAME)
	@echo "\t\t\33[31m $(NAME)\n"
	@echo "\33[37m ---------------------------------------"

re: fclean all clear

.PHONY:	all clean fclean re 
	
