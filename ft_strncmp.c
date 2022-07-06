/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:52:02 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/11 16:52:03 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*one;
	unsigned char	*two;

	i = 0;
	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while ((one[i] || two[i]) && i < n)
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
	}
	return (0);
}	
