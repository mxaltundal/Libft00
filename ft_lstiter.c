/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:16:17 by maltunda          #+#    #+#             */
/*   Updated: 2022/01/20 18:16:19 by maltunda         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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
