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

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	size_t size;
// 	char	data_src[] = "salam";
// 	char	data_dest[50];
//
// 	char	data_src_ori[] = "salam";
// 	char	data_dest_ori[50];
// 	int	i;
//
// 	size = 6;
// 	i = 3;
// 	printf("\tft_strlcpy | strlcpy ori\n");
//
// 	printf("  data_src : %s | ", data_src);
// 	printf("%s : data_src_ori\n", data_src_ori);
//
// 	printf("      data_dest : %s | ", data_dest);
// 	printf("%s : data_dest_ori\n", data_dest_ori);
//
// 	printf("ft_strlcpy : %d\n", ft_strlcpy(data_dest, data_src, size));
// 	printf("strlcpy ori : %zu\n\n", strlcpy(data_dest_ori, data_src_ori, size));
//
// 	printf("  data_src : %s | ", data_src);
// 	printf("%s : data_src_ori\n", data_src_ori);
//
// 	printf(" data_dest : %s | ", data_dest);
// 	printf("%s : data_dest_ori\n", data_dest_ori);
//
// 	printf(" data_dest : %d | ", data_dest[i]);
// 	printf("%d : data_dest_ori\n", data_dest_ori[i]);
//
// 	return (0);
// }
