/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suites.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:40:26 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/24 09:40:43 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	suite_strnjoin(void)
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

int	suite_buffersize(void)
{
	printf("buffer size: %d\n", BUFFER_SIZE);
	return (0);
}

int suite_read(void)
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

int	suite_strchr(void)
{
	printf("strchr(%s, %c) = %d", s, c,)
}