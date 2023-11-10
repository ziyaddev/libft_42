/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:53:57 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 12:44:10 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*tmp;

	tmp = ptr;
	while (count--)
		*tmp++ = value;
	return (ptr);
}

// int	main(void)
// {
// 	int nb[] = {36, 40, 70, 43, 35};
// 	// unsigned char str[] = "salam";
// 	int	i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("nb dig  : %d\n", nb[i]);
// 		printf("nb char : %c\n", nb[i]);
// 		printf("nb ptr  : %p\n\n", &nb[i]);
// 		i++;
// 	}
//  	i = 0;
// 	while (i < 6)
// 	{
// 		printf("byte %d : %c\n", i, *(nb + i));
// 		i++;
// 	}
// 	printf(" ------ memset ----- \n");

// 	ft_memset(&nb, 42, 8);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("nb dig  : %d\n", nb[i]);
// 		printf("nb char : %c\n", nb[i]);
// 		printf("nb ptr  : %p\n\n", &nb[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 6)
// 	{
// 		printf("byte %d : %c\n", i, *(nb + i));
// 		i++;
// 	}
// 	return (0);
// }
