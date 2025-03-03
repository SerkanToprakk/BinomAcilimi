
#include <stdio.h>
int Katsayi(int n, int k) {
    int pay = 1;
    int i;
    for (i = 1; i <= n; i++) {
        pay *= i;

    }

    int payda = 1;
    for (i = 1; i <= k; i++) {
        payda *= i;
    }
    payda *= i;

    return pay / payda;
}

int main() {
    int us;
    printf("Binom'un us terimi giriniz:");
    scanf("%d", &us);

    printf("(a+b)^%d acilimi:\n", us);

    int terim = 0;

    while (terim <= us) {
        printf("+%d*a^%d*b^%d", Katsayi(us, terim), us - terim, terim);
        terim = terim + 1;
    }

    printf("\n");

    return 0;
}
