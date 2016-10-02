/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 09:00:32 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/02 09:00:32 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include "ft_memory.h"

# define T_VECTOR_INIT_SIZE 16

struct		s_vector
{
	void	*data;
	size_t	step;
	size_t	size;
	size_t	count;
};

typedef	struct s_vector	t_vector;

t_vector	*ft_vec_new(size_t step);

t_vector	*ft_vec_copy(t_vector *v);

t_vector	*ft_vec_move(t_vector *v);

void		*ft_vec_at(t_vector *v, size_t index);

void		ft_vec_resize(t_vector *v, size_t new_size);

void		ft_vec_del(t_vector **v);

#endif
