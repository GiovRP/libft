/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giribeir <giovani.mack@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:49:56 by giribeir          #+#    #+#             */
/*   Updated: 2021/09/15 18:05:43 by giribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count + 1);
}

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static void	ft_rev(char *str)
{
	size_t	size;
	size_t	i;
	char	acc;

	size = ft_strlen(str) - 1;
	i = 0;
	while (str[i] && i < size)
	{
		acc = str[i];
		str[i] = str[size];
		str[size] = acc;
		i++;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	size_t	is_neg;
	size_t	count_digit;

	count_digit = ft_count_digit(n);
	is_neg = (n < 0);
	if (n == 0)
		return (ft_strdup("0"));
	str = ft_calloc(count_digit + is_neg, sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (n != 0)
	{
		str[count++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[count] = '-';
	ft_rev(str);
	return (str);
}
