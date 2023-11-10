/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:47:28 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 11:51:32 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("is digit : %d\n", ft_isdigit('2'));
// 	printf("is digit : %d\n", ft_isdigit('?'));
// 	printf("is digit : %d\n", ft_isdigit('0'));
// 	printf("is digit : %d\n", ft_isdigit('\''));
// 	printf("is digit : %d\n", ft_isdigit('a'));
// 	printf("is digit : %d\n", ft_isdigit(' '));
// 	printf("is digit : %d\n", ft_isdigit('9'));
// 	return (0);
// }
