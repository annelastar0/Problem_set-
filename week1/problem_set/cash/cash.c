#include <cs50.h>
#include <stdio.h>

void calculate_change(int cents);

int main(void)
{

    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    calculate_change(cents);
}

void calculate_change(int cents)

{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    int dimes = 0;
    int pennies = 0;
    int nickels = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    int total_cents = quarters + dimes + nickels + pennies;

    printf("Total_cents: %i\n", total_cents);


}
