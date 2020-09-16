#include <stdio.h>

int main(){
    int A, B, a, b;

    scanf("%i %i", &A, &B);

    if (A<=B){
        a = A;
        b = B;
    }else{
        a = B;
        b = A;
    }
    if (a <= 0 || b <= 0){
        printf("ERRO\n");
    }else{
        int p, soma = 0;
        for (int i=a+1; i<b; i++){
            p = 0;
            for (int j=1; j<=i; j++){
                if (i%j == 0)
                    p += 1;
            }
            if (p==2)
                soma += i;
        }
        printf("%i", soma);
    }
    return 0;
}