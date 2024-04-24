/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:36:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 17:51:26 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (*str && n--)
	{
		*str = '\0';
		str++;
	}
}

// int main(void)
// {
// 	char or[] = "afuhweufhiufhusfhwiufsijfs";
// 	char ft[] = "afuhweufhiufhusfhwiufsijfs";
// 	printf("or = %s\nft = %s\n", or, ft);
// 	bzero(or, strlen(or)- 10);
// 	ft_bzero(ft, strlen(ft)- 10);
// 	printf("or = %s\nft = %s\n", or+16, ft+16);
// }