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
	char	*src_tmp;
	char	*dest_tmp;
	char	*buf_tmp;
	int		i;

	src_tmp = (char *)src;
	dest_tmp = (char *)dest;
	buf_tmp = malloc(sizeof(char) * (strlen(src_tmp) + 1));
	if (!buf_tmp)
		return (0);
	i = 0;
	while (src_tmp[i])
	{
		buf_tmp[i] = src_tmp[i];
		i++;
	}

	size = i;
	while (size--)
	{
		*dest_tmp++ = *buf_tmp++;
	}

	return (dest);
}

int	main(void)
{
	char data[7] = "aabbcc";
	char data_ft[7] = "aabbcc";
	char data_ori[7] = "aabbcc";

	void *src_ft = (void *)data;
	// void *dest_ft = (void *)data + sizeof(char);

	// void *src_ori = (void *)data;
	// void *dest_ori = (void *)data + sizeof(char);
	int	i;

	i = 0;

	printf("src : %s\n", (char *)(src_ft + i));
	// while (i < 5)
	// {
	// 	printf("%s", (char *)(src_ft + i));
	// 	i++;
	// }
	

	memcpy(data_ft + 3, data_ft, 3);
	memmove(data_ori + 3, data_ori, 3);

	printf("\ndest_ft : ");
	printf("memmove ft ----------\nsrc_ft : %s\n", data);
	printf("dest_ft : %s\n", data_ft);

	printf("\ndest_ori : ");
	printf("memmove ori ----------\nsrc_ori : %s\n", data);
	printf("dest_ori : %s\n", data_ori);


	return(0);
}