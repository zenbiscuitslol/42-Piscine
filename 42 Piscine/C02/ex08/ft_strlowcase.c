/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:30:58 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/20 22:33:22 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		if (str[letter] >= 'A' && str[letter] <= 'Z')
		{
			str[letter] = str[letter] + 32;
		}
		letter++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char str[4] = "MEOW";
	ft_strlowcase(str);
	printf("%s", str);
	return (0);
} */