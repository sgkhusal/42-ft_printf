/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 04:52:47 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/16 01:58:23 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../../ft_printf/ft_printf.h"
#include "colors.h"
#include <stdio.h>

# define NOT_OK	0
# define OK		1

void	check_return(int n1, int n2);
void	text_tests();
void	percentage_test();
void	empty_var_test();

#endif