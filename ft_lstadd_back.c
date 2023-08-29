/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:45:47 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 15:45:48 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mlst;

	mlst = *lst;
	if (!new)
		return ;
	if (*lst == (void *)0)
		*lst = new;
	else
	{
		while (mlst->next != (void *)0)
		{
			mlst = mlst->next;
		}
		mlst->next = new;
	}
}
/*
#include <stdio.h>

void lstprint(void *p)
{
    printf("%s", (char *)p);
}

 int main()
{
    t_list *lst;
    t_list *p;
    char *t = "123";
    lst = ft_lstnew(t);
    p = ft_lstnew("abc");
    
    ft_lstadd_back(&lst, p);
    ft_lstiter(lst, lstprint);
}
*/
