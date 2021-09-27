/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 05:06:57 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 19:29:22 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n >= 1)
	{
		if (*s1 == *s2 && *s1 != '\0')
		{
			s1++;
			s2++;
		}
		else
		{
			if (*s1 > *s2)
				return (1);
			else if (*s1 < *s2)
				return (-1);
			else
				return (0);
		}
		n--;
	}
	return (0);
}
