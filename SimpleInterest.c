#include <stdio.h>
int main()
{
    int principal, time;
    float rate, SI;
    printf("Enter principal=");
    scanf("%d", &principal);
    printf("Enter time=");
    scanf("%d", &time);

    printf("Enter rate=");
    scanf("%f", &rate);
    SI = principal * rate * time/100;
    printf("the SI of these data is =%f", principal * rate * time/100);

    return 0;
}