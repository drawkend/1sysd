#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int secret, guess;

    /* Initialisation du générateur pseudo-aléatoire
     * Il y a d'autres méthodes, généralement équivalentes
     * time() est le nb de secondes de puis 01/01/1970
     * à 00h00 (i.e l'epoch)
     * En cryptographie on a besoin de générateur 
     * aléatoire plus "forts", c'est un vaste sujet
     */
    srand(time(NULL));
    printf("Valeur de l'epoch : %ld\n",time(NULL));

    secret = rand() % 10 + 1;
    printf("J'ai tiré un nombre au hasard entre 1 et 10\n");
    printf("Votre proposition : ");
    scanf("%d", &guess);
    if (guess == secret) {
        printf("Trouvé!\n");
    } else if (guess > secret) {
        printf("Plus petit...\n");
    } else {
        printf("Plus grand...\n");
    }
    printf("C'était %d\n", secret);
}
