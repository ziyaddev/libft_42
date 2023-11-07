/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:17:28 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 18:04:14 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	printf("\ntolower -> %c", ft_tolower('D'));
// 	printf("\ntolower -> %c", ft_tolower('a'));
// 	printf("\ntolower -> %c", ft_tolower('z'));
// 	printf("\ntolower -> %c", ft_tolower('A'));
// 	printf("\ntolower -> %c", ft_tolower('Z'));
// 	printf("\ntolower -> %c", ft_tolower('/'));
// 	printf("\n\ntolower -> %c", tolower('D'));
// 	printf("\ntolower -> %c", tolower('a'));
// 	printf("\ntolower -> %c", tolower('z'));
// 	printf("\ntolower -> %c", tolower('A'));
// 	printf("\ntolower -> %c", tolower('Z'));
// 	printf("\ntolower -> %c", tolower('/'));
// 	return (0);
// }
