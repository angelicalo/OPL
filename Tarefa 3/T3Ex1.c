#include <stdio.h>

int main(){
    int n;
    
    scanf("%i",&n);
    
    if (n%15 == 0){
        printf("FALSO");
    }else if (n%3==0 || n%5==0){
        printf("VERDADEIRO");
    }else
        printf("FALSO");

    return 0;
}