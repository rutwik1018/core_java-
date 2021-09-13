#include <stdio.h>
int add(int x, int y)
{ /// fuction
    return x + y;
}

void messege()
{ // fuctions
    printf("\n hi everyone welcome to add numbers app");
}

int main()
{
    int a, b, c;
    printf("\n enter a number a: ");
    scanf("%d", &a);
    printf("\n enter a number b: ");
    scanf("%d", &b);
    c = add(a, b);
    printf("\n the sum is the : %d", c);
    messege();

    return 0;
}