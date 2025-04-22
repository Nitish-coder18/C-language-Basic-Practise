/*
#include <stdio.h>
int main()
{
    int l = 15;
    int b = 5;
    int area;
    area = l * b;
    printf("The Area Of The Rectangle is: %d", area);
    return 0;
}
*/

// Taking Input By The User..!! 

#include<stdio.h>
int main() {
    int l;
    int b;
        printf ("Enter the length: ");
        scanf ("%d", &l);
        printf ("Enter the Breadth: ");
        scanf ("%d", &b);
    printf ("The Area Of Rectangle is: %d", l*b);
    return 0;
}
