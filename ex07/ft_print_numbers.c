/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 10:48:40 by mkorniie          #+#    #+#             */
/*   Updated: 2017/10/27 11:01:53 by mkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	char a;

	a = '/';
	while (++a <= '9')
		ft_putchar(a);
}
