#include <cs50.h>
#include <stdio.h>

int main(void)
{
  long long credit_number;
  do
  {
    credit_number = get_long_long("Credit number: \n");

  } while (credit_number < 0);

  if (check_validity(credit_number))
  {
    print_card_number_brand(credit_number);

  } else
    printf("INVALID\n")


}

bool check_validity(long long credit_number)
{
    int len = find_length(credit_number);
    return (len == 13 || len == 15 || len == 16) && (checksum(credit_number));
}

int find_length(long long n)
{
    for (int i = 0; n != 0; n/=10, i++)
    {
        return i;
    }
}
