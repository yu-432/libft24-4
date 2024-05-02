/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:53:32 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	f(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = *c + 1;
// }

// int main(void)
// {
// 	char str[] = "abcdefgh";

// 	printf("%s", str);
// 	ft_striteri(str, f);
// 	printf(" = %s\n", str);
// }
