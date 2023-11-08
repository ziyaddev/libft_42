/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:49:53 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 08:56:20 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int search)
{
	const char	*str_ptr;
	int			len;
	int			i;

	str_ptr = str;
	len = 0;
	i = 0;
	while (str_ptr[i++])
		len++;
	while (len-- >= 0)
	{
		if (str_ptr[len] == search)
			return ((char *)&str_ptr[len]);
	}
	return ((void *)0);
}

// int	main(void)
// {
// 	char	data[] = "salam";

// 	printf("\nstrrchr m : %s\n", ft_strrchr(data, 'm'));
// 	printf("\nstrrchr a : %s\n", ft_strrchr(data, 'a'));
// 	printf("\nstrrchr l : %s\n", ft_strrchr(data, 'l'));
// 	printf("\nstrrchr s : %s\n", ft_strrchr(data, 's'));
// 	printf("\nstrrchr . : %s\n", ft_strrchr(data, '.'));

// 	printf("\n\nstrrchr ori m : %s\n", strrchr(data, 'm'));
// 	printf("\nstrrchr ori a : %s\n", strrchr(data, 'a'));
// 	printf("\nstrrchr ori l : %s\n", strrchr(data, 'l'));
// 	printf("\nstrrchr ori s : %s\n", strrchr(data, 's'));
// 	printf("\nstrrchr ori . : %s\n", strrchr(data, '.'));
// 	return (0);
// }
