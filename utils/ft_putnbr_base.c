/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:21:43 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:58:57 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	get(long long nbr, char *base, int obase)
{
	long long	div;
	long long	mod;
	int			len;

	len = 1;
	div = nbr / obase;
	mod = nbr % obase;
	if (div < obase)
	{
		if (div != 0)
		{
			write(1, &base[div], 1);
			len += 1;
		}
		write(1, &base[mod], 1);
		return (len);
	}
	else
	{
		len += get(div, base, obase);
		write(1, &base[mod], 1);
		return (len);
	}
}

int	ft_putnbr_base(long long int nbr, char *base)
{
	int		obase;
	int		len;

	len = 0;
	obase = get_base(base);
	if (obase <= 1)
		return (0);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		len = 1;
	}
	len += get(nbr, base, obase);
	return (len);
}
