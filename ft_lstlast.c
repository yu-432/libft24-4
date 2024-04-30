/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:34:01 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 12:01:02 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (1)
	{
		if (lst -> next == NULL)
			break ;
		lst = lst -> next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *p;
// 	t_list *pp;
// 	t_list *ppp;
// 	char *data1 = "abc";
// 	char *data2 = "def";
// 	char *data3 = "ghi";

// 	p = ft_lstnew(data1);
// 	printf("%s\n", p -> content);

// 	pp = ft_lstnew(data2);
// 	ft_lstadd_front(&p, pp);
// 	printf("%s\n", pp -> content);

// 	ppp = ft_lstnew(data3);
// 	ft_lstadd_front(&p, ppp);
// 	printf("%s\n", ppp -> content);

// 	printf("\n%s\n", p -> content);//lst front "ghi"
// 	printf("%s\n", ft_lstlast(p) -> content);// 1ghi -> 2def -> 3abc -> NULL
// }
