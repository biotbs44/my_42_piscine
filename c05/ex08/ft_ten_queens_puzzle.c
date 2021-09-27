/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 04:27:25 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 07:37:00 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ten_queens_puzzle(void)
{
	char		chess[10];
	static int		count;
	int				line;
	int				i;
	
	line = 0;
	i = 0;
	if (line == 9)
	{
		count++;
		return ;
	}
	while (i++ < 10)
	{	
		line++;
		chess[line] = i;
		if (promising(line))
		{
			ft_ten_queens_puzzle();
		}
	}
	return (count);
