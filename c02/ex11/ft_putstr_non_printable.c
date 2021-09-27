/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:52:02 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 04:15:41 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_char_printable(char c)
{
	if (c >= 32 && c != 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	uchar;
	char			*hex;
	int				index;

	hex = "0123456789abcdef";
	index = 0;
	while (1)
	{
		uchar = str[index];
		if (uchar == '\0')
			break ;
		if (ft_is_char_printable(uchar))
			ft_putchar(uchar);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[uchar / 16]);
			ft_putchar(hex[uchar % 16]);
		}
		index++;
	}
}
