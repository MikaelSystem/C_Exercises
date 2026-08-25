#include <stdio.h>

int main(){
    int a,b,soma;
    scanf("%d %d",&a,&b);
    int i;

    while(i<b){
        i++;
        soma+=a;
    }

    printf("%d", soma);

    return 0;
}
