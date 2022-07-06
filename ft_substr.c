/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:52:21 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/27 19:54:09 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	sbstr = NULL;
	if (start > s_len)
		len = 1;
	else if (start + len > s_len)
		len = s_len - start + 1;
	else
		len++;
	sbstr = malloc(len * sizeof(char));
	if (sbstr == NULL)
		return (NULL);
	ft_strlcpy(sbstr, s + start, len);
	return (sbstr);
}
