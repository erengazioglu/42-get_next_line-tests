/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:28:04 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/06 23:40:59 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int main(void)
{
	int	result;
	
	printf("---\nTESTING buffer size %d\n", BUFFER_SIZE);
	result = 0;
	// result |= suite_strnjoin();
	result |= suite_read_multi(5);
	// result |= suite_strldel();

	printf("exiting (%d)\n", result);
	return (result);
}