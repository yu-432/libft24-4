/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:53:32 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/26 18:23:25 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

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
