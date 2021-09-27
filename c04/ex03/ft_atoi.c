/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:58:06 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 21:34:41 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		odd;
	int		ten;
	int		ret_num;

	ret_num = 0;
	odd = 1;
	ten = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			odd *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret_num = (ret_num * ten) + (*str - '0');
		ten = 10;
		str++;
	}
	return (ret_num * odd);
}
