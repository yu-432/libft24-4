/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:17:47 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/16 12:13:30 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	for (int i = 0; i < 128; i++)
	{
		printf("ft = %c = %d\n", i, ft_isalpha(i));
		printf("or = %c = %d\n", i, isalpha(i));
	}
}
