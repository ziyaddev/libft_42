/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:19:02 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/23 08:19:35 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = 0;
	while (s[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return ((void *)0);
	while (*s)
		*str++ = *s++;
	return (str - len);
}

// int	main(void)
// {
// 	char	my_str[] = "salam";
// 	char	*new_address = ft_strdup(my_str);
//
// 	printf("string  : %s\n", new_address);
// 	printf("address : %p\n\n", new_address);
// 	free (new_address);
// 	printf("string after free  : %s\n", new_address);
// 	printf("address after free : %p\n", new_address);
// 	return (0);
// }
