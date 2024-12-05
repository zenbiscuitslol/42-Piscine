/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:35:10 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 21:34:44 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	letter;

	letter = 0;
	while (src[letter] && letter < n)
	{
		dest[letter] = src[letter];
		letter++;
	}
	while (letter < n)
	{
		dest[letter] = '\0';
		letter++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char b[6] = "World1";
	char a[5] = "Hello";
	unsigned int c=3;
	ft_strncpy(b, a, c);

	int i = 0;
	while (i < )
	{
		printf("%c", b[i]);
		i++;
	}
	return (0);
} */