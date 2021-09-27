/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:45:23 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 14:47:27 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr < 'A')
			return (0);
		if ((*ptr > 'Z' && *ptr < 'a') || *ptr > 'z')
			return (0);
		ptr++;
	}
	return (1);
}
