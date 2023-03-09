/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentage_format_s.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:13:06 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:59:17 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	percentage_format_s(const char *str)
{
	int	strlen;

	strlen = ft_strlen(str);
	write(1, str, strlen);
	return (strlen);
}
