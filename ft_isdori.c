/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdori.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:20:04 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 14:11:02 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ayaya6(t_list *lst, t_integers *lsti, t_xd xd)
{
	ft_putnbr2(*xd.numb5, lst, *xd.numb3);
	if (lst->neg == 1 && lsti->i4 >= *xd.numb3)
		lsti->i3 = -1;
	lsti->i6 = *xd.numb3;
	while (*xd.numb2 < lsti->i6 - 1 && lsti->i6--)
		lsti->i5++;
	if (lst->neg == 1 && lst->prec == 1)
		*xd.numb3 = lsti->i2 + 1 + lsti->i3 + lsti->i5;
	if (*xd.numb4 < 0 && lst->prec == 1)
		(*xd.numb3)++;
	if (*xd.numb < 0)
		*xd.numb = -*xd.numb;
	if (lst->zero == 1 && lst->prec == 0 && *xd.numb4 < 0)
		(*xd.numb3)++;
	while (*xd.numb3 < *xd.numb && lst->neg == 1 && (*xd.numb3)++)
		ft_putchar(' ', lst);
	return (lst->retour);
}

void		ayaya7(t_list *lst, t_integers *lsti, t_turbo turbo)
{
	*turbo.numb3 = ft_putnbr(*turbo.numb4, lst);
	lsti->i4 = *turbo.numb2;
	if (*turbo.numb4 < 0 && lst->prec == 1 && *turbo.numb >
		*turbo.numb2 && *turbo.numb3 < *turbo.numb && lst->neg == 0)
		(*turbo.numb)--;
	while (lst->prec == 1 && *turbo.numb > *turbo.numb2 &&
		*turbo.numb3 < *turbo.numb && lst->neg == 0 && (*turbo.numb)--)
		ft_putchar(' ', lst);
	if (lst->prec == 1 && *turbo.numb3 >= *turbo.numb2 && *turbo.numb4 < 0)
		ft_putchar('-', lst);
	while (lst->prec == 1 && *turbo.numb3 < *turbo.numb2)
	{
		if (*turbo.numb4 < 0 && lsti->i == 0)
		{
			ft_putchar('-', lst);
			lsti->i++;
		}
		ft_putchar('0', lst);
		(*turbo.numb2)--;
	}
	if (lst->zero == 1 && *turbo.numb4 < 0 && lst->prec == 0)
	{
		ft_putchar('-', lst);
		lsti->i++;
	}
}

int			ft_isdori(long long nb, t_list *lst, t_integers *lsti)
{
	int			i;
	int			numb1;
	int			numb2;
	long long	nb2;

	nb2 = nb;
	i = -1;
	ft_numb1numb2(&numb1, &numb2, lst);
	lsti->i2 = numb2;
	if (numb2 < 0 && !(numb2 = 0))
		lst->prec = 0;
	if (!numb2 && !nb && lst->prec)
	{
		while (++i < numb1)
		{
			write(1, lst->zero ? "0" : " ", 1);
			lst->retour++;
		}
		return (numb1);
	}
	ayaya7(lst, lsti, (t_turbo){&numb1, &numb2, &i, &nb});
	ayaya8(lst, lsti, (t_kame){&numb1, &i, &nb});
	return (ayaya6(lst, lsti, (t_xd){&numb1, &numb2, &i, &nb, &nb2}));
}

long long	ft_putnbr(long long nb, t_list *lst)
{
	static int i;

	if (lst->he == 0)
		i = 0;
	lst->he = 1;
	if (nb < 10 && nb >= 0)
		i++;
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, lst);
		i++;
		if (nb < 0)
			if (lst->prec == 0 && lst->zero == 0)
				i++;
	}
	else
	{
		if (lst->prec == 0 && lst->zero == 0)
			i++;
		ft_putnbr(nb * -1, lst);
	}
	return (i);
}

void		ft_putnbr2(long long nb, t_list *lst, int i)
{
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0', lst);
	else if (nb >= 10)
	{
		ft_putnbr2(nb / 10, lst, i);
		ft_putchar(nb % 10 + '0', lst);
		if (nb < 0)
			if (lst->prec == 0 && lst->zero == 0)
				ft_putchar('-', lst);
	}
	else
	{
		if (lst->prec == 0 && lst->zero == 0)
			ft_putchar('-', lst);
		ft_putnbr2(nb * -1, lst, i);
	}
}
