/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:37:32 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 14:10:25 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*dest_tmp;
	unsigned const char	*src_tmp;

	if (!dest && !src)
		return ((void *)0);
	dest_tmp = (unsigned char *)dest;
	src_tmp = (unsigned const char *)src;
	while (size--)
		*dest_tmp++ = *src_tmp++;
	return (dest);
}

// int	main(void)
// {
// 	char my_src[] = "salam";
// 	char my_dest[100];
// 	int	i;
//
// 	i = 0;
// 	printf("\nmy src : ");
// 	while (i < (int)sizeof(my_src))
// 	{
// 		printf("%c", my_src[i++]);
// 	}
// 	printf("\n");
// 	i = 0;
// 	printf("\nmy dest : ");
// 	while (i < (int)sizeof(my_dest))
// 	{
// 		printf("%c", my_dest[i++]);
// 	}
// 	ft_memcpy((void *)(0), (void *)(0), 3);
// 	memcpy((void *)(0), (void *)(0), 3);
// 	printf("\n\n-----ft memcpy ---------\n");
// 	i = 0;
// 	printf("\nmy src : ");
// 	while (i < (int)sizeof(my_src))
// 	{
// 		printf("%c", my_src[i++]);
// 	}
// 	printf("\n");
// 	i = 0;
// 	printf("\nmy dest : ");
// 	while (i < (int)sizeof(my_dest))
// 	{
// 		printf("%c", my_dest[i++]);
// 	}
//
// 	return (0);
// }
