/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeryu <@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:52:13 by saeryu            #+#    #+#             */
/*   Updated: 2023/12/07 18:52:15 by saeryu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The  memcmp()  function compares the first n bytes 
 * (each interpreted as unsigned char) of the memory areas s1 and s2.
 * */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sp1;
	unsigned char	*sp2;

	i = 0;
	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	while (i < n)
	{
		if (sp1[i] > sp2[i] || sp1[i] < sp2[i])
			return (sp1[i] - sp2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    int result1 = ft_memcmp("aaaa", "aabb", 2);
    int result2 = ft_memcmp("aaaa", "aacb", 3);
    printf("%d\n", result1);
    printf("%d\n", result2);
    return (0);
}*/