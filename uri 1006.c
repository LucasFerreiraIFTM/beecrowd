#include <stdio.h>

int main() {

    double a, b, c, media;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    media = ((2 * a) + (3 * b) + (5 * c)) / 10;
    printf("MEDIA = %.1f\n", media);
    return 0;
}
