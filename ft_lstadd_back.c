/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:49:46 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 16:15:02 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp -> next != NULL)
			temp = temp -> next;
		temp -> next = new;
	}
}

// int main(void)
// {
// 	t_list *p;
// 	t_list *pp;
// 	t_list *ppp;
// 	t_list *add;
// 	char *data1 = "abc";
// 	char *data2 = "def";
// 	char *data3 = "ghi";
// 	char *data4 = "zzz";

// 	p = ft_lstnew(data1);

// 	pp = ft_lstnew(data2);
// 	ft_lstadd_front(&p, pp);

// 	ppp = ft_lstnew(data3);
// 	ft_lstadd_front(&p, ppp);

// 	add = ft_lstnew(data4);
// 	t_list *last = ft_lstlast(p);
// 	ft_lstadd_back(&last, add);
// 	for(int i = 0; i < 4; i++)
// 	{
// 		printf("%s\n", p -> content);
// 		p = p -> next;
// 	}
// }