/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:50:36 by yooshima          #+#    #+#             */
/*   Updated: 2024/05/02 13:55:30 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	a = (n % 10) + '0';
	write (fd, &a, 1);
	return ;
}

// int main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	ft_putnbr_fd(1, 1);
// 	ft_putnbr_fd(-1, 1);
// 	ft_putnbr_fd(42, 1);
// 	ft_putnbr_fd(-42, 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putnbr_fd(INT_MAX - 1, 1);
// 	ft_putnbr_fd(INT_MIN + 1, 1);
// }