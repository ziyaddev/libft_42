#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <bsd/string.h>


int	main(int argc, char *argv[])
{
	// int	len;
	int i;
	// char sub[] = "ll";
	// char sub[10] = argv[1];

	i = 0;
	// len = 4;
	// len = atoi(argv[1]);
	if (argc < 1)
		return (0);
	(void)argv; //atoi(argv[1])

	while (i++ < 15)
	{
		// printf("\nsub : \"%s\"\tlen %d\tft strnstr   : %s\n", sub, i,
		// 		ft1_strnstr("salamhellosalut", sub, i));
		// printf("sub : \"%s\"\tlen %d\tstrnstr ori  : %s\n", sub, i,
		// 		strnstr("salamhellosalut", sub, i));

		printf("\nsub : \"%s\"\tlen %d\tft strnstr   : %s\n", argv[1], i,
				ft1_strnstr("salamhellosalut", argv[1], i));
		printf("sub : \"%s\"\tlen %d\tstrnstr ori  : %s\n", argv[1], i,
				strnstr("salamhellosalut", argv[1], i));
	}
	return (0);
}
