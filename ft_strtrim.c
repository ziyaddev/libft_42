/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:22:53 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/23 14:24:59 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strtrim.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief	Allocates (with malloc(3)) and returns a copy of ’s1’ with the
 * 			characters specified in ’set’ removed from the beginning and
 * 			the end of the string.
 * 			Allowed funct. : malloc
 * @param	s1	:	The string to be trimmed.
 * @param	set	:	The reference set of characters to trim.
 * @return	The trimmed string. NULL if the allocation fails.
 * @version 0.1
 * @date 2023-11-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

static int	ft_check_char(const char *c, const char str)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] == str)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len_left;
	unsigned int	str_len;

	len_left = 0;
	if (!*set)
		return ((void *)0);
	str_len = 0;
	while (ft_check_char(set, s1[str_len++]))
		len_left++;
	if (!s1[len_left])
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (0);
		*str = 0;
		return (str);
	}
	str_len = ft_strlen(s1);
	while (ft_check_char(set, s1[str_len-- - 1]))
		;
	str_len -= len_left;
	str = ft_calloc((str_len + 1), sizeof(char));
	str = ft_substr(s1, len_left, (str_len + 1));
	return (str);
}

// #include "ft_strlen.c"
// #include "ft_substr.c"
// int	main(void)
// {
// 	char	*trimed;
//
// 	trimed = ft_strtrim("  ", " \tshk");
// 	printf("strtrim         : %s\n", trimed);
// 	printf("strtrim address : %p\n", trimed);
// 	free(trimed);
// 	return (0);
// }
