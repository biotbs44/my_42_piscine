/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:15:21 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 09:31:59 by jungyang         ###   ########.fr       */
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

	if (nb < 0)
	{
		unsigned_nb = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		unsigned_nb = (unsigned int)nb;
	if (unsigned_nb >= 10)
	{
		ft_putnbr(unsigned_nb / 10);
		ft_putnbr(unsigned_nb % 10);
	}
	else
		ft_putchar(unsigned_nb + '0');
}
