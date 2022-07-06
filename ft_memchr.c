/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:50:09 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/11 16:50:10 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;

	while (n-- > 0)
	{
		str = (unsigned char *) s;
		if (*str == (unsigned char) c)
			return (str);
		s++;
	}
	return (NULL);
}
