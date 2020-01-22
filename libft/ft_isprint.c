/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <vvarodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 00:23:48 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 02:04:02 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}