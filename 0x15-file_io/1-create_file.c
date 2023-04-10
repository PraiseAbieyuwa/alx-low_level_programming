#include "main.h"

/**
 * create_file - function that create file
 * @filename: the name of the file created
 * @text_content: element of the files
 * Return: return 1
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	int write_fn = write(fd, text_content, i);

	if (write_fn == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
