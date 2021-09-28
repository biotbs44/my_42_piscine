/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 02:55:50 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 13:33:24 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb >= 2)
	{
		while (i <= 46341 && i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	temp;

	temp = nb;
	while (temp <= 2147483647)
	{
		if (ft_is_prime(temp) == 1)
			return (temp);
		temp++;
	}
	return (0);
}
