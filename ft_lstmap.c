/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:50:46 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 16:06:25 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	new_lst = NULL;
	if (lst == NULL)
		return (NULL);
	while (1)
	{
		node = ft_lstnew(f(lst -> content));
		if (node == NULL)
		{
			ft_lstdelone(node, del);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		if (lst -> next == NULL)
			break ;
		lst = lst -> next;
	}
	return (new_lst);
}

// void	del(void *content)
// {
// 	free(content);
// }

// void	*f(void *lst)
// {
// 	t_list	*list;

// 	list = lst;
// 	list -> content = ft_strdup("zzz");
// 	return (list);
// }

// int main(void)
// {
// 	t_list *new_node;
// 	t_list *p;

// 	p = ft_lstnew(ft_strdup("abc"));
// 	ft_lstadd_front(&p, ft_lstnew(ft_strdup("def")));
// 	ft_lstadd_front(&p, ft_lstnew(ft_strdup("ghi")));

// 	// for (int i = 0; i < 3; i++)
// 	// {
// 	// 	printf("%s\n", p -> content);
// 	// 	p = p -> next;
// 	// }
// 	new_node = ft_lstmap(p, f, del);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", new_node -> content);
// 		new_node = new_node -> next;
// 	}
// }