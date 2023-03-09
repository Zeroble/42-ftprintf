/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:26:17 by minylee           #+#    #+#             */
/*   Updated: 2023/03/06 22:58:32 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "ft_printf.h"

int		main(void)
{
	int len;
	char *str = "NICE TO MEET YOU AGAIN! :>";
	char fstr[] = "asdf %%%% %s %d %c%c%c%c %c%c%c %x %X %x %p %x %p";
	len = printf(fstr, "1234", 0x1234, 'L','o','v','e','Y','o','u', 1234, 5678, str, str, "int", "int");
	printf("\n%d\n", len);
	len = ft_printf(fstr, "1234", 0x1234, 'L','o','v','e','Y','o','u', 1234, 5678, str, str, "int", "int");
	printf("\n%d\n", len);
	ft_printf("%d %u %d %u %u\n", -2147483647, (unsigned int)2147483648, 123, 1234, 1234);
	printf("%d %u %d %u %u", -2147483647, (unsigned int)2147483648, 123, 1234, 1234);
	printf("\n%x %p\n", (unsigned int)94651544096804, (void *)94651544096804);
	ft_printf("%x %p\n", (unsigned int)94651544096804, (void *)94651544096804);
	printf("%ld", sizeof(void *));
}
