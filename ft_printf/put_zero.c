/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_zero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:02:22 by tobeshota         #+#    #+#             */
/*   Updated: 2023/06/11 18:30:54 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft.h"

void	put_zero(int num)
{
	int	i;

	i = -1;
	while (++i < num)
		ft_putchar_fd('0', STDOUT_FILENO);
}
