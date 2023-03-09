/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentage_format_x.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:13:10 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:59:15 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	percentage_format_x(char flag, unsigned int num)
{
	int	len;

	if (flag == 'x')
		len = ft_unsiged_putnbr_base(num, "0123456789abcdef");
	else
		len = ft_unsiged_putnbr_base(num, "0123456789ABCDEF");
	return (len);
}
