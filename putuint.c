/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putuint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:41:48 by jpaselt           #+#    #+#             */
/*   Updated: 2024/12/05 20:42:33 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putuint(unsigned int num)
{
	int count;

	count = 0;
	if (num / 10)
		count += putuint(num / 10);
	fi_putchar((num % 10) + 48);
	count++;
	return (count);
}

// int main()
// {
// 	int num = -87857;
// 	putuint(num);
// 	printf("\n%u", num);
// }