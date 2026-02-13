/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:48:01 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/02/11 16:55:56 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft/libft.h"

char	*gnl_join(const char *s1, const char *s2)
{
	char	*str;
	if (!s1)
		s1 = "";
	str = ft_strjoin(s1, s2);
	return (str);
}