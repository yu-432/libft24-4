/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:36:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/30 16:48:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}

// int main(void)
// {
// 	char or[] = "afuhweufhiufhusfhwiufsijfs";
// 	char ft[] = "afuhweufhiufhusfhwiufsijfs";
// 	printf("or = %s\nft = %s\n", or, ft);
// 	bzero(or, );
// 	ft_bzero(ft, 10);
// 	printf("or = %s\nft = %s\n", or+9, ft+9);
// }