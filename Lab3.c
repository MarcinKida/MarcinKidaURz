#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//zadanie1
/*
int main() {
    int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = (i + 1) * 3;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }
    return 0;
}
*/


/*
//zadanie2
int main() {
    int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = (i + 1) * 3;
    }
    for (int i = 0; i < 10; i += 2) {
        printf("%d ", tablica[i]);
    }
    return 0;
}

*/


/*
//zadanie3
int main() {
    int n, a;
    printf("Podaj liczbe elementow: ");
    scanf_s("%d", &n);
    printf("Podaj wartosc a: ");
    scanf_s("%d", &a);

    int tab[n];
    for (int i = n - 1; i >= 0; i--) {
        tab[i] = a;
        a -= 5;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
*/

/*
//zadanie4
int main() {
    int n;
    printf("Podaj liczbe elementow: ");
    scanf_s("%d", &n);

    int tab[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 74 - 23;
    }

    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    printf("Minimalna wartosc: %d\n", min);
    return 0;
}

*/

/*
//zadaniw5
int main() {
    int n;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);

    int tab[n];
    printf("Podaj dwie pierwsze wartosci tablicy: ");
    scanf_s("%d %d", &tab[0], &tab[1]);

    for (int i = 2; i < n; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
*/
