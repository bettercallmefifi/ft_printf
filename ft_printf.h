/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:52:03 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/07 16:23:11 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *count, ...);
int		ft_check_printf(const char *str, va_list ptr);
int		ft_print_putchar(int c);
int		ft_print_putnbr(int nb);
void	ft_print_putstr(char *str, int *count);
int		ft_print_putunbr(unsigned int nb);
int		ft_print_puthe(size_t nb, char c);

#endif