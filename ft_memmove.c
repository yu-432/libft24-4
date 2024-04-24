/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:41:09 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/17 16:17:04 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//エラー処理が必要？？strlenがどちらかの文字列の長さ(\0含む)を超えた場合
//https://hikotech.net/post-100/
//check it


void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned long	i;
	char			*str1;
	const char		*str2;

	str1 = dest;
	str2 = src;
	i = 0;
	while (i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	int n = 3;

	char or_dest[] = "abcdef";
	// char or_src[] = "bbbbbbbb";
	printf("or_dest = %s\n", memmove(or_dest + 2, or_dest, n));

	char ft_dest[] = "abcdef";
	// char ft_src[] = "bbbbbbbb";
	printf("ft_dest = %s\n", ft_memmove(ft_dest + 2, ft_dest, n));
}