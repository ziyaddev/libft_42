# Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re
# $(NAME) : 
# all : 
# clean : used to remove bin & obj files
# fclean : 
# re : 

# All source files you need to compile your project must be explicitly named in your Makefile.

# Special variables
# $@ : target name
# $< : first prerequisite name
# $^ : prerequisite list
# $? : updated prerequisite name list
# $* : filename without extension

# Program name libft.a
# Turn in files Makefile, libft.h, ft_*.c
# Makefile NAME, all, clean, fclean, re

# You must use the command ar to create your library. Using the libtool command is forbidden.

# gcc -c	compile source files to object files without linking

CFLAGS += -Wall -Werror -Wextra -g3
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
NAME = main # Name of the executable file to be generated
LIBFT_ARCHIVE = libft.a


all: compile

# "make" structure example
cible: prerequis
	command

# Compile program and generate executable file
compile: $(LIBFT_ARCHIVE)
	$(CC) $(CFLAGS) main.c $(LIBFT_ARCHIVE) -o $(NAME) -lbsd
	# clean

# Generate ".o" object files
$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

# Generate ".a" archive which is used in conjonction with the .h file
$(LIBFT_ARCHIVE): $(OBJ)
	ar -crs $(LIBFT_ARCHIVE) *.o

print:
	echo $(CFLAGS)

# Clean generated objects
clean: #$(BIN)
	$(RM) $(OBJ)

# Clean generated ...
fclean: clean
	$(RM) $(NAME)

# redo compilation
re: fclean all

# ulimit -c unlimited
debug:
	gdb $(BIN) ./core

add_function:
	ar - $(LIBFT_ARCHIVE)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

# DON'T FORGET TO GET RID OF THIS PHONY RULE
.PHONY: so re fclean clean

