/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:30:15 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 09:09:33 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
		((char *) s)[pos++] = 0;
}

// int	main(void)
// {
// 	char mystr[] = "salam";

// 	printf("mystr : %s\n", mystr);
// 	ft_bzero(&mystr, 2);
// 	printf("mystr : %s\n", mystr);

// 	printf("mystr : %c\n", mystr[0]);
// 	printf("mystr : %c\n", mystr[1]);
// 	printf("mystr : %c\n", mystr[2]);
// 	printf("mystr : %c\n", mystr[3]);
// 	printf("mystr : %c\n", mystr[4]);
// 	printf("mystr : %c\n", mystr[5]);
// 	return (0);
// }
