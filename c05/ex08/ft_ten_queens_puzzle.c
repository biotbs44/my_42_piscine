/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 04:27:25 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 20:34:19 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	else
		return (nb);
}

int	ft_promising(int line, int *tab)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if (tab[line] == tab[i] || line - i == ft_abs(tab[line] - tab[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_nqueen(int line, int *tab, int *cnt)
{
	int	i;

	i = 0;
	if (line == 10)
	{
		(*cnt)++;
		while (i < 10)
		{
			ft_putchar(tab[i] + 48);
			i++;
		}
		ft_putchar('\n');
		return ;
	}
	while (i < 10)
	{
		tab[line] = i;
		if (ft_promising(line, tab))
			ft_nqueen(line + 1, tab, cnt);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int				tab[10];
	int				line;
	int				cnt;

	line = 0;
	cnt = 0;
	ft_nqueen(line, tab, &cnt);
	return (cnt);
}
