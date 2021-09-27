/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 05:31:10 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 19:01:16 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
		dest++;
	while (nb >= 1 && *src != '\0')
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (temp);
}
