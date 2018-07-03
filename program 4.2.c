#include<stdio.h>
int main()
{
float amount, fina, discount;
printf("Enter the amount:");
scanf("%f",&amount);

if (amount>1000)
{
    discount=amount*0.05;
    fina=amount-discount;
    printf("Dicount=%.2f\n",discount);
    printf("total amount=%.2f\n",fina);
}
return 0;
}

