# Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re

# $(NAME) : 
# all : 
# clean : used to remove bin & obj files
# fclean : 
# re : 

# Program name libft.a
# Turn in files Makefile, libft.h, ft_*.c
# Makefile NAME, all, clean, fclean, re

# You must use the command ar to create your library. Using the libtool command is forbidden.

# gcc -c	compile source files to object files without linking

CFLAGS = -Wall -Werror -Wextra -g3
SRC = ft_*.c
OBJ = $(SRC:.c=.o)
NAME = main # Name of the executable file to be generated
LIBFT_ARCHIVE = libft.a

all:

# make structure example
cible: prerequis
	command

# Compile program and generate executable file
compile: libft_archive
	$(CC) $(CFLAGS) main.c $(LIBFT_ARCHIVE) -o $(NAME)
	clean

# Generate ".o" files
generate_objects:
	$(CC) $(CFLAGS) -c ft_*.c

# Generate a ".a" archive which is used in conjonction with the .h file
libft_archive: generate_objects
	ar -crs $(LIBFT_ARCHIVE) *.o


print:
	echo $(RM)

# Clean generated objects
clean: #$(BIN)
	$(RM) $(OBJ)

# ulimit -c unlimited
debug:
	gdb $(BIN) ./core
