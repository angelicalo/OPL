#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq;
    arq = fopen("arq.txt","r");
    if (arq == NULL)
        exit(1);
        
    char c;
    char test;
    char crip[256];
    int i=0;
    
    int const pos = 3;
    int dif1 = 'Z' - 'A';
    int dif2 = 'z' - 'a';
    while ((c=fgetc(arq)) != EOF){
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
                test = c + pos;
                if (((test >= 'A' && test <= 'Z') || (test >= 'a' && test <= 'z'))){
                    crip[i] = test;
                }else{
                    if (c >= 'A' && c <= 'Z')
                        crip[i] = test - dif1 - 1;
                    if (c >= 'a' && c <= 'z')
                        crip[i] = test - dif2 - 1;
                }
            }
        }else{
            crip[i] = c;
        }
        i++;
    }
    printf("%s", crip);
	fclose(arq);
    return 0;
}