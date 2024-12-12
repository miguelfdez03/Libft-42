/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:22:20 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/05 12:22:13 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (char)c)
			r = s;
		s++;
	}
	if (*s == (char)c)
		r = s;
	if (r != NULL)
		return ((char *)r);
	else
		return (NULL);
}

/* int	main(void)
{
	const char *str = "Hola Mundo!";
	char c = 'o';

	// Llamamos a ft_strrchr para encontrar la última ocurrencia de 'o'
	char *result = ft_strrchr(str, c);

	if (result != NULL)
	{
		printf("El carácter '%c' se encuentra en la última posición: %s\n", c,
			result);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n", c);
	}

	return (0);
} */