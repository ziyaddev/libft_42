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
 * @brief 
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
	unsigned int	i;
	unsigned int	len_right;
	unsigned int	len_left;
	unsigned int	str_len;

	len_right = 0;
	len_left = 0;
	str_len = ft_strlen(s1);
	if (!*set || !*s1)
		return ((void *)0);
	i = str_len;
	while (ft_check_char(set, s1[i-- - 1]))
		len_right++;
	i = 0;
	while (ft_check_char(set, s1[i++]))
		len_left++;
	str_len -= (len_right + len_left);
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return ((void *)0);
	i = 0;
	while (str_len--)
		str[i++] = s1[len_left++];
	str[i] = 0;
	return (str);
}

int	main(void)
{
	char	*trimed;

	trimed = ft_strtrim("       ", "\t \n");
	printf("strtrim : %s\n", trimed);
	free(trimed);
	return (0);
}
