/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:30:15 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 18:31:10 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp = &s;

	i = 0;
	while (i < n)
	{
		*tmp + (sizeof(char) * i) = 'x';
		i++;
	}
}

int	main(void)
{
	char mystr[] = "salam";

	printf("mystr : %s\n", mystr);
	ft_bzero(&mystr, 3);
	printf("mystr : %s\n", mystr);
	return (0);
}