/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:44:56 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 15:44:57 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = 49;
	printf("%d", ft_isdigit(a));
	return 0;
}
*/
