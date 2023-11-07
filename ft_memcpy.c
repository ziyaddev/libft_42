/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:37:32 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/07 14:10:25 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char		*dest_tmp;
	const char	*src_tmp;

	dest_tmp = (char *)dest;
	src_tmp = (const char *)src;
	while (size--)
		*dest_tmp++ = *src_tmp++;
	return (dest);
}

// int	main(void)
// {
// 	char my_src[] = "salam";
// 	char my_dest[100];
// 	int	i;

// 	i = 0;
// 	printf("\nmy src : ");
// 	while (i < (int)sizeof(my_src))
// 	{
// 		printf("%c", my_src[i++]);
// 	}
// 	printf("\n");
// 	i = 0;
// 	printf("\nmy dest : ");
// 	while (i < (int)sizeof(my_dest))
// 	{
// 		printf("%c", my_dest[i++]);
// 	}
// 	ft_memcpy(my_dest, my_src, 4);
// 	printf("\n\n-----ft memcpy ---------\n");
// 	i = 0;
// 	printf("\nmy src : ");
// 	while (i < (int)sizeof(my_src))
// 	{
// 		printf("%c", my_src[i++]);
// 	}
// 	printf("\n");
// 	i = 0;
// 	printf("\nmy dest : ");
// 	while (i < (int)sizeof(my_dest))
// 	{
// 		printf("%c", my_dest[i++]);
// 	}

// 	return (0);
// }
