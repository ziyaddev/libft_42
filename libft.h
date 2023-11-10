/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakchouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:44:11 by zakchouc          #+#    #+#             */
/*   Updated: 2023/11/09 14:44:14 by zakchouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t size);

void	*ft_memmove(void *dest, const void *src, size_t size);

void	*ft_memset(void *ptr, int value, size_t count);

char	*ft_strchr(const char *str, int search);

int		ft_toupper(int c);

int		ft_strlen(char *str);

int		ft_strncmp(const char *first, const char *second, size_t length);

char	*ft_strrchr(const char *str, int search);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
