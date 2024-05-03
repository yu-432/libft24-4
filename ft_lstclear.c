/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:12:55 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/03 11:32:35 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		if (temp == NULL)
			break ;
		*lst = temp;
	}
	*lst = NULL;
}

// #include <stdio.h>

// void	del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list *p;
// 	t_list *pp;
// 	t_list *ppp;
// 	t_list *add;
// 	char *data1 = ft_strdup("abc");
// 	char *data2 = ft_strdup("def");
// 	char *data3 = ft_strdup("ghi");

// 	p = ft_lstnew(data1);

// 	pp = ft_lstnew(data2);
// 	ft_lstadd_front(&p, pp);

// 	ppp = ft_lstnew(data3);
// 	ft_lstadd_front(&p, ppp);

// 	ft_lstclear(&p, del);
// 	if(p == NULL)
// 		printf("OK\n");
// }