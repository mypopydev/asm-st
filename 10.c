#include <stdio.h>

int a, b;

int main( )
{
    a = 0;
    b = 0;
    do {
        b += a + 1;
        a++;
    } while (a < 11);
}

