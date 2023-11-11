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
	int 	i;
	size_t	len_buf;

	big_ptr = (char *)big;
	little_ptr = (char *)little;
	len_buf = len;
	if (!*little_ptr)
		return (big_ptr);
	while ((*big_ptr) && (--len_buf > 1))
	{
		i = 0;
		while (little_ptr[i] == *big_ptr)
		{
			big_ptr++;
			i++;
			if (!little_ptr[i])
				return (big_ptr - i);
		}
		big_ptr++;
	}
	return ((void *)0);
}

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	// (void)argv; //atoi(argv[1])
	printf("ft strnstr  : %s\n", ft_strnstr("salamhellosalut", "ll", atoi(argv[1])));
	printf("strnstr ori : %s\n", strnstr("salamhellosalut", "ll", atoi(argv[1])));
	return (0);
}