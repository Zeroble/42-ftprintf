/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentage_format_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:13:10 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:59:13 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	percentage_format_p(void *num)
{
	int	len;

	write(1, "0x", 2);
	len = ft_unsiged_putnbr_base((long long int)num, "0123456789abcdef");
	return (len + 2);
}
