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

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char *src_tmp;
	char *dest_tmp;
	// char *buf_tmp;

	src_tmp = (char *)src;
	dest_tmp = (char *)dest;
	while (size--)
	{
		// *buf_tmp = *src_tmp;
		*dest_tmp++ = *src_tmp++;
	}
	
	return (dest);
}

int	main(void)
{
	char data[] = "salam";

	void *src = (void *)data;
	void *dest = (void *)data + sizeof(char);
	int	i;

	i = 0;
	printf("src : ");
	while (i < 5)
	{
		printf("%c", *(src + i));
		i++;
	}
	
	printf("\ndest : ");

	ft_memmove(dest, src, 2);

	printf("ft memmove ----------\nsrc : %s\n", (char)src);
	printf("dest : %s\n", (char)dest);
	

	return(0);
}