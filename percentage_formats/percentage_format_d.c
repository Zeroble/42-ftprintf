/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentage_format_d.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:13:02 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:59:08 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	percentage_format_d(long long digit)
{
	char	*itoa_ret;
	int		strlen;

	itoa_ret = ft_itoa(digit);
	strlen = ft_strlen(itoa_ret);
	write(1, itoa_ret, strlen);
	free(itoa_ret);
	return (strlen);
}
