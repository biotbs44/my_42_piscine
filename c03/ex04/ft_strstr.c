/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 05:37:13 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 18:56:23 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return ((char *)str);
		}
		str++;
	}
	return (0);
}
