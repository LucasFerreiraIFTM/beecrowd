
#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c){
        printf("%d eh o maior\n", a);
    }
    if(b > a && b > c){
        printf("%d eh o maior\n", b);
    }
    if(c > b && c > a){
        printf("%d eh o maior\n", c);
    }

    return 0;
}
