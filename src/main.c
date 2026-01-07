/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:28:04 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/07 17:27:09 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int main(void)
{
	int	result;
	
	printf("---\nTESTING buffer size %d\n", BUFFER_SIZE);
	result = 0;
	// result |= suite_strnjoin();
	result |= suite_read_multi(10, "testfile_regular.txt");
	result |= suite_read_multi(10, "testfile_startnl.txt");

	printf("exiting (%d)\n", result);
	return (result);
}