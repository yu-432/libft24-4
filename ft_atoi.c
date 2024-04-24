/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:12:54 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/22 18:43:52 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	char *src;
	int value;
	int sign;

	src = (char *)str;
	sign = 1;
	value = 0;
	while(*src == '\t' || *src == '\n' || *src == '\v'
		|| *src == '\f' ||*src == '\r' || *src == ' ')
		src++;
	if(*src == '-')
		sign = -1;
	if(*src == '-' || *src == '+')
		src++;
	while(*src)
	{
		if(!('0' <= *src && *src <= '9'))
			break;
		value = value * 10 + (*src - '0');
		src++;
	}
	return (value * sign);
}


int main(void)
{
	char str[] = "-12312003";
	
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}