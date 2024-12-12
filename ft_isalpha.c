/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:23:53 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/03 11:53:33 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	n;

	n = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		n = 1;
	return (n);
}