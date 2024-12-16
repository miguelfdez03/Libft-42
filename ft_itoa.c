/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:45:11 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/16 18:18:19 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(long num)
{
	int	len;

	len = 1;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*convert_to_str(long num, int len, int is_negative)
{
	char	*str;

	str = malloc(sizeof(char) * (len + is_negative + 1));
	if (!str)
		return (NULL);
	str[len + is_negative] = '\0';
	while (len > 0)
	{
		str[len + is_negative - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	int		is_negative;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	len = get_num_len(num);
	return (convert_to_str(num, len, is_negative));
}