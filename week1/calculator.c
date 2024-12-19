// Uses float variable

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Divide x by y
    float z = x / y;
    printf("%f\n", z);

}

#include <stdio.h>

int main (void)
{
    int a = 0;
    int b = 0;
    int x = 5;
    int y = 10;

    if (x > 0)
    {
        a = 5;
        b = a + 1;
    }
    else if (y < x) 
    {
        a = 4;
        b = 0;
    } 
    else 
    {
        printf("None\n");
    }

    printf("a = %i, b = %i\n", a, b);  
}

