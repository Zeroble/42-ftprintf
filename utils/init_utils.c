/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:24:34 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:59:00 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_init_2int_var(int *a, int *b, int init)
{
	*a = init;
	*b = init;
}

void	ft_init_3int_var(int *a, int *b, int *c, int init)
{
	*a = init;
	*b = init;
	*c = init;
}
