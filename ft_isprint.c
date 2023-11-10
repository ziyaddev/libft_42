/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:31:03 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 12:42:47 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("ft_isprint %c : %d\n", 's', ft_isprint('s'));	
// 	printf("ft_isprint %c : %d\n", ' ', ft_isprint(' '));	
// 	printf("ft_isprint %c : %d\n", '\'', ft_isprint('\''));	
// 	printf("ft_isprint %c : %d\n", 12, ft_isprint(12));	
// 	printf("ft_isprint %c : %d\n", '\n', ft_isprint('\n'));	
// 	printf("ft_isprint %c : %d\n", '\t', ft_isprint('\t'));	
// 	return (0);
// }
