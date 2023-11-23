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

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-')
	{
		i++;
		sign *= -1;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i])
	{
		if (((nptr[i] < '0') || (nptr[i] > '9')))
			return (result * sign);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	printf("--------\n");
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
// 	printf("atoi ori : %d\n\n\n", atoi("-a2147483649"));
//
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
// 	printf("atoi ft  : %d\n", ft_atoi("555a67"));
// 	printf("atoi ori : %d\n\n\n", atoi("555a67"));
// 	printf("atoi ft  : %d\n", ft_atoi("+-55567"));
// 	printf("atoi ori : %d\n\n\n", atoi("+-55567"));
// 	printf("atoi ft  : %d\n", ft_atoi("-+55567"));
// 	printf("atoi ori : %d\n\n\n", atoi("-+55567"));
// 	printf("atoi ft  : %d\n", ft_atoi("555:67"));
// 	printf("atoi ori : %d\n\n", atoi("555:67"));
// 	printf("atoi ft  : %d\n", ft_atoi("055567"));
// 	printf("atoi ori : %d\n\n", atoi("055567"));
// 	printf("atoi ft  : %d\n", ft_atoi("000567"));
// 	printf("atoi ori : %d\n\n", atoi("000567"));
// 	printf("atoi ft  : %d\n", ft_atoi("--055567"));
// 	printf("atoi ori : %d\n\n", atoi("--055567"));
// 	printf("atoi ft  : %d\n", ft_atoi("++055567"));
// 	printf("atoi ori : %d\n\n", atoi("++055567"));
// 	printf("atoi ft  : %d\n", ft_atoi("0"));
// 	printf("atoi ori : %d\n\n", atoi("0"));
// 	printf("atoi ft  : %d\n", ft_atoi("+055567"));
// 	printf("atoi ori : %d\n\n", atoi("+055567"));
// 	printf("atoi ft  : %d\n", ft_atoi("\e055567"));
// 	printf("atoi ori : %d\n\n", atoi("\e055567"));
// 	printf("atoi ft  : %d\n", ft_atoi("\t\n\r\v\f  469 \n"));
// 	printf("atoi ori : %d\n\n", atoi("\t\n\r\v\f  469 \n"));
// 	printf("atoi ft  : %d\n", ft_atoi("\t\n\r\v\fd469 \n"));
// 	printf("atoi ori : %d\n\n", atoi("\t\n\r\v\fd469 \n"));
// 	printf("atoi ft  : %d\n", ft_atoi(""));
// 	printf("atoi ori : %d\n\n", atoi(""));
// 	printf("atoi ft  : %d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
// 	printf("atoi ori : %d\n\n", atoi("\n\n\n  -46\b9 \n5d6"));
//
// 	return (0);
// }
