/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:54:29 by jbodson           #+#    #+#             */
/*   Updated: 2020/09/09 16:26:24 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct		s_list
{
	int				zero;
	int				neg;
	int				nb1;
	int				nb2;
	int				prec;
	int				len;
	int				star1;
	int				star2;
	int				i;
	int				he;
	int				retour;
}					t_list;

typedef struct		s_integers
{
	int				i;
	int				i2;
	int				i3;
	int				i4;
	int				i5;
	int				i6;
	int				i7;
	int				i8;
	int				i9;
}					t_integers;

typedef struct		s_aled
{
	int				*numb1;
	int				*i;
	long			*nb;
}					t_aled;

typedef struct		s_miskine
{
	int				*numb;
	int				*numb2;
	int				*numb3;
	long			*numb4;
}					t_miskine;

typedef struct		s_starfoula
{
	int				*numb;
	int				*numb2;
	int				*numb3;
	long			*numb4;
}					t_starfoula;

typedef struct		s_holla
{
	int				*numb;
	unsigned long	*numb2;
}					t_holla;

typedef struct		s_lolz
{
	int				*numb;
	int				*numb2;
	unsigned long	*numb3;
	unsigned long	*numb4;
}					t_lolz;

typedef struct		s_xd
{
	int				*numb;
	int				*numb2;
	int				*numb3;
	long long		*numb4;
	long long		*numb5;
}					t_xd;

typedef struct		s_turbo
{
	int				*numb;
	int				*numb2;
	int				*numb3;
	long long		*numb4;
}					t_turbo;

typedef struct		s_kame
{
	int				*numb;
	int				*numb2;
	long long		*numb3;
}					t_kame;

typedef struct		s_saru
{
	const char		*format;
	int				*i;
	int				*len;
}					t_saru;

int					ft_printf(const char *format, ...);
void				ft_ifs(char *str, t_list *lst);
void				ft_ifp(unsigned long nb, t_list *lst, t_integers *lsti);
void				ft_ifx(long nb, t_list *lst, int t, t_integers *lsti);
int					ft_isdori(long long nb, t_list *lst, t_integers *lsti);
void				ft_putchar(char c, t_list *lst);
long long			ft_putnbr(long long nb, t_list *lst);
void				ft_ifc(int c, t_list *lst);
void				lstinit(t_list *lst);
void				ft_putnbr2(long long nb, t_list *lst, int i);
int					ft_putnumberbase(long nb, t_list *lst);
void				ft_putnumberbase2(long nb, int t, t_list *lst,
					t_integers *lsti);
void				ft_putnumberbase2p(unsigned long nb, t_list *lst);
int					ft_putnumberbasep(unsigned long nb, t_list *lst);
void				ft_putcharbasep(char c, t_list *lst);
int					ft_atoi(const char *str);
void				ft_numb1numb2(int *numb1, int *numb2, t_list *lst);
void				ayaya3(t_list *lst, t_integers *lsti,
					t_starfoula starfoula);
void				ayaya8(t_list *lst, t_integers *lsti, t_kame kame);
void				ayaya10(t_list *lst, t_integers *lsti,
					va_list val, t_saru saru);
void				ft_parsing(const char *format,
					t_list *lst, int *i, va_list val);
void				lstinit2(t_integers *lsti);

#endif
