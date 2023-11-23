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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len_right;
	int		len_left;
	int		str_len;

	i = 0;
	len_right = 0;
	len_left = 0;
	str_len = ft_strlen(s1);
	if (!*set || !*s1)
		return ((void *)0);
	while (ft_strrchr(s1, set[i++]))
		len_right++;

	i = 0; //ft_strlen(set);
	while (ft_strchr(s1, set[i++]))
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

	trimed = ft_strtrim("salamhellosalut", "sa");
	printf("strtrim : %s\n", trimed);
	free(trimed);
	return (0);
}
