#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int dir);

/**
 * create_buffer - Allocate 1024 bytes to a buffer.
 * @file: name of the file.
 * by jamiu
 *
 * Return: A pointer to the newly-allocated buffer.
 */


char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @dir:  file descriptor.
 * by silent
 */

void close_file(int dir)
{
	int clo;

	clo = close(dir);

	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close dir %d\n", dir);
		exit(100);
	}
}

/**
 * main - copy file to file.
 * @argc: number of arg
 * @argv: An array
 * by jamiu
 *
 * Return: 0
 * Description: exit code 97.
 */


int main(int argc, char *argv[])
{
	int fro, to, op, wri;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	op = read(fro, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || op == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wri = write(to, buff, op);
		if (to == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		op = read(fro, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (op > 0);

	free(buff);
	close_file(fro);
	close_file(to);

	return (0);
}
