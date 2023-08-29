/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:21:58 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:22:01 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ch;

	str = (char *)s;
	ch = (char)c;
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (*str == ch)
		return (str);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char cdizi[] = "Bilgisayar";
    char *ret;

    ret = ft_strchr(cdizi, 's');

    printf("Bulunan karakterden itibaren dizi içeriği: %s", ret);

    return 0;
}*/
