/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:54:26 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 18:54:27 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (search[j] == '\0')
		return ((char *)string);
	while (string[i] != '\0')
	{
		while (string[i + j] == search[j] && string[i + j] != '\0' && \
		(i + j) < len)
			j++;
		if (search[j] == '\0')
			return ((char *)string + i);
		i++;
		j = 0;
	}
	return (0);
}
