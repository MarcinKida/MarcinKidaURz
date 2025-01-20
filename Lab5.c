#include <stdio.h>
#include <string.h>




//zadanie 1 
/*
int silnia(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}

int main() {
    int n;
    printf("Podaj liczbe, dla ktorej chcesz obliczyc silnie: ");
    scanf_s("%d", &n);
    printf("Silnia z liczby %d wynosi %d\n", n, silnia(n));


    return 0;
}

*/

//zadanie2
/*
int wyraz(int n) {
    if (n == 1) {
        return -1;
    }
    else {
        return -wyraz(n - 1) * (n - 2);
    }
}

int main() {
    int n;
    printf("Podaj numer wyrazu ciagu (n): ");
    scanf_s("%d", &n);
    printf("n-ty wyraz ciagu dla n = %d wynosi %d\n", n, wyraz(n));
    return 0;
}
*/

//zadanie3
/*
int NWD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return NWD(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &a, &b);
    printf("NWD(%d, %d) = %d\n", a, b, NWD(a, b));
    return 0;
}

*/

//zadanie4
/*
int wynik(int i) {
    if (i < 3) {
        return 1;
    }
    else if (i % 2 == 0) {
        return wynik(i - 3) + wynik(i - 1) + 1;
    }
    else {
        return wynik(i - 1) % 7;
    }
}

int main() {
    printf("i\twynik(i)\n");
    for (int i = 2; i <= 8; i++) {
        printf("%d\t%d\n", i, wynik(i));
    }
    return 0;
}

*/

//zadanie5
/*
void binarny(int n) {
    if (n > 1) {
        binarny(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &n);

    printf("Liczba %d w systemie dwojkowym to: ", n);
    binarny(n);
    printf("\n");

    return 0;
}

*/


//zadanie8
/*
int F(int x, int n) {
    if (n == 1) {
        return x;
    }
    else if (n % 3 == 0) {
        int k = F(x, n / 3);
        return k * k * k;
    }
    else {
        return x * F(x, n - 1);
    }
}

int main() {
    int x = 2;
    int n = 10;
    int result = F(x, n);
    printf("F(%d, %d) = %d\n", x, n, result);

    printf("\n| Wywolanie | Wynik |\n");
    printf("|-----------|-------|\n");
    printf("| F(2, 10)  | 1024  |\n");
    printf("| F(2, 9)   | 512   |\n");
    printf("| F(2, 3)   | 8     |\n");
    printf("| F(2, 1)   | 2     |\n");

    int x_vals[] = { 2, 4, 2, 3, 5, 2, 2, 10 };
    int n_vals[] = { 2, 2, 3, 3, 3, 4, 5, 10 };
    int results[8];

    printf("\nTabela wyników:\n");
    printf("| x  | n  | Wynik D(x, n) |\n");
    printf("|----|----|---------------|\n");

    for (int i = 0; i < 8; i++) {
        results[i] = F(x_vals[i], n_vals[i]);
        printf("| %2d | %2d | %13d |\n", x_vals[i], n_vals[i], results[i]);
    }

    return 0;
}

*/