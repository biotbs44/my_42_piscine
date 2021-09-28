/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:02:45 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 08:11:34 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_array(char *str, int num, int end, int n)
{
	int	idx;
	int	temp;

	temp = num;
	idx = 0;
	if (num == end)
	{
		while (idx < n)
			write(1, &str[idx++], 1);
	}
	else
	{
		while (idx < n)
			write(1, &str[idx++], 1);
		write(1, ", ", 2);
	}
}

void	ft_make_array_and_check_ascending(int num, int end, int n)
{
	char	str[10];
	int		idx;
	int		end_idx;
	int		temp;
	int		flag;

	flag = 0;
	temp = num;
	end_idx = n - 1;
	idx = 0;
	while (end_idx >= 0)
	{
		str[end_idx--] = (temp % 10) + 48;
		temp /= 10;
	}
	end_idx = n - 1;
	while (idx < end_idx)
	{
		if (str[idx] >= str[idx + 1])
			flag = 1;
		idx++;
	}
	if (flag == 0)
		ft_write_array(str, num, end, n);
}

void	ft_print_combn(int n)
{
	int	num;
	int	break_num;
	int	mul_ten;
	int	num_pos;

	break_num = 0;
	num = 0;
	mul_ten = 1;
	num_pos = n - 1;
	while (num_pos >= 1)
	{
		num += (mul_ten * num_pos--);
		mul_ten *= 10;
	}
	mul_ten = 1;
	num_pos = 9;
	while (num_pos >= (10 - n))
	{
		break_num += ((num_pos--) * (mul_ten));
		mul_ten *= 10;
	}
	while (num <= break_num)
		ft_make_array_and_check_ascending(num++, break_num, n);
}
