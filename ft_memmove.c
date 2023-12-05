/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:11:30 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 14:13:37 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memmove.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2023-12-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_tmp;
	unsigned char	*dest_tmp;
	int				i;

	if (!dest && !src)
		return ((void *)0);
	src_tmp = (unsigned char *)src;
	dest_tmp = (unsigned char *)dest;
	i = 0;
	if (dest > src)
	{
		while (n-- > 0)
			dest_tmp[n] = src_tmp[n];
	}
	else
	{
		while (n-- > 0)
		{
			dest_tmp[i] = src_tmp[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char data_ori[50] = "abcdef";
// 	char data_ft[50] = "abcdef";
// 
// 	// char dest_ft[3] = "ghi";
// 	// char dest_ori[3] = "ghi";
// 
// 	printf("src_ft  : %s\n", data_ft);
// 	printf("src_ori : %s\n", data_ori);
// 
// 	// ft_memmove((void *)(0), (void *)(0), 4);
// 	memmove((void *)(0), (void *)(0), 4);
// 
// 	printf("\nmemmove ----------\n");
// 	printf("dest_ft  : %s\n", data_ft);
// 	printf("dest_ori : %s\n", data_ori);
// 
// 	return(0);
// }
