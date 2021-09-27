/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:25:03 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 17:33:25 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (ptr == str)
		{
			if (*ptr <= 'z' && *ptr >= 'a')
				*ptr -= 32;
		}
		else if (an(*(ptr - 1)) == 0)
		{
			if (*ptr <= 'z' && *ptr >= 'a')
				*ptr -= 32;
		}
		else if ((*ptr >= 'A' && *ptr <= 'Z'))
			*ptr += 32;
		ptr++;
	}
	return (str);
}
