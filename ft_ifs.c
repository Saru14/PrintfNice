/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:02:15 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/08 17:18:20 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		oui(char *str, t_list *lst, int numb1, int numb2)
{
	int i;
	int u;

	i = 0;
	u = 0;
	while (str[i] && (lst->prec == 0 || numb2 > 0))
	{
		ft_putchar(str[i], lst);
		numb2--;
		i++;
	}
	if (numb1 < 0 && u++)
		i = -i;
	while (numb1 < i && u == 1)
	{
		ft_putchar(' ', lst);
		numb1++;
	}
	while (i < numb1)
	{
		ft_putchar(' ', lst);
		numb1--;
	}
	return ;
}

void		ft_ifs(char *str, t_list *lst)
{
	int i;
	int numb1;
	int numb2;

	ft_numb1numb2(&numb1, &numb2, lst);
	if (numb2 < 0)
		lst->prec = 0;
	if (!str)
		str = "(null)";
	i = -1;
	if (numb1 < 0)
		numb1 = numb1 * -1;
	if (lst->neg == 1)
	{
		oui(str, lst, numb1, numb2);
		return ;
	}
	while (ft_strlen(str) < numb1 || (numb1 > numb2 && lst->prec == 1))
	{
		ft_putchar(' ', lst);
		numb1--;
	}
	while (str[++i] && (lst->prec == 0 || numb2-- > 0))
		ft_putchar(str[i], lst);
	return ;
}
