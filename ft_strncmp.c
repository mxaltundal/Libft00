/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:29:24 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:29:27 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] < str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main( void )
{
    const char *cp1 = "BilgA";
    const char *cp2 = "BilgA";
    int ret;

    ret = ft_strncmp(cp1, cp2, 7);
	printf ("%d", ret);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter
   	dizisinden küçüktür!");
    else if(ret>0) printf("cp2 karakter dizisi 
	cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    return 0;
}*/
