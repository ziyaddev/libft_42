/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:36:03 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/23 11:38:03 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_calloc.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2023-11-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloc_space;
	size_t	bytes;

	if (!nmemb || !size)
		return (malloc(0));
	bytes = nmemb * size;
	if ((bytes / size) != nmemb)
		return ((void *)0);
	calloc_space = malloc(bytes);
	if (!calloc_space)
		return ((void *)0);
	ft_bzero(calloc_space, (bytes));
	return (calloc_space);
}

// int main() {
//     int	i;
//     int * pointer = (int *) ft_calloc( 10, sizeof(int) );
//
//     /* Un petit test sur le bon fonctionnement de calloc */
//     assert(pointer != (void *)0);
//
//     /* Le dernier élément du tableau ne sera pas affecté par la */
//     /* boucle mais n'oubliez pas que calloc initialise de toute */
//     /* façon à 0 chaque octet. */
//     for (i = 0; i < 10 - 1; i += 2)
// 	{
//         pointer[i] = i;
//     }
//
//     /* On affiche le contenu du tableau d'entier */
//     /* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
//     for (i = 0; i < 10; i++)
// 	{
//         printf("%d ", pointer[i]);
//     }
//     printf("\n");
//
//     /* On libère le bloc de mémoire alloué dynamiquement */
//     free(pointer);
//     return 0;
// }
