/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:10:16 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/02/12 22:39:29 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "ft_libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char *stash;
	char *buffer;
	char *temp;
	size_t read_size;

	read_size = 1;
	stash = NULL;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
		printf("%ld", read_size);

	while ((!ft_strchr(temp, '\n') || stash) && read_size != 0)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);	
		printf("%ld", read_size);
		if (read_size < 0)
		{
			free(buffer);
			free(stash);
			stash = NULL;
			return (NULL);
		}
		if (read_size > 0)
			buffer[read_size] = '\0';
		stash = buffer;
		stash = ft_strchr(stash, '\n');
	}
	return (stash);
}
#include <fcntl.h>
int main()
{
	int fd;
	fd = open("text", O_RDWR | O_CREAT, 0777);
	char *str = get_next_line(fd);
	printf("%s", str);
}
/*
	merhaba\ndünya
*/