/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:06:03 by pprejith          #+#    #+#             */
/*   Updated: 2024/12/04 17:15:32 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *s1, char *s2)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	int				check;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	check = 0;
	while (cs1[check] && cs2[check])
	{
		if (cs1[check] != cs2[check])
		{
			return (cs1[check] - cs2[check]);
		}
		check++;
	}
	return (cs1[check] - cs2[check]);
}

void	param_sort(int argc, char **argv)
{
	int		i;
	int		j;
	int		check_swap;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		check_swap = 0;
		while (j < argc - 1)
		{
			if (cmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				check_swap = 1;
			}
			j++;
		}
		if (check_swap == 0)
			break ;
		i++;
	}
}

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

	i = 1;
	if (argc > 1)
	{
		param_sort(argc, argv);
		while (i < argc)
		{
			len = str_len(argv[i]);
			write(1, argv[i], len);
			write(1, "\n", 1);
			i++;
		}
	}
}
