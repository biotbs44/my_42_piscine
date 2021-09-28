/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:53:55 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 13:22:17 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_str_to_hex(char *addr, unsigned int size)
{
	unsigned int			i;
	int						idx;
	char					*str;
	char					*hex;

	hex = "0123456789abcdef";
	str = (char *) addr;
	idx = 0;
	i = 0;
	while (i < size)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		write(1, &hex[str[i] / 16], 1);
		write(1, &hex[str[i] % 16], 1);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
		i++;
	}
	write(1, " ", 1);
}

void	ft_print_addr(char *addr)
{
	long long		hex_addr;
	char			*hex;
	char			hex_addr_array[16];
	int				i;

	hex_addr = (long long) addr;
	hex = "0123456789abcdef";
	i = -1;
	while (++i < 16)
	{
		hex_addr_array[15 - i] = hex[hex_addr % 16];
		hex_addr /= 16;
	}
	i = -1;
	while (++i < 16)
		write(1, &hex_addr_array[i], 1);
}

void	ft_print_str(char *char_addr, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (i < size - 1)
	{
		if ((char_addr[i] >= 32) && (char_addr[i] != 127))
			ft_putchar(char_addr[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*char_addr;

	char_addr = (char *) addr;
	while (size > 0)
	{
		if (size > 16)
		{
			ft_print_addr(char_addr);
			ft_putchar(':');
			ft_print_str_to_hex(char_addr, 16);
			ft_print_str(char_addr, 16);
		}
		else
		{
			ft_print_addr(char_addr);
			ft_putchar(':');
			ft_print_str_to_hex(char_addr, size);
			ft_print_str(char_addr, size);
			break ;
		}
		size -= 16;
		char_addr += 16;
	}
	return (addr);
}
