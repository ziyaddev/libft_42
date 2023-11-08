/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:58:10 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 09:22:53 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	int	pos;

	pos = 0;
	while (length--)
	{
		if (first[pos] > second[pos])
			return ((pos + 1) * 1);
		else if (second[pos] > first[pos])
			return ((pos + 1) * -1);
		pos++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("strncmp : %d\n", ft_strncmp("Salam", "Salam", 3));
// 	printf("strncmp : %d\n", ft_strncmp("Salam", "Sallam", 3));
// 	printf("strncmp : %d\n", ft_strncmp("Salam", "Sallam", 4));
// 	printf("strncmp : %d\n", ft_strncmp("Saalam", "Salam", 2));
// 	printf("strncmp : %d\n", ft_strncmp("Saalam", "Salam", 5));
// 	printf("strncmp : %d\n", ft_strncmp("Salam", "Saalam", 5));

// 	printf("\nstrncmp ori : %d\n", strncmp("Salam", "Salam", 3));
// 	printf("strncmp ori : %d\n", strncmp("Salam", "Sallam", 3));
// 	printf("strncmp ori : %d\n", strncmp("Salam", "Sallam", 4));
// 	printf("strncmp ori : %d\n", strncmp("Saalam", "Salam", 2));
// 	printf("strncmp ori : %d\n", strncmp("Saalam", "Salam", 5));
// 	printf("strncmp ori : %d\n", strncmp("Salam", "Saalam", 5));
// 	return (0);
// }
