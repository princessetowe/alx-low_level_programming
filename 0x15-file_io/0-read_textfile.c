#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The file name
 * @letters: number of letters to be printed
 * Return: numbers of letters printed. It it fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fn, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fn);

	free(buf);

	return (nwr);
}
