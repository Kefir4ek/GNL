/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosella <erosella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:20:33 by erosella          #+#    #+#             */
/*   Updated: 2019/09/05 19:23:02 by erosella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t len2;

	if (*to_find == '\0')
		return ((char *)str);
	len2 = ft_strlen(to_find);
	while (*str != '\0' && len-- >= len2)
	{
		if (*str == *to_find && ft_strncmp(str, to_find, len2) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
