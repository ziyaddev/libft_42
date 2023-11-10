/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:34:32 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 11:45:21 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("is alpha ? : %d\n", isalpha('2'));
// 	printf("is alpha ? : %d\n", isalpha('a'));
// 	printf("is alpha ? : %d\n", isalpha('H'));
// 	return (0);
// }
