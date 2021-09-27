/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:56:13 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/27 18:22:02 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_cat_size;
	unsigned int	src_size;

	dest_size = 0;
	src_cat_size = 0;
	src_size = 0;
	while (*dest != '\0')
	{
		dest++;
		dest_size++;
	}
	while (*src != '\0' && dest_size + src_size + 1 < size)
	{
		*dest++ = *src++;
		src_size++;
	}
	src_size = src_cat_size;
	while (*src++ != '\0')
		src_size++;
	*dest = '\0';
	if (size <= dest_size)
		return (src_size + size);
	else
		return (src_size + dest_size);
}
