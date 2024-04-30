/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:17:50 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 13:30:55 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst -> content);
	free(lst);
}

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

// 	ft_lstdelone(p, del);
// 	for(int i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", p -> content);
// 		p = p -> next;
// 	}
// }