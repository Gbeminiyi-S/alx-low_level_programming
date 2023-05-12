#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int ac, char *av[])
{
	int from_file, to_file, buflen, close_file;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_file = open(av[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(from_file), exit(99);
	}
	while((buflen = read(from_file, buf, 1024)) > 0)
	{
    		write(to_file, buf, buflen);
	}

	close_file = close(from_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", from_file);
		exit(100);
	}

	close_file = close(to_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", to_file);
		exit(100);
	}
	return (0);
}
