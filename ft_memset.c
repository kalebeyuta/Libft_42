/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:13:43 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 19:15:51 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *string, int character, size_t length)
{
	char	*fstring;
	char	fcharacter;

	fcharacter = (char)character;
	fstring = (char *)string;
	while (length--)
		*fstring++ = fcharacter;
	return (fstring);
}
