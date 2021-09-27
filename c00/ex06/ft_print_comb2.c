/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:54:35 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 09:05:37 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_to_ascii(char c, int digit)
{
	char	a;

	if (digit == 1)
	{
		a = c / 10 + '0';
	}
	else
	{
		a = c % 10 + '0';
	}
	return (a);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = -1;
	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			if (!(a == 0 && b == 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(ft_to_ascii(a, 1));
			ft_putchar(ft_to_ascii(a, 0));
			ft_putchar(' ');
			ft_putchar(ft_to_ascii(b, 1));
			ft_putchar(ft_to_ascii(b, 0));
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
