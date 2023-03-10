/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentage_format_s.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:13:06 by minylee           #+#    #+#             */
/*   Updated: 2023/03/10 13:43:39 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	return_when_null(void)
{
	write(1, "(null)", 6);
	return (6);
}

int	percentage_format_s(const char *str)
{
	int	strlen;

	if (str == 0)
		return (return_when_null());
	strlen = ft_strlen(str);
	write(1, str, strlen);
	return (strlen);
}
