/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 17:38:12 by mkorniie          #+#    #+#             */
/*   Updated: 2017/10/28 19:22:38 by mkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(src);
	cpy = (char*)malloc(sizeof(*src) * (len + 1));
	i = -1;
	while (++i < len)
		cpy[i] = src[i];
	cpy[len] = '\0';
	return (cpy);
}
