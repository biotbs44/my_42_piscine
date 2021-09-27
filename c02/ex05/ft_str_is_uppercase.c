/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:52:50 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 14:53:54 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fr_str_is_uppercase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr < 'A' || *ptr > 'Z')
			return (0);
		ptr++;
	}
	return (1);
}
