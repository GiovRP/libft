/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:51:20 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/11 16:51:21 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		size;

	size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(size);
	if (cpy)
		ft_strlcpy(cpy, s1, size);
	return (cpy);
}
