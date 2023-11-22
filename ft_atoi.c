/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:21:25 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/22 21:23:05 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (nptr[i] == '-')
	{
		i++;
		while (nptr[i])
		{
			result = result * 10 + (nptr[i] - '0');
			if ((nptr[i] < '0' || nptr[i] > '9'))
				return (0);
			i++;
		}
		result *= -1;
	}
	while (nptr[i])
	{
		result = result * 10 + (nptr[i] - '0');
		if ((nptr[i] < '0' || nptr[i] > '9'))
			return (0);
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("atoi ft  : %d\n", ft_atoi("0"));
// 	printf("atoi ori : %d\n\n", atoi("0"));
// 	printf("atoi ft  : %d\n", ft_atoi("123"));
// 	printf("atoi ori : %d\n\n", atoi("123"));
// 	printf("atoi ft  : %d\n", ft_atoi("4294967296"));
// 	printf("atoi ori : %d\n\n", atoi("4294967296"));
// 	printf("atoi ft  : %d\n", ft_atoi("2147483647"));
// 	printf("atoi ori : %d\n\n", atoi("2147483647"));
// 	printf("atoi ft  : %d\n", ft_atoi("2147483648"));
// 	printf("atoi ori : %d\n\n", atoi("2147483648"));
// 	printf("atoi ft  : %d\n", ft_atoi("2147483649"));
// 	printf("atoi ori : %d\n\n\n", atoi("2147483649"));
// 	printf("atoi ft  : %d\n", ft_atoi("a2147483649"));
// 	printf("atoi ori : %d\n\n\n", atoi("a2147483649"));
//
// 	printf("atoi ft  : %d\n", ft_atoi("-0"));
// 	printf("atoi ori : %d\n\n", atoi("-0"));
// 	printf("atoi ft  : %d\n", ft_atoi("-123"));
// 	printf("atoi ori : %d\n\n", atoi("-123"));
// 	printf("atoi ft  : %d\n", ft_atoi("-4294967296"));
// 	printf("atoi ori : %d\n\n", atoi("-4294967296"));
// 	printf("atoi ft  : %d\n", ft_atoi("-2147483647"));
// 	printf("atoi ori : %d\n\n", atoi("-2147483647"));
// 	printf("atoi ft  : %d\n", ft_atoi("-2147483648"));
// 	printf("atoi ori : %d\n\n", atoi("-2147483648"));
// 	printf("atoi ft  : %d\n", ft_atoi("-a2147483649"));
// 	printf("atoi ori : %d\n\n", atoi("-a2147483649"));
// 	return (0);
// }
