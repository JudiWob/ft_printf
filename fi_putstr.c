/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fi_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:02:17 by jpaselt           #+#    #+#             */
/*   Updated: 2024/12/09 14:55:19 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fi_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		i = fi_putstr(s);
	while (s[i])
	{
		fi_putchar(s[i]);
		i++;
	}
	return (i);
}

// int main()
// {
// 	printf("%d", fi_putstr("nil\n"));
// }
/*
return
int - num of chars printed
if write function fails, you return (-1);
*/