#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
  * create_file - function that creates a file.
  * @filename: name of file
  * @text_content: content for write into the new created file
  * Return:  actual number of letters it could read and print
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
