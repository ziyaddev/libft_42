/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:13:26 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/23 14:14:16 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return ((void *)0);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	return (str);
}

// int	main(void)
// {
// 	char	s1[] = "salam";
// 	char	s2[] = "hellosalut";
//
// 	printf("strjoin : %s\n", ft_strjoin(s1, s2));
//
// 	return (0);
// }
