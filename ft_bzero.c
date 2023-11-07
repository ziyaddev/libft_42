/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:30:15 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 18:21:54 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	char *s_ptr;

	s_ptr = s;
	while (n--)
		*s_ptr++ = 0;
}

// int	main(void)
// {
// 	char mystr[] = "salam";

// 	printf("mystr : %s\n", mystr);
// 	ft_bzero(&mystr, 1);
// 	printf("mystr : %s\n", mystr);

// 	printf("my c : %c\n", mystr[0]);
// 	printf("my c : %c\n", mystr[1]);
// 	printf("my c : %c\n", mystr[2]);
// 	printf("my c : %c\n", mystr[3]);
// 	printf("my c : %c\n", mystr[4]);
// 	printf("my c : %c\n", mystr[5]);
// 	return (0);
// }
