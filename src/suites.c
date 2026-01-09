/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suites.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:40:26 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/09 13:39:31 by egaziogl         ###   ########.fr       */
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

int suite_read_multi(int n, char *fn)
{
	char	*result;
	int		i;
	int		fd;
	
	i = n;
	fd = open(fn, O_RDONLY);
	printf("\n--- Reading %s (%d times) ---\n", fn, n);
	while (i--)
	{
		result = get_next_line(fd);
		if (!result)
			printf("READ | (NULL)\n");
		else
			printf("READ | %s", result);
	}
	close(fd);
	free(result);

	return (0);
}

int	suite_read_multi_fd(int n, int fd)
{
	char	*result;
	int		i;
	
	i = n;
	printf("\n--- Reading from fd %d (%d times) ---\n", fd, n);
	while (i--)
	{
		result = get_next_line(fd);
		if (!result)
			printf("READ | (NULL)\n");
		else
			printf("READ | %s", result);
	}
	close(fd);
	free(result);

	return (0);
}


int	suite_strfind(void)
{
	printf("strfind(%s, %c) = %d\n", "hello", 'l', ft_strfind("hello", 'l'));
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