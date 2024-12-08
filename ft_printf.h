/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:24:33 by jpaselt           #+#    #+#             */
/*   Updated: 2024/12/08 12:44:00 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

int ft_printf(const char *s, ...);
int	fi_putchar(unsigned char c);
int	fi_putstr(char *s);
int fi_putnbr(int num);
int	puthex(unsigned long num, char c);
int	putptr(unsigned long address);
int	putuint(unsigned int num);
 


#endif