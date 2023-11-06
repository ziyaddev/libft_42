/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:53:57 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 13:56:51 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t count)
{
	size_t	i;
	char *data = ptr;

	i = 0;
	
	while (i < count)
	{
		*data = value;
		data ++;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	int nb[5];
	int	i;

	i = 0;
	
	while (i < 5)
	{
		printf("nb : %d\n", nb[i]);
		i++;
	}

	ft_memset(&nb, 2, sizeof(nb));
	
	i = 0;
	printf("\n");

	while (i < 5)
	{
		printf("nb : %d\n", nb[i]);
		i++;
	}
	
	return (0);
}
