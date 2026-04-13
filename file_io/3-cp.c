#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* #include <sys/types.h> */
/* #include <sys/stat.h> */
#include <fcntl.h>
/**
 * main - Copie le contenu d'un fichier dans un autre.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 * Return: 0 en cas de succès, ou un code d'erreur (97-100).
 */
int main(int argc, char *argv[])
{

	int fd_from;
	int fd_to;
	char buffer[1024];
	ssize_t n_lu;
	ssize_t n_ecrit;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (99);
	}

	while ((n_lu = read(fd_from, buffer, 1024)) > 0)
	{
		n_ecrit = write(fd_to, buffer, n_lu);
		if (n_ecrit == -1 || n_ecrit != n_lu)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (n_lu == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}


	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
