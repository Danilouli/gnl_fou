/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 16:00:17 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/13 19:24:11 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')) ? 1 : 0);
}
