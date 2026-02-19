#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int fd = open("file2.txt", 102, 0777);
	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}