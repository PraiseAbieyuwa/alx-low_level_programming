#include "main.h"
/**
 * read_textfile - function that read the text in the files
 * @letters: the letters in the index
 * @filename: name of the files
 * Return: return writeFilenames
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t desOfFiles;
	ssize_t readFileName, writeFilenames;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	desOfFiles = open(filename, O_RDONLY);
	if (desOfFiles == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	readFileName = read(desOfFiles, buffer, letters);
	writeFilenames = write(STDOUT_FILENO, buffer, readFileName);

	close(desOfFiles);
	free(buffer);
	return (writeFilenames);
}
