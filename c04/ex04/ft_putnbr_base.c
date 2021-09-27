/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:35:07 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 23:21:56 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

void	ft_putnbr(unsigned int nbr, unsigned int base_size, char *base)
{
	if (nbr >= base_size)
	{
		ft_putnbr(nbr / base_size, base_size, base);
		ft_putnbr(nbr % base_size, base_size, base);
	}
	else
		ft_putchar(base[nbr % base_size]);
}

int	ft_check_base(char *base, unsigned int base_size)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	if (*base == '\0' || base_size == 1)
		return (1);
	while (i < base_size - 1)
	{
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = -1;
	while (++i < base_size)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		unsigned_nbr;
	unsigned int		base_size;
	int					check_base;

	base_size = ft_strlen(base);
	check_base = 0;
	if (ft_check_base(base, base_size))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		unsigned_nbr = (unsigned int)(nbr * -1);
	}
	else
		unsigned_nbr = (unsigned int)(nbr);
	ft_putnbr(unsigned_nbr, base_size, base);
}
