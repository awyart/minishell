/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:56:16 by narajaon          #+#    #+#             */
/*   Updated: 2017/08/12 19:04:30 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void		reverse(char *str, int len)
{
	int		start;
	int		end;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		ft_swap(str + start, str + end);
		start++;
		end--;
	}
}

int				ft_ltoa_base(long long int num, char *buff, int base)
{
	int				i;
	long long		rem;
	int				neg;

	i = 0;
	neg = 0;
	if (num == 0)
	{
		buff[i++] = '0';
		buff[i] = '\0';
		return (1);
	}
	num *= (num < 0 && base == 10) ? -1 : 1;
	neg = (num < 0 && base == 10) ? 1 : 0;
	while (num)
	{
		rem = num % base;
		buff[i++] = (rem > 9) ? (rem - 10 + 'a') : (rem + '0');
		num /= base;
	}
	if (neg)
		buff[i++] = '-';
	buff[i] = '\0';
	reverse(buff, i);
	return (i);
}
