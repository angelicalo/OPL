#include <stdio.h>
#include <string.h>

int main(){
    int const n_max = 256; 
    int const pos = 3;
    
    char str[n_max]; //A LIGEIRA RAPOSA MARROM SALTOU SOBRE O CACHORRO CANSADO
    char crip[n_max];
    
    fgets(str, n_max, stdin);
    strcpy(crip,str);
    
    int dif1 = 'Z' - 'A';
    int dif2 = 'z' - 'a';
    char test;
    for (int i=0; str[i] != '\0' && i < n_max; i++){
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            test = str[i] + pos;
            if (((test >= 'A' && test <= 'Z') || (test >= 'a' && test <= 'z'))){
                crip[i] = test;
            }else{
                if (str[i] >= 'A' && str[i] <= 'Z')
                    crip[i] = test - dif1 - 1;
                if (str[i] >= 'a' && str[i] <= 'z')
                    crip[i] = test - dif2 - 1;
            }
        }
    }
    printf("%s",crip);
    return 0;
}