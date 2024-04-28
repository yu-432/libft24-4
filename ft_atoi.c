/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:12:54 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/28 15:42:34 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "libft.h"

long	long_overflow(int sign, const char *str)
{
	long	temp;
	long	value;

	value = 0;
	while (ft_isdigit(*str))
	{
		temp = value * 10 + *str - '0';
		if (sign == 1 && !(temp >= value))
			return (LONG_MAX);
		else if (sign == -1 && !(temp >= value))
			return (LONG_MIN);
		value = temp;
		str++;
	}
	return (value);
}

int	ft_atoi(const char *str)
{
	long	value;
	int		sign;

	sign = 1;
	value = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' ||*str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	value = (int)long_overflow(sign, str);
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

// 	printf("%ld\n%ld\n", LONG_MAX, LONG_MAX /10);

// 	printf("%d %d\n", ft_atoi(""), atoi(""));
// 	printf("%d %d\n",ft_atoi("-"), atoi("-"));
// 	printf("%d %d\n",ft_atoi("+"), atoi("+"));
// 	printf("%d %d\n",ft_atoi("0"), atoi("0"));
// 	printf("%d %d\n",ft_atoi("-0"), atoi("-0"));
// 	printf("%d %d\n",ft_atoi("+0"), atoi("+0"));
// 	printf("%d %d\n",ft_atoi("1"), atoi("1"));
// 	printf("%d %d\n",ft_atoi("-1"), atoi("-1"));
// 	printf("%d %d\n",ft_atoi("+1"), atoi("+1"));
// 	printf("%d %d\n",ft_atoi("7"), atoi("7"));
// 	printf("%d %d\n",ft_atoi("-7"), atoi("-7"));
// 	printf("%d, %d\n", atoi(i1), ft_atoi(i1));
// 	printf("%d, %d\n", atoi(i2), ft_atoi(i2));
// 	printf("%d, %d\n", atoi(i3), ft_atoi(i3));
// 	printf("%d, %d\n", atoi(i4), ft_atoi(i4));
// 	printf("%d, %d\n", atoi(i5), ft_atoi(i5));
// 	printf("%d, %d\n", atoi(i6), ft_atoi(i6));
// 	printf("%d, %d\n", atoi("9223372036854775806"), ft_atoi("9223372036854775806"));
// 	printf("%d %d\n", atoi("-9223372036854775807"), ft_atoi("-9223372036854775807"));
// }