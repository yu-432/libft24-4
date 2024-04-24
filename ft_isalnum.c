/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:32:57 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/16 12:13:23 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
int	main(void)
{
	for (int i = 0; i < 128; i++)
	{
		printf("ft = %c = %d\n", i, ft_isalnum(i));
		printf("or = %c = %d\n", i, isalnum(i));
	}
}