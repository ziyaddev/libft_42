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

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	len;
	const char	*src_ptr;

	len = 0;
	src_ptr = (char *)src;
	while (dest[len])
		len++;
	while (*src_ptr++ && size--)
		dest[len++] = *src_ptr++;
	dest[len] = 0;
	return (len);
}

int	main(void)
{
	size_t size;
	char	data_src[] = " anta";
	char	data_dest[] = "salam";

	char	data_src_ori[] = " anta";
	char	data_dest_ori[] = "salam";
	int	i;

	size = 4;
	i = 3;
	printf("\tft_strlcpy | strlcpy ori\n");

	printf("  data_src : %s | ", data_src);
	printf("%s : data_src_ori\n", data_src_ori);

	printf("      data_dest : %s | ", data_dest);
	printf("%s : data_dest_ori\n", data_dest_ori);

	printf("ft_strlcpy : %d\n", ft_strlcat(data_dest, data_src, size));
	printf("strlcpy ori : %zu\n\n", strlcat(data_dest_ori, data_src_ori, size));

	printf("  data_src : %s | ", data_src);
	printf("%s : data_src_ori\n", data_src_ori);

	printf(" data_dest : %s | ", data_dest);
	printf("%s : data_dest_ori\n", data_dest_ori);

	printf(" data_dest : %d | ", data_dest[i]);
	printf("%d : data_dest_ori\n", data_dest_ori[i]);

	return (0);
}
