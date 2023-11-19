# Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re

# Program name libft.a
# Turn in files Makefile, libft.h, ft_*.c
# Makefile NAME, all, clean, fclean, re

# You must use the command ar to create your library. Using the libtool command is forbidden.

cible : prerequis
	script

libft.a : ft_*.c
	ar -crs

