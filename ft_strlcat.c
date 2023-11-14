/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:16 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 18:39:34 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

// static size_t ft_strlen(const char *s)
// {
// 	size_t i = 0;

// 	while(s[i])
// 		i++;
// 	return i;
// }

	// int			len;
	// int			i;
	// int			j;
	// const char	*src_ptr;

	// len = 0;
	// i = 0;
	// j = 0;
	// src_ptr = (char *)src;
	// while (src[i])
	// 	i++;
	// while (dest[j])
	// 	j++;

	// while (dest[len])
	// 	len++;
	// size -= (size_t)len;
	// size--;
	// while (*src_ptr && size--)
	// 	dest[len++] = *src_ptr++;
	// dest[len] = 0;
	// return (size + j);

	// size_t ldest = ft_strlen(dest);
	// size_t i = 0;
	// while(i < size && src[i] != '\0')
	// {
	// 	dest[ldest + i] = src[i];
	// 	i++;
	// }
	// dest[i + ldest] = 0;
	// return (i + ldest);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	src_len;

	len = 0;
	src_len = ft_strlen(src);
	while (*dest && size > 0)
	{
		dest++;
		len++;
		size--;
	}
	while (*src && size-- > 1)
		*dest++ = *src++;
	if (size == 1 || *src == 0)
		*dest = '\0';
	return (src_len + len);
}

// int	main(void)
// {
// 	size_t size;
// 	char	data_src[20] = "-anta";
// 	char	data_dest[20] = "salam--";
//
// 	char	data_src_ori[20] = "-anta";
// 	char	data_dest_ori[20] = "salam--";
// 	// int	i;
//
// 	size = 3;
// 	// i = 3;
// 	printf("\n");
//
// 	printf("     data_src : %s\n", data_src);
// 	printf(" data_src_ori : %s\n\n", data_src_ori);
//
// 	printf("    data_dest : %s\n", data_dest);
// 	printf("data_dest_ori : %s\n\n", data_dest_ori);
//
// 	printf("   ft_strlcat : %lu\n", ft_strlcat(data_dest, data_src, size));
// 	printf("  strlcat ori : %zu\n\n", strlcat(data_dest_ori, data_src_ori, size));
//
// 	printf("     data_src : %s\n", data_src);
// 	printf(" data_src_ori : %s\n\n", data_src_ori);
//
// 	printf("    data_dest : %s\n", data_dest);
// 	printf("data_dest_ori : %s\n\n", data_dest_ori);
//
// 	return (0);
// }
