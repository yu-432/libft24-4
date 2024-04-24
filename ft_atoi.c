/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:12:54 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 17:15:02 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*src;
	int		value;
	int		sign;

	src = (char *)str;
	sign = 1;
	value = 0;
	while (*src == '\t' || *src == '\n' || *src == '\v'
		|| *src == '\f' ||*src == '\r' || *src == ' ')
		src++;
	if (*src == '-')
		sign = -1;
	if (*src == '-' || *src == '+')
		src++;
	while (*src)
	{
		if (!('0' <= *src && *src <= '9'))
			break ;
		value = value * 10 + (*src - '0');
		src++;
	}
	return (value * sign);
}

// int main(void)
// {
// 	char i1[] = "9234567876543234568";
// 	char i2[] = "-9234567876543234568";
// 	char i3[] = "18446744073709551616";
// 	char i4[] = "18446744073709551616";
// 	char i5[] = "18446744073709551614";
// 	char i6[] = "18446744073709551614";

// 	printf("%d, %d\n", atoi(i1), ft_atoi(i1));
// 	printf("%d, %d\n", atoi(i2), ft_atoi(i2));
// 	printf("%d, %d\n", atoi(i3), ft_atoi(i3));
// 	printf("%d, %d\n", atoi(i4), ft_atoi(i4));
// 	printf("%d, %d\n", atoi(i5), ft_atoi(i5));
// 	printf("%d, %d\n", atoi(i6), ft_atoi(i6));
// }