/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:49:46 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/08 14:06:39 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ifc(int c, t_list *lst)
{
	int numb1;
	int numb2;

	ft_numb1numb2(&numb1, &numb2, lst);
	if (c == '%' && lst->zero == 1)
		while (numb1 > 1 && numb1--)
			ft_putchar('0', lst);
	if (lst->neg == 1)
	{
		ft_putchar(c, lst);
		while (numb1 > 1 || numb1 < -1)
		{
			ft_putchar(' ', lst);
			if (numb1 > 0)
				numb1--;
			else if (numb1 < 0)
				numb1++;
		}
		return ;
	}
	while (numb1-- > 1)
		ft_putchar(' ', lst);
	ft_putchar(c, lst);
}
