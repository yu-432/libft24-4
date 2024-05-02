/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:32:14 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:53:03 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

//#include <stdio.h>
// int	main(void)
// {
// 	t_list *p;
// 	char *data1 = "abc";
// 	char *data2 = "def";
// 	char *data3 = "ghi";

// 	p = ft_lstnew(data1);
// 	printf("%s\n", p -> content);
// }

