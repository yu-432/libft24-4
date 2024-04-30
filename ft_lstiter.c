/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:38:17 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 14:50:12 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (1)
	{
		f(lst);
		if (lst -> next == NULL)
			break ;
		lst = lst -> next;
	}
}

// void	f(void *lst)
// {
// 	t_list	*list;

// 	list = lst;
// 	list -> content = "xxx";
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

// 	ft_lstiter(p, f);
// 	for(int i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", p -> content);
// 		p = p -> next;

// 	}
// }