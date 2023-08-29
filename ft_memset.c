/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:46:34 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 17:46:38 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len)
	{
		*ptr = c;
		len--;
		ptr++;
	}
	return (b);
}
/*
#include <stdio.h>

int main()
{
	char	*s = "meryem altundal";
	int c = 'a';
	void	*b;

	b = ft_memset(s, c, 6);
	printf("%s\n", b);
	return 0;
}
*/
