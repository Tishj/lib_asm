/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:22:10 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/06/18 19:45:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <errno.h>

int			main(int argc, char **argv)
{
	const char	*options[] = {
		[0] = "mandatory",
		[1] = "bonus",
		[2] = 
	};
	int			option;

	if (argc <= 1)
	{
		mandatory();
		bonus();
	}
	else if (argc == 2)
	{
		option = str2cmp(options, argv[1]);
		if ()


	}
	return (0);
}
