/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:54:18 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 16:11:41 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ayaya10(t_list *lst, t_integers *lsti, va_list val, t_saru saru)
{
	lstinit(lst);
	lstinit2(lsti);
	ft_parsing(saru.format, lst, saru.i, val);
	if (saru.format[*saru.i] == '%')
		ft_ifc('%', lst);
	if (saru.format[*saru.i] == 'c')
		ft_ifc(va_arg(val, int), lst);
	if (saru.format[*saru.i] == 's')
		ft_ifs(va_arg(val, char*), lst);
	if (saru.format[*saru.i] == 'd' || saru.format[*saru.i] == 'i')
		ft_isdori(va_arg(val, int), lst, lsti);
	if (saru.format[*saru.i] == 'u')
		ft_isdori(va_arg(val, unsigned int), lst, lsti);
	if (saru.format[*saru.i] == 'x')
		ft_ifx(va_arg(val, unsigned int), lst, 1, lsti);
	if (saru.format[*saru.i] == 'X')
		ft_ifx(va_arg(val, unsigned int), lst, 0, lsti);
	if (saru.format[*saru.i] == 'p')
		ft_ifp((unsigned long)va_arg(val, void*), lst, lsti);
	*saru.len = *saru.len + lst->retour;
}
