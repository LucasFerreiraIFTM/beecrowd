#include <stdio.h>

int main() {

    int i, j, par=0;

    for(i=0; i<5; i++){
        scanf("%d", &j);

        if(j %2==0){
            par++;
        }
    }
    printf("%d valores pares\n", par);
    return 0;
}
