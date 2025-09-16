#include <stdio.h>

int main() {
    int a=10;
    int b =3;
    if(a%b ==0)
    {
        printf("The number(a) is divided by(b)");
    }
    else
    {
        printf("The number(a) is not divided by(b)");
    }
    if(a>b)
    {
printf("a is > b");
    }
    else if(b>a)
    {
printf("b is > a");
    }
    else
    {
     printf("a=b");   
    }

  
    return 0;
}