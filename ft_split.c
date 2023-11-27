/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:27:26 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/27 08:28:30 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief	:	Allocates (with malloc(3)) and returns an array of strings
 * 				obtained by splitting ’s’ using the character ’c’ as a
 * 				delimiter. The array must end with a NULL pointer.
 * 				Allowed funct. : malloc, free
 * @param s	:	The string to be split
 * @param c	:	The delimiter character
 * @return	:	The array of new strings resulting from the split.
 * 				NULL if the allocation fails.
 * @version 0.1
 * @date 2023-11-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

static unsigned int	ft_count_elements(const char *s, const char c)
{
	unsigned int	i;
	unsigned int	elements;

	i = 0;
	elements = 0;
	if (!s)
		return (0);
	else if (!*s)
		return (1);
	while (s[i])
	{
		if (s[i] == c)
			elements++;
		i++;
	}
	if (s[i - 1])
		elements++;
	return (elements);
}

static int	advance_until(
	const char *str,
	char c,
	unsigned int *i,
	unsigned int *j)
{
	*j = 0;
	while (str[*i] != 0 && str[*i] != c)
	{
		(*j)++;
		(*i)++;
	}
	return (*j && *i);
}

char	**ft_split(char const *s, char c)
{
	int				elmt;
	unsigned int	i;	
	unsigned int	j;
	int				k;
	char			**arr_of_elmts;

	elmt = 0;
	i = 0;
	arr_of_elmts = ft_calloc(ft_count_elements(s, c), sizeof(char *));
	if (!arr_of_elmts)
		return (0);
	while (elmt < (int)ft_count_elements(s, c))
	{
		if (!advance_until(s, c, &i, &j))
			break ;
		arr_of_elmts[elmt] = malloc(sizeof(char) * j + 1);
		if (!arr_of_elmts[elmt])
			return (0);
		k = -1;
		while ((unsigned int)++k < j)
			arr_of_elmts[elmt][k] = s[i - j + k];
		i++;
		elmt++;
	}
	return (arr_of_elmts);
}

#include <unistd.h>
#include "ft_calloc.c"
#include "ft_bzero.c"
int	main(void)
{
	const char	to_be_splitted_1[] = "";
	const char	to_be_splitted_2[] = "salut,toi";
	const char	to_be_splitted_3[] = ",";
	const char	to_be_splitted_4[] = "\0aa\0bbb";
	const char	to_be_splitted_5[] = "salut";
	const char	to_be_splitted_6[] = "      split       this for   me  !       ";
	char		**splitted;
	int			i;
	int			elmts;

	i = 0;
	elmts = ft_count_elements(to_be_splitted_1, ',');

	splitted = ft_split(to_be_splitted_1, ',');
	printf("\n--1--\nelements : %d\n", elmts);
	while (i < elmts)
	{
		printf("str %d : %s\n", i, splitted[i]);
		i++;
	}
	free(splitted);

	i = 0;
	elmts = ft_count_elements(to_be_splitted_2, ',');

	splitted = ft_split(to_be_splitted_2, ',');
	printf("\n--2--\nelements : %d\n", elmts);
	while (i < elmts)
	{
		printf("str %d : %s\n", i, splitted[i]);
		i++;
	}
	free(splitted);

	i = 0;
	elmts = ft_count_elements(to_be_splitted_3, ',');

	splitted = ft_split(to_be_splitted_3, ',');
	printf("\n--3--\nelements : %d\n", elmts);
	while (i < elmts)
	{
		printf("str %d : %s\n", i, splitted[i]);
		i++;
	}
	free(splitted);

	i = 0;
	elmts = ft_count_elements(to_be_splitted_4, '\0');

	splitted = ft_split(to_be_splitted_4, '\0');
	printf("\n--4--\nelements : %d\n", elmts);
	while (i < elmts)
	{
		printf("str %d : %s\n", i, splitted[i]);
		i++;
	}
	free(splitted);

	i = 0;
	elmts = ft_count_elements(to_be_splitted_5, '\0');

	splitted = ft_split(to_be_splitted_5, '\0');
	printf("\n--5--\nelements : %d\n", elmts);
	while (i < elmts)
	{
		printf("str %d : %s\n", i, splitted[i]);
		i++;
	}
	free(splitted);

	i = 0;
	elmts = ft_count_elements(to_be_splitted_6, ' ');

	splitted = ft_split(to_be_splitted_6, ' ');
	printf("\n--6--\nelements : %d\n", elmts);
	while (i < elmts)
	{
		printf("str %d : %s\n", i, splitted[i]);
		i++;
	}
	free(splitted);

	return (0);
}
