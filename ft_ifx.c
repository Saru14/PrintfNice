/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:11:07 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 11:38:42 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ayaya(t_list *lst, t_integers *lsti, t_aled aled)
{
	while (*aled.i < *aled.numb1 && lst->neg == 0 && lst->prec == 0)
	{
		if (lst->zero == 1)
		{
			if (lsti->i == 0 && *aled.nb < 0 && lst->i++)
				ft_putchar('-', lst);
			else if ((lst->zero == 1 && lsti->i == 0) ||
					(lst->zero == 1 && *aled.i < *aled.numb1 - 1 &&
						lsti->i == 1))
				ft_putchar('0', lst);
		}
		if (lst->zero == 0)
			ft_putchar(' ', lst);
		(*aled.i)++;
	}
}

void	ayaya2(t_list *lst, t_integers *lsti, t_miskine miskine)
{
	if (lst->neg == 1 && lsti->i5 > *miskine.numb3)
		lsti->i3 = -1;
	lsti->i7 = *miskine.numb3;
	while (*miskine.numb2 < lsti->i7 - 1)
	{
		lsti->i6++;
		lsti->i7--;
	}
	if (lst->neg == 1 && lst->prec == 1)
		*miskine.numb3 = lsti->i4 + 1 + lsti->i3 + lsti->i6;
	if (*miskine.numb4 < 0 && lst->prec == 1)
		(*miskine.numb3)++;
	while (*miskine.numb3 < *miskine.numb &&
			lst->neg == 1 && (*miskine.numb3)++)
		ft_putchar(' ', lst);
}

void	ft_ifx(long nb, t_list *lst, int t, t_integers *lsti)
{
	int			i;
	int			numb1;
	int			numb2;
	long long	nb2;

	nb2 = nb;
	i = -1;
	ft_numb1numb2(&numb1, &numb2, lst);
	if (numb2 < 0)
		lst->prec = 0;
	lsti->i4 = numb2;
	if (numb1 < 0)
		numb1 = -numb1;
	if (!numb2 && !nb && lst->prec)
	{
		while (++i < numb1)
			write(1, lst->zero ? "0" : " ", 1);
		return ;
	}
	i = ft_putnumberbase(nb, lst);
	ayaya3(lst, lsti, (t_starfoula){&numb1, &numb2, &i, &nb});
	ayaya(lst, lsti, (t_aled){&numb1, &i, &nb});
	ft_putnumberbase2(nb2, t, lst, lsti);
	ayaya2(lst, lsti, (t_miskine){&numb1, &numb2, &i, &nb});
}

int		ft_putnumberbase(long nb, t_list *lst)
{
	int		i;
	char	str[5000];

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		lst->i++;
	}
	while (nb)
	{
		str[i] = nb % 16;
		nb = nb / 16;
		i++;
	}
	while (--i >= 0)
		lst->i++;
	return (lst->i);
}

void	ft_putnumberbase2(long nb, int t, t_list *lst, t_integers *lsti)
{
	char str[1234];
	char *base;

	if (t == 1)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb == 0 && lst->prec == 0 && lsti->i8 == 0)
	{
		ft_putchar('0', lst);
		return ;
	}
	if (nb < 0 && lsti->i8++)
	{
		nb = -nb;
		ft_putchar('-', lst);
	}
	while (nb)
	{
		str[lsti->i9] = nb % 16;
		nb = nb / 16;
		lsti->i9++;
	}
	while (--lsti->i9 >= 0)
		ft_putchar(base[(int)str[lsti->i9]], lst);
}
