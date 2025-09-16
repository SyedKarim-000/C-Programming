#include <stdio.h>

int main() {
    int a,b;
    float c,d;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b); 
    c=a/b; 
    d= (float)a / (float)b;
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    printf("c = %f \n",c);
    printf("d = %f \n",d);
    
    return 0;
}