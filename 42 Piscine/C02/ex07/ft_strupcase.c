/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:24:05 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/21 12:35:11 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
		{
			str[letter] = str[letter] - 32;
		}
		letter++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char str[4]="meow";
	ft_strupcase(str);
	printf("%s",str);
	return (0);
}  */