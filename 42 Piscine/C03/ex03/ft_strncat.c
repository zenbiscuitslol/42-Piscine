/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:05:42 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/01 15:37:06 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_letter;
	unsigned int	dest_letter;

	src_letter = 0;
	dest_letter = 0;
	while (dest[dest_letter] != '\0')
	{
		dest_letter++;
	}
	while (src[src_letter] != '\0' && src_letter < nb)
	{
		dest[dest_letter] = src[src_letter];
		src_letter++;
		dest_letter++;
	}
	dest[dest_letter] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char str[20]="meow";
	char *str1="meow meow";

	ft_strncat(str,str1,3);
	printf("%s",str);
} 