/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 21:03:07 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/21 21:40:33 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	char	*result;
	int	fd = open("test_file.txt", O_RDONLY);

	printf("buffer size: %d\n", BUFFER_SIZE);
	result = get_next_line(fd);
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return(0);
}