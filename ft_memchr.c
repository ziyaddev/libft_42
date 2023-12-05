/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:26:03 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 11:58:24 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memchr.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2023-12-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n--)
	{
		if (*s_ptr++ == (unsigned char)c)
			return (--s_ptr);
	}
	return ((void *)0);
}

// int	main(void)
// {
// 	// const char	data[] = "salam*";
// 	for (size_t i = 0; i < 15; i++)
// 	{
// 		printf("i          : %zu\n", i);
// 		printf("memchr     : %s\n", (char *)ft_memchr("sa*lam*", 'a', i));
// 		printf("memchr ori : %s\n\n", (char *)memchr("sa*lam*", 'a', i));
// 	}
// 	return (0);
// }
