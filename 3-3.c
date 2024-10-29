//3-3
#include <stdio.h>
const float RATE = 0.0225;

float capital;
int main() 
{
    printf("Enter the initial capital: ");
    scanf("%f", &capital);
   
    int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);

    float deposit = capital * RATE * years+capital;
    printf("The final capital after %d years is %.2f", years, deposit);
    return 0;
}
