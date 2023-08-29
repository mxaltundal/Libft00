/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:19:00 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:19:03 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stddef.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;

	if ((!dst && !src) || !n)
		return (dst);
	a = dst;
	while (n--)
	{
		*(char *)a = *(char *)src;
		a++;
		src++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( void )
{
    const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    memset(dest, '\0', 40);
    memcpy(dest, cp, 40);
    printf("%s\n", dest);

    memset(dest, '\0', 40);
    ft_memcpy(dest, cp,  40);
    printf("%s", dest);

    return 0;
}*/
