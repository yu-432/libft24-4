/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:55 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/24 14:44:01 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// for (int i = 0; i < 128; i++)
// 	{
// 		printf("ft = %c = %d\n", i, ft_isdigit(i));
// 		printf("or = %c = %d\n", i, isdigit(i));
// 	}
// }