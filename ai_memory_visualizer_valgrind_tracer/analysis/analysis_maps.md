ANALYSE : stack_example

    Segments : Uniquement la Stack. Chaque appel récursif crée une nouvelle "Stack Frame".

    Durée de vie (Lifetime) : Les variables (marker, local_int) naissent à l'entrée de la fonction et sont automatiquement détruites (pop) lors du return.

    Précision technique : L'écart de 12 octets entre local_int et local_buf prouve la présence d'octer ajoutés automatiquement (pour que l'accès mémoire soit calé sur des mots de 64 bits) ou de canaris de pile (mesure de sécurité pour détecter les dépassements sur la pile.)

    IA : "Les variables se suivent exactement selon leur taille (4 octets pour l'int)."

        Ma Correction : C'est faux. Les adresses réelles (...bf4 et ...c00) montrent un saut de 12 octets. Le compilateur réorganise l'espace pour l'alignement CPU, la mémoire n'est pas une simple grille contiguë.

*********************************************

ANALYSE : aliasing_example

    Segments : Pointers a et b sur la Stack ; données sur le Heap.

    Aliasing : b = a copie l'adresse, pas la valeur. a et b partagent la propriété du même bloc mémoire.

    Violation : Après free(a), le bloc sur le Heap est marqué comme "disponible" par l'allocateur. b devient un pointe vers une mémoire non valide.

    Précision technique : L'adresse dans b reste identique, mais le segment de mémoire pointé n'appartient plus au processus pour l'écriture.

    IA : "L'erreur vient du fait que deux pointeurs ne peuvent pas pointer vers la même adresse."

        Ma Correction : Faux. L'aliasing est légal. Le problème est un Use-after-free : accéder à une adresse dont le cycle de vie a été terminé par un free().

*********************************************

ANALYSE : heap_example

    Segments : La structure Person et le char *name sont sur le Heap. Seuls les pointeurs alice et bob sont sur la Stack.

    Durée de vie : Manuelle. La mémoire survit tant que free() n'est pas appelé.

    Fuite (Leak) : En faisant free(p) sans free(p->name), on détruit le pointeur vers le nom.

    Précision technique : Il s'agit d'une perte d'accessibilité : le bloc mémoire du nom est toujours alloué, mais son adresse est effacée de la Stack. Impossible de le libérer.

    IA : "La fuite vient du fait qu'Alice est trop grande pour être libérée."

        Ma Correction : Faux. La fuite vient d'une mauvaise séquence de libération. Il faut libérer les "feuilles" (membres de la structure) avant la "racine" (la structure elle-même).

*********************************************        

ANALYSE : crash_example

    Segments : Tentative d'accès hors segment.

    Comportement : Déréférencement de NULL.

    Précision technique : Le pointeur contient l'adresse 0x0. Cette adresse se trouve dans une page mémoire non mappée (protégée par le noyau). Le matériel (MMU) lève une exception immédiatement.

    IA : "Le pointeur pointe vers une adresse invalide aléatoire."

        Ma Correction : C'est imprécis. Il pointe vers l'adresse déterministe 0x0. Le crash est une interruption forcée du système (SIGSEGV) pour empêcher toute corruption mémoire.