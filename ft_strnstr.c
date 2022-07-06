/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:52:07 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/11 16:52:08 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	i;

	i = 0;
	little_size = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, little_size) == 0)
			&& (i + little_size <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
