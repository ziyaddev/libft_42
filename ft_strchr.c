/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:24:45 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 18:47:05 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str_ptr;

	str_ptr = s;
	while (*str_ptr)
	{
		if (*str_ptr == c)
			return ((char *)str_ptr);
		str_ptr++;
	}
	if (*str_ptr == c)
		return ((char *)str_ptr);
	return ((void *)0);
}

// int	main(void)
// {
// 	char	data[] = "salam";
// 	char	pattern;
//
// 	pattern = 'l';
//
// 	printf("data : %s\n", data);
//
// 	printf("ft_strchr : %s\n", ft_strchr(data, pattern));
// 	printf("strchr : %s\n", strchr(data, pattern));
//
// 	printf("data : %s\n\n", data);
//
// 	char *str_ft;
// 	char *str_ori;
//
// 	str_ft = ft_strchr("salam", 0);
// 	str_ori = strchr("salame", 0);
// 	printf("ft_strchr  : %p - %p\n", str_ft - 1, str_ft);
// 	printf("strchr ori : %p - %p\n\n", str_ori - 1, str_ori);
//
// 	printf("ft_strchr  : %s\n", ft_strchr(data, 's'));
// 	printf("strchr ori : %s\n", strchr(data, 's'));
//
// 	printf("ft_strchr  : %s\n", ft_strchr(data, '\0'));
// 	printf("strchr ori : %s\n", strchr(data, '\0'));
//
// 	return (0);
// }
