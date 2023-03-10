#include <stdio.h>
#include <stdlib.h>
#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

int main() {
    char line[MAX_WORDS * MAX_WORD_LENGTH];
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int num_words = 0, i = 0, j = 0;

    // Demander à l'utilisateur de saisir une ligne
    printf("Entrez une ligne de texte : ");
    scanf("%[^\n]", line);
    system("clear");
    // Séparer la ligne en mots
    while (line[i] != '\0' && num_words < MAX_WORDS) {
        if (line[i] == ' ') {
            words[num_words][j] = '\0';
            num_words++;
            j = 0;
        }
        else {
            words[num_words][j] = line[i];
            j++;
        }
        i++;
    }
    words[num_words][j] = '\0';
    num_words++;

    // Afficher les mots enregistrés dans le tableau
    printf("Chaine : \n");
    for (int i = 0; i < num_words; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
