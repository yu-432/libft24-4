/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:05:00 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:54:38 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len--)
	{
		*str = c;
		str++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char or[] = "aaaaaaa";
// 	char ft[] = "aaaaaaa";
// 	int c = 65;
// 	printf("or = %s\nft = %s\n", or, ft);
// 	char *or_p = memset(or, c, strlen(or));
// 	char *ft_p = ft_memset(ft, c, strlen(ft));
// 	printf("or = %p\nft = %p\n", or, ft);
// 	printf("or = %p\nft = %p\n", or_p, ft_p);
// 	printf("or = %s\nft = %s\n", or, ft);
// }
