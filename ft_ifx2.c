/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifx2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:38:12 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 11:40:36 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ayaya3(t_list *lst, t_integers *lsti, t_starfoula starfoula)
{
	if (*starfoula.numb4 == 0 && lst->prec == 0)
		(*starfoula.numb3)++;
	lsti->i5 = *starfoula.numb2;
	while (lst->prec == 1 && *starfoula.numb > *starfoula.numb2 &&
			*starfoula.numb3 < *starfoula.numb && lst->neg == 0)
	{
		if (*starfoula.numb4 < 0 && lsti->i2 == 0 && (*starfoula.numb)--)
			lsti->i2++;
		ft_putchar(' ', lst);
		(*starfoula.numb)--;
	}
	if (lst->prec == 1 && *starfoula.numb3 >=
			*starfoula.numb2 && *starfoula.numb4 < 0)
		ft_putchar('-', lst);
	while (lst->prec == 1 && (*starfoula.numb3) < *starfoula.numb2)
	{
		if (*starfoula.numb4 < 0 && lsti->i == 0 && lsti->i++)
			ft_putchar('-', lst);
		ft_putchar('0', lst);
		(*starfoula.numb2)--;
	}
	if (lst->zero == 1 && *starfoula.numb4 < 0 && lst->prec == 0 && lsti->i++)
		ft_putchar('-', lst);
	if (*starfoula.numb3 == *starfoula.numb2)
		(*starfoula.numb3)--;
}
