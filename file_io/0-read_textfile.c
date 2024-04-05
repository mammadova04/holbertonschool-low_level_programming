#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX standard outpu
  * @filename: name of file
  * @letters: number of letters
  * Return:  actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a = malloc(letters);
	int fd, l;

	if (!filename || !a)
		return (0);
	fd = open(filename, O_RDONLY);
	l = read(fd, a, letters);
	if (l == -1)
		return (0);
	if (write(STDOUT_FILENO, a, l) == -1)
		return (0);
	close(fd);
	return (l);
}
