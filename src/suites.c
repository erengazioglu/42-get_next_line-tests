/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suites.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:40:26 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/06 23:41:34 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	suite_strnjoin(void)
{
	char *str1 = "hello ";
	char *str2 = "42 baby!";
	
	char *str3 = ft_strnjoin(str1, str2, 4, false);
	if (!str3)
		return (-1);
	printf("strnjoin(%s, %s, %d) = %s\n", str1, str2, 4, str3);
	free(str3);
	return (0);
}

int suite_read_multi(int i)
{
	char	*result;

	int	fd = open("test_file.txt", O_RDONLY);
	while (i--)
	{
		result = get_next_line(fd);
		if (!result)
			return (1);
		printf("READ | %s\n", result);
	}
		// test_read(fd);
	close(fd);
	free(result);
	return (0);
}

int	suite_strchr(void)
{
	printf("strchr(%s, %c) = %d\n", "hello", 'l', ft_strchr("hello", 'l'));
	return (0);
}

// int	suite_strldel(void)
// {
// 	char	*str = ft_strnjoin("hello ", "42", -1, false);
// 	if (!str)
// 		return (1);
// 	printf("strldel(%s, %d): ", "hello 42", 6);
// 	str = ft_strldel(str, 6);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }