/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdori2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:04:18 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 14:14:37 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ayaya8(t_list *lst, t_integers *lsti, t_kame kame)
{
	while (*kame.numb2 < *kame.numb && lst->neg == 0 && lst->prec == 0)
	{
		if (lst->zero == 1)
		{
			if (lsti->i == 0 && *kame.numb3 < 0 && lsti->i++)
				ft_putchar('-', lst);
			else if ((lst->zero == 1 && lsti->i == 0) ||
			(lst->zero == 1 && *kame.numb2 < *kame.numb - 1 && lsti->i == 1))
				ft_putchar('0', lst);
		}
		if (lst->zero == 0)
			ft_putchar(' ', lst);
		(*kame.numb2)++;
	}
}
