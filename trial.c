#include <stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%f",&r);
    si=(p*n*r)/100;
    printf("simple interest is %f",si);
    return 0;
}