/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suites.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:40:26 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/30 18:33:46 by egaziogl         ###   ########.fr       */
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
	printf("strnjoin(%s, %s, %d) = %s\n", str1, str2, 4, str3);
	free(str3);
	return (0);
}

int suite_read(void)
{
	char	*result;

	int	fd = open("test_file.txt", O_RDONLY);
	test_read(fd);
	return (0);
}
int suite_read_multi(int i)
{
	char	*result;

	int	fd = open("test_file.txt", O_RDONLY);
	while (i--)
		test_read(fd);
	return (0);
}

int	suite_strchr(void)
{
	printf("strchr(%s, %c) = %d\n", "hello", 'l', ft_strchr("hello", 'l'));
	return (0);
}