/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:38:05 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 19:57:43 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unsigned_nb;

	unsigned_nb = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		unsigned_nb = (unsigned int)(nb * -1);
	}
	else
		unsigned_nb = (unsigned int)nb;
	if (unsigned_nb >= 10)
	{
		ft_putnbr(unsigned_nb / 10);
		ft_putnbr(unsigned_nb % 10);
	}
	else
		ft_putchar(unsigned_nb % 10 + '0');
}
