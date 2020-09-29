#include <stdio.h>
#include <math.h>

int main (){
    struct cart{
        float x, y;
    };
    
    struct pol{
        float r, a;
    };
    
    struct pol polar;
    struct cart cartesiano;
    
    scanf("%f %f", &polar.r, &polar.a);
    
    cartesiano.x = polar.r*cos(polar.a);
    cartesiano.y = polar.r*sin(polar.a);
    
    printf("%.2f %.2f", cartesiano.x, cartesiano.y);
    return 0;
}