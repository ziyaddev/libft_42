/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:52:40 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 13:53:05 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	len;

	len = 0;
	while (src[len] && size--)
	{
		dest[len] = src[len];
		len++;
	}
	
	return (len);
}

int	main(void)
{
	printf("strlcpy : %d\n" ft_strlcpy());

	return (0);
}