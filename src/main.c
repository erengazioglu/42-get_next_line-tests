/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:28:04 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/09 21:39:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int main(void)
{
	int	result;
	
	printf("---\nTESTING buffer size %d\n", BUFFER_SIZE);
	result = 0;
	// result |= suite_strnjoin();
	// result |= suite_read_multi(40, "files/testfile_regular.txt");
	// result |= suite_read_multi(30, "files/testfile_startnl.txt");
	// result |= suite_read_multi(15, "files/testfile_onlynl.txt");
	// result |= suite_read_multi(5, "files/testfile_onenl.txt");
	// result |= suite_read_multi(5, "files/testfile_onechar.txt");
	// result |= suite_read_multi(5, "files/testfile_empty.txt");
	// result |= suite_read_multi(5, "files/invalid_file.txt");
	// result |= suite_read_multi(5, "files/gnlTester/43_with_nl");
	result |= suite_read_multi(5, "files/gnlTester/43_no_nl");
	// result |= suite_read_multi_fd(5, -1);
	// result |= suite_read_multi_fd(5, 0);
	// result |= suite_read_multi_fd(5, 1);
	// result |= suite_read_multi_fd(5, 2);
	// result |= suite_read_multi_fd(5, 1025);
	// result |= suite_read_multi(5, "testfile_onenl.txt");

	// result |= suite_read_multi_fd(5, 100);

	

	printf("exiting (%d)\n", result);
	return (result);
}