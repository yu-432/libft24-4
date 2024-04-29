/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:42:16 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/29 15:26:27 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	while (1)
	{
		if (lst -> next == NULL)
			break ;
		count++;
		lst = lst -> next;
	}
	return (count);
}

int	main(void)
{
	t_list *p;
	t_list *pp;
	t_list *ppp;
	char *data1 = "abc";
	char *data2 = "def";
	char *data3 = "ghi";

	p = ft_lstnew(data1);
	printf("%s\n", p -> content);
	pp = ft_lstnew(data2);
	ft_lstadd_front(&p, pp);
	printf("%s\n", pp -> content);
	ppp = ft_lstnew(data3);
	ft_lstadd_front(&pp, ppp);
	printf("%s\n", ppp -> content);

	printf("%d\n", ft_lstsize(ppp));
}

