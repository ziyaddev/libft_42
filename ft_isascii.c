/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:00:59 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 12:30:14 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("isascii %c : %d\n", 'w', ft_isascii('w'));
// 	printf("isascii %c : %d\n", ' ', ft_isascii(' '));
// 	// printf("isascii %c : \n", '£'); //, ft_isascii("£"));
// 	// printf("isascii %c : \n", 'í'); //, ft_isascii("í"));
// 	// printf("isascii %c : \n", 'é'); //, ft_isascii("é"));
// 	printf("isascii %c : %d\n", '/', ft_isascii('/'));
// 	printf("isascii %c : %d\n", '@', ft_isascii('@'));
// 	return (0);
// }
