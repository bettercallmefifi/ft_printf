/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:39:23 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:55:36 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putptr(unsigned long long ptr)
{
	if (!ptr)
		return (ft_print_putstr("(nil)", 1));
	return (ft_print_putstr("0x", 1) + ft_print_hexadecimal(ptr, 0));
}
