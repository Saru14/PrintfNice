/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:03:30 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/08 17:23:59 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

void	ft_numb1numb2(int *numb1, int *numb2, t_list *lst)
{
	*numb1 = 0;
	*numb2 = 0;
	if (lst->star1 > 0 || lst->star1 < 0)
		*numb1 = lst->star1;
	else if (lst->nb1 > 0 || lst->nb1 < 0)
		*numb1 = lst->nb1;
	if (lst->star2 > 0 || lst->star2 < 0)
		*numb2 = lst->star2;
	else if (lst->nb2 > 0 || lst->nb2 < 0)
		*numb2 = lst->nb2;
}

void	ft_putchar(char c, t_list *lst)
{
	write(1, &c, 1);
	lst->retour++;
}
