/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:54:22 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 14:55:42 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr <= 31 || *ptr == 127)
			return (0);
		ptr++;
	}
	return (1);
}
