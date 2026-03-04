-GREEN TECH EFFICIENCY-

- Méthodologie de mesure

La méthodologie employée pour cette analyse repose sur l'instrumentation précise de code source C au sein d'un environnement Linux contrôlé. L'objectif est de quantifier le temps d'exécution CPU comme indicateur de performance et d'efficacité énergétique. Pour ce faire, nous avons utilisé la bibliothèque `<time.h>` et la fonction `clock()`. Cette fonction permet de capturer le nombre de cycles d'horloge consommés par le processus.

Trois types de mesures ont été effectués : 
1. Une mesure de référence (baseline) pour établir la variabilité du système sur une boucle de 100 000 000 d'itérations.
2. Une mesure comparative entre deux approches algorithmiques (Naïve vs Single-pass) pour résoudre un même problème sur un tableau de 50 000 éléments.
3. Une instrumentation par phases (Build, Process, Reduce) pour identifier les goulots d'étranglement.

Chaque test a été répété trois fois de manière consécutive afin de calculer des moyennes et d'éliminer les anomalies potentielles dues aux processus en arrière-plan. La conversion des cycles en secondes a été réalisée via la constante `CLOCKS_PER_SEC`, garantissant une précision à six décimales.

- Différences de performance observées

Les résultats obtenus révèlent des disparités massives selon l'efficacité algorithmique. Lors de la comparaison des algorithmes, l'implémentation "Naive" a affiché un temps moyen d'exécution de 2,743549 secondes. À l'opposé, l'algorithme "Single-pass" a complété la même tâche en seulement 0,000103 secondes en moyenne. 

Les mesures spécifiques enregistrées sont les suivantes :
- Run 1 : Naive 2,736324 s | Single-pass 0,000102 s
- Run 2 : Naive 2,759303 s | Single-pass 0,000102 s
- Run 3 : Naive 2,735020 s | Single-pass 0,000106 s

Cette différence est mathématiquement monumentale : l'approche Naive est environ 26 636 fois plus lente. Cette observation confirme que la complexité quadratique ($O(n^2)$) du premier algorithme génère une charge de calcul disproportionnée par rapport à l'approche linéaire ($O(n)$) du second pour un jeu de données identique.

- Relation entre temps d'exécution et consommation d'énergie

Il existe une corrélation directe entre le temps d'exécution mesuré et la consommation énergétique globale. Un processeur consomme de l'énergie principalement lorsqu'il change l'état de ses transistors lors des cycles de calcul. En restant actif pendant 2,743549 secondes pour l'algorithme Naive, le processeur maintient ses circuits sous tension et dissipe de la chaleur bien plus longtemps qu'avec l'algorithme Single-pass qui ne sollicite les ressources que pendant 0,000103 secondes.

Réduire le temps d'exécution de plus de 26 000 fois ne signifie pas seulement gagner du temps ; cela réduit l'empreinte carbone de l'opération dans des proportions similaires. Un code efficace permet au processeur de retourner plus rapidement dans un état de basse consommation (idle), économisant ainsi de l'énergie au niveau du matériel. L'optimisation algorithmique est donc une forme d'ingénierie écologique concrète.

- Limites de l'expérience

Cette expérience présente des limites méthodologiques importantes. Premièrement, `clock()` mesure le temps CPU consommé et non le "temps réel" total (wall-clock time). Si le système subissait des interruptions majeures ou des attentes d'entrées/sorties, ces délais ne seraient pas parfaitement reflétés. 

Deuxièmement, l'utilisation du mot-clé `volatile` dans certains tests empêche le compilateur d'optimiser le code. Dans un scénario réel, un compilateur moderne pourrait supprimer des segments de code inutiles, rendant nos mesures de "temps brut" moins représentatives d'un logiciel de production optimisé. Enfin, les tests ont été réalisés sur un jeu de données fixe ; les performances pourraient varier si la taille des données dépassait la capacité de la mémoire cache du processeur.

- Conclusion pratique pour l'ingénierie

La leçon principale est que le choix des algorithmes a un impact bien plus lourd sur la performance et l'écologie logicielle que la puissance brute du matériel. Passer d'un algorithme $O(n^2)$ à $O(n)$ a permis de diviser le temps d'exécution par 26 636, un gain qu'aucune mise à jour matérielle ne pourrait offrir. L'instrumentation systématique permet de ne pas gaspiller de ressources à optimiser des fonctions secondaires et de se concentrer sur les sections critiques qui réduiront drastiquement la consommation d'énergie.