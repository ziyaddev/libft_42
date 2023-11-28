/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:22:11 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/28 21:23:18 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_itoa.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief	Allocates (with malloc(3)) and returns a string representing the
 * 			integer received as an argument. Negative numbers must be handled.
 * 			Allowed funct. : malloc
 * @param n	The integer to convert
 * @return	The string representing the integer. NULL if the allocation fails.
 * @version 0.1
 * @date 2023-11-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str = "kl";
	(void) n;
	(void) str;
	return (str);
}

int	main(void)
{
	printf("1234 %% 100 : %d\n", (1234 / 1000));
	return (0);
}

