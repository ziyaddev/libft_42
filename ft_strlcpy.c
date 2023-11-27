/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:52:40 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/08 18:37:07 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * @author Ziyad A. Dev (zakchouc@student.42.fr)
 * @brief	The strlcpy() function copy strings. They are designed to be
 * 			safer, more consistent, and less error prone replacements
 * 			for strncpy(3).
 * 			Unlike this function, strlcpy() take the full size of the
 * 			buffer (not just the length) and guarantee to NUL-terminate
 * 			the result (as long as size is larger than 0).
 * 			Note that a byte for the NUL should be included in size.
 * 			Also note that strlcpy() and strlcat() only operate on
 * 			true “C” strings. This means that for strlcpy() src must be
 * 			NUL-terminated.
 * 			The strlcpy() function copies up to size - 1 characters from
 * 			the NUL-terminated string src to dst, NUL-terminating the result.
 * 
 * @param	dst		Pointer to which the copy operates
 * @param	src		Pointer from which the copy operates
 * @param	size	Amount of character that need to be copied
 * 
 * @return	The strlcpy() function return the total length of the string
 * 			they tried to create. For strlcpy() that means the length of src.
 * 
 * @version 0.1
 * @date 2023-11-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (!size || (size < ft_strlen(src)))
		return (0);
	while (src[len] && size--)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = 0;
	len = 0;
	while (src[len])
		len++;
	return (len);
}

// #include "ft_strlen.c"
// int	main(void)
// {
// 	size_t	size;
// 	char	data_src[] = "salam";
// 	char	data_dest[6];

// 	char	data_src_ori[] = "salam";
// 	char	data_dest_ori[6];
// 	int		i;

// 	size = 6;
// 	i = 3;
// 	printf("data_src_ft   : %s\n", data_src);
// 	printf("data_src_ori  : %s\n\n", data_src_ori);

// 	printf("data_dest_ft  : %s\n", data_dest);
// 	printf("data_dest_ori : %s\n\n", data_dest_ori);

// 	printf("ft_strlcpy    : %zu\n", ft_strlcpy(data_dest, data_src, size));
// 	printf("strlcpy ori   : %zu\n\n", strlcpy(data_dest_ori, data_src_ori, size));

// 	printf("data_src_ft   : %s\n", data_src);
// 	printf("data_src_ori  : %s\n\n", data_src_ori);

// 	printf("data_dest_ft  : %s\n", data_dest);
// 	printf("data_dest_ori : %s\n\n", data_dest_ori);

// 	printf("data_dest_ft  : %d\n", data_dest[i]);
// 	printf("data_dest_ori : %d\n", data_dest_ori[i]);

// 	return (0);
// }
