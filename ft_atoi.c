/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:48:56 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/15 15:13:35 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoierror(int sign)
{
	if (sign > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	i;
	int	num;
	int	size;

	i = 0;
	neg = 1;
	size = 0;
	num = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (++size == 20)
			return (atoierror(neg));
		num = num * 10 + (nptr[i++] - '0');
	}
	return (num * neg);
}
