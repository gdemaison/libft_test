/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:52:22 by maboye            #+#    #+#             */
/*   Updated: 2020/07/28 17:44:50 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float			ft_power(int nb, int po)
{
	float		result;

	if (nb <= 1)
		return (nb == 1 ? 1 : 0);
	if (po == 0)
		return (1);
	result = ft_power(nb, po / 2);
	if (po % 2 == 0)
		return (result * result);
	else
		return (po > 0 ? nb * result * result : (result * result) / nb);
}
