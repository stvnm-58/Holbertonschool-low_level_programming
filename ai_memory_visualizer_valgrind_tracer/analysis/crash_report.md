ANALYSE crash_example

Le programme crash_example s'est terminé par une erreur de segmentation (signal 11). Valgrind confirme une écriture invalide de 4 octets à l'adresse mémoire 0x0 lors de l'exécution de la fonction main à la ligne 32 du fichier crash_example.c.


La cause racine est un déréférencement de pointeur NULL. Le programme tente de modifier une valeur via un pointeur qui contient l'adresse 0x0. Comme l'adresse 0x0 n'est ni sur la pile (stack), ni allouée sur le tas (heap), l'accès est immédiatement rejeté par l'unité de gestion mémoire (MMU).


Le résumé indique 1,024 bytes in 1 blocks toujours accessibles au moment du crash. Cela suggère qu'une allocation a réussi, mais que ce n'est pas ce bloc qui a été utilisé à la ligne 32.

=> Il s'agit d'un accès hors limites (Out-of-bounds access) à l'adresse zéro.

