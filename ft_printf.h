/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minylee <minylee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:03:51 by minylee           #+#    #+#             */
/*   Updated: 2023/03/10 15:48:09 by minylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
void	ft_init_2int_var(int *a, int *b, int init);
void	ft_init_3int_var(int *a, int *b, int *c, int init);
char	*ft_itoa(long long n);
int		ft_putnbr_base(long long int n, char *obase);
int		ft_unsiged_putnbr_base(unsigned long long int nbr, char *base);
int		percentage_format_s(const char *str);
int		percentage_format_d(long long n);
int		percentage_format_u(unsigned int n);
int		percentage_format_c(char c);
int		percentage_format_x(char flag, unsigned int n);
int		percentage_format_p(void *num);
int		get_base(char *c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif
