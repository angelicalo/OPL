#include <stdio.h>
#include <string.h>

int main(){
    char str[256];
    char wrd[8];
    int i = 0;
    int qtde = 0;
    
    fgets(str, 256, stdin);
    fgets(wrd, 8, stdin);
    
    int tam_str = strlen(str);
    int tam_wrd = strlen(wrd);
    
    int i_max = tam_str - tam_wrd;
    
    char wrd_compar[tam_wrd];
    char wrd_ent[tam_wrd];
    
    while (i <= i_max){
        for (int j = 0; j < tam_wrd - 1; j++){
            wrd_compar[j] = str[i+j];
            wrd_ent[j] = wrd[j];
        }
        if (strcmp(wrd_compar, wrd_ent)==0)
            qtde++;
        i++;
    }
    printf("%i",qtde);
    
    return 0;
}