/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:24:33 by zakchouc          #+#    #+#             */
/*   Updated: 2023/12/02 22:25:18 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief	Allocates (with malloc(3)) and returns a new node. The member
 * 			variable ’content’ is initialized with the value of the
 * 			parameter ’content’. The variable ’next’ is initialized to NULL.
 * 			Allowed function(s) : malloc
 * @param content	The content to create the node with.
 * @return	The new node
 * @version 0.1
 * @date 2023-12-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elmt;

	new_elmt = malloc(sizeof(*new_elmt));
	if (!new_elmt)
		return ((void *)0);
	new_elmt->content = content;
	new_elmt->next = ((void *)0);
	return (new_elmt);
}

// int	main(void)
// {
// 	return (0);
// }
