/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:59:18 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 12:30:05 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_ptr;
	char	*s2_ptr;
	int		pos;

	pos = 0;
	s1_ptr = (char *)s1;
	s2_ptr = (char *)s2;
	while (n--)
	{
		if (s1_ptr[pos] > s2_ptr[pos])
			return (1);
		else if (s2_ptr[pos] > s1_ptr[pos])
			return (-1);
		pos++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("memcmp :  %d|", ft_memcmp("salam", "salam", 3));
// 	printf("%d  : memcmp ori\n", memcmp("salam", "salam", 3));
// 	printf("memcmp :  %d|", ft_memcmp("salam", "Salam", 3));
// 	printf("%d  : memcmp ori\n", memcmp("salam", "Salam", 3));
// 	printf("memcmp : %d|", ft_memcmp("Salam", "salam", 3));
// 	printf("%d : memcmp ori\n", memcmp("Salam", "salam", 3));
// 	printf("memcmp :  %d|", ft_memcmp("salAm", "salam", 3));
// 	printf("%d  : memcmp ori\n", memcmp("salAm", "salam", 3));
// 	printf("memcmp :  %d|", ft_memcmp("salam", "salAm", 5));
// 	printf("%d  : memcmp ori\n", memcmp("salam", "salAm", 5));
// 	return (0);
// }
