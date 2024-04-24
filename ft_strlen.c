/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:15:38 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/16 13:02:26 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
//
//size_tを型定義するmakefile
//
size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
int	main(void)
{
	char a[] = "aa ~+NULLa!\aa";
	printf("or = %lu\n", strlen(a));
	printf("ft = %lu\n", ft_strlen(a));
}