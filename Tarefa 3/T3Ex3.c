#include <stdio.h>

int main(){
    int n;
    
    scanf("%i", &n);
    
    int M1[n][n], M2[n][n], M3[n][n];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%i",&M1[i][j]);
        }
    }
        
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%i",&M2[i][j]);
        }
    }
      
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            M3[i][j] = (M1[i][j] >= M2[i][j]) ? M1[i][j] : M2[i][j];
        }
    }
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%i",M3[i][j]);
        }
        printf("\n");
    }
    
  return 0;
}