/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:48:12 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/10 09:49:12 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strnstr.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief The strnstr() function locates the first occurrence of
 * the null-terminated string little in the string big, where not more than
 * len characters are searched through big.
 * Characters that appear after a ‘\0’ character are not searched.
 * Since the strnstr() function is a FreeBSD specific API, it should only
 * be used when portability is not a concern.
 * @param big
 * @param little
 * @param len
 * @return 	If little is an empty string, big is returned;
 * 			if little occurs nowhere in big, NULL is returned;
 * 			otherwise a pointer to the first character of the first
 * 			occurrence of little is returned.
 * @version 0.1
 * @date 2023-11-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_ptr;
	char	*little_ptr;
	int		i;
	size_t	len_buf;

	big_ptr = (char *)big;
	little_ptr = (char *)little;
	len_buf = len + 1;
	if (!*little_ptr)
		return (big_ptr);
	while (*big_ptr && len_buf--)
	{
		little_ptr = (char *)little;
		i = 0;
		while ((*big_ptr == *little_ptr) && len_buf)
		{
			big_ptr++;
			little_ptr++;
			i++;
			len_buf--;
			if (!*little_ptr)
				return (big_ptr - i);
		}
		big_ptr++;
	}
	return ((void *)0);
}

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	char		c;
// 	char		sc;
// 	size_t		len_little;

// 	if ((c = *little++) != '\0')
// 	{
// 		len_little = ft_strlen((char *)little);
// 		do
// 		{
// 			do
// 			{
// 				if (len-- < 1 || (sc = *big++) == '\0')
// 					return (NULL);
// 			}
// 			while (sc != c);
// 			if (len_little > len)
// 				return (NULL);
// 		}
// 		while (ft_strncmp(big, little, len_little) != 0);
// 		big--;
// 	}
// 	return ((char *)big);
// }

// int	main(int argc, char *argv[])
// {
// 	// int	len;
// 	int i;
// 	// char sub[] = "ll";
// 	// char sub[10] = argv[1];
//
// 	i = 0;
// 	// len = 4;
// 	// len = atoi(argv[1]);
// 	if (argc < 1)
// 		return (0);
// 	(void)argv; //atoi(argv[1])
//
// 	while (i++ < 15)
// 	{
// 		// printf("\nsub : \"%s\"\tlen %d\tft strnstr   : %s\n", sub, i,
// 		// 		ft1_strnstr("salamhellosalut", sub, i));
// 		// printf("sub : \"%s\"\tlen %d\tstrnstr ori  : %s\n", sub, i,
// 		// 		strnstr("salamhellosalut", sub, i));
//
// 		printf("\nsub : \"%s\"\tlen %d\tft strnstr   : %s\n", argv[1], i,
// 				ft_strnstr("salamhellosalut", argv[1], i));
// 		printf("sub : \"%s\"\tlen %d\tstrnstr ori  : %s\n", argv[1], i,
// 				strnstr("salamhellosalut", argv[1], i));
// 	}
// 	return (0);
// }
