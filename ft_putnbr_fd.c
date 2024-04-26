/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:50:36 by yooshima          #+#    #+#             */
/*   Updated: 2024/04/26 18:15:19 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	a = (n % 10) + '0';
	write (1, &a, 1);
	return ;
}

// int main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483647, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);

// }