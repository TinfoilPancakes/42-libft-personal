/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:18:15 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/28 17:53:07 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include "ft_typedefs.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *s1, const char *s2, size_t size);

char	**ft_strsplit(const char *s, char c);

char	*ft_strdup(const char *s1);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strcat(char *s1, const char *s2);

char	*ft_strncat(char *s1, const char *s2, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(const char *big, const char *little);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnew(size_t size);

char	*ft_strmap(const char *s, char (*f)(char));

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

char	*ft_strsub(const char *s, unsigned int start, size_t n);

char	*ft_itoa_generic(long n, size_t b, size_t md, const char *fmt);

char	*ft_itoa(int n);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strtrim(const char *s);

void	ft_strdel(char **as);

void	ft_strclr(char *s);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_isspace(int c);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_atoi_generic(const char *str, size_t base, const char *format);

int		ft_atoi(const char *str);

int		ft_strequ(const char *s1, const char *s2);

int		ft_strnequ(const char *s1, const char *s2, size_t n);

int		*kmp_generate_table(const char *pattern);

char	*kmp_strstr(const char *string, const char *pattern);

char	*kmp_strnstr(const char *string, const char *pattern, size_t n);

#endif
