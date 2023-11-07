/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:24:45 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 18:47:05 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int search)
{
	const char	*str_ptr;

	str_ptr = str;
	while (*str_ptr++)
	{
		if (*str_ptr == search)
			return ((char *)str_ptr);
	}
	return ((void *)0);
}

// int	main(void)
// {
// 	char	data[] = "salam";
// 	char	pattern;

// 	pattern = 'c';

// 	printf("data : %s\n", data);

// 	printf("ft_strchr : %s\n", ft_strchr(data, pattern));
// 	printf("strchr : %s\n", strchr(data, pattern));

// 	printf("data : %s\n", data);
// 	return (0);
// }
