#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_err - Ferme un descripteur de fichier et gère l'erreur 100.
 * @fd: Le descripteur de fichier à fermer.
 */
void close_err(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copie le contenu d'un fichier dans un autre.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 * Return: 0 en cas de succès.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t n_lu, n_ecrit;
	
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_err(fd_from);
		exit(99);
	}
	while ((n_lu = read(fd_from, buffer, 1024)) > 0)
	{
		n_ecrit = write(fd_to, buffer, n_lu);
		if (n_ecrit == -1 || n_ecrit != n_lu)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_err(fd_from);
			close_err(fd_to);
			exit(99);
		}
	}
	if (n_lu == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_err(fd_from), close_err(fd_to), exit(98);
	}
	close_err(fd_from);
	close_err(fd_to);
	return (0);
}
