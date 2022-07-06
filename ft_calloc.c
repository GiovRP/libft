/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:49:20 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/11 16:49:21 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*pos;
	size_t	tot_size;
	int		fill_byte;

	tot_size = nmemb * size;
	fill_byte = 0;
	pos = malloc(tot_size);
	if (!pos || (tot_size > __INT_MAX__))
		return (NULL);
	ft_memset(pos, fill_byte, tot_size);
	return ((void *)pos);
}
