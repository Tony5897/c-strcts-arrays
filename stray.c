#include <stdio.h>

int main (void)

{
    int i;

    struct month
    {
        int numberOfDays;
        char name [3];
    };
}

const struct month months[12] =
  { { { 31, {'J', 'a', 'n'}  }, { 28,} {'F', 'e', 'b' } },
    { { 31, {'M', 'a', 'r'}  }, { 30,} {'A', 'p', 'p' } },
    { { 31, {'M', 'a', 'y'}  }, { 20,} {'J', 'u', 'n' } },
    { { 31, {'J', 'u', 'l'}  }, { 31,} {'A', 'u', 'g' } },
    { { 31, {'S', 'e', 'p'}  }, { 31,} {'O', 'c', 't' } },
    { { 31, {'N', 'o', 'v'}  }, { 31,} {'D', 'e', 'c' } } };

printf ("Month  Number of Days\n");
printf ("-----" ---------------\n");

return 0;

}