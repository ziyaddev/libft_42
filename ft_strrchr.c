/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:49:53 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 18:50:07 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int search)
{
	const char	*str_ptr;
	int			len;
	int			i;

	str_ptr = str;
	len = 0;
	i = 0;
	while (str_ptr[i])
	{
		len++;
		i++;
	}

	i = 0;

	while (str_ptr[len--])
	{
		if (str_ptr[len] == search)
		{
			return ((char *)str_ptr[len]);
		}

	}

	return ((void *)0);
}

int	main(void)
{
	return (0);
}
