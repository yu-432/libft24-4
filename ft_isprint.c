/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:40 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/16 12:13:15 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

int	main(void)
{
	for (int i = 0; i < 128; i++)
	{
		printf("ft = %c = %d\n", i, ft_isprint(i));
		printf("or = %c = %d\n", i, isprint(i));
	}
}