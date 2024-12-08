/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:15:28 by jpaselt           #+#    #+#             */
/*   Updated: 2024/12/08 13:02:02 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putptr(unsigned long address)
{
	int count;
	
	count = 0;
	if (address == 0)
	{
		count += fi_putstr("(nil)");
		return (count);
	}	
	count += fi_putstr("0x");
	count += puthex(address, 'x');
	return (count);
}

// int main()
// {
// 	char *p = NULL;

// 	char *s = "Hello";

// 	//p = &s;
	
// 	ft_printf("Address of ptr    	(%%p, &p): %p\n", &s);
// 	printf("Ori Address of ptr    	(%%p, &p): %p\n", &s);
// 	ft_printf("Address ptr holds 	(%%p,  p): %p\n", s);
// 	printf("Ori:Address ptr holds 	(%%p,  p): %p\n", s);
	
// }
