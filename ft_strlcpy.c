/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:24:57 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:24:59 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] && i < (dstsize - 1))
			i++;
		ft_memcpy(dest, src, i);
		dest[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *dest = "";
	const char * restrict src = "";
	size_t dstsize = 4;
	printf("%lu \n", 
		ft_strlcpy((void *)0, (void *)0, dstsize));
	printf("%lu \n", 
		strlcpy((void *)0, (void *)0, dstsize));
	return 0;
}
*/
