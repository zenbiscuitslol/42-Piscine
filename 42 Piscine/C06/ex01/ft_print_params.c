/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:33:54 by pprejith          #+#    #+#             */
/*   Updated: 2024/11/28 18:40:35 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc > 0)
	{
		i = 1;
		while (i < argc)
		{
			len = str_len(argv[i]);
			write(1, argv[i], len);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
