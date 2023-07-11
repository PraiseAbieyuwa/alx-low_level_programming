#include "main.h"

/**
 * main - function that calls the other functions
 * @errTo1: function that checks for error copied to
 * @errFrom1: function that checks for error copied from
 * errorClose - function that closes error in file
 * errorCheck - checks for error
 * Return: return 0
 */
void errorClose(int errTo1, int errFrom1)
{
	if (errTo1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errTo1);
		exit(100);
	}
	if (errFrom1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errFrom1);
		exit(100);
	}
}
void errorCheck(int fileTo1, int fileFrom2, char *argv[])
{
	if (fileTo1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fileFrom2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
}
int main(int argc, char *argv[])
{
	int errFrom1, errTo1, fileFrom2, fileTo1;
	char buf[1024];
	ssize_t readF, writeTo;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fileFrom2 fileTo1");
		exit(97);
	}
	fileFrom2 = open(argv[1], O_RDONLY);
	fileTo1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errorCheck(fileTo1, fileFrom2, argv);
	readF = 1024;
	while (readF == 1024)
	{
		readF = read(fileFrom2, buf, 1024);
		if (readF == -1)
		{
			errorCheck(fileTo1, fileFrom2, argv);
		}
		writeTo = write(fileTo1, buf, readF);
		if (writeTo == -1)
		{
			errorCheck(fileTo1, fileFrom2, argv);
		}
	}
	if (fileTo1 == -1)
	{
		errorCheck(fileTo1, fileFrom2, argv);
	}
	errFrom1 = close(fileFrom2);
	errTo1 = close(fileTo1);
	errorClose(errTo1, errFrom1);
	return (0);
}
