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

static int	get(unsigned long long nbr, char *base, int obase)
{
	unsigned long long	div;
	unsigned long long	mod;
	int					len;

	len = 1;
	div = nbr / obase;
	mod = nbr % obase;
	if (div < (unsigned int)obase)
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

int	ft_unsiged_putnbr_base(unsigned long long int nbr, char *base)
{
	int		obase;
	int		len;

	obase = get_base(base);
	if (obase <= 1)
		return (0);
	len = get(nbr, base, obase);
	return (len);
}
