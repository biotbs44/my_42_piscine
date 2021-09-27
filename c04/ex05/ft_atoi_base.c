/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:27:50 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/28 00:27:52 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_check_base(char *base, int base_size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*base == '\0' || base_size == 1)
		return (0);
	while (i < base_size - 1)
	{
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = -1;
	while (++i < base_size)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
	}
	return (1);
}

int	ft_check_str(char *str)
{
	int		odd;

	odd = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			odd *= -1;
		str++;
	}
	return (odd);
}

int	ft_base_to_ten(char *str, char *base, int base_size)
{
	int		i;
	int		j;
	int		res_num;
	int		temp;

	i = 0;
	j = 0;
	res_num = 0;
	temp = base_size;
	base_size = 1;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != base[j])
		{
			j++;
			if (base[j] == '\0')
				return (res_num);
		}
		res_num = res_num * base_size + j;
		base_size = temp;
		i++;
	}
	return (res_num);
}

int	ft_atoi_base(char *str, char *base)
{
	int		odd;
	int		base_size;
	int		ret_num;

	ret_num = 0;
	odd = 1;
	base_size = ft_strlen(base);
	if (ft_check_base(base, base_size) == 0)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			odd *= -1;
		str++;
	}
	ret_num = ft_base_to_ten(str, base, base_size);
	return (ret_num * odd);
}
