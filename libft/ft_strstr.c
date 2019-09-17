/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosella <erosella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:53:08 by erosella          #+#    #+#             */
/*   Updated: 2019/09/05 18:56:17 by erosella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int h;
	int n;
	int len;

	h = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)str);
	while (str[h] != '\0')
	{
		n = 0;
		while (to_find[n] == str[h + n] && str[h + n] != '\0'
				&& to_find[n] != '\0')
		{
			if (to_find[n + 1] == '\0')
				return ((char *)str + h);
			n++;
		}
		h++;
	}
	return (NULL);
}
