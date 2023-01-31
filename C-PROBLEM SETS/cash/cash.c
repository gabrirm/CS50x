#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    // The parameter value: cents gets updated in order to be used for the next function
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    // The parameter value: cents gets updated in order to be used for the next function
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    // The parameter value: cents, gets updated in order to be used for the next function
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    // The parameter value: cents gets updated in order to be used for the next function
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int quantity;
    do
    {
        quantity = get_int("Cents owed: ");
    }
    while (quantity < 0);
    return quantity;
}

int calculate_quarters(int cents)
{
    int quarters_count = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters_count += 1;
    }
    return quarters_count;
}

int calculate_dimes(int cents)
{
    int dimes_count = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes_count += 1;
    }
    return dimes_count;
}

int calculate_nickels(int cents)
{
    int nickels_count = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels_count += 1;
    }
    return nickels_count;
}

int calculate_pennies(int cents)
{
    int pennies_count = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies_count += 1;
    }
    return pennies_count;
}
