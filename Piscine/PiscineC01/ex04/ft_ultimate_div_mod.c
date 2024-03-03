/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:22:43 by dremisze          #+#    #+#             */
/*   Updated: 2023/11/26 01:22:45 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}
/*int main()
{
	
	int	num = 2;
	int	*a = &num;
	int	num2 = 4;
	int	*b = &num2;
	ft_ultimate_div_mod(a,b);
	return 0;

}
*/
