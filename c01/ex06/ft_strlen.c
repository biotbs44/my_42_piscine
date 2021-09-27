/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 13:49:20 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 13:50:53 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*ptr;
	int		count;

	ptr = str;
	count = 0;
	while (*ptr)
	{
		ptr++;
		count++;
	}
	return (count);
}
