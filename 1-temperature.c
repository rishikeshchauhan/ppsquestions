#include<stdio.h>
int main()
{
    float fahrenheit,celcius;
    printf("Enter temperature in fahrenheit");
    scanf("%f", &fahrenheit);

celcius=(fahrenheit-32)*5/9;
printf("The temperature is converted into centigrade degrees: %f", celcius);
return 0;
}