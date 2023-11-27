/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:52:40 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 18:37:07 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2023-11-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len] && size--)
	{
		dst[len] = src[len];
		len++;
		if (!size)
			dst[len] = 0;
	}
	len = 0;
	while (src[len])
		len++;
	return (len);
}

// int	main(void)
// {
// 	size_t	size;
// 	char	data_src[] = "salam";
// 	char	data_dest[5];
//
// 	char	data_src_ori[] = "salam";
// 	char	data_dest_ori[5];
// 	int		i;
//
// 	size = 6;
// 	i = 3;
// 	printf("data_src_ft   : %s\n", data_src);
// 	printf("data_src_ori  : %s\n\n", data_src_ori);
//
// 	printf("data_dest_ft  : %s\n", data_dest);
// 	printf("data_dest_ori : %s\n\n", data_dest_ori);
//
// 	printf("ft_strlcpy    : %zu\n", ft_strlcpy(data_dest, data_src, size));
// 	printf("strlcpy ori   : %zu\n\n", strlcpy(data_dest_ori, data_src_ori, size));
//
// 	printf("data_src_ft   : %s\n", data_src);
// 	printf("data_src_ori  : %s\n\n", data_src_ori);
//
// 	printf("data_dest_ft  : %s\n", data_dest);
// 	printf("data_dest_ori : %s\n\n", data_dest_ori);
//
// 	printf("data_dest_ft  : %d\n", data_dest[i]);
// 	printf("data_dest_ori : %d\n", data_dest_ori[i]);
//
// 	return (0);
// }
