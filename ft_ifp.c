/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:08:44 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 17:02:39 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ayaya5(t_list *lst, t_integers *lsti, t_lolz lolz)
{
	if (*lolz.numb3 == 0 && lst->prec == 0)
		lsti->i5++;
	lsti->i4 = *lolz.numb2;
	while (lst->prec == 1 && *lolz.numb > *lolz.numb2
		&& lsti->i5 < *lolz.numb && lst->neg == 0 && *lolz.numb--)
		ft_putchar(' ', lst);
	while (lst->prec == 1 && lsti->i5 < *lolz.numb2 && *lolz.numb2--)
		ft_putchar('0', lst);
	while (lsti->i5 <= *lolz.numb && lst->neg == 0 && lst->prec == 0)
	{
		if (lst->zero == 1)
			if ((lst->zero == 1 && lsti->i == 0) || (lst->zero == 1 &&
				lsti->i5 < *lolz.numb - 1 && lsti->i == 1))
				ft_putchar('0', lst);
		if (lst->zero == 0)
			ft_putchar(' ', lst);
		lsti->i5++;
	}
	ft_putnumberbase2p(*lolz.numb4, lst);
	if (lst->neg == 1 && lsti->i4 > lsti->i5)
		lsti->i3 = -1;
	if (lst->neg == 1 && lst->prec == 1)
		lsti->i5 = lsti->i2 + 1 + lsti->i3;
	while (lsti->i5 <= *lolz.numb && lst->neg == 1 && lsti->i5++)
		ft_putchar(' ', lst);
}

void	ft_ifp(unsigned long nb, t_list *lst, t_integers *lsti)
{
	int				numb1;
	unsigned long	nb2;

	nb2 = nb;
	lsti->i5 = -1;
	ft_numb1numb2(&numb1, &(lsti->i2), lst);
	if (numb1 == 0 && lsti->i2 == 0 && lst->prec == 1 && nb == 0)
	{
		write(1, "0x", 2);
		lst->retour += 2;
		return ;
	}
	if (numb1 < 0)
		numb1 = -numb1;
	if (!(lsti->i2) && !nb && lst->prec)
	{
		while (++lsti->i5 < numb1)
		{
			write(1, lst->zero ? "0" : " ", 1);
			lst->retour++;
		}
		return ;
	}
	lsti->i5 = ft_putnumberbasep(nb, lst);
	ayaya5(lst, lsti, (t_lolz){&numb1, &(lsti->i2), &nb, &nb2});
}

int		ft_putnumberbasep(unsigned long nb, t_list *lst)
{
	int		i;
	char	str[5000];

	if (!nb)
	{
		lst->i = 3;
		return (lst->i);
	}
	i = 0;
	lst->i = lst->i + 3;
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

void	ayaya4(t_list *lst, t_holla holla)
{
	if (*holla.numb2)
	{
		write(1, "0x", 2);
		lst->retour += 2;
	}
	if (!*holla.numb2)
	{
		write(1, "0x0", 3);
		lst->retour += 3;
	}
	if (*holla.numb2 == 0 && lst->prec == 0 && *holla.numb == 0)
	{
		if (*holla.numb2)
			ft_putchar('0', lst);
		return ;
	}
}

void	ft_putnumberbase2p(unsigned long nb, t_list *lst)
{
	int		i;
	int		j;
	char	str[1234];
	char	*base;

	j = 0;
	base = "0123456789abcdef";
	i = 0;
	ayaya4(lst, (t_holla){&j, &nb});
	while (nb)
	{
		str[i] = nb % 16;
		nb = nb / 16;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[(int)str[i]], lst);
}
