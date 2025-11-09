/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:28:52 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 19:01:12 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putstr(char *str, int fd)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (ft_print_putstr("(null)", 1));
	while (str[i])
	{
		count += ft_print_putchar(str[i], 1);
		i++;
	}
	return (count);
}
