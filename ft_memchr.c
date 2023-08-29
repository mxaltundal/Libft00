/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:17:56 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:17:59 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	const void *s = "Bilgisayar";
	int c = 's';
	size_t n = 10;

	printf("%s", (char *)ft_memchr(s, c, n));
	return 0;
}
*/
