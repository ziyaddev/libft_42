/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:49:13 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 13:53:08 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("strlen : %d\n", ft_strlen(""));
// 	printf("strlen : %d\n", ft_strlen(" "));
// 	printf("strlen : %d\n", ft_strlen("dfr"));
// 	printf("strlen : %d\n", ft_strlen("tdkv "));
// 	printf("strlen : %d\n", ft_strlen("salam !"));
// 	return (0);
// }
