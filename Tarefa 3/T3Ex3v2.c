#include <stdio.h>

int main(){
    int i, j, n;
    
    scanf("%i", &n);
    
    int M1[n][n], M2[n][n], M3[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%i", &M1[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%i", &M2[i][j]);
        }
    }
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (M1[i][j] > M2[i][j]){
                M3[i][j] = M1[i][j];
            }else{
                M3[i][j] = M2[i][j];
            }
        }
    }
        
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%i",M3[i][j]);
        }
        printf("\n");
    }
	return 0;
}
