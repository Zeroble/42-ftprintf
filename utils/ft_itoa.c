/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:04:53 by minylee           #+#    #+#             */
/*   Updated: 2023/03/10 15:42:49 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_cnt_num_cipher(long long n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		cnt += 1;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static int	digit_to_ascii(int c)
{
	if (c >= 0 && c <= 9)
		return (c + 48);
	else
		return (-1);
}

static int	pre_exception(const int n, char **ret)
{
	if (n == 0)
	{
		*ret = malloc(2 * sizeof(char));
		ft_strlcpy(*ret, "0", 2);
		return (-1);
	}
	return (1);
}

char	*ft_itoa(long long n)
{
	int		cursor;
	int		cipher;
	char	*ret;

	if (pre_exception(n, &ret) == -1)
		return (ret);
	cipher = ft_cnt_num_cipher(n);
	ret = malloc((cipher + 1) * sizeof(char));
	cursor = 1;
	ret[cipher] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		ret[cipher - cursor++] = digit_to_ascii(n % 10);
		n /= 10;
	}
	return (ret);
}
