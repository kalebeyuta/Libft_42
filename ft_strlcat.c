/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:07:47 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 21:09:40 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t range)
{
	size_t	counter;
	size_t	size_destination;
	size_t	size_source;
	size_t	total;

	size_destination = ft_strlen(dest);
	size_source = ft_strlen(src);
	counter = 0;
	if (range > size_destination)
		total = size_destination + size_source;
	else
		total = size_source + range;
	while ((size_destination + 1) < range && src[counter])
	{
		dest[size_destination] = src[counter];
		size_destination++;
		counter++;
	}
	dest[size_destination] = '\0';
	return (total);
}
