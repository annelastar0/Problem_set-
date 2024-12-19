#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

     // Print row of bricks
     for (int i = 0; i < n; i++)
    {
    int bricks = i + 1;
    int spaces = n - bricks;
    print_row(spaces, bricks);
    }
  
}


void print_row(int spaces, int bricks)
{
    // Print space for pyramide1
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Print bricks for the left_pyramid
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // Print space between pyramids
    printf("  ");

    
    // Print bricks for the right_pyramid
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}



    
    
