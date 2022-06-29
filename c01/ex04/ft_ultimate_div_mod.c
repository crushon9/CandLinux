/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:18:23 by chsim             #+#    #+#             */
/*   Updated: 2022/04/19 18:31:04 by chsim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t1;
	int	t2;

	t1 = *a;
	t2 = *b;
	*a = t1 / t2;
	*b = t1 % t2;
}
