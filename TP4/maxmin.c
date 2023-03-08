#include <stdio.h>

int main() {
    int n, i, min, max, sum = 0;
    printf("Combien de nombres voulez vous donner ? ");
    scanf("%d", &n);
    int tab[n];
    for (i = 0; i < n; i++) {
        printf("Entrez le nombre numero  %d : ", i + 1);
        scanf("%d", &tab[i]);
        sum += tab[i];
        if (i == 0) {
            min = max = tab[i];
        } else {
            if (tab[i] < min) {
                min = tab[i];
            }
            if (tab[i] > max) {
                max = tab[i];
            }
        }
    }
    printf("Voici les nombres contenus dans le tableau : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\nLa somme de ces nombres est : %d\n", sum);
    printf("Le minimum est : %d\n", min);
    printf("Le maximum est : %d\n", max);
    return 0;
}
