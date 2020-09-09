/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:43:03 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 16:15:28 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ayaya9(const char *format, t_list *lst, int *i, va_list val)
{
	if (format[*i] == '*')
	{
		lst->star1 = va_arg(val, int);
		*i += 1;
		if (lst->star1 < 0)
			lst->neg = 1;
	}
	if (format[*i] == '.')
	{
		lst->prec = 1;
		*i += 1;
	}
	if (format[*i] == '*')
	{
		lst->star2 = va_arg(val, int);
		*i += 1;
	}
	while (format[*i] >= '0' && format[*i] <= '9' && format[*i])
	{
		lst->nb2 = lst->nb2 * 10;
		lst->nb2 = lst->nb2 + format[*i] - 48;
		*i += 1;
	}
}

void	ft_parsing(const char *format, t_list *lst, int *i, va_list val)
{
	*i += 1;
	while ((format[*i] == '.' || format[*i] == '*' || format[*i] == '0' ||
		(format[*i] >= '0' && format[*i] <= '9') ||
			format[*i] == '-') && format[*i])
	{
		if (format[*i] == '-' || format[*i] == '0')
		{
			if (format[*i] == '-')
				lst->neg = 1;
			while (format[*i + 1] == '-')
				*i += 1;
			if (format[*i] == '0')
				lst->zero = 1;
			*i += 1;
		}
		while (format[*i] >= '0' && format[*i] <= '9' && format[*i])
		{
			lst->nb1 = lst->nb1 * 10;
			lst->nb1 = lst->nb1 + format[*i] - 48;
			*i += 1;
		}
		ayaya9(format, lst, i, val);
	}
}

void	lstinit(t_list *lst)
{
	lst->zero = 0;
	lst->neg = 0;
	lst->nb1 = 0;
	lst->nb2 = 0;
	lst->prec = 0;
	lst->len = 0;
	lst->star1 = 0;
	lst->star2 = 0;
	lst->i = 0;
	lst->he = 0;
	lst->retour = 0;
}

void	lstinit2(t_integers *lsti)
{
	lsti->i = 0;
	lsti->i2 = 0;
	lsti->i3 = 0;
	lsti->i4 = 0;
	lsti->i5 = 0;
	lsti->i6 = 0;
	lsti->i7 = 0;
	lsti->i8 = 0;
	lsti->i9 = 0;
}

int		ft_printf(const char *format, ...)
{
	int			i;
	int			len;
	va_list		val;
	t_list		lst;
	t_integers	lsti;

	len = 0;
	lstinit(&lst);
	va_start(val, format);
	i = 0;
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			write(1, &format[i], 1);
			len++;
			if (format[++i] == '\0')
				return (len);
		}
		if (format[i] == '%')
			ayaya10(&lst, &lsti, val, (t_saru){format, &i, &len});
		i++;
	}
	va_end(val);
	return (len);
}
