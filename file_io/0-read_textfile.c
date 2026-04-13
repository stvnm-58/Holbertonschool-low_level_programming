#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/* #include <sys/types.h> */
/* #include <sys/stat.h> */
#include <fcntl.h>

/**
* read_textfile - lit un fichier texte et l'affiche sur la sortie standard
* @filename: le nom du fichier à lire (chaîne de caractères)
* @letters: le nombre de lettres qu'on doit lire et afficher
*
* Return: le nombre réel de lettres lues et affichées,
* ou 0 si le fichier ne peut pas être ouvert, lu,
* si malloc échoue, ou si l'écriture échoue.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd; /*File descriptor*/
char *bac;
ssize_t n_lu; /*compter ce qui a été lu*/
ssize_t n_ecrit; /*pour ce qui a été écrit*/

	if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

bac = malloc(sizeof(char) * letters);
	if (bac == NULL)
	{
	close(fd);
	return (0);
	}

n_lu = read(fd, bac, letters);
	if (n_lu == -1)
	{
	free(bac);
	close(fd);
	return (0);
	}

n_ecrit =  write(STDOUT_FILENO, bac, n_lu);
	if (n_lu != n_ecrit)
	{
	free(bac);
	close(fd);
	return (0);
	}
free(bac);
close(fd);
return (n_ecrit);
}

/*
* Déclarer les variables au début (fd, bac, n_lu, n_ecrit).
*
* Ouvrir le fichier avec open et le mode O_RDONLY.
*
* Réserver de la mémoire avec malloc.
*
* Lire le contenu avec read.
*
* Écrire le contenu sur l'écran avec write (sur le canal 1).
*
* Comparer n_lu et n_ecrit.
*
* Nettoyer avec free et close.
*
* Retourner le résultat final.
*/

