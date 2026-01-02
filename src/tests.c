/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 21:03:07 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/02 07:50:41 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	test_read(int fd)
{
	char *result = get_next_line(fd);
	if (!result)
		return (1);
	printf("%s", result);
	free(result);
	return (0);
}
