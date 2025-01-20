#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*
//Zadanie1
int main() {
    char tekst1[100], tekst2[100];

    printf("Podaj pierwszy tekst: ");
    fgets(tekst1, sizeof(tekst1), stdin);
    tekst1[strcspn(tekst1, "\n")] = '\0';

    strcpy(tekst2, tekst1);
    strcat(tekst2, " - dodany tekst");

    printf("Pierwszy tekst: %s\n", tekst1);
    printf("Drugi tekst: %s\n", tekst2);
    printf("D³ugoœæ pierwszego tekstu: %lu\n", strlen(tekst1));

    return 0;
}

*/

/*
//zadanie2
int main() {
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c: %d\n", c, c);
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c: %d\n", c, c);
    }
    for (char c = '0'; c <= '9'; c++) {
        printf("%c: %d\n", c, c);
    }
    return 0;
}

*/


/*
//zadanie3
int main() {
    char tekst[100];
    int samogloski = 0, spolgloski = 0;
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    for (int i = 0; tekst[i] != '\0'; i++) {
        if (isalpha(tekst[i])) {
            char ch = tolower(tekst[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                samogloski++;
            } else {
                spolgloski++;
            }
        }
    }

    printf("Liczba samoglosek: %d\n", samogloski);
    printf("Liczba spolglosek: %d\n", spolgloski);
    return 0;
}

*/


//zadanie4
/*
int main() {
    char tekst[100];
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    int dlugosc = strlen(tekst);
    printf("Odwrócony tekst: ");
    for (int i = dlugosc - 1; i >= 0; i--) {
        if (islower(tekst[i])) {
            printf("%c", toupper(tekst[i]));
        } else {
            printf("%c", tekst[i]);
        }
    }
    return 0;
}

*/