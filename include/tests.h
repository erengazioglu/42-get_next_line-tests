/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 21:03:27 by egaziogl          #+#    #+#             */
/*   Updated: 2026/01/02 07:56:57 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include <stdio.h>
# include <fcntl.h>
# include "../../get_next_line/get_next_line.h"

// individual tests
int	test_read(int fd);

// test suites
int	suite_strnjoin(void);
int	suite_strchr(void);
int suite_read_multi(int i);
int	suite_strldel(void);

#endif