#include "main.h"

/**
 * append_text_to_file - function that appends text
 * @filename: file description
 * @text_content: elements in the text file
 * Return: return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, i, writename;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)

			;
		writename = write(fileDesc, text_content, i);
		if (writename == -1)
		{
			return (-1);
		}
	}

	close(fileDesc);
	return (1);
}
