/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:53:37 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/06 11:58:13 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z'))
		|| ((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("is alnum : %d\n", ft_isalnum('a'));
// 	printf("is alnum : %d\n", ft_isalnum('S'));
// 	printf("is alnum : %d\n", ft_isalnum('7'));
// 	printf("is alnum : %d\n", ft_isalnum('0'));
// 	printf("is alnum : %d\n", ft_isalnum('9'));
// 	printf("is alnum : %d\n", ft_isalnum('/'));
// 	printf("is alnum : %d\n", ft_isalnum('?'));
// 	printf("is alnum : %d\n", ft_isalnum('!'));
// 	printf("is alnum : %d\n", ft_isalnum(' '));
// 	return (0);
// }