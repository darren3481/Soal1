#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Masukkan tiga bilangan bulat: ");
    scanf("%d %d %d", &a, &b, &c);

    // Cek nilai <= 0
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Tidak dapat membentuk segitiga\n");
        return 0;
    }

    // Cari sisi terbesar
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int sum_dua;
    if (max == a) sum_dua = b + c;
    else if (max == b) sum_dua = a + c;
    else sum_dua = a + b;

    // Cek syarat segitiga
    if (max >= sum_dua) {
        printf("Tidak dapat membentuk segitiga\n");
        return 0;
    }

    // Cek jenis segitiga
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi\n");
    }
    else if (a*a + b*b == c*c ||
             a*a + c*c == b*b ||
             b*b + c*c == a*a) {
        printf("Segitiga Siku-Siku\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki\n");
    }
    else {
        printf("Segitiga Bebas\n");
    }

    return 0;
}
