/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:04:26 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/26 18:22:41 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	nb_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (1)
	{
		n /= 10;
		len++;
		if (n == 0)
			break ;
	}
	return (len);
}

static char	*alllocate_str(int len)
{
	char	*str;

	str = (char *)malloc(len + 1 * sizeof(char *));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
	{
		result = alllocate_str(11);
		return (result = "-2147483648\0");
	}
	len = nb_len(n);
	result = alllocate_str(len);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (1)
	{
		result[len - 1] = n % 10 + '0';
		n /= 10;
		if (n == 0)
			break ;
		len--;
	}
	return (result);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-2147483647));
// }