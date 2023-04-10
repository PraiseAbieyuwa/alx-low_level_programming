#include "main.h"

/**
 * create_file - function that create file
 * @filename: the name of the file created
 * @text_content: element of the files
 * Return: return 1
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, writeFilen;
	int fileDes1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileDes1 == -1)
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

	writeFilen = write(fileDes1, text_content, i);

	if (writeFilen == -1)
		return (-1);

	close(fileDes1);
	return (1);
}
