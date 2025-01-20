#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//zad1
/*
void roznica(int *a, int *b, int *wynik) {
    *wynik = *a - *b;
}

void srednia(int *a, int *b, int *c, float *wynik) {
    *wynik = (*a + *b + *c) / 3.0;
}

int main() {
    int zmienna, a, b, wynik;
    float srednia_wynik;

    printf("Podaj wartosc zmiennej: ");
    scanf_s("%d", &zmienna);
    printf("Adres zmiennej: %p\n", (void*)&zmienna);

    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &a, &b);
    roznica(&a, &b, &wynik);
    printf("Ró¿nica: %d\n", wynik);

    int c;
    printf("Podaj trzy liczby: ");
    scanf_s("%d %d %d", &a, &b, &c);
    srednia(&a, &b, &c, &srednia_wynik);
    printf("Œrednia: %.2f\n", srednia_wynik);

    return 0;
}

*/


//zad2
/*
int main() {
    int n, min, max;

    printf("Podaj liczbe elementow tablicy: ");
    scanf_s("%d", &n);
    printf("Podaj zakres (min i max): ");
    scanf_s("%d %d", &min, &max);

    int tablica[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        tablica[i] = rand() % (max - min + 1) + min;
    }

    printf("Adres pierwszego elementu: %p\n", (void*)&tablica[0]);
    printf("Adres czwartego elementu: %p\n", (void*)&tablica[3]);

    printf("Adresy elementów tablicy:\n");
    for (int i = 0; i < n; i++) {
        printf("tablica[%d] = %d, adres: %p\n", i, tablica[i], (void*)&tablica[i]);
    }

    return 0;
}

*/

//zadanie3

/*
int main() {
    int n;
    printf("Podaj liczbe elementow tablicy: ");
    scanf_s("%d", &n);

    int tab[n];
    printf("Podaj elementy tablicy: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    float srednia = suma

    printf("Srednia: %.2f\n", srednia);
    printf("Elementy wieksze od sredniej:\n");
    for (int i = 0; i < n; i++) {
        if (tab[i] > srednia) {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");

    return 0;
}

*/

//zad4

void kwadrat(int *liczba) {
    *liczba = (*liczba) * (*liczba);
}

int main() {
    int liczba;
    printf("Podaj liczbe: ");
    scanf_s("%d", &liczba);

    kwadrat(&liczba);
    printf("Liczba podniesiona do kwadratu: %d\n", liczba);

    return 0;
}

