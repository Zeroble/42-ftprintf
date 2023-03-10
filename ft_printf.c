/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:24:03 by minylee           #+#    #+#             */
/*   Updated: 2023/03/10 15:46:59 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_normal_str(const char *str, const int cur_last, const int cur_now)
{
	write(1, &str[cur_last], cur_now - cur_last);
	return (cur_now - cur_last);
}

int	percentage_format_detected(const char *str, int *cursor, va_list *ap)
{
	int	len;

	len = 0;
	*cursor += 1;
	if (str[*cursor] == 'c')
		len = percentage_format_c(va_arg(*ap, int));
	else if (str[*cursor] == 's')
		len = percentage_format_s(va_arg(*ap, char *));
	else if (str[*cursor] == 'p')
		len = percentage_format_p(va_arg(*ap, void *));
	else if (str[*cursor] == 'd' || str[*cursor] == 'i')
		len = percentage_format_d(va_arg(*ap, int));
	else if (str[*cursor] == 'u')
		len = percentage_format_d(va_arg(*ap, unsigned int));
	else if (str[*cursor] == 'x' || str[*cursor] == 'X')
		len = percentage_format_x(str[*cursor], va_arg(*ap, unsigned int));
	else if (str[*cursor] == '%')
		len = percentage_format_c('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		cur_now;
	int		cur_last;
	int		tot_len;
	va_list	ap;

	va_start(ap, str);
	ft_init_2int_var(&cur_last, &tot_len, 0);
	cur_now = -1;
	while (++cur_now < (int) ft_strlen(str))
	{
		if (str[cur_now] == '%')
		{
			tot_len += write_normal_str(str, cur_last, cur_now);
			tot_len += percentage_format_detected(str, &cur_now, &ap);
			cur_last = cur_now + 1;
		}
	}
	tot_len += write_normal_str(str, cur_last, cur_now);
	va_end(ap);
	return (tot_len);
}
