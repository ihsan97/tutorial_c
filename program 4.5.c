#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>=75)
    {
        printf("A");
    }
    else if (marks<75 && marks>=65)
    {
        printf("B");
    }
    else if (marks<65 && marks>=55)
    {
        printf("C");
    }
    else
    {
        printf("F");
    }
    return 0;
}
