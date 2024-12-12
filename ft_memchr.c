/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:36:41 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/05 13:05:01 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}
/* int main()
{
	char str[] = "Hello, World!";

	// Buscar 'o'
	void *result1 = ft_memchr(str, 'o', strlen(str));
	printf("Resultado 'o': %s\n", result1 ? (char*)result1 : "No encontrado");

	// Buscar 'z'
	void *result2 = ft_memchr(str, 'z', strlen(str));
	printf("Resultado 'z': %s\n", result2 ? (char*)result2 : "No encontrado");

	return (0);
} */