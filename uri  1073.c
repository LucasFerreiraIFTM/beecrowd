#include <stdio.h>

int main() {

    int n,x,i;

    scanf("%d", &n);

    for(i=1;  i<=n;i++){
        if(i %2 == 0){
            x = i*i;
            printf("%d^2 = %d\n", i, x);
        }
    }


    return 0;
}




