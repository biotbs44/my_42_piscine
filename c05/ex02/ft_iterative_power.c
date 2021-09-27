/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:46:35 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 01:09:44 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		temp;

	temp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		temp *= nb;
	return (temp);
}
