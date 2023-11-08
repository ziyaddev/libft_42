/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:26:03 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 11:58:24 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_ptr;

	s_ptr = (char *)s;
	while (n--)
	{
		if (*s_ptr++ == c)
			return ((void *)--s_ptr);
	}
	return ((void *)0);
}

// int	main(void)
// {
// 	// const char	data[] = "salam*";
// 	printf("memchr : %s\n", (char *)ft_memchr("sa*lam*", 42, 3));
// 	printf("memchr ori : %s\n", (char *)memchr("sa*lam*", 42, 3));
// 	return (0);
// }
