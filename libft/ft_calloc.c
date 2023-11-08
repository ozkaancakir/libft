/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:52:12 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 18:52:15 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	all_size;
	void	*all_mem;

	all_size = count * size;
	all_mem = malloc(all_size);
	if (all_mem != NULL)
		ft_bzero(all_mem, all_size);
	return (all_mem);
}
