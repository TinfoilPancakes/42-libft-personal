/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 10:30:49 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/30 16:57:53 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OUTPUT_H
# define FT_OUTPUT_H

# include <unistd.h>
# include "ft_typedefs.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putchar(char c);

void	ft_putstr_fd(const char *s, int fd);

void	ft_putstr(const char *s);

void	ft_putendl_fd(const char *s, int fd);

void	ft_putendl(const char *s);

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr(int n);

void	ft_putnbr_generic(long n, size_t b, int fd, const char *fmt);

#endif
