#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/* #include <sys/types.h> */
/* #include <sys/stat.h> */
#include <fcntl.h>
/**
 * create_file - crée un fichier et écrit du texte dedans
 * @filename: nom du fichier à créer
 * @text_content: chaîne de caractères à écrire
 *
 * Return: 1 en succès, -1 en échec
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	int len = 0;
	int n_ecrit;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		n_ecrit = write(fd, text_content, len);
		if (n_ecrit == -1 || n_ecrit != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
