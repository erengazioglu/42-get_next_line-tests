/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 21:03:07 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/23 19:19:52 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_strnjoin(void)
{
	char *str1 = "hello ";
	char *str2 = "42 baby!";
	char *str3 = ft_strnjoin(str1, str2, 4);
	if (!str3)
		return (-1);
	printf("%s\n", str3);
	free(str3);
	return (0);
}

int	test_buffersize(void)
{
	printf("buffer size: %d\n", BUFFER_SIZE);
	return (0);
}

int test_read(void)
{
	char	*result;
	int	fd = open("test_file.txt", O_RDONLY);
	result = get_next_line(fd);
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
}

int main(void)
{
	// if (!test_buffersize())
		// if (!test_read())
	return (test_read());
	// return (1);
}