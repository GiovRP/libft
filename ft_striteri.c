/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:51:26 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/11 16:51:27 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;
	size_t	i;

	if (!s)
		return ;
	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
