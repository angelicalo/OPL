#include <stdio.h>
#include <math.h>

int main (){
    float r, a, x, y;
    
    scanf("%f %f", &r, &a);
    
    x = r*cos(a);
    y = r*sin(a);
    
    printf("%.2f %.2f", x, y);
    return 0;
}