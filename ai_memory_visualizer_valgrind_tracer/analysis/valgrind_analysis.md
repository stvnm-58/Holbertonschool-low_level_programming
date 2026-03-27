ANALYSE crash_example :

écriture en dehors de la mémoire alloué de 4 Octets : 
Invalid write of size 4
==1293==    at 0x10928A: main (crash_example.c:32)
==1293==  Address 0x0 is not stack'd, malloc'd or (recently) free'd

ET la mémoire n'est pas libéré (free)

*******************************************************

ANALYSE heap_example :

Fuite de mémoire, un caractère \0 n'a pas été nettoyé : 
==1347== HEAP SUMMARY:
==1347==     in use at exit: 6 bytes in 1 blocks
==1347==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==1347==
==1347== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==1347==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)        
==1347==    by 0x109211: person_new (heap_example.c:21)
==1347==    by 0x1092FA: main (heap_example.c:51)

*******************************************************

ANALYSE stack_example :

Adresse détruite dès qu'on saute de fonction, donc inutilisable :

Depth 0 : 0x1ffefffd74
Depth 1 : 0x1ffefffd44
Depth 2 : 0x1ffefffd14
Depth 3 : 0x1ffefffce4