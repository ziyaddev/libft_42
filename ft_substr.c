/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:44:33 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/23 13:45:48 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2023-11-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		i;

	i = 0;
	sub_str = malloc(sizeof(char) * (len + 1));
	if (!sub_str || (start >= ft_strlen(s)))
		return ((void *)0);
	while (len--)
		sub_str[i++] = s[start++];
	sub_str[i] = 0;
	return (sub_str);
}

// int	main(void)
// {
// 	char	mystr[] = "salamhellosalut";
// 	char	*mysub_str;

// 	mysub_str = ft_substr(mystr, 4, 5);
// 	printf("substr : %s\n", mysub_str);
// 	free(mysub_str);
// 	return (0);
// }
