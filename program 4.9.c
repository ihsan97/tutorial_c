#include<stdio.h>
int main()
{
    int a;
    printf("\t\tMenu");
    printf("\n1 - Microsoft Word");
    printf("\n2 - Yahoo messenger");
    printf("\n3 - AutoCAD");
    printf("\n4 - Java Games");
    printf("\nEnter number of your preference : ");

    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("\nPersonal Computer Software");
            break;
        case 2:
            printf("\nWeb based Software");
            break;
        case 3:
            printf("\nScientific Software");
        case 4:
            printf("\nEmbedded Software");
    }
    return 0;
}
