/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:58:10 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 09:22:53 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /**
 * @file ft_strncmp.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2023-11-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					pos;
	unsigned const char	*s1_tmp;
	unsigned const char	*s2_tmp;

	s1_tmp = (unsigned const char *)s1;
	s2_tmp = (unsigned const char *)s2;
	pos = 0;
	while (n-- && (s1_tmp[pos] || s2_tmp[pos]))
	{
		if (s1_tmp[pos] > s2_tmp[pos])
			return ((pos + 1) * 1);
		else if (s2_tmp[pos] > s1_tmp[pos])
			return ((pos + 1) * -1);
		pos++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "Salam", 3));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "Salam", 3));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "Sallam", 3));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "Sallam", 3));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "Sallam", 4));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "Sallam", 4));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Saalam", "Salam", 2));
// 	printf("strncmp ori : %d\n\n", strncmp("Saalam", "Salam", 2));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Saalam", "Salam", 5));
// 	printf("strncmp ori : %d\n\n", strncmp("Saalam", "Salam", 5));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "Saalam", 5));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "Saalam", 5));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "Saalam", 7));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "Saalam", 7));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam\200", "Salam\0", 7));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam\200", "Salam\0", 7));
// 	printf("strncmp ft  : %d\n", ft_strncmp("", "Salam", 7));
// 	printf("strncmp ori : %d\n\n", strncmp("", "Salam", 7));
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "", 7));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "", 7));
//
// 	printf("strncmp ft  : %d\n", ft_strncmp("Salam", "", 7));
// 	printf("strncmp ori : %d\n\n", strncmp("Salam", "", 7));
// 	return (0);
// }
