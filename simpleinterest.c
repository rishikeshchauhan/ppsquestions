#include<stdio.h>
int main()
{
    int p,n;
    float si,r;
    
    printf("Enter the value of p: \n");
    scanf("%d",&p);

    printf("Enter the value of n: \n");
    scanf("%d",&n);

    printf("Enter the value of r: \n");
    scanf("%f",&r);

    si=(p*n*r)/100;

    printf("The simple interest is %f \n", si);
    return 0;
    
}