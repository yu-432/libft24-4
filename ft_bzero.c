/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:36:19 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/16 14:46:13 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (*str)
	{
		*str = '\0';
		str++;
	}
}

int main(void)
{
	char or[] = "afuhweufhiufhusfhwiufsijfs";
	char ft[] = "afuhweufhiufhusfhwiufsijfs";

	
	printf("or = %s\nft = %s\n", or, ft);
	bzero(or, strlen(or));
	ft_bzero(ft, strlen(ft));
	printf("or = %s\nft = %s\n", or, ft);
}