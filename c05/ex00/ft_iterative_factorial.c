/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:29:40 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 00:44:20 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int		fac;

	fac = nb;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (--nb)
		fac *= nb;
	return (fac);
}
