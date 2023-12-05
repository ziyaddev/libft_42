/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:10:55 by zakchouc          #+#    #+#             */
/*   Updated: 2023/12/05 15:11:26 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstiter.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief		Iterates the list ’lst’ and applies the function ’f’ on the
 * 				content of each node.
 * @param lst	The address of a pointer to a node.
 * @param f		The address of the function used to iterate on the list.
 * @return		None
 * @version 0.1
 * @date 2023-12-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (!f)
		return ;
	node = lst;
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
