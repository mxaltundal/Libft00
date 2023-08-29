/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:34:39 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:34:41 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	int a;
	
	a = 41;
	printf("%d \n", ft_isprint(a));
	printf("%d \n", isprint(a));
	return 0;
}
*/
