#include <stdio.h>

int main() {

    int x[10],i;
    scanf("%d", &x[0]);

    for(i=1;i<10;i++){
        x[i]= 2*x[i-1];
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,x[i]);
    }

    return 0;
}


