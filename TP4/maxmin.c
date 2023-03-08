#include <stdio.h>

void triSelection(int tableau[], int taille) {
    int i, j, min, tmp;
    for (i = 0; i < taille - 1; i++) {
        min = i;
        for (j = i + 1; j < taille; j++) {
            if (tableau[j] < tableau[min]) {
                min = j;
            }
        }
        if (min != i) {
            tmp = tableau[i];
            tableau[i] = tableau[min];
            tableau[min] = tmp;
        }
    }
}





int main() {
    int n, i, min, max, sum = 0;
    printf("Combien de nombres voulez-vous donner ? ");
    scanf("%d", &n);
    int tab[n];
    int tabsort[n];
    for (i = 0; i < n; i++) {
        printf("Entrez le nombre %d : ", i + 1);
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
    printf("Les nombres que vous avez entrés sont : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");

    triSelection(tab,n);
    printf("\nLa somme de ces nombres est : %d\n", sum);
    printf("Le minimum est : %d\n", tab[0]);
    printf("Le maximum est : %d\n", tab[n-1]);
    return 0;
}

 
