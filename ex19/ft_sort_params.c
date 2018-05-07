/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:02:20 by mkorniie          #+#    #+#             */
/*   Updated: 2017/10/28 17:35:31 by mkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_n(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_print_params(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
		ft_putstr_n(argv[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		z;
	int		cmp;
	char	*x;

	if (argc > 1)
	{
		i = -1;
		while (++i < (argc - 1))
		{
			z = -1;
			while (++z < (argc - i - 2))
			{
				cmp = ft_strcmp(argv[z + 1], argv[z + 2]);
				if (cmp > 0)
				{
					x = argv[z + 1];
					argv[z + 1] = argv[z + 2];
					argv[z + 2] = x;
				}
			}
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
